#pragma once

#include "../itc/InterpretConst.h"

namespace itc {

///////////////////////////////////////////////////////////////////////////
// window style for toplevel window : WS_xxx
///////////////////////////////////////////////////////////////////////////

#define WS_HIWORD_MASK 0xFFFF0000 // those generic bits that all window classes share

// Chj memo: Place b2v_WS_xxx_toplevel definition in .itc.h instead of in .itc.cpp
// bcz commctrl.itc.cpp needs it.

const Bitfield2Val_st b2v_WS_xxx_toplevel[] =
{
//	ITC_NAMEPAIR(WS_OVERLAPPED),  // 0x00000000L (reject 0 value, invalid bitfield)
	ITC_NAMEPAIR(WS_POPUP),       // 0x80000000L
	ITC_NAMEPAIR(WS_CHILD),       // 0x40000000L
	ITC_NAMEPAIR(WS_MINIMIZE),    // 0x20000000L
	ITC_NAMEPAIR(WS_VISIBLE),     // 0x10000000L
	ITC_NAMEPAIR(WS_DISABLED),    // 0x08000000L
	ITC_NAMEPAIR(WS_CLIPSIBLINGS),// 0x04000000L
	ITC_NAMEPAIR(WS_CLIPCHILDREN),// 0x02000000L
	ITC_NAMEPAIR(WS_MAXIMIZE),    // 0x01000000L
	ITC_NAMEPAIR(WS_BORDER),      // 0x00800000L
	ITC_NAMEPAIR(WS_DLGFRAME),    // 0x00400000L
	ITC_NAMEPAIR(WS_VSCROLL),     // 0x00200000L
	ITC_NAMEPAIR(WS_HSCROLL),     // 0x00100000L
	ITC_NAMEPAIR(WS_SYSMENU),     // 0x00080000L
	ITC_NAMEPAIR(WS_THICKFRAME),  // 0x00040000L
//	ITC_NAMEPAIR(WS_GROUP),       // 0x00020000L
//	ITC_NAMEPAIR(WS_TABSTOP),     // 0x00010000L

	ITC_NAMEPAIR(WS_MINIMIZEBOX), // 0x00020000L
	ITC_NAMEPAIR(WS_MAXIMIZEBOX), // 0x00010000L
};

///////////////////////////////////////////////////////////////////////////
// window style for child window : WS_xxx
///////////////////////////////////////////////////////////////////////////

const Bitfield2Val_st b2v_WS_xxx_childwnd[] =
{
//	ITC_NAMEPAIR(WS_OVERLAPPED),   // 0x00000000L (reject 0 value, invalid bitfield)
	ITC_NAMEPAIR(WS_POPUP),        // 0x80000000L
	ITC_NAMEPAIR(WS_CHILD),        // 0x40000000L
	ITC_NAMEPAIR(WS_MINIMIZE),     // 0x20000000L
	ITC_NAMEPAIR(WS_VISIBLE),      // 0x10000000L
	ITC_NAMEPAIR(WS_DISABLED),     // 0x08000000L
	ITC_NAMEPAIR(WS_CLIPSIBLINGS), // 0x04000000L
	ITC_NAMEPAIR(WS_CLIPCHILDREN), // 0x02000000L
	ITC_NAMEPAIR(WS_MAXIMIZE),     // 0x01000000L
	ITC_NAMEPAIR(WS_BORDER),       // 0x00800000L
	ITC_NAMEPAIR(WS_DLGFRAME),     // 0x00400000L
	ITC_NAMEPAIR(WS_VSCROLL),      // 0x00200000L
	ITC_NAMEPAIR(WS_HSCROLL),      // 0x00100000L
	ITC_NAMEPAIR(WS_SYSMENU),      // 0x00080000L
	ITC_NAMEPAIR(WS_THICKFRAME),   // 0x00040000L
	ITC_NAMEPAIR(WS_GROUP),        // 0x00020000L
	ITC_NAMEPAIR(WS_TABSTOP),      // 0x00010000L

//	ITC_NAMEPAIR(WS_MINIMIZEBOX),  // 0x00020000L
//	ITC_NAMEPAIR(WS_MAXIMIZEBOX),  // 0x00010000L
};

///////////////////////////////////////////////////////////////////////////
// Extended-window styles: WS_EX_xxx
///////////////////////////////////////////////////////////////////////////

const Bitfield2Val_st b2v_WS_EX_xxx[] = 
{
	ITC_NAMEPAIR(WS_EX_DLGMODALFRAME),  // 0x00000001L
	ITC_NAMEPAIR(WS_EX_NOPARENTNOTIFY), // 0x00000004L
	ITC_NAMEPAIR(WS_EX_TOPMOST),        // 0x00000008L
	ITC_NAMEPAIR(WS_EX_ACCEPTFILES),    // 0x00000010L
	ITC_NAMEPAIR(WS_EX_TRANSPARENT),    // 0x00000020L
	ITC_NAMEPAIR(WS_EX_MDICHILD),       // 0x00000040L
	ITC_NAMEPAIR(WS_EX_TOOLWINDOW),     // 0x00000080L
	ITC_NAMEPAIR(WS_EX_WINDOWEDGE),     // 0x00000100L
	ITC_NAMEPAIR(WS_EX_CLIENTEDGE),     // 0x00000200L
	ITC_NAMEPAIR(WS_EX_CONTEXTHELP),    // 0x00000400L

	ITC_NAMEPAIR(WS_EX_RIGHT),          // 0x00001000L
//	ITC_NAMEPAIR(WS_EX_LEFT),           // 0x00000000L
	ITC_NAMEPAIR(WS_EX_RTLREADING),     // 0x00002000L
//	ITC_NAMEPAIR(WS_EX_LTRREADING),     // 0x00000000L
	ITC_NAMEPAIR(WS_EX_LEFTSCROLLBAR),  // 0x00004000L
//	ITC_NAMEPAIR(WS_EX_RIGHTSCROLLBAR), // 0x00000000L

	ITC_NAMEPAIR(WS_EX_CONTROLPARENT),  // 0x00010000L
	ITC_NAMEPAIR(WS_EX_STATICEDGE),     // 0x00020000L
	ITC_NAMEPAIR(WS_EX_APPWINDOW),      // 0x00040000L

//	#define WS_EX_OVERLAPPEDWINDOW  (WS_EX_WINDOWEDGE | WS_EX_CLIENTEDGE)
//	#define WS_EX_PALETTEWINDOW     (WS_EX_WINDOWEDGE | WS_EX_TOOLWINDOW | WS_EX_TOPMOST)

	ITC_NAMEPAIR(WS_EX_LAYERED),        // 0x00080000

	ITC_NAMEPAIR(WS_EX_NOINHERITLAYOUT),// 0x00100000L // Disable inheritence of mirroring by children
	ITC_NAMEPAIR(WS_EX_LAYOUTRTL),      // 0x00400000L // Right to left mirroring
	ITC_NAMEPAIR(WS_EX_COMPOSITED),     // 0x02000000L

	ITC_NAMEPAIR(WS_EX_NOACTIVATE),     // 0x08000000L
};


extern CInterpretConst WM_xxx;
extern CInterpretConst VK_xxx;
extern CInterpretConst LLKHF_xxx;

extern CInterpretConst WS_xxx_toplevel;
extern CInterpretConst WS_xxx_childwnd;
extern CInterpretConst WS_EX_xxx;

extern CInterpretConst WS_xxx_Static;
extern CInterpretConst WS_xxx_Edit;
extern CInterpretConst WS_xxx_Button;
extern CInterpretConst WS_xxx_ListBox;
extern CInterpretConst WS_xxx_ComboBox;


} // namespace itc {


