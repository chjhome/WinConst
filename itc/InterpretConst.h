#ifndef __InterpretConst_h_
#define __InterpretConst_h_

#include <tchar.h> // for TCHAR & _T


namespace itc {


typedef unsigned long CONSTVAL_t;

struct Enum2Val_st
{
	const TCHAR *EnumName;
	CONSTVAL_t ConstVal;
};

struct Bitfield2Val_st
{
	const TCHAR *BitfieldName;
	CONSTVAL_t ConstVal;
};

struct EnumGroup_st
{
	CONSTVAL_t GroupMask;
	const Enum2Val_st *arEnum2Val;
	int nEnum2Val; // element of arEnum2Val[]
};

typedef EnumGroup_st ItcGroup_st;
// -- When CInterpretConst internally process enum-group and single-bit-group
//    the same way, it will use the name ItcGroup_st.

enum DisplayFormat_et
{
	DF_NameOnly = 0,
	DF_NameAndValue = 1,
};

class String
{
public:
	String(int need_chars)
	{
#ifdef ITC_DEBUG_PRINT
		_tprintf(_T("[%p]CItcString() ctor: %d\n"), this, need_chars);
#endif // ITC_DEBUG_PRINT

		m_chars = need_chars;
		m_str = new TCHAR[m_chars];
	}

	String(const String &itc)
	{
#ifdef ITC_DEBUG_PRINT
		_tprintf(_T("[%p]CItcString() ctor= %s\n"), this, itc.m_str);
#endif // ITC_DEBUG_PRINT

		m_chars = itc.m_chars;
		m_str = new TCHAR[m_chars];
		_sntprintf_s(m_str, m_chars, _TRUNCATE, _T("%s"), itc.m_str);
	}

	~String()
	{
#ifdef ITC_DEBUG_PRINT
		_tprintf(_T("[%p]CItcString() dtor: %s\n"), this, m_str);
#endif // ITC_DEBUG_PRINT
		delete m_str;
		m_str = 0;
		m_chars = 0;
	}

	TCHAR *get(){ return m_str; }

	void put(const TCHAR *pstr)
	{
		if(m_str)
		{
			_sntprintf_s(m_str, m_chars, _TRUNCATE, _T("%s"), pstr);
		}
	}

	int bufsize(){ return m_chars; }

	operator TCHAR *(){ return m_str; }

private:
	TCHAR *m_str;
	int m_chars;
};

class CInterpretConst
{
public:
	virtual ~CInterpretConst();

	CInterpretConst(const Enum2Val_st *arEnum2Val, int nEnum2Val, const TCHAR *valfmt=nullptr)
	{
		_ctor(arEnum2Val, nEnum2Val, valfmt);
	}

	template<size_t eles>
	CInterpretConst(const Enum2Val_st (&ar)[eles], const TCHAR *valfmt=nullptr)
	{
		_ctor(ar, eles, valfmt);
	}

	//

	CInterpretConst(const Bitfield2Val_st *arBitfield2Val, int nBitfield2Val, const TCHAR *valfmt=nullptr)
	{
		_ctor(arBitfield2Val, nBitfield2Val, valfmt);
	}

	template<size_t eles>
	CInterpretConst(const Bitfield2Val_st (&ar)[eles], const TCHAR *valfmt=nullptr)
	{
		_ctor(ar, eles, valfmt);
	}

	//

	CInterpretConst(const EnumGroup_st *arGroups, int nGroups, const TCHAR *valfmt=nullptr)
	{
		_ctor(arGroups, nGroups, valfmt);
	}

	template<size_t eles>
	CInterpretConst(const EnumGroup_st (&ar)[eles], const TCHAR *valfmt=nullptr)
	{
		_ctor(ar, eles, valfmt);
	}

	//

	CInterpretConst(const TCHAR *valfmt,
		const EnumGroup_st *arGroups, int nGroups, 
		const Bitfield2Val_st *arBitfield2Val, int nBitfield2Val,
		... // more [arBitfield2Val, nBitfield2Val] pairs, end with [nullptr, 0]
		);

	////

	const TCHAR *Interpret(CONSTVAL_t val, DisplayFormat_et dispfmt,
		TCHAR *buf, int bufsize);

	String Interpret(CONSTVAL_t val, DisplayFormat_et dispfmt=DF_NameOnly);

	bool SetValFmt(const TCHAR *fmt);

private:
	enum { 
		WholeDisplayMaxChars = 400,
		OneDisplayMaxChars = 100,
		FmtSpecMaxChars = 10,
	};

private:
	void _ctor(const Enum2Val_st *arEnum2Val, int nEnum2Val, 
		const TCHAR *valfmt);

	void _ctor(const Bitfield2Val_st *arBitfield2Val, int nBitfield2Val, 
		const TCHAR *valfmt);

	void _ctor(const EnumGroup_st *arGroups, int nGroups, 
		const TCHAR *valfmt);

private:
	void _reset(const TCHAR *valfmt);
	bool is_enum_ctor(){ return m_arGroups==&m_EnumC2V; };
	static bool is_unique_mask(CONSTVAL_t oldmasks, CONSTVAL_t newmask);
	bool ensure_unique_masks();

	TCHAR *FormatOneDisplay(const TCHAR *szVal, CONSTVAL_t val, DisplayFormat_et dispfmt,
		TCHAR obuf[], int obufsize);

private:
	EnumGroup_st m_EnumC2V; // in the case of a single group
	bool m_dtor_delete_groups;

	const TCHAR *m_valfmt; 
	// -- format string when showing value, "%d", "%X", "0x%04X" etc

private:
	ItcGroup_st *m_arGroups;
	int m_nGroups;

	void *ptr_unused1, *ptr_unused2, *ptr_unused3, *ptr_unused4;
};


#define ITC_NAMEPAIR(macroname) { _T( #macroname ) , macroname }

#define ITCS(val, itcobj) (itcobj).Interpret((itc::CONSTVAL_t)(val), itc::DF_NameOnly).get()
// -- the "return" of ITCS() macro can be passed as snprintf's variadic params
// Note: ITCS() cannot be used in __try{} block, otherwise we'll get Compiler Error C2712.

#define ITCSv(val, itcobj) (itcobj).Interpret((itc::CONSTVAL_t)(val), itc::DF_NameAndValue).get()

#define ITCF_HEX1B _T("0x%02X")
#define ITCF_HEX2B _T("0x%04X")
#define ITCF_HEX4B _T("0x%08X")

} // namespace itc

#endif
