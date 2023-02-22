#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "winuser.itc.h"

namespace itc {

///////////////////////////////////////////////////////////////////////////
// WM_xxx : Windows GUI messages , VS2010
///////////////////////////////////////////////////////////////////////////

const Enum2Val_st E2v_WM_xxx[] =
{
	ITC_NAMEPAIR(WM_NULL),

	ITC_NAMEPAIR(WM_CREATE), // 0x0001
	ITC_NAMEPAIR(WM_DESTROY), // 0x0002
	ITC_NAMEPAIR(WM_MOVE), // 0x0003
	ITC_NAMEPAIR(WM_SIZE), // 0x0005

	ITC_NAMEPAIR(WM_ACTIVATE), // 0x0006

	ITC_NAMEPAIR(WM_SETFOCUS), // 0x0007
	ITC_NAMEPAIR(WM_KILLFOCUS), // 0x0008
	ITC_NAMEPAIR(WM_ENABLE), // 0x000A
	ITC_NAMEPAIR(WM_SETREDRAW), // 0x000B
	ITC_NAMEPAIR(WM_SETTEXT), // 0x000C
	ITC_NAMEPAIR(WM_GETTEXT), // 0x000D
	ITC_NAMEPAIR(WM_GETTEXTLENGTH), // 0x000E
	ITC_NAMEPAIR(WM_PAINT), // 0x000F
	ITC_NAMEPAIR(WM_CLOSE), // 0x0010

	ITC_NAMEPAIR(WM_QUERYENDSESSION), // 0x0011
	ITC_NAMEPAIR(WM_QUERYOPEN), // 0x0013
	ITC_NAMEPAIR(WM_ENDSESSION), // 0x0016

	ITC_NAMEPAIR(WM_QUIT), // 0x0012
	ITC_NAMEPAIR(WM_ERASEBKGND), // 0x0014
	ITC_NAMEPAIR(WM_SYSCOLORCHANGE), // 0x0015
	ITC_NAMEPAIR(WM_SHOWWINDOW), // 0x0018
	ITC_NAMEPAIR(WM_SETTINGCHANGE), // 0x001A

	ITC_NAMEPAIR(WM_DEVMODECHANGE), // 0x001B
	ITC_NAMEPAIR(WM_ACTIVATEAPP), // 0x001C
	ITC_NAMEPAIR(WM_FONTCHANGE), // 0x001D
	ITC_NAMEPAIR(WM_TIMECHANGE), // 0x001E
	ITC_NAMEPAIR(WM_CANCELMODE), // 0x001F
	ITC_NAMEPAIR(WM_SETCURSOR), // 0x0020
	ITC_NAMEPAIR(WM_MOUSEACTIVATE), // 0x0021
	ITC_NAMEPAIR(WM_CHILDACTIVATE), // 0x0022
	ITC_NAMEPAIR(WM_QUEUESYNC), // 0x0023

	ITC_NAMEPAIR(WM_GETMINMAXINFO), // 0x0024
	ITC_NAMEPAIR(WM_PAINTICON), // 0x0026
	ITC_NAMEPAIR(WM_ICONERASEBKGND), // 0x0027
	ITC_NAMEPAIR(WM_NEXTDLGCTL), // 0x0028
	ITC_NAMEPAIR(WM_SPOOLERSTATUS), // 0x002A
	ITC_NAMEPAIR(WM_DRAWITEM), // 0x002B
	ITC_NAMEPAIR(WM_MEASUREITEM), // 0x002C
	ITC_NAMEPAIR(WM_DELETEITEM), // 0x002D
	ITC_NAMEPAIR(WM_VKEYTOITEM), // 0x002E
	ITC_NAMEPAIR(WM_CHARTOITEM), // 0x002F
	ITC_NAMEPAIR(WM_SETFONT), // 0x0030
	ITC_NAMEPAIR(WM_GETFONT), // 0x0031
	ITC_NAMEPAIR(WM_SETHOTKEY), // 0x0032
	ITC_NAMEPAIR(WM_GETHOTKEY), // 0x0033
	ITC_NAMEPAIR(WM_QUERYDRAGICON), // 0x0037
	ITC_NAMEPAIR(WM_COMPAREITEM), // 0x0039

	ITC_NAMEPAIR(WM_GETOBJECT), // 0x003D

	ITC_NAMEPAIR(WM_COMPACTING), // 0x0041
	ITC_NAMEPAIR(WM_COMMNOTIFY), // 0x0044  /* no longer suported */
	ITC_NAMEPAIR(WM_WINDOWPOSCHANGING), // 0x0046
	ITC_NAMEPAIR(WM_WINDOWPOSCHANGED), // 0x0047

	ITC_NAMEPAIR(WM_POWER), // 0x0048

	ITC_NAMEPAIR(WM_COPYDATA), // 0x004A
	ITC_NAMEPAIR(WM_CANCELJOURNAL), // 0x004B

	ITC_NAMEPAIR(WM_NOTIFY), // 0x004E
	ITC_NAMEPAIR(WM_INPUTLANGCHANGEREQUEST), // 0x0050
	ITC_NAMEPAIR(WM_INPUTLANGCHANGE), // 0x0051
	ITC_NAMEPAIR(WM_TCARD), // 0x0052
	ITC_NAMEPAIR(WM_HELP), // 0x0053
	ITC_NAMEPAIR(WM_USERCHANGED), // 0x0054
	ITC_NAMEPAIR(WM_NOTIFYFORMAT), // 0x0055

	ITC_NAMEPAIR(NFR_ANSI), // 1
	ITC_NAMEPAIR(NFR_UNICODE), // 2
	ITC_NAMEPAIR(NF_QUERY), // 3
	ITC_NAMEPAIR(NF_REQUERY), // 4

	ITC_NAMEPAIR(WM_CONTEXTMENU), // 0x007B
	ITC_NAMEPAIR(WM_STYLECHANGING), // 0x007C
	ITC_NAMEPAIR(WM_STYLECHANGED), // 0x007D
	ITC_NAMEPAIR(WM_DISPLAYCHANGE), // 0x007E
	ITC_NAMEPAIR(WM_GETICON), // 0x007F
	ITC_NAMEPAIR(WM_SETICON), // 0x0080

	ITC_NAMEPAIR(WM_NCCREATE), // 0x0081
	ITC_NAMEPAIR(WM_NCDESTROY), // 0x0082
	ITC_NAMEPAIR(WM_NCCALCSIZE), // 0x0083
	ITC_NAMEPAIR(WM_NCHITTEST), // 0x0084
	ITC_NAMEPAIR(WM_NCPAINT), // 0x0085
	ITC_NAMEPAIR(WM_NCACTIVATE), // 0x0086
	ITC_NAMEPAIR(WM_GETDLGCODE), // 0x0087

	ITC_NAMEPAIR(WM_SYNCPAINT), // 0x0088

	ITC_NAMEPAIR(WM_NCMOUSEMOVE), // 0x00A0
	ITC_NAMEPAIR(WM_NCLBUTTONDOWN), // 0x00A1
	ITC_NAMEPAIR(WM_NCLBUTTONUP), // 0x00A2
	ITC_NAMEPAIR(WM_NCLBUTTONDBLCLK), // 0x00A3
	ITC_NAMEPAIR(WM_NCRBUTTONDOWN), // 0x00A4
	ITC_NAMEPAIR(WM_NCRBUTTONUP), // 0x00A5
	ITC_NAMEPAIR(WM_NCRBUTTONDBLCLK), // 0x00A6
	ITC_NAMEPAIR(WM_NCMBUTTONDOWN), // 0x00A7
	ITC_NAMEPAIR(WM_NCMBUTTONUP), // 0x00A8
	ITC_NAMEPAIR(WM_NCMBUTTONDBLCLK), // 0x00A9

	ITC_NAMEPAIR(WM_NCXBUTTONDOWN), // 0x00AB
	ITC_NAMEPAIR(WM_NCXBUTTONUP), // 0x00AC
	ITC_NAMEPAIR(WM_NCXBUTTONDBLCLK), // 0x00AD

	ITC_NAMEPAIR(WM_INPUT_DEVICE_CHANGE), // 0x00FE

	ITC_NAMEPAIR(WM_INPUT), // 0x00FF

	ITC_NAMEPAIR(WM_KEYDOWN), // 0x0100
	ITC_NAMEPAIR(WM_KEYUP), // 0x0101
	ITC_NAMEPAIR(WM_CHAR), // 0x0102
	ITC_NAMEPAIR(WM_DEADCHAR), // 0x0103
	ITC_NAMEPAIR(WM_SYSKEYDOWN), // 0x0104
	ITC_NAMEPAIR(WM_SYSKEYUP), // 0x0105
	ITC_NAMEPAIR(WM_SYSCHAR), // 0x0106
	ITC_NAMEPAIR(WM_SYSDEADCHAR), // 0x0107

	ITC_NAMEPAIR(WM_UNICHAR), // 0x0109

	ITC_NAMEPAIR(WM_IME_STARTCOMPOSITION), // 0x010D
	ITC_NAMEPAIR(WM_IME_ENDCOMPOSITION), // 0x010E
	ITC_NAMEPAIR(WM_IME_COMPOSITION), // 0x010F
	ITC_NAMEPAIR(WM_IME_KEYLAST), // 0x010F

	ITC_NAMEPAIR(WM_INITDIALOG), // 0x0110
	ITC_NAMEPAIR(WM_COMMAND), // 0x0111
	ITC_NAMEPAIR(WM_SYSCOMMAND), // 0x0112
	ITC_NAMEPAIR(WM_TIMER), // 0x0113
	ITC_NAMEPAIR(WM_HSCROLL), // 0x0114
	ITC_NAMEPAIR(WM_VSCROLL), // 0x0115
	ITC_NAMEPAIR(WM_INITMENU), // 0x0116
	ITC_NAMEPAIR(WM_INITMENUPOPUP), // 0x0117

#if(WINVER >= 0x0601)
	ITC_NAMEPAIR(WM_GESTURE), // 0x0119
	ITC_NAMEPAIR(WM_GESTURENOTIFY), // 0x011A
#endif /* WINVER >= 0x0601 */

	ITC_NAMEPAIR(WM_MENUSELECT), // 0x011F
	ITC_NAMEPAIR(WM_MENUCHAR), // 0x0120
	ITC_NAMEPAIR(WM_ENTERIDLE), // 0x0121

	ITC_NAMEPAIR(WM_MENURBUTTONUP), // 0x0122
	ITC_NAMEPAIR(WM_MENUDRAG), // 0x0123
	ITC_NAMEPAIR(WM_MENUGETOBJECT), // 0x0124
	ITC_NAMEPAIR(WM_UNINITMENUPOPUP), // 0x0125
	ITC_NAMEPAIR(WM_MENUCOMMAND), // 0x0126

	ITC_NAMEPAIR(WM_CHANGEUISTATE), // 0x0127
	ITC_NAMEPAIR(WM_UPDATEUISTATE), // 0x0128
	ITC_NAMEPAIR(WM_QUERYUISTATE), // 0x0129

	ITC_NAMEPAIR(WM_CTLCOLORMSGBOX), // 0x0132
	ITC_NAMEPAIR(WM_CTLCOLOREDIT), // 0x0133
	ITC_NAMEPAIR(WM_CTLCOLORLISTBOX), // 0x0134
	ITC_NAMEPAIR(WM_CTLCOLORBTN), // 0x0135
	ITC_NAMEPAIR(WM_CTLCOLORDLG), // 0x0136
	ITC_NAMEPAIR(WM_CTLCOLORSCROLLBAR), // 0x0137
	ITC_NAMEPAIR(WM_CTLCOLORSTATIC), // 0x0138
	ITC_NAMEPAIR(MN_GETHMENU), // 0x01E1

	ITC_NAMEPAIR(WM_MOUSEFIRST), // 0x0200
	ITC_NAMEPAIR(WM_MOUSEMOVE), // 0x0200
	ITC_NAMEPAIR(WM_LBUTTONDOWN), // 0x0201
	ITC_NAMEPAIR(WM_LBUTTONUP), // 0x0202
	ITC_NAMEPAIR(WM_LBUTTONDBLCLK), // 0x0203
	ITC_NAMEPAIR(WM_RBUTTONDOWN), // 0x0204
	ITC_NAMEPAIR(WM_RBUTTONUP), // 0x0205
	ITC_NAMEPAIR(WM_RBUTTONDBLCLK), // 0x0206
	ITC_NAMEPAIR(WM_MBUTTONDOWN), // 0x0207
	ITC_NAMEPAIR(WM_MBUTTONUP), // 0x0208
	ITC_NAMEPAIR(WM_MBUTTONDBLCLK), // 0x0209

	ITC_NAMEPAIR(WM_MOUSEWHEEL), // 0x020A

	ITC_NAMEPAIR(WM_XBUTTONDOWN), // 0x020B
	ITC_NAMEPAIR(WM_XBUTTONUP), // 0x020C
	ITC_NAMEPAIR(WM_XBUTTONDBLCLK), // 0x020D

#if (_WIN32_WINNT >= 0x0600)
	ITC_NAMEPAIR(WM_MOUSEHWHEEL), // 0x020E
#endif

#if (_WIN32_WINNT >= 0x0600)
	ITC_NAMEPAIR(WM_MOUSELAST), // 0x020E
#elif (_WIN32_WINNT >= 0x0500)
	ITC_NAMEPAIR(WM_MOUSELAST), // 0x020D
#elif (_WIN32_WINNT >= 0x0400) || (_WIN32_WINDOWS > 0x0400)
	ITC_NAMEPAIR(WM_MOUSELAST), // 0x020A
#else
	ITC_NAMEPAIR(WM_MOUSELAST), // 0x0209
#endif /* (_WIN32_WINNT >= 0x0600) */

	ITC_NAMEPAIR(WM_PARENTNOTIFY), // 0x0210
	ITC_NAMEPAIR(WM_ENTERMENULOOP), // 0x0211
	ITC_NAMEPAIR(WM_EXITMENULOOP), // 0x0212

	ITC_NAMEPAIR(WM_NEXTMENU), // 0x0213
	ITC_NAMEPAIR(WM_SIZING), // 0x0214
	ITC_NAMEPAIR(WM_CAPTURECHANGED), // 0x0215
	ITC_NAMEPAIR(WM_MOVING), // 0x0216

	ITC_NAMEPAIR(WM_DEVICECHANGE), // 0x0219

	ITC_NAMEPAIR(WM_MDICREATE), // 0x0220
	ITC_NAMEPAIR(WM_MDIDESTROY), // 0x0221
	ITC_NAMEPAIR(WM_MDIACTIVATE), // 0x0222
	ITC_NAMEPAIR(WM_MDIRESTORE), // 0x0223
	ITC_NAMEPAIR(WM_MDINEXT), // 0x0224
	ITC_NAMEPAIR(WM_MDIMAXIMIZE), // 0x0225
	ITC_NAMEPAIR(WM_MDITILE), // 0x0226
	ITC_NAMEPAIR(WM_MDICASCADE), // 0x0227
	ITC_NAMEPAIR(WM_MDIICONARRANGE), // 0x0228
	ITC_NAMEPAIR(WM_MDIGETACTIVE), // 0x0229


	ITC_NAMEPAIR(WM_MDISETMENU), // 0x0230
	ITC_NAMEPAIR(WM_ENTERSIZEMOVE), // 0x0231
	ITC_NAMEPAIR(WM_EXITSIZEMOVE), // 0x0232
	ITC_NAMEPAIR(WM_DROPFILES), // 0x0233
	ITC_NAMEPAIR(WM_MDIREFRESHMENU), // 0x0234

#if(WINVER >= 0x0601)
	ITC_NAMEPAIR(WM_TOUCH), // 0x0240
#endif /* WINVER >= 0x0601 */


	ITC_NAMEPAIR(WM_IME_SETCONTEXT), // 0x0281
	ITC_NAMEPAIR(WM_IME_NOTIFY), // 0x0282
	ITC_NAMEPAIR(WM_IME_CONTROL), // 0x0283
	ITC_NAMEPAIR(WM_IME_COMPOSITIONFULL), // 0x0284
	ITC_NAMEPAIR(WM_IME_SELECT), // 0x0285
	ITC_NAMEPAIR(WM_IME_CHAR), // 0x0286

	ITC_NAMEPAIR(WM_IME_REQUEST), // 0x0288

	ITC_NAMEPAIR(WM_IME_KEYDOWN), // 0x0290
	ITC_NAMEPAIR(WM_IME_KEYUP), // 0x0291

	ITC_NAMEPAIR(WM_MOUSEHOVER), // 0x02A1
	ITC_NAMEPAIR(WM_MOUSELEAVE), // 0x02A3

	ITC_NAMEPAIR(WM_NCMOUSEHOVER), // 0x02A0
	ITC_NAMEPAIR(WM_NCMOUSELEAVE), // 0x02A2

	ITC_NAMEPAIR(WM_WTSSESSION_CHANGE), // 0x02B1

	ITC_NAMEPAIR(WM_TABLET_FIRST), // 0x02c0
	ITC_NAMEPAIR(WM_TABLET_LAST), // 0x02df

	ITC_NAMEPAIR(WM_CUT), // 0x0300
	ITC_NAMEPAIR(WM_COPY), // 0x0301
	ITC_NAMEPAIR(WM_PASTE), // 0x0302
	ITC_NAMEPAIR(WM_CLEAR), // 0x0303
	ITC_NAMEPAIR(WM_UNDO), // 0x0304
	ITC_NAMEPAIR(WM_RENDERFORMAT), // 0x0305
	ITC_NAMEPAIR(WM_RENDERALLFORMATS), // 0x0306
	ITC_NAMEPAIR(WM_DESTROYCLIPBOARD), // 0x0307
	ITC_NAMEPAIR(WM_DRAWCLIPBOARD), // 0x0308
	ITC_NAMEPAIR(WM_PAINTCLIPBOARD), // 0x0309
	ITC_NAMEPAIR(WM_VSCROLLCLIPBOARD), // 0x030A
	ITC_NAMEPAIR(WM_SIZECLIPBOARD), // 0x030B
	ITC_NAMEPAIR(WM_ASKCBFORMATNAME), // 0x030C
	ITC_NAMEPAIR(WM_CHANGECBCHAIN), // 0x030D
	ITC_NAMEPAIR(WM_HSCROLLCLIPBOARD), // 0x030E
	ITC_NAMEPAIR(WM_QUERYNEWPALETTE), // 0x030F
	ITC_NAMEPAIR(WM_PALETTEISCHANGING), // 0x0310
	ITC_NAMEPAIR(WM_PALETTECHANGED), // 0x0311
	ITC_NAMEPAIR(WM_HOTKEY), // 0x0312

	ITC_NAMEPAIR(WM_PRINT), // 0x0317
	ITC_NAMEPAIR(WM_PRINTCLIENT), // 0x0318

	ITC_NAMEPAIR(WM_APPCOMMAND), // 0x0319

	ITC_NAMEPAIR(WM_THEMECHANGED), // 0x031A

	ITC_NAMEPAIR(WM_CLIPBOARDUPDATE), // 0x031D

#if(_WIN32_WINNT >= 0x0600)
	ITC_NAMEPAIR(WM_DWMCOMPOSITIONCHANGED), // 0x031E
	ITC_NAMEPAIR(WM_DWMNCRENDERINGCHANGED), // 0x031F
	ITC_NAMEPAIR(WM_DWMCOLORIZATIONCOLORCHANGED), // 0x0320
	ITC_NAMEPAIR(WM_DWMWINDOWMAXIMIZEDCHANGE), // 0x0321
#endif /* _WIN32_WINNT >= 0x0600 */

#if(_WIN32_WINNT >= 0x0601)
	ITC_NAMEPAIR(WM_DWMSENDICONICTHUMBNAIL), // 0x0323
	ITC_NAMEPAIR(WM_DWMSENDICONICLIVEPREVIEWBITMAP), // 0x0326
#endif /* _WIN32_WINNT >= 0x0601 */


#if(WINVER >= 0x0600)
	ITC_NAMEPAIR(WM_GETTITLEBARINFOEX), // 0x033F
#endif /* WINVER >= 0x0600 */

	ITC_NAMEPAIR(WM_HANDHELDFIRST), // 0x0358
	ITC_NAMEPAIR(WM_HANDHELDLAST), // 0x035F

	ITC_NAMEPAIR(WM_AFXFIRST), // 0x0360
	ITC_NAMEPAIR(WM_AFXLAST), // 0x037F

	ITC_NAMEPAIR(WM_PENWINFIRST), // 0x0380
	ITC_NAMEPAIR(WM_PENWINLAST), // 0x038F

};
CInterpretConst WM_xxx(E2v_WM_xxx, ITCF_HEX1B);

///////////////////////////////////////////////////////////////////////////
// VK_xxx : Virtual Keycode , VS2010
///////////////////////////////////////////////////////////////////////////

#define VK_0 0x30
#define VK_1 0x31
#define VK_2 0x32
#define VK_3 0x33
#define VK_4 0x34
#define VK_5 0x35
#define VK_6 0x36
#define VK_7 0x37
#define VK_8 0x38
#define VK_9 0x39

#define VK_A 'A'
#define VK_B 'B'
#define VK_C 'C'
#define VK_D 'D'
#define VK_E 'E'
#define VK_F 'F'
#define VK_G 'G'
#define VK_H 'H'
#define VK_I 'I'
#define VK_J 'J'
#define VK_K 'K'
#define VK_L 'L'
#define VK_M 'M'
#define VK_N 'N'
#define VK_O 'O'
#define VK_P 'P'
#define VK_Q 'Q'
#define VK_R 'R'
#define VK_S 'S'
#define VK_T 'T'
#define VK_U 'U'
#define VK_V 'V'
#define VK_W 'W'
#define VK_X 'X'
#define VK_Y 'Y'
#define VK_Z 'Z'

const Enum2Val_st E2v_VK_xxx[] =
{
/*
 * Virtual Keys, Standard Set
 */
	ITC_NAMEPAIR(VK_LBUTTON), // 0x01
	ITC_NAMEPAIR(VK_RBUTTON), // 0x02
	ITC_NAMEPAIR(VK_CANCEL), // 0x03
	ITC_NAMEPAIR(VK_MBUTTON), // 0x04    /* NOT contiguous with L & RBUTTON */

#if(_WIN32_WINNT >= 0x0500)
	ITC_NAMEPAIR(VK_XBUTTON1), // 0x05    /* NOT contiguous with L & RBUTTON */
	ITC_NAMEPAIR(VK_XBUTTON2), // 0x06    /* NOT contiguous with L & RBUTTON */
#endif /* _WIN32_WINNT >= 0x0500 */

/*
 * 0x07 : unassigned
 */
	ITC_NAMEPAIR(VK_BACK), // 0x08
	ITC_NAMEPAIR(VK_TAB), // 0x09

/*
 * 0x0A - 0x0B : reserved
 */
	ITC_NAMEPAIR(VK_CLEAR), // 0x0C
	ITC_NAMEPAIR(VK_RETURN), // 0x0D

	ITC_NAMEPAIR(VK_SHIFT), // 0x10
	ITC_NAMEPAIR(VK_CONTROL), // 0x11
	ITC_NAMEPAIR(VK_MENU), // 0x12
	ITC_NAMEPAIR(VK_PAUSE), // 0x13
	ITC_NAMEPAIR(VK_CAPITAL), // 0x14

	ITC_NAMEPAIR(VK_KANA), // 0x15
	ITC_NAMEPAIR(VK_HANGUL), // 0x15
	ITC_NAMEPAIR(VK_JUNJA), // 0x17
	ITC_NAMEPAIR(VK_FINAL), // 0x18
	ITC_NAMEPAIR(VK_HANJA), // 0x19
	ITC_NAMEPAIR(VK_KANJI), // 0x19

	ITC_NAMEPAIR(VK_ESCAPE), // 0x1B

	ITC_NAMEPAIR(VK_CONVERT), // 0x1C
	ITC_NAMEPAIR(VK_NONCONVERT), // 0x1D
	ITC_NAMEPAIR(VK_ACCEPT), // 0x1E
	ITC_NAMEPAIR(VK_MODECHANGE), // 0x1F

	ITC_NAMEPAIR(VK_SPACE), // 0x20
	ITC_NAMEPAIR(VK_PRIOR), // 0x21
	ITC_NAMEPAIR(VK_NEXT), // 0x22
	ITC_NAMEPAIR(VK_END), // 0x23
	ITC_NAMEPAIR(VK_HOME), // 0x24
	ITC_NAMEPAIR(VK_LEFT), // 0x25
	ITC_NAMEPAIR(VK_UP), // 0x26
	ITC_NAMEPAIR(VK_RIGHT), // 0x27
	ITC_NAMEPAIR(VK_DOWN), // 0x28
	ITC_NAMEPAIR(VK_SELECT), // 0x29
	ITC_NAMEPAIR(VK_PRINT), // 0x2A
	ITC_NAMEPAIR(VK_EXECUTE), // 0x2B
	ITC_NAMEPAIR(VK_SNAPSHOT), // 0x2C
	ITC_NAMEPAIR(VK_INSERT), // 0x2D
	ITC_NAMEPAIR(VK_DELETE), // 0x2E
	ITC_NAMEPAIR(VK_HELP), // 0x2F

/*
 * VK_0 - VK_9 are the same as ASCII '0' - '9' (0x30 - 0x39)
 * 0x40 : unassigned
 * VK_A - VK_Z are the same as ASCII 'A' - 'Z' (0x41 - 0x5A)
 */
	ITC_NAMEPAIR(VK_0), // 0x30
	ITC_NAMEPAIR(VK_1), // 0x31
	ITC_NAMEPAIR(VK_2), // 0x32
	ITC_NAMEPAIR(VK_3), // 0x33
	ITC_NAMEPAIR(VK_4), // 0x34
	ITC_NAMEPAIR(VK_5), // 0x35
	ITC_NAMEPAIR(VK_6), // 0x36
	ITC_NAMEPAIR(VK_7), // 0x37
	ITC_NAMEPAIR(VK_8), // 0x38
	ITC_NAMEPAIR(VK_9), // 0x39

	ITC_NAMEPAIR(VK_A), // 'A'
	ITC_NAMEPAIR(VK_B), // 'B'
	ITC_NAMEPAIR(VK_C), // 'C'
	ITC_NAMEPAIR(VK_D), // 'D'
	ITC_NAMEPAIR(VK_E), // 'E'
	ITC_NAMEPAIR(VK_F), // 'F'
	ITC_NAMEPAIR(VK_G), // 'G'
	ITC_NAMEPAIR(VK_H), // 'H'
	ITC_NAMEPAIR(VK_I), // 'I'
	ITC_NAMEPAIR(VK_J), // 'J'
	ITC_NAMEPAIR(VK_K), // 'K'
	ITC_NAMEPAIR(VK_L), // 'L'
	ITC_NAMEPAIR(VK_M), // 'M'
	ITC_NAMEPAIR(VK_N), // 'N'
	ITC_NAMEPAIR(VK_O), // 'O'
	ITC_NAMEPAIR(VK_P), // 'P'
	ITC_NAMEPAIR(VK_Q), // 'Q'
	ITC_NAMEPAIR(VK_R), // 'R'
	ITC_NAMEPAIR(VK_S), // 'S'
	ITC_NAMEPAIR(VK_T), // 'T'
	ITC_NAMEPAIR(VK_U), // 'U'
	ITC_NAMEPAIR(VK_V), // 'V'
	ITC_NAMEPAIR(VK_W), // 'W'
	ITC_NAMEPAIR(VK_X), // 'X'
	ITC_NAMEPAIR(VK_Y), // 'Y'
	ITC_NAMEPAIR(VK_Z), // 'Z'

	ITC_NAMEPAIR(VK_LWIN), // 0x5B
	ITC_NAMEPAIR(VK_RWIN), // 0x5C
	ITC_NAMEPAIR(VK_APPS), // 0x5D

/*
 * 0x5E : reserved
 */

	ITC_NAMEPAIR(VK_SLEEP), // 0x5F

	ITC_NAMEPAIR(VK_NUMPAD0), // 0x60
	ITC_NAMEPAIR(VK_NUMPAD1), // 0x61
	ITC_NAMEPAIR(VK_NUMPAD2), // 0x62
	ITC_NAMEPAIR(VK_NUMPAD3), // 0x63
	ITC_NAMEPAIR(VK_NUMPAD4), // 0x64
	ITC_NAMEPAIR(VK_NUMPAD5), // 0x65
	ITC_NAMEPAIR(VK_NUMPAD6), // 0x66
	ITC_NAMEPAIR(VK_NUMPAD7), // 0x67
	ITC_NAMEPAIR(VK_NUMPAD8), // 0x68
	ITC_NAMEPAIR(VK_NUMPAD9), // 0x69
	ITC_NAMEPAIR(VK_MULTIPLY), // 0x6A
	ITC_NAMEPAIR(VK_ADD), // 0x6B
	ITC_NAMEPAIR(VK_SEPARATOR), // 0x6C
	ITC_NAMEPAIR(VK_SUBTRACT), // 0x6D
	ITC_NAMEPAIR(VK_DECIMAL), // 0x6E
	ITC_NAMEPAIR(VK_DIVIDE), // 0x6F
	ITC_NAMEPAIR(VK_F1), // 0x70
	ITC_NAMEPAIR(VK_F2), // 0x71
	ITC_NAMEPAIR(VK_F3), // 0x72
	ITC_NAMEPAIR(VK_F4), // 0x73
	ITC_NAMEPAIR(VK_F5), // 0x74
	ITC_NAMEPAIR(VK_F6), // 0x75
	ITC_NAMEPAIR(VK_F7), // 0x76
	ITC_NAMEPAIR(VK_F8), // 0x77
	ITC_NAMEPAIR(VK_F9), // 0x78
	ITC_NAMEPAIR(VK_F10), // 0x79
	ITC_NAMEPAIR(VK_F11), // 0x7A
	ITC_NAMEPAIR(VK_F12), // 0x7B
	ITC_NAMEPAIR(VK_F13), // 0x7C
	ITC_NAMEPAIR(VK_F14), // 0x7D
	ITC_NAMEPAIR(VK_F15), // 0x7E
	ITC_NAMEPAIR(VK_F16), // 0x7F
	ITC_NAMEPAIR(VK_F17), // 0x80
	ITC_NAMEPAIR(VK_F18), // 0x81
	ITC_NAMEPAIR(VK_F19), // 0x82
	ITC_NAMEPAIR(VK_F20), // 0x83
	ITC_NAMEPAIR(VK_F21), // 0x84
	ITC_NAMEPAIR(VK_F22), // 0x85
	ITC_NAMEPAIR(VK_F23), // 0x86
	ITC_NAMEPAIR(VK_F24), // 0x87

/*
 * 0x88 - 0x8F : unassigned
 */
 	ITC_NAMEPAIR(VK_NUMLOCK), // 0x90
	ITC_NAMEPAIR(VK_SCROLL), // 0x91

/*
 * NEC PC-9800 kbd definitions
 */
	ITC_NAMEPAIR(VK_OEM_NEC_EQUAL), // 0x92   // '=' key on numpad

/*
 * Fujitsu/OASYS kbd definitions
 */
	ITC_NAMEPAIR(VK_OEM_FJ_JISHO), // 0x92   // 'Dictionary' key
	ITC_NAMEPAIR(VK_OEM_FJ_MASSHOU), // 0x93   // 'Unregister word' key
	ITC_NAMEPAIR(VK_OEM_FJ_TOUROKU), // 0x94   // 'Register word' key
	ITC_NAMEPAIR(VK_OEM_FJ_LOYA), // 0x95   // 'Left OYAYUBI' key
	ITC_NAMEPAIR(VK_OEM_FJ_ROYA), // 0x96   // 'Right OYAYUBI' key

/*
 * 0x97 - 0x9F : unassigned
 */

/*
 * VK_L* & VK_R* - left and right Alt, Ctrl and Shift virtual keys.
 * Used only as parameters to GetAsyncKeyState() and GetKeyState().
 * No other API or message will distinguish left and right keys in this way.
 */
	ITC_NAMEPAIR(VK_LSHIFT), // 0xA0
	ITC_NAMEPAIR(VK_RSHIFT), // 0xA1
	ITC_NAMEPAIR(VK_LCONTROL), // 0xA2
	ITC_NAMEPAIR(VK_RCONTROL), // 0xA3
	ITC_NAMEPAIR(VK_LMENU), // 0xA4
	ITC_NAMEPAIR(VK_RMENU), // 0xA5

#if(_WIN32_WINNT >= 0x0500)
	ITC_NAMEPAIR(VK_BROWSER_BACK), // 0xA6
	ITC_NAMEPAIR(VK_BROWSER_FORWARD), // 0xA7
	ITC_NAMEPAIR(VK_BROWSER_REFRESH), // 0xA8
	ITC_NAMEPAIR(VK_BROWSER_STOP), // 0xA9
	ITC_NAMEPAIR(VK_BROWSER_SEARCH), // 0xAA
	ITC_NAMEPAIR(VK_BROWSER_FAVORITES), // 0xAB
	ITC_NAMEPAIR(VK_BROWSER_HOME), // 0xAC

	ITC_NAMEPAIR(VK_VOLUME_MUTE), // 0xAD
	ITC_NAMEPAIR(VK_VOLUME_DOWN), // 0xAE
	ITC_NAMEPAIR(VK_VOLUME_UP), // 0xAF
	ITC_NAMEPAIR(VK_MEDIA_NEXT_TRACK), // 0xB0
	ITC_NAMEPAIR(VK_MEDIA_PREV_TRACK), // 0xB1
	ITC_NAMEPAIR(VK_MEDIA_STOP), // 0xB2
	ITC_NAMEPAIR(VK_MEDIA_PLAY_PAUSE), // 0xB3
	ITC_NAMEPAIR(VK_LAUNCH_MAIL), // 0xB4
	ITC_NAMEPAIR(VK_LAUNCH_MEDIA_SELECT), // 0xB5
	ITC_NAMEPAIR(VK_LAUNCH_APP1), // 0xB6
	ITC_NAMEPAIR(VK_LAUNCH_APP2), // 0xB7

#endif /* _WIN32_WINNT >= 0x0500 */

/*
 * 0xB8 - 0xB9 : reserved
 */
	ITC_NAMEPAIR(VK_OEM_1), // 0xBA   // ';:' for US
	ITC_NAMEPAIR(VK_OEM_PLUS), // 0xBB   // '+' any country
	ITC_NAMEPAIR(VK_OEM_COMMA), // 0xBC   // ',' any country
	ITC_NAMEPAIR(VK_OEM_MINUS), // 0xBD   // '-' any country
	ITC_NAMEPAIR(VK_OEM_PERIOD), // 0xBE   // '.' any country
	ITC_NAMEPAIR(VK_OEM_2), // 0xBF   // '/?' for US
	ITC_NAMEPAIR(VK_OEM_3), // 0xC0   // '`~' for US

/*
 * 0xC1 - 0xD7 : reserved
 */

/*
 * 0xD8 - 0xDA : unassigned
 */
	ITC_NAMEPAIR(VK_OEM_4), // 0xDB  //  '[{' for US
	ITC_NAMEPAIR(VK_OEM_5), // 0xDC  //  '\|' for US
	ITC_NAMEPAIR(VK_OEM_6), // 0xDD  //  ']}' for US
	ITC_NAMEPAIR(VK_OEM_7), // 0xDE  //  ''"' for US
	ITC_NAMEPAIR(VK_OEM_8), // 0xDF

/*
 * 0xE0 : reserved
 */

/*
 * Various extended or enhanced keyboards
 */
	ITC_NAMEPAIR(VK_OEM_AX), // 0xE1  //  'AX' key on Japanese AX kbd
	ITC_NAMEPAIR(VK_OEM_102), // 0xE2  //  "<>" or "\|" on RT 102-key kbd.
	ITC_NAMEPAIR(VK_ICO_HELP), // 0xE3  //  Help key on ICO
	ITC_NAMEPAIR(VK_ICO_00), // 0xE4  //  00 key on ICO

#if(WINVER >= 0x0400)
	ITC_NAMEPAIR(VK_PROCESSKEY), // 0xE5
#endif /* WINVER >= 0x0400 */

	ITC_NAMEPAIR(VK_ICO_CLEAR), // 0xE6


#if(_WIN32_WINNT >= 0x0500)
	ITC_NAMEPAIR(VK_PACKET), // 0xE7
#endif /* _WIN32_WINNT >= 0x0500 */

/*
 * 0xE8 : unassigned
 */

/*
 * Nokia/Ericsson definitions
 */
	ITC_NAMEPAIR(VK_OEM_RESET), // 0xE9
	ITC_NAMEPAIR(VK_OEM_JUMP), // 0xEA
	ITC_NAMEPAIR(VK_OEM_PA1), // 0xEB
	ITC_NAMEPAIR(VK_OEM_PA2), // 0xEC
	ITC_NAMEPAIR(VK_OEM_PA3), // 0xED
	ITC_NAMEPAIR(VK_OEM_WSCTRL), // 0xEE
	ITC_NAMEPAIR(VK_OEM_CUSEL), // 0xEF
	ITC_NAMEPAIR(VK_OEM_ATTN), // 0xF0
	ITC_NAMEPAIR(VK_OEM_FINISH), // 0xF1
	ITC_NAMEPAIR(VK_OEM_COPY), // 0xF2
	ITC_NAMEPAIR(VK_OEM_AUTO), // 0xF3
	ITC_NAMEPAIR(VK_OEM_ENLW), // 0xF4
	ITC_NAMEPAIR(VK_OEM_BACKTAB), // 0xF5

	ITC_NAMEPAIR(VK_ATTN), // 0xF6
	ITC_NAMEPAIR(VK_CRSEL), // 0xF7
	ITC_NAMEPAIR(VK_EXSEL), // 0xF8
	ITC_NAMEPAIR(VK_EREOF), // 0xF9
	ITC_NAMEPAIR(VK_PLAY), // 0xFA
	ITC_NAMEPAIR(VK_ZOOM), // 0xFB
	ITC_NAMEPAIR(VK_NONAME), // 0xFC
	ITC_NAMEPAIR(VK_PA1), // 0xFD
	ITC_NAMEPAIR(VK_OEM_CLEAR), // 0xFE
};
CInterpretConst VK_xxx(E2v_VK_xxx, ITCF_HEX1B);


///////////////////////////////////////////////////////////////////////////
// LLKHF_xxx : KBDLLHOOKSTRUCT.flags , VS2010+
// Low-Level Keyboard Hook Flag
///////////////////////////////////////////////////////////////////////////

#ifndef LLKHF_LOWER_IL_INJECTED
#define LLKHF_LOWER_IL_INJECTED 0x2 // since Win8+
#endif

const Bitfield2Val_st b2v_LLKHF_xxx[] =
{
	ITC_NAMEPAIR(LLKHF_EXTENDED), // (KF_EXTENDED >> 8) // bit 0, 0x01
	ITC_NAMEPAIR(LLKHF_LOWER_IL_INJECTED),              // bit 1, 0x02
	ITC_NAMEPAIR(LLKHF_INJECTED), // 0x00000010         // bit 4, 0x10
	ITC_NAMEPAIR(LLKHF_ALTDOWN),  // (KF_ALTDOWN >> 8)  // bit 5, 0x20
	ITC_NAMEPAIR(LLKHF_UP),       // (KF_UP >> 8)       // bit 7, 0x80 true=key-up
};
CInterpretConst LLKHF_xxx(b2v_LLKHF_xxx, ITCF_HEX1B);

CInterpretConst WS_xxx_toplevel(b2v_WS_xxx_toplevel, ITCF_HEX4B);

CInterpretConst WS_xxx_childwnd(b2v_WS_xxx_childwnd, ITCF_HEX4B);

CInterpretConst WS_EX_xxx(b2v_WS_EX_xxx, ITCF_HEX4B);

//
// Window style for "Static"
//

const Enum2Val_st e2v_WS_xxx_Static_TYPE[] =
{
//	#define SS_TYPEMASK         0x0000001FL

	ITC_NAMEPAIR(SS_LEFT), // 0x00000000L
	ITC_NAMEPAIR(SS_CENTER), // 0x00000001L
	ITC_NAMEPAIR(SS_RIGHT), // 0x00000002L
	ITC_NAMEPAIR(SS_ICON), // 0x00000003L
	ITC_NAMEPAIR(SS_BLACKRECT), // 0x00000004L
	ITC_NAMEPAIR(SS_GRAYRECT), // 0x00000005L
	ITC_NAMEPAIR(SS_WHITERECT), // 0x00000006L
	ITC_NAMEPAIR(SS_BLACKFRAME), // 0x00000007L
	ITC_NAMEPAIR(SS_GRAYFRAME), // 0x00000008L
	ITC_NAMEPAIR(SS_WHITEFRAME), // 0x00000009L
	ITC_NAMEPAIR(SS_USERITEM), // 0x0000000AL
	ITC_NAMEPAIR(SS_SIMPLE), // 0x0000000BL
	ITC_NAMEPAIR(SS_LEFTNOWORDWRAP), // 0x0000000CL
	ITC_NAMEPAIR(SS_OWNERDRAW), // 0x0000000DL
	ITC_NAMEPAIR(SS_BITMAP), // 0x0000000EL
	ITC_NAMEPAIR(SS_ENHMETAFILE), // 0x0000000FL
	ITC_NAMEPAIR(SS_ETCHEDHORZ), // 0x00000010L
	ITC_NAMEPAIR(SS_ETCHEDVERT), // 0x00000011L
	ITC_NAMEPAIR(SS_ETCHEDFRAME), // 0x00000012L
};

#define SS_NO_ELLIPSIS 0 // Chj
const Enum2Val_st e2v_WS_xxx_Static_ELLIPSIS[] =
{
//	#define SS_ELLIPSISMASK     0x0000C000L

	ITC_NAMEPAIR(SS_NO_ELLIPSIS),  // 0
	ITC_NAMEPAIR(SS_ENDELLIPSIS),  // 0x00004000L
	ITC_NAMEPAIR(SS_PATHELLIPSIS), // 0x00008000L
	ITC_NAMEPAIR(SS_WORDELLIPSIS), // 0x0000C000L
};

const Bitfield2Val_st b2v_WS_xxx_Static[] = 
{
	ITC_NAMEPAIR(SS_REALSIZECONTROL), // 0x00000040L
	ITC_NAMEPAIR(SS_NOPREFIX), // 0x00000080L Don't do "&" character translation 
	ITC_NAMEPAIR(SS_NOTIFY), // 0x00000100L
	ITC_NAMEPAIR(SS_CENTERIMAGE), // 0x00000200L
	ITC_NAMEPAIR(SS_RIGHTJUST), // 0x00000400L
	ITC_NAMEPAIR(SS_REALSIZEIMAGE), // 0x00000800L
	ITC_NAMEPAIR(SS_SUNKEN), // 0x00001000L
	ITC_NAMEPAIR(SS_EDITCONTROL), // 0x00002000L
};

const EnumGroup_st egs_WS_xxx_Static[] =
{
	{ SS_TYPEMASK,     e2v_WS_xxx_Static_TYPE, ARRAYSIZE(e2v_WS_xxx_Static_TYPE) },
	{ SS_ELLIPSISMASK, e2v_WS_xxx_Static_ELLIPSIS, ARRAYSIZE(e2v_WS_xxx_Static_ELLIPSIS) },
};
CInterpretConst WS_xxx_Static(ITCF_HEX4B, 
	egs_WS_xxx_Static, ARRAYSIZE(egs_WS_xxx_Static),
	b2v_WS_xxx_Static, ARRAYSIZE(b2v_WS_xxx_Static),     // 8 bits
	b2v_WS_xxx_childwnd, ARRAYSIZE(b2v_WS_xxx_childwnd), // 17 bits
	nullptr, 0);
// -- Chj memo:
// For a "static"-class(or "button"-class etc) window, high 16-bits of it window-style
// can be interpret as b2v_WS_xxx_toplevel or b2v_WS_xxx_childwnd, who have two-bits
// of different meaning(e.g. WS_MINIMIZEBOX vs WS_GROUP). For strictness, we should have
// defined WS_xxx_static_toplevel and WS_xxx_static_childwnd. But, since a "static"/"button"
// is rarely created as a toplevel window, so WS_xxx_static_toplevel is omitted here.
// We keep only WS_xxx_static as the same meaning as WS_xxx_static_childwnd, same for
// other Windows standard controls: WS_xxx_edit, WS_xxx_button etc. So those rarely used
// duplications are eliminated.
// 
// One rare case is: Win7 Desktop [Start] button is created as toplevel.

//
// Window style for "Edit"
//

const Bitfield2Val_st b2v_WS_xxx_Edit[] =
{
//	ITC_NAMEPAIR(ES_LEFT), // 0x0000L
	ITC_NAMEPAIR(ES_CENTER), // 0x0001L
	ITC_NAMEPAIR(ES_RIGHT), // 0x0002L
	ITC_NAMEPAIR(ES_MULTILINE), // 0x0004L
	ITC_NAMEPAIR(ES_UPPERCASE), // 0x0008L
	ITC_NAMEPAIR(ES_LOWERCASE), // 0x0010L
	ITC_NAMEPAIR(ES_PASSWORD), // 0x0020L
	ITC_NAMEPAIR(ES_AUTOVSCROLL), // 0x0040L
	ITC_NAMEPAIR(ES_AUTOHSCROLL), // 0x0080L
	ITC_NAMEPAIR(ES_NOHIDESEL), // 0x0100L
	ITC_NAMEPAIR(ES_OEMCONVERT), // 0x0400L
	ITC_NAMEPAIR(ES_READONLY), // 0x0800L
	ITC_NAMEPAIR(ES_WANTRETURN), // 0x1000L
	ITC_NAMEPAIR(ES_NUMBER), // 0x2000L
};
CInterpretConst WS_xxx_Edit(ITCF_HEX4B,
	nullptr, 0, 
	b2v_WS_xxx_Edit, ARRAYSIZE(b2v_WS_xxx_Edit),
	b2v_WS_xxx_childwnd, ARRAYSIZE(b2v_WS_xxx_childwnd), // 17 bits
	nullptr, 0);

//
// Window style for "Button"
//

const Enum2Val_st e2v_WS_xxx_Button_TYPE[] = 
{
//	ITC_NAMEPAIR(BS_TYPEMASK),         // 0x0000000FL (mask)

	ITC_NAMEPAIR(BS_PUSHBUTTON),       // 0x00000000L
	ITC_NAMEPAIR(BS_DEFPUSHBUTTON),    // 0x00000001L
	ITC_NAMEPAIR(BS_CHECKBOX),         // 0x00000002L
	ITC_NAMEPAIR(BS_AUTOCHECKBOX),     // 0x00000003L
	ITC_NAMEPAIR(BS_RADIOBUTTON),      // 0x00000004L
	ITC_NAMEPAIR(BS_3STATE),           // 0x00000005L
	ITC_NAMEPAIR(BS_AUTO3STATE),       // 0x00000006L
	ITC_NAMEPAIR(BS_GROUPBOX),         // 0x00000007L
	ITC_NAMEPAIR(BS_USERBUTTON),       // 0x00000008L
	ITC_NAMEPAIR(BS_AUTORADIOBUTTON),  // 0x00000009L
	ITC_NAMEPAIR(BS_PUSHBOX),          // 0x0000000AL
	ITC_NAMEPAIR(BS_OWNERDRAW),        // 0x0000000BL
};

const Bitfield2Val_st b2v_WS_xxx_Button[] =
{
	ITC_NAMEPAIR(BS_LEFTTEXT),         // 0x00000020L

//	ITC_NAMEPAIR(BS_TEXT),             // 0x00000000L
	ITC_NAMEPAIR(BS_ICON),             // 0x00000040L
	ITC_NAMEPAIR(BS_BITMAP),           // 0x00000080L
	ITC_NAMEPAIR(BS_LEFT),             // 0x00000100L
	ITC_NAMEPAIR(BS_RIGHT),            // 0x00000200L
//	ITC_NAMEPAIR(BS_CENTER),           // 0x00000300L = BS_LEFT|BS_RIGHT
	ITC_NAMEPAIR(BS_TOP),              // 0x00000400L
	ITC_NAMEPAIR(BS_BOTTOM),           // 0x00000800L
//	ITC_NAMEPAIR(BS_VCENTER),          // 0x00000C00L = BS_TOP|BS_BOTTOM
	ITC_NAMEPAIR(BS_PUSHLIKE),         // 0x00001000L
	ITC_NAMEPAIR(BS_MULTILINE),        // 0x00002000L
	ITC_NAMEPAIR(BS_NOTIFY),           // 0x00004000L
	ITC_NAMEPAIR(BS_FLAT),             // 0x00008000L
//	ITC_NAMEPAIR(BS_RIGHTBUTTON),      // BS_LEFTTEXT
};

const EnumGroup_st egs_WS_xxx_Button[] =
{
	{ BS_TYPEMASK, e2v_WS_xxx_Button_TYPE, ARRAYSIZE(e2v_WS_xxx_Button_TYPE) },
};
CInterpretConst WS_xxx_Button(ITCF_HEX4B,
	egs_WS_xxx_Button, ARRAYSIZE(egs_WS_xxx_Button),
	b2v_WS_xxx_Button, ARRAYSIZE(b2v_WS_xxx_Button),     // 10 bits
	b2v_WS_xxx_childwnd, ARRAYSIZE(b2v_WS_xxx_childwnd), // 17 bits
	nullptr, 0);

//
// Window style for "ListBox"
//

const Bitfield2Val_st b2v_WS_xxx_ListBox[] = 
{
	ITC_NAMEPAIR(LBS_NOTIFY),            // 0x0001L
	ITC_NAMEPAIR(LBS_SORT),              // 0x0002L
	ITC_NAMEPAIR(LBS_NOREDRAW),          // 0x0004L
	ITC_NAMEPAIR(LBS_MULTIPLESEL),       // 0x0008L
	ITC_NAMEPAIR(LBS_OWNERDRAWFIXED),    // 0x0010L
	ITC_NAMEPAIR(LBS_OWNERDRAWVARIABLE), // 0x0020L
	ITC_NAMEPAIR(LBS_HASSTRINGS),        // 0x0040L
	ITC_NAMEPAIR(LBS_USETABSTOPS),       // 0x0080L
	ITC_NAMEPAIR(LBS_NOINTEGRALHEIGHT),  // 0x0100L
	ITC_NAMEPAIR(LBS_MULTICOLUMN),       // 0x0200L
	ITC_NAMEPAIR(LBS_WANTKEYBOARDINPUT), // 0x0400L
	ITC_NAMEPAIR(LBS_EXTENDEDSEL),       // 0x0800L
	ITC_NAMEPAIR(LBS_DISABLENOSCROLL),   // 0x1000L
	ITC_NAMEPAIR(LBS_NODATA),            // 0x2000L
	ITC_NAMEPAIR(LBS_NOSEL),             // 0x4000L
	ITC_NAMEPAIR(LBS_COMBOBOX),          // 0x8000L
};
CInterpretConst WS_xxx_ListBox(ITCF_HEX4B,
	nullptr, 0,
	b2v_WS_xxx_ListBox,  ARRAYSIZE(b2v_WS_xxx_ListBox),  // 16 bits
	b2v_WS_xxx_childwnd, ARRAYSIZE(b2v_WS_xxx_childwnd), // 17 bits
	nullptr, 0);

//
// Window style for "ComboBox"
//

const Bitfield2Val_st b2v_WS_xxx_ComboBox[] =
{
	ITC_NAMEPAIR(CBS_SIMPLE),            // 0x0001L
	ITC_NAMEPAIR(CBS_DROPDOWN),          // 0x0002L
//	ITC_NAMEPAIR(CBS_DROPDOWNLIST),      // 0x0003L = CBS_DROPDOWN + CBS_SIMPLE
	ITC_NAMEPAIR(CBS_OWNERDRAWFIXED),    // 0x0010L
	ITC_NAMEPAIR(CBS_OWNERDRAWVARIABLE), // 0x0020L
	ITC_NAMEPAIR(CBS_AUTOHSCROLL),       // 0x0040L
	ITC_NAMEPAIR(CBS_OEMCONVERT),        // 0x0080L
	ITC_NAMEPAIR(CBS_SORT),              // 0x0100L
	ITC_NAMEPAIR(CBS_HASSTRINGS),        // 0x0200L
	ITC_NAMEPAIR(CBS_NOINTEGRALHEIGHT),  // 0x0400L
	ITC_NAMEPAIR(CBS_DISABLENOSCROLL),   // 0x0800L
	ITC_NAMEPAIR(CBS_UPPERCASE),         // 0x2000L
	ITC_NAMEPAIR(CBS_LOWERCASE),         // 0x4000L
};
CInterpretConst WS_xxx_ComboBox(ITCF_HEX4B, 
	nullptr, 0,
	b2v_WS_xxx_ComboBox, ARRAYSIZE(b2v_WS_xxx_ComboBox), // 12 bits
	b2v_WS_xxx_childwnd, ARRAYSIZE(b2v_WS_xxx_childwnd), // 17 bits
	nullptr, 0);



} //namespace itc
