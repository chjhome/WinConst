#define WIN32_LEAN_AND_MEAN
#include <windows.h> 
#include <CommCtrl.h>

#include "winuser.itc.h"
#include "commctrl.itc.h"

namespace itc {

// Window style for "SysListView32"

const Enum2Val_st e2v_WS_xxx_SysListView32_TYPE[] =
{
//	ITC_NAMEPAIR(LVS_TYPEMASK),            // 0x0003 (mask)

	ITC_NAMEPAIR(LVS_ICON),                // 0x0000
	ITC_NAMEPAIR(LVS_REPORT),              // 0x0001
	ITC_NAMEPAIR(LVS_SMALLICON),           // 0x0002
	ITC_NAMEPAIR(LVS_LIST),                // 0x0003
};

const Enum2Val_st e2v_WS_xxx_SysListView32_ALIGN[] =
{
//	ITC_NAMEPAIR(LVS_ALIGNMASK),           // 0x0c00 (mask)

	ITC_NAMEPAIR(LVS_ALIGNTOP),            // 0x0000
	ITC_NAMEPAIR(LVS_ALIGNLEFT),           // 0x0800

	ITC_NAMEPAIR(LVS_OWNERDRAWFIXED),      // 0x0400
};

const Bitfield2Val_st b2v_WS_xxx_SysListView32[] =
{
	ITC_NAMEPAIR(LVS_SINGLESEL),           // 0x0004
	ITC_NAMEPAIR(LVS_SHOWSELALWAYS),       // 0x0008
	ITC_NAMEPAIR(LVS_SORTASCENDING),       // 0x0010
	ITC_NAMEPAIR(LVS_SORTDESCENDING),      // 0x0020
	ITC_NAMEPAIR(LVS_SHAREIMAGELISTS),     // 0x0040
	ITC_NAMEPAIR(LVS_NOLABELWRAP),         // 0x0080
	ITC_NAMEPAIR(LVS_AUTOARRANGE),         // 0x0100
	ITC_NAMEPAIR(LVS_EDITLABELS),          // 0x0200
	ITC_NAMEPAIR(LVS_OWNERDATA),           // 0x1000
	ITC_NAMEPAIR(LVS_NOSCROLL),            // 0x2000

	ITC_NAMEPAIR(LVS_NOCOLUMNHEADER),      // 0x4000
	ITC_NAMEPAIR(LVS_NOSORTHEADER),        // 0x8000
};

const ConstGroup_st cgs_WS_xxx_SysListView32[] = 
{
	{ LVS_TYPEMASK,  e2v_WS_xxx_SysListView32_TYPE,  ARRAYSIZE(e2v_WS_xxx_SysListView32_TYPE)  },
	{ LVS_ALIGNMASK, e2v_WS_xxx_SysListView32_ALIGN, ARRAYSIZE(e2v_WS_xxx_SysListView32_ALIGN) },
};
CInterpretConst WS_xxx_SysListView32(ITCF_HEX4B,
	cgs_WS_xxx_SysListView32, ARRAYSIZE(cgs_WS_xxx_SysListView32),
	b2v_WS_xxx_SysListView32, ARRAYSIZE(b2v_WS_xxx_SysListView32), 
	b2v_WS_xxx_childwnd, ARRAYSIZE(b2v_WS_xxx_childwnd),
	nullptr, 0);


}; // namespace itc
