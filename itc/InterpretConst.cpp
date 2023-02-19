#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <assert.h>
#include <stdio.h>
#include "InterpretConst.h"

namespace itc {

void CInterpretConst::_reset(const TCHAR *valfmt)
{
	m_EnumC2V.SectionMask=0; 
	m_EnumC2V.arConst2Val=nullptr; 
	m_EnumC2V.nConst2Val=0; 

	m_using_Bitfield_ctor = false;

	SetValFmt( valfmt );

	m_arSections = nullptr;
	m_nSections = 0;
}

bool CInterpretConst::SetValFmt(const TCHAR *fmt)
{
	// fmt example: "%d", "%X", "0x%04X"

	bool is_correct_valfmt = true;

	// simple fmt format checking:
	// try to format a value 0x3F, check whether we get "3F", "3f" or "63" in output string. 

	if(fmt)
	{
		TCHAR tbuf[OneDisplayMaxChars] = {};
		_sntprintf_s(tbuf, _TRUNCATE, fmt, 0x3F);

		if(_tcsstr(tbuf, _T("3F"))==nullptr 
			&& _tcsstr(tbuf, _T("3f"))==nullptr
			&& _tcsstr(tbuf, _T("63"))==nullptr
			)
			is_correct_valfmt = false;

		assert(is_correct_valfmt==true);
	}

	m_valfmt = is_correct_valfmt ? fmt : nullptr; // can be nullptr, means default

	return is_correct_valfmt;
}

CInterpretConst::~CInterpretConst()
{
	if(m_using_Bitfield_ctor)
		delete []m_arSections;
}

CInterpretConst::CInterpretConst(const ConstSection_st *arSections, int nSections,
	const TCHAR *valfmt)
{
	_reset(valfmt);

	m_arSections = const_cast<ConstSection_st*>(arSections);
	m_nSections = nSections;

	ensure_unique_masks();
}

CInterpretConst::CInterpretConst(const Enum2Val_st *arEnum2Val, int nEnum2Val,
	const TCHAR *valfmt)
{
	_reset(valfmt);

	m_EnumC2V.SectionMask = 0xFFFFffff;
	m_EnumC2V.arConst2Val = reinterpret_cast<const Const2Val_st*>(arEnum2Val);
	m_EnumC2V.nConst2Val = nEnum2Val;

	m_arSections = &m_EnumC2V;
	m_nSections = 1;

	ensure_unique_masks();
}

CInterpretConst::CInterpretConst(const Bitfield2Val_st *arBitfield2Val, int nBitfield2Val,
	const TCHAR *valfmt)
{
	_reset(valfmt);

	m_arSections = new ConstSection_st[nBitfield2Val];
	if(!m_arSections)
		return;

	m_nSections = nBitfield2Val;

	int i;
	for(i=0; i<nBitfield2Val; i++)
	{
		assert(arBitfield2Val[i].ConstVal != 0); // a common input mistake

		m_arSections[i].SectionMask = arBitfield2Val[i].ConstVal;
		m_arSections[i].arConst2Val = reinterpret_cast<const Const2Val_st*>(arBitfield2Val+i);
		m_arSections[i].nConst2Val = 1;
	}

	m_using_Bitfield_ctor = true;

	ensure_unique_masks();
}

bool CInterpretConst::is_unique_mask(CONSTVAL_t oldmasks, CONSTVAL_t newmask)
{
	// oldmasks and newmask must NOT have overlapped bits set.

	if( (oldmasks^newmask) == (oldmasks|newmask) )
		return true;
	else
		return false;
}

bool CInterpretConst::ensure_unique_masks()
{
	CONSTVAL_t accum_masks = 0;
	int sec;
	for(sec=0; sec<m_nSections; sec++)
	{
		bool ok_unique_mask	= is_unique_mask(accum_masks, m_arSections[sec].SectionMask);
		assert(ok_unique_mask);

		if(!ok_unique_mask)
			return false;

		accum_masks |= m_arSections[sec].SectionMask;
	}

	return true;
}

TCHAR* CInterpretConst::FormatOneDisplay(
	const TCHAR *szVal, CONSTVAL_t val, DisplayFormat_et dispfmt, 
	TCHAR obuf[], int obufsize)
{
	_sntprintf_s(obuf, obufsize, _TRUNCATE, _T("%s"), szVal);
	int len1 = (int)_tcslen(obuf);

	assert(len1<obufsize);

	if(dispfmt==DF_NameAndValue)
	{
		const TCHAR *valfmt = m_valfmt;
		if(valfmt==nullptr)
			valfmt = is_enum_ctor() ? _T("%d") : _T("0x%X");

		// Add brackets to value, let "0x3F" shown as "(0x3F)"
		TCHAR _valfmt_[FmtSpecMaxChars+2] = {};
		_sntprintf_s(_valfmt_, _TRUNCATE, _T("(%s)"), valfmt);

		_sntprintf_s(obuf+len1, obufsize-len1, _TRUNCATE, _valfmt_, val);
	}

	return obuf;
}

const TCHAR *CInterpretConst::Interpret(
	CONSTVAL_t input_val, DisplayFormat_et dispfmt,
	TCHAR *buf, int bufsize)
{
	if(bufsize<=0)
		return NULL;

	buf[0] = 0;

	CONSTVAL_t remain_val = input_val;

	int sec = 0;
	for(sec=0; sec<m_nSections; sec++)
	{
		CONSTVAL_t secval = input_val & m_arSections[sec].SectionMask;

		auto c2v = m_arSections[sec].arConst2Val;
		int i;
		for(i=0; i<m_arSections[sec].nConst2Val; i++)
		{
			if(c2v[i].ConstVal==secval)
			{
				if(c2v[i].ConstName)
				{
					TCHAR szbuf[OneDisplayMaxChars] = {};
					_sntprintf_s(buf, bufsize, _TRUNCATE, _T("%s%s|"), 
						buf, 
						FormatOneDisplay(c2v[i].ConstName, c2v[i].ConstVal, 
						dispfmt, szbuf, ARRAYSIZE(szbuf))
						);
				}

				break;
			}
		}

		// No designated name exists, we consider it an unrecognized value from
		// the running env, so should present its hex-value instead of mute on it.
		if(i==m_arSections[sec].nConst2Val)
		{
			if(!m_using_Bitfield_ctor || secval!=0)
			{
				_sntprintf_s(buf, bufsize, _TRUNCATE, 
					is_enum_ctor() ? _T("%s%u|") : _T("%s0x%X|"), 
					buf, secval);
			}
			else
			{
				// If m_using_Bitfield_ctor and secval==0, 
				// this 0-value is of course not consider unrecognized, so mute it here. 

				assert(secval==0);
			}
		}

		remain_val &= ~m_arSections[sec].SectionMask;
	}

	if(remain_val)
	{
		// present unrecognized value to user
		_sntprintf_s(buf, bufsize, _TRUNCATE, _T("%s0x%X|"), buf, remain_val);
	}

	// Remove trailing '|'
	int slen = (int)_tcslen(buf);
	if(slen>0 && buf[slen-1]=='|')
		buf[--slen] = '\0';

	// If output string empty, fill a '0'.
	if(buf[0]=='\0' && bufsize>=2)
		buf[0] = '0', buf[1] = 0;

	return buf;
}

String CInterpretConst::Interpret(
	CONSTVAL_t input_val, DisplayFormat_et dispfmt)
{
	String itcs(WholeDisplayMaxChars);
	Interpret(input_val, dispfmt, itcs.get(), itcs.bufsize());
	return itcs;
}


} // namespace itc
