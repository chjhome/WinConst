#define WIN32_LEAN_AND_MEAN
#include <windows.h> 
#include <CommCtrl.h>

#include "winuser.itc.h"
#include "commctrl.itc.h"

namespace itc {

//
// Window style for "SysListView32"
//

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

const EnumGroup_st egs_WS_xxx_SysListView32[] = 
{
	{ LVS_TYPEMASK,  e2v_WS_xxx_SysListView32_TYPE,  ARRAYSIZE(e2v_WS_xxx_SysListView32_TYPE)  },
	{ LVS_ALIGNMASK, e2v_WS_xxx_SysListView32_ALIGN, ARRAYSIZE(e2v_WS_xxx_SysListView32_ALIGN) },
};
CInterpretConst WS_xxx_SysListView32(ITCF_HEX4B,
	egs_WS_xxx_SysListView32, ARRAYSIZE(egs_WS_xxx_SysListView32),
	b2v_WS_xxx_SysListView32, ARRAYSIZE(b2v_WS_xxx_SysListView32), 
	b2v_WS_xxx_childwnd, ARRAYSIZE(b2v_WS_xxx_childwnd),
	nullptr, 0);

// Extended-style for "SysListView32"

const Bitfield2Val_st b2v_LVS_EX_xxx[] =
{
	ITC_NAMEPAIR(LVS_EX_GRIDLINES),        // 0x00000001
	ITC_NAMEPAIR(LVS_EX_SUBITEMIMAGES),    // 0x00000002
	ITC_NAMEPAIR(LVS_EX_CHECKBOXES),       // 0x00000004
	ITC_NAMEPAIR(LVS_EX_TRACKSELECT),      // 0x00000008
	ITC_NAMEPAIR(LVS_EX_HEADERDRAGDROP),   // 0x00000010
	ITC_NAMEPAIR(LVS_EX_FULLROWSELECT),    // 0x00000020 // applies to report mode only
	ITC_NAMEPAIR(LVS_EX_ONECLICKACTIVATE), // 0x00000040
	ITC_NAMEPAIR(LVS_EX_TWOCLICKACTIVATE), // 0x00000080

	ITC_NAMEPAIR(LVS_EX_FLATSB),           // 0x00000100
	ITC_NAMEPAIR(LVS_EX_REGIONAL),         // 0x00000200
	ITC_NAMEPAIR(LVS_EX_INFOTIP),          // 0x00000400 // listview does InfoTips for you
	ITC_NAMEPAIR(LVS_EX_UNDERLINEHOT),     // 0x00000800
	ITC_NAMEPAIR(LVS_EX_UNDERLINECOLD),    // 0x00001000
	ITC_NAMEPAIR(LVS_EX_MULTIWORKAREAS),   // 0x00002000

	ITC_NAMEPAIR(LVS_EX_LABELTIP),         // 0x00004000 // listview unfolds partly hidden labels if it does not have infotip text
	ITC_NAMEPAIR(LVS_EX_BORDERSELECT),     // 0x00008000 // border selection style instead of highlight

	ITC_NAMEPAIR(LVS_EX_DOUBLEBUFFER),     // 0x00010000
	ITC_NAMEPAIR(LVS_EX_HIDELABELS),       // 0x00020000
	ITC_NAMEPAIR(LVS_EX_SINGLEROW),        // 0x00040000
	ITC_NAMEPAIR(LVS_EX_SNAPTOGRID),       // 0x00080000  // Icons automatically snap to grid.
	ITC_NAMEPAIR(LVS_EX_SIMPLESELECT),     // 0x00100000  // Also changes overlay rendering to top right for icon mode.

//#if _WIN32_WINNT >= 0x0600
	ITC_NAMEPAIR(LVS_EX_JUSTIFYCOLUMNS),   // 0x00200000  // Icons are lined up in columns that use up the whole view area.
	ITC_NAMEPAIR(LVS_EX_TRANSPARENTBKGND), // 0x00400000  // Background is painted by the parent via WM_PRINTCLIENT
	ITC_NAMEPAIR(LVS_EX_TRANSPARENTSHADOWTEXT), // 0x00800000  // Enable shadow text on transparent backgrounds only (useful with bitmaps)
	ITC_NAMEPAIR(LVS_EX_AUTOAUTOARRANGE),  // 0x01000000  // Icons automatically arrange if no icon positions have been set
	ITC_NAMEPAIR(LVS_EX_HEADERINALLVIEWS), // 0x02000000  // Display column header in all view modes
	ITC_NAMEPAIR(LVS_EX_AUTOCHECKSELECT),  // 0x08000000
	ITC_NAMEPAIR(LVS_EX_AUTOSIZECOLUMNS),  // 0x10000000
	ITC_NAMEPAIR(LVS_EX_COLUMNSNAPPOINTS), // 0x40000000
	ITC_NAMEPAIR(LVS_EX_COLUMNOVERFLOW),   // 0x80000000
//#endif
};
CInterpretConst LVS_EX_xxx(b2v_LVS_EX_xxx, ITCF_HEX4B);

//
// Window style for "SysTreeView32"
//

const Bitfield2Val_st b2v_WS_xxx_SysTreeView32[] =
{
	ITC_NAMEPAIR(TVS_HASBUTTONS),          // 0x0001
	ITC_NAMEPAIR(TVS_HASLINES),            // 0x0002
	ITC_NAMEPAIR(TVS_LINESATROOT),         // 0x0004
	ITC_NAMEPAIR(TVS_EDITLABELS),          // 0x0008
	ITC_NAMEPAIR(TVS_DISABLEDRAGDROP),     // 0x0010
	ITC_NAMEPAIR(TVS_SHOWSELALWAYS),       // 0x0020
	ITC_NAMEPAIR(TVS_RTLREADING),          // 0x0040

	ITC_NAMEPAIR(TVS_NOTOOLTIPS),          // 0x0080
	ITC_NAMEPAIR(TVS_CHECKBOXES),          // 0x0100
	ITC_NAMEPAIR(TVS_TRACKSELECT),         // 0x0200

	ITC_NAMEPAIR(TVS_SINGLEEXPAND),        // 0x0400
	ITC_NAMEPAIR(TVS_INFOTIP),             // 0x0800
	ITC_NAMEPAIR(TVS_FULLROWSELECT),       // 0x1000
	ITC_NAMEPAIR(TVS_NOSCROLL),            // 0x2000
	ITC_NAMEPAIR(TVS_NONEVENHEIGHT),       // 0x4000

	ITC_NAMEPAIR(TVS_NOHSCROLL),           // 0x8000  // TVS_NOSCROLL overrides this
};
CInterpretConst WS_xxx_SysTreeView32(ITCF_HEX4B,
	nullptr, 0,
	b2v_WS_xxx_SysTreeView32, ARRAYSIZE(b2v_WS_xxx_SysTreeView32),
	b2v_WS_xxx_childwnd, ARRAYSIZE(b2v_WS_xxx_childwnd),
	nullptr, 0);

// Extended-style for "SysTreeView32"

const Bitfield2Val_st b2v_TVS_EX_xxx[] =
{
//#if (_WIN32_WINNT >= 0x0600)
	ITC_NAMEPAIR(TVS_EX_MULTISELECT),          // 0x0002 (not implemented)
	ITC_NAMEPAIR(TVS_EX_DOUBLEBUFFER),         // 0x0004
	ITC_NAMEPAIR(TVS_EX_NOINDENTSTATE),        // 0x0008
	ITC_NAMEPAIR(TVS_EX_RICHTOOLTIP),          // 0x0010
	ITC_NAMEPAIR(TVS_EX_AUTOHSCROLL),          // 0x0020
	ITC_NAMEPAIR(TVS_EX_FADEINOUTEXPANDOS),    // 0x0040
	ITC_NAMEPAIR(TVS_EX_PARTIALCHECKBOXES),    // 0x0080
	ITC_NAMEPAIR(TVS_EX_EXCLUSIONCHECKBOXES),  // 0x0100
	ITC_NAMEPAIR(TVS_EX_DIMMEDCHECKBOXES),     // 0x0200
	ITC_NAMEPAIR(TVS_EX_DRAWIMAGEASYNC),       // 0x0400
//#endif
};
CInterpretConst TVS_EX_xxx(b2v_TVS_EX_xxx, ITCF_HEX4B);

//
// Window style for "tooltips_class32"
//

const Bitfield2Val_st b2v_WS_xxx_tooltips_class32[] =
{
	ITC_NAMEPAIR(TTS_ALWAYSTIP),           // 0x01
	ITC_NAMEPAIR(TTS_NOPREFIX),            // 0x02
	ITC_NAMEPAIR(TTS_NOANIMATE),           // 0x10
	ITC_NAMEPAIR(TTS_NOFADE),              // 0x20
	ITC_NAMEPAIR(TTS_BALLOON),             // 0x40
	ITC_NAMEPAIR(TTS_CLOSE),               // 0x80

//#if _WIN32_WINNT >= 0x0600
	ITC_NAMEPAIR(TTS_USEVISUALSTYLE),      // 0x100  // Use themed hyperlinks
//#endif
};
CInterpretConst WS_xxx_tooltips_class32_toplevel(ITCF_HEX4B,
	nullptr, 0,
	b2v_WS_xxx_tooltips_class32, ARRAYSIZE(b2v_WS_xxx_tooltips_class32),
	b2v_WS_xxx_toplevel, ARRAYSIZE(b2v_WS_xxx_childwnd),
	nullptr, 0);
CInterpretConst WS_xxx_tooltips_class32_childwnd(ITCF_HEX4B,
	nullptr, 0,
	b2v_WS_xxx_tooltips_class32, ARRAYSIZE(b2v_WS_xxx_tooltips_class32),
	b2v_WS_xxx_childwnd, ARRAYSIZE(b2v_WS_xxx_childwnd),
	nullptr, 0);



}; // namespace itc
