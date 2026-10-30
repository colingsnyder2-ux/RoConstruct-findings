// from server: 100% by tajop
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 roc_unit_8817a0fd1efa4a95.cpp

// Candidate translation unit (score above; library headers required).
// XTPDockingPaneTabbedContainer.cpp : implementation of the CXTPDockingPaneTabbedContainer class.
//
// This file is a part of the XTREME DOCKINGPANE MFC class library.
// (c)1998-2007 Codejock Software, All Rights Reserved.
//
// THIS SOURCE FILE IS THE PROPERTY OF CODEJOCK SOFTWARE AND IS NOT TO BE
// RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED WRITTEN
// CONSENT OF CODEJOCK SOFTWARE.
//
// THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS OUTLINED
// IN THE XTREME TOOLKIT PRO LICENSE AGREEMENT. CODEJOCK SOFTWARE GRANTS TO
// YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE THIS SOFTWARE ON A
// SINGLE COMPUTER.
//
// CONTACT INFORMATION:
// support@codejock.com
// http://www.codejock.com
//
/////////////////////////////////////////////////////////////////////////////

// XTToolkitPro.h
//
// This file is a part of the XTREME TOOLKIT PRO MFC class library.
// (c)1998-2007 Codejock Software, All Rights Reserved.
//
// THIS SOURCE FILE IS THE PROPERTY OF CODEJOCK SOFTWARE AND IS NOT TO BE
// RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED WRITTEN
// CONSENT OF CODEJOCK SOFTWARE.
//
// THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS OUTLINED
// IN THE XTREME TOOLKIT PRO LICENSE AGREEMENT. CODEJOCK SOFTWARE GRANTS TO
// YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE THIS SOFTWARE ON A
// SINGLE COMPUTER.
//
// CONTACT INFORMATION:
// support@codejock.com
// http://www.codejock.com
//
/////////////////////////////////////////////////////////////////////////////

#pragma warning(disable : 4786) // Identifier was truncated to '255' characters in the debug information

#if (_MSC_VER > 1100)
#pragma warning(push)
#pragma pack(push, 8)
#endif

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>
#endif // _AFX_NO_OLE_SUPPORT

#ifdef _MFC_OVERRIDES_NEW
#define _INC_MALLOC
#endif

#include <afxpriv.h>    // MFC support for docking windows
#include <afxtempl.h>   // MFC template classes
#include <afxcview.h>   // MFC ListView / TreeView support
#include <shlobj.h>     // MFC support for shell extensions


#ifndef AFX_STATIC
#define AFX_STATIC static
#endif

//------------------------------------------------------------------------
// NOTE: If using the Xtreme Toolkit Pro as a static library linked to an
// application that is dynamically linked with MFC, you will need to do the
// following:
//
// Open the XTPToolkit_Lib project workspace and select one of the
// Win32 Dynamic build settings and build the library. Add the following
// lines of code to your stdafx.h file:
//
// #define _XTP_STATICLINK
// #include <XTToolkitPro.h>
//
// Add the following line of code to your *.rc2 file after the comment:
// "Add manually edited resources here...":
//
// #include "XTToolkitPro.rc"
//------------------------------------------------------------------------

#undef _XTP_EXT_CLASS

#if !defined(_AFXDLL) || defined(_XTP_STATICLINK)
#define _XTP_EXT_CLASS
#else
#define _XTP_EXT_CLASS  __declspec(dllimport)
#endif // !defined(_AFXDLL) || defined(_XTP_STATICLINK)

#if defined(_XTP_INCLUDE_DEPRECATED)
  #include "Common/XTPDeprecated.h"
#endif

#if !defined(_XTP_EXCLUDE_COMMON)
// Includes.h : header file
//
// This file is a part of the XTREME TOOLKIT PRO MFC class library.
// (c)1998-2007 Codejock Software, All Rights Reserved.
//
// THIS SOURCE FILE IS THE PROPERTY OF CODEJOCK SOFTWARE AND IS NOT TO BE
// RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED WRITTEN
// CONSENT OF CODEJOCK SOFTWARE.
//
// THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS OUTLINED
// IN THE XTREME TOOLKIT PRO LICENSE AGREEMENT. CODEJOCK SOFTWARE GRANTS TO
// YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE THIS SOFTWARE ON A
// SINGLE COMPUTER.
//
// CONTACT INFORMATION:
// support@codejock.com
// http://www.codejock.com
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(__XTPCOMMONINCLUDES_H__)
#define __XTPCOMMONINCLUDES_H__

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "Common/Resource.h"
#include "Common/Tmschema.h"
#include "Common/UxTheme.h"

#include "Common/XTPVersion.h"
#include "Common/XTPMacros.h"
#include "Common/XTPVC80Helpers.h"
#include "Common/XTPVC50Helpers.h"
#include "Common/XTPSystemHelpers.h"
#include "Common/XTPResourceManager.h"
#include "Common/XTPColorManager.h"
// XTPWinThemeWrapper.h: interface for the CXTPWinThemeWrapper class.
//
// This file is a part of the XTREME TOOLKIT PRO MFC class library.
// (c)1998-2007 Codejock Software, All Rights Reserved.
//
// THIS SOURCE FILE IS THE PROPERTY OF CODEJOCK SOFTWARE AND IS NOT TO BE
// RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED WRITTEN
// CONSENT OF CODEJOCK SOFTWARE.
//
// THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS OUTLINED
// IN THE XTREME TOOLKIT PRO LICENSE AGREEMENT. CODEJOCK SOFTWARE GRANTS TO
// YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE THIS SOFTWARE ON A
// SINGLE COMPUTER.
//
// CONTACT INFORMATION:
// support@codejock.com
// http://www.codejock.com
//
/////////////////////////////////////////////////////////////////////////////

//{{AFX_CODEJOCK_PRIVATE
#if !defined(__XTPWINTHEMEWRAPPER_H__)
#define __XTPWINTHEMEWRAPPER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Common/uxtheme.h"
#include "Common/schemadef.h"
#include "Common/tmschema.h"

typedef HANDLE HPAINTBUFFER;

// BP_BUFFERFORMAT
enum XTP_UX_BUFFERFORMAT
{
	XTP_BPBF_COMPATIBLEBITMAP,    // Compatible bitmap
	XTP_BPBF_DIB,                 // Device-independent bitmap
	XTP_BPBF_TOPDOWNDIB,          // Top-down device-independent bitmap
	XTP_BPBF_TOPDOWNMONODIB       // Top-down monochrome device-independent bitmap
};

// BP_PAINTPARAMS
struct XTP_UX_PAINTPARAMS
{
	DWORD                       cbSize;
	DWORD                       dwFlags; // BPPF_ flags
	const RECT *                prcExclude;
	const BLENDFUNCTION *       pBlendFunction;
};


struct XTP_UX_DTTOPTS
{
	DWORD             dwSize;              // size of the struct
	DWORD             dwFlags;             // which options have been specified
	COLORREF          crText;              // color to use for text fill
	COLORREF          crBorder;            // color to use for text outline
	COLORREF          crShadow;            // color to use for text shadow
	int               iTextShadowType;     // TST_SINGLE or TST_CONTINUOUS
	POINT             ptShadowOffset;      // where shadow is drawn (relative to text)
	int               iBorderSize;         // Border radius around text
	int               iFontPropId;         // Font property to use for the text instead of TMT_FONT
	int               iColorPropId;        // Color property to use for the text instead of TMT_TEXTCOLOR
	int               iStateId;            // Alternate state id
	BOOL              fApplyOverlay;       // Overlay text on top of any text effect?
	int               iGlowSize;           // Glow radius around text
	VOID*             pfnDrawTextCallback; // Callback for DrawText
	LPARAM            lParam;              // Parameter for callback
};

struct _DTBGOPTS;
typedef _DTBGOPTS* PDTBGOPTS;

#define TYPEDEF_WRAPPER_POINTER(val, type, proc)\
	const int xtpWrapper##proc = val;\
	const LPCSTR xtpWrapperProc##proc = #proc;\
	typedef type (__stdcall* PFN##proc)

TYPEDEF_WRAPPER_POINTER(0, HRESULT, DrawThemeBackground)(HTHEME, HDC, int, int, const RECT*, const RECT*);
TYPEDEF_WRAPPER_POINTER(1, HRESULT, CloseThemeData)(HTHEME);
TYPEDEF_WRAPPER_POINTER(2, HRESULT, SetWindowTheme)(HWND, LPCWSTR, LPCWSTR);
TYPEDEF_WRAPPER_POINTER(3, void, SetThemeAppProperties)(DWORD);
TYPEDEF_WRAPPER_POINTER(4, HTHEME, OpenThemeData)(HWND, LPCWSTR);
TYPEDEF_WRAPPER_POINTER(5, BOOL, IsThemePartDefined)(HTHEME, int, int);
TYPEDEF_WRAPPER_POINTER(6, BOOL, IsThemeDialogTextureEnabled)();
TYPEDEF_WRAPPER_POINTER(7, BOOL, IsThemeBackgroundPartiallyTransparent)(HTHEME, int, int);
TYPEDEF_WRAPPER_POINTER(8, BOOL, IsThemeActive)();
TYPEDEF_WRAPPER_POINTER(9, BOOL, IsAppThemed)();
TYPEDEF_WRAPPER_POINTER(10, HRESULT, HitTestThemeBackground)(HTHEME, HDC, int, int, DWORD, const RECT*, HRGN, POINT, WORD*);
TYPEDEF_WRAPPER_POINTER(11, HTHEME, GetWindowTheme)(HWND);
TYPEDEF_WRAPPER_POINTER(12, HRESULT, GetThemeSysString)(HTHEME, int, LPWSTR, int);
TYPEDEF_WRAPPER_POINTER(13, HRESULT, GetThemeTextMetrics)(HTHEME, HDC, int, int, TEXTMETRIC*);
TYPEDEF_WRAPPER_POINTER(14, HRESULT, GetThemeTextExtent)(HTHEME, HDC, int, int, LPCWSTR, int, DWORD, const RECT*, RECT*);
TYPEDEF_WRAPPER_POINTER(15, int, GetThemeSysSize)(HTHEME, int);
TYPEDEF_WRAPPER_POINTER(16, HRESULT, GetThemeSysInt)(HTHEME, int, int*);
TYPEDEF_WRAPPER_POINTER(17, HRESULT, GetThemeSysFont)(HTHEME, int, LOGFONT*);
TYPEDEF_WRAPPER_POINTER(18, HBRUSH, GetThemeSysColorBrush)(HTHEME, int);
TYPEDEF_WRAPPER_POINTER(19, COLORREF, GetThemeSysColor)(HTHEME, int);
TYPEDEF_WRAPPER_POINTER(20, BOOL, GetThemeSysBool)(HTHEME, int);
TYPEDEF_WRAPPER_POINTER(21, HRESULT, GetThemeString)(HTHEME, int, int, int, LPWSTR, int);
TYPEDEF_WRAPPER_POINTER(22, HRESULT, GetThemeRect)(HTHEME, int, int, int, RECT*);
TYPEDEF_WRAPPER_POINTER(23, HRESULT, GetThemePropertyOrigin)(HTHEME, int, int, int, PROPERTYORIGIN*);
TYPEDEF_WRAPPER_POINTER(24, HRESULT, GetThemePosition)(HTHEME, int, int, int, POINT*);
TYPEDEF_WRAPPER_POINTER(25, HRESULT, GetThemePartSize)(HTHEME, HDC, int, int, RECT*, THEMESIZE, SIZE*);
TYPEDEF_WRAPPER_POINTER(26, HRESULT, GetThemeMetric)(HTHEME, HDC, int, int, int, int*);
TYPEDEF_WRAPPER_POINTER(27, HRESULT, GetThemeMargins)(HTHEME, HDC, int, int, int, RECT*, MARGINS*);
TYPEDEF_WRAPPER_POINTER(28, HRESULT, GetThemeIntList)(HTHEME, int, int, int, INTLIST*);
TYPEDEF_WRAPPER_POINTER(29, HRESULT, GetThemeInt)(HTHEME, int, int, int, int*);
TYPEDEF_WRAPPER_POINTER(30, HRESULT, GetThemeFont)(HTHEME, HDC, int, int, int, LOGFONT*);
TYPEDEF_WRAPPER_POINTER(31, HRESULT, GetThemeFilename)(HTHEME, int, int, int, LPWSTR, int);
TYPEDEF_WRAPPER_POINTER(32, HRESULT, GetThemeEnumValue)(HTHEME, int, int, int, int*);
TYPEDEF_WRAPPER_POINTER(33, HRESULT, GetThemeDocumentationProperty)(LPCWSTR, LPCWSTR, LPWSTR, int);
TYPEDEF_WRAPPER_POINTER(34, HRESULT, GetThemeColor)(HTHEME, int, int, int, COLORREF*);
TYPEDEF_WRAPPER_POINTER(35, HRESULT, GetThemeBool)(HTHEME, int, int, int, BOOL*);
TYPEDEF_WRAPPER_POINTER(36, HRESULT, GetThemeBackgroundRegion)(HTHEME, HDC, int, int, const RECT*, HRGN*);
TYPEDEF_WRAPPER_POINTER(37, HRESULT, GetThemeBackgroundExtent)(HTHEME, HDC, int, int, const RECT*, RECT*);
TYPEDEF_WRAPPER_POINTER(38, HRESULT, GetThemeBackgroundContentRect)(HTHEME, HDC, int, int, const RECT*, RECT*);
TYPEDEF_WRAPPER_POINTER(39, DWORD, ThemeAppProperties)();
TYPEDEF_WRAPPER_POINTER(40, HRESULT, GetCurrentThemeName)(LPWSTR, int, LPWSTR, int, LPWSTR, int);
TYPEDEF_WRAPPER_POINTER(41, HRESULT, EnableTheming)(BOOL);
TYPEDEF_WRAPPER_POINTER(42, HRESULT, EnableThemeDialogTexture)(HWND, DWORD);
TYPEDEF_WRAPPER_POINTER(43, HRESULT, DrawThemeText)(HTHEME, HDC, int, int, LPCWSTR, int, DWORD, DWORD, const RECT*);
TYPEDEF_WRAPPER_POINTER(44, HRESULT, DrawThemeParentBackground)(HWND, HDC, RECT*);
TYPEDEF_WRAPPER_POINTER(45, HRESULT, DrawThemeIcon)(HTHEME, HDC, int, int, const RECT*, HIMAGELIST, int);
TYPEDEF_WRAPPER_POINTER(46, HRESULT, DrawThemeEdge)(HTHEME, HDC, int, int, const RECT*, UINT, UINT, RECT*);
TYPEDEF_WRAPPER_POINTER(47, HRESULT, DrawThemeBackgroundEx)(HTHEME, HDC, int, int, const RECT*, const PDTBGOPTS);
TYPEDEF_WRAPPER_POINTER(48, DWORD, GetThemeAppProperties)();

TYPEDEF_WRAPPER_POINTER(49, HPAINTBUFFER, BeginBufferedPaint)(HDC, const RECT*, XTP_UX_BUFFERFORMAT, XTP_UX_PAINTPARAMS*, HDC*);
TYPEDEF_WRAPPER_POINTER(50, HRESULT, EndBufferedPaint)(HPAINTBUFFER, BOOL);
TYPEDEF_WRAPPER_POINTER(51, HRESULT, DrawThemeTextEx)(HTHEME, HDC, int, int, LPCWSTR, int, DWORD, LPRECT, const XTP_UX_DTTOPTS*);


#define XTP_UXTHEME_HANDLE (HMODULE)0x21FFFF1

//}}AFX_CODEJOCK_PRIVATE

//===========================================================================
// Summary:
//     The CXTPWinThemeWrapper class wraps the UxTheme.dll visual theme
//     API.  You can use this class for rendering Windows XP themes for
//     owner drawn controls.
//===========================================================================
class _XTP_EXT_CLASS CXTPWinThemeWrapper
{
private:
	//-----------------------------------------------------------------------
	// Summary:
	//     Shared data of wrappers
	//-----------------------------------------------------------------------
	class CSharedData
	{
	public:

		//-------------------------------------------------------------------------
		// Summary:
		//     Constructs a CSharedData object.
		//-------------------------------------------------------------------------
		CSharedData();

	public:
		LPVOID m_ptrWrappers[52];   // Wrapper pointer
		HMODULE m_hThemeDll;        // Handle to the theme dll.
		DWORD m_dwComCtlVersion;    // ComCtl version.
	};

public:

	//-----------------------------------------------------------------------
	// Summary:
	//     Constructs a CXTPWinThemeWrapper object.
	// Parameters:
	//     bUseSkinFramework - TRUE to use skinframework.
	//-----------------------------------------------------------------------
	CXTPWinThemeWrapper(BOOL bUseSkinFramework = TRUE);

	//-----------------------------------------------------------------------
	// Summary:
	//     Destroys a CXTPWinThemeWrapper object, handles cleanup and
	//     deallocation.
	//-----------------------------------------------------------------------
	virtual ~CXTPWinThemeWrapper();

	//-----------------------------------------------------------------------
	// Summary:
	//     Open the theme data for the specified HWND and semi-colon
	//     separated list of class names.  OpenThemeData() will try
	//     each class name, one at a time, and use the first matching
	//     theme info found.
	// Parameters:
	//     hWnd         - Window handle of the control/window to be
	//                    themed.
	//     pszClassList - Class name (or list of names) to match to
	//                    theme data section.  if the list contains
	//                    more than one name, the names are tested one
	//                    at a time for a match.  If a match is found,
	//                    OpenThemeData() returns a theme handle
	//                    associated with the matching class.  This
	//                    param is a list (instead of just a single
	//                    class name) to provide the class an
	//                    opportunity to get the "best" match between
	//                    the class and the current theme.  For example,
	//                    a button might pass L"OkButton, Button" if its
	//                    ID=ID_OK.  If the current theme has an entry
	//                    for OkButton, that will be used.  Otherwise,
	//                    we fall back on the normal Button entry.
	//-----------------------------------------------------------------------
	void OpenThemeData(HWND hWnd, LPCWSTR pszClassList);

	//-----------------------------------------------------------------------
	// Summary:
	//     Closes the theme data handle.  CXTPWinThemeWrapper will do
	//     this automatically when destroyed or when OpenThemeData is
	//     called.  Your window should handle the WM_THEMECHANGED
	//     message when called followed by a call to OpenThemeData.
	//-----------------------------------------------------------------------
	void CloseThemeData();

	//-----------------------------------------------------------------------
	// Summary:
	//     Draws the theme-specified border and fill for the "iPartId"
	//     and "iStateId".  This could be based on a bitmap file, a
	//     border and fill, or other image description.
	// Parameters:
	//     hDC       - HDC to draw into
	//     iPartID   - Part number to draw
	//     iStateID  - State number (of the part) to draw
	//     pRect     - Defines the size/location of the part
	//     pClipRect - Optional clipping rect (don't draw outside it)
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT DrawThemeBackground(HDC hDC, int iPartID, int iStateID, const RECT *pRect, const RECT* pClipRect);

	//-----------------------------------------------------------------------
	// Summary:
	//     Draws the text using the theme-specified color and font for
	//     the "iPartID" and "iStateID".
	// Parameters:
	//     hDC          - HDC to draw into
	//     iPartID      - Part number to draw
	//     iStateID     - State number (of the part) to draw
	//     pszText      - Actual text to draw
	//     iCharCount   - Number of chars to draw (-1 for all)
	//     dwTextFlags  - Same as DrawText() "uFormat" param
	//     dwTextFlags2 - Additional drawing options
	//     pRect        - Defines the size/location of the part
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT DrawThemeText(HDC hDC, int iPartID, int iStateID, LPCWSTR pszText, int iCharCount, DWORD dwTextFlags, DWORD dwTextFlags2, const RECT* pRect);

	//-----------------------------------------------------------------------
	// Summary:
	//     Gets the size of the content for the theme-defined
	//     background.  This is usually the area inside the borders or
	//     Margins.
	// Parameters:
	//     hDC           - (optional) device content to be used for
	//                     drawing
	//     iPartID       - Part number to draw
	//     iStateID      - State number (of the part) to draw
	//     pBoundingRect - The outer RECT of the part being drawn
	//     pContentRect  - RECT to receive the content area
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeBackgroundContentRect(HDC hDC, int iPartID, int iStateID, const RECT *pBoundingRect, RECT* pContentRect);

	//-----------------------------------------------------------------------
	// Summary:
	//     Calculates the size/location of the theme-specified
	//     background based on the "pContentRect".
	// Parameters:
	//     hDC           - (optional) device content to be used for
	//                     drawing
	//     iPartID       - Part number to draw
	//     iStateID      - State number (of the part) to draw
	//     pContentRect  - RECT that defines the content area
	//     pExtentRect   - RECT to receive the overall size/location of
	//                     part
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeBackgroundExtent(HDC hDC, int iPartID, int iStateID, const RECT *pContentRect, RECT* pExtentRect);

	//-----------------------------------------------------------------------
	// Summary:
	//     Draws the theme-specified border and fill for the "iPartId"
	//     and "iStateId".  This could be based on a bitmap file, a
	//     border and fill, or other image description.
	// Parameters:
	//     hDC      - HDC to draw into
	//     iPartID  - Part number to draw
	//     iStateID - State number (of the part) to draw
	//     pRect    - Defines the size/location of the part
	//     pOptions - Pointer to optional parameters.
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT DrawThemeBackgroundEx(HDC hDC, int iPartID, int iStateID, const RECT *pRect, const PDTBGOPTS pOptions);

	//-----------------------------------------------------------------------
	// Summary:
	//     Similar to the DrawEdge() API, but uses part colors and is
	//     high-DPI aware
	// Parameters:
	//     hDC          - HDC to draw into
	//     iPartID      - Part number to draw.
	//     iStateID     - State number of part
	//     pDestRect    - The RECT used to draw the line(s)
	//     uEdge        - Same as DrawEdge() API
	//     uFlags       - Same as DrawEdge() API
	//     pContentRect - Receives the interior rect if (uFlags &
	//                    BF_ADJUST)
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT DrawThemeEdge(HDC hDC, int iPartID, int iStateID, const RECT *pDestRect, UINT uEdge, UINT uFlags, RECT* pContentRect);

	//-----------------------------------------------------------------------
	// Summary:
	//     Draws an image within an imagelist based on a (possible)
	//     theme-defined effect.
	// Parameters:
	//     hDC          - HDC to draw into
	//     iPartID      - Part number to draw.
	//     iStateID     - State number of part
	//     pRect        - The RECT to draw the image within
	//     himl         - Handle to IMAGELIST
	//     iImageIndex  - Index into IMAGELIST (which icon to draw)
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT DrawThemeIcon(HDC hDC, int iPartID, int iStateID, const RECT* pRect, HIMAGELIST himl, int iImageIndex);

	//-----------------------------------------------------------------------
	// Summary:
	//     Used by partially-transparent or alpha-blended child controls
	//     to draw the part of their parent that they appear in front of.
	// Parameters:
	//     hWnd  - Handle of the child control
	//     hDC   - HDC of the child control
	//     pRect - (optional) rect that defines the area to be
	//             Drawn (CHILD coordinates)
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT DrawThemeParentBackground(HWND hWnd, HDC hDC, RECT* pRect);

	//-----------------------------------------------------------------------
	// Summary:
	//     Enables/disables dialog background theme.  This method can be
	//     used to tailor dialog compatibility with child windows and
	//     controls that may or may not coordinate the rendering of
	//     their client area backgrounds with that of their parent
	//     dialog in a manner that supports seamless background
	//     texturing.
	// Parameters:
	//     hWnd    - The window handle of the target dialog
	//     dwFlags - ETDT_ENABLE to enable the theme-defined dialog
	//               background texturing,
	//               ETDT_DISABLE to disable background texturing,
	//               ETDT_ENABLETAB to enable the theme-defined
	//               background texturing using the Tab texture
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT EnableThemeDialogTexture(HWND hWnd, DWORD dwFlags);

	//-----------------------------------------------------------------------
	// Summary:
	//     Enables or disables theming for the current user in the
	//     current and future sessions.
	// Parameters:
	//     bEnable - If FALSE, disable theming & turn themes off.
	//               if TRUE, enable theming and, if user
	//               previously had a theme active, make it active
	//               now.
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT EnableTheming(BOOL bEnable);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the name of the current theme in-use.  Optionally, return
	//     the ColorScheme name and the Size name of the theme.
	// Parameters:
	//     pszThemeFileName - Receives the theme path & filename
	//     dwMaxNameChars   - Max chars allowed in pszNameBuff
	//     pszColorBuff     - (optional) receives the canonical color
	//                        scheme name
	//                        (not the display name)
	//     cchMaxColorChars - Max chars allowed in pszColorBuff
	//     pszSizeBuff      - (optional) receives the canonical size
	//                        name (not the display name)
	//     cchMaxSizeChars  - Max chars allowed in pszSizeBuff
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetCurrentThemeName(LPWSTR pszThemeFileName, int dwMaxNameChars, LPWSTR pszColorBuff, int cchMaxColorChars, LPWSTR pszSizeBuff, int cchMaxSizeChars);

	//-----------------------------------------------------------------------
	// Summary:
	//     Retrieves the property flags that control how visual styles
	//     are applied in the current application.
	// Returns:
	//     The following return values are bit flags combined with a
	//     logical OR operator.
	//     STAP_ALLOW_NONCLIENT  - Specifies that the non-client areas of
	//                             application windows have visual
	//                             styles applied.
	//     STAP_ALLOW_CONTROLS   - Specifies that controls in
	//                             application windows have visual
	//                             styles applied.
	//     STAP_ALLOW_WEBCONTENT - Specifies that all web content
	//                             displayed in an application is
	//                             rendered using visual styles.
	//-----------------------------------------------------------------------
	DWORD ThemeAppProperties();

	//-----------------------------------------------------------------------
	// Summary:
	//     Computes the region for a regular or partially transparent
	//     theme-specified background that is bound by the specified
	//     "pRect".  If the rectangle is empty, sets the hRgn to NULL
	//     and return S_FALSE.
	// Parameters:
	//     hDC      - Optional hDC to draw into (DPI scaling)
	//     iPartID  - Part number to draw.
	//     iStateID - State number (of the part)
	//     pRect    - The RECT used to draw the part
	//     pRegion  - Receives handle to calculated region
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeBackgroundRegion(HDC hDC, int iPartID, int iStateID, const RECT *pRect, HRGN* pRegion);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified BOOL property
	// Parameters:
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to get the value for
	//     pfVal    - Receives the value of the property
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeBool(int iPartID, int iStateID, int iPropID, BOOL* pfVal);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified COLOR property
	// Parameters:
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to get the value for
	//     pColor   - Receives the value of the property
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeColor(int iPartID, int iStateID, int iPropID, COLORREF* pColor);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified property name from the
	//     [documentation] section of the themes.ini file for the
	//     specified theme.  If the property has been localized in the
	//     theme files string table, the localized version of the
	//     property value is returned.
	// Parameters:
	//     pszThemeName     - Filename of the theme file to query
	//     pszPropertyName  - Name of the string property to retrieve a
	//                        value for
	//     pszValueBuff     - Receives the property string value
	//     cchMaxValChars   - Max chars allowed in pszValueBuff
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeDocumentationProperty(LPCWSTR pszThemeName, LPCWSTR pszPropertyName, LPWSTR pszValueBuff, int cchMaxValChars);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified ENUM property
	// Parameters:
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to get the value for
	//     piVal    - Receives the value of the enum (cast to int*)
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeEnumValue(int iPartID, int iStateID, int iPropID, int* piVal);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified FILENAME property.
	// Parameters:
	//     iPartID          - Part number
	//     iStateID         - State number of part
	//     iPropID          - The property number to search for
	//     pszThemeFilename - Output buffer to receive the filename
	//     cchMaxBuffChars  - The size of the return buffer, in chars
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeFilename(int iPartID, int iStateID, int iPropID, LPWSTR pszThemeFilename, int cchMaxBuffChars);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified font property
	// Parameters:
	//     hDC      - (optional) hDC to be drawn to (DPI scaling)
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to get the value for
	//     pFont    - Receives the value of the LOGFONT property
	//                (scaled for the current logical screen dpi)
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeFont(HDC hDC, int iPartID, int iStateID, int iPropID, LOGFONT* pFont);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified int property
	// Parameters:
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to get the value for
	//     piVal    - Receives the value of the property
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeInt(int iPartID, int iStateID, int iPropID, int* piVal);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified INTLIST struct
	// Parameters:
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to get the value for
	//     pIntList - Receives the value of the INTLIST property
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeIntList(int iPartID, int iStateID, int iPropID, INTLIST* pIntList);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified MARGINS property
	// Parameters:
	//     hDC      - (optional) hDC to be used for drawing
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to get the value for
	//     pRect    - RECT for area to be drawn into
	//     pMargins - Receives the value of the MARGINS property
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeMargins(HDC hDC, int iPartID, int iStateID, int iPropID, RECT *pRect, MARGINS* pMargins);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified metric/size property
	// Parameters:
	//     hDC      - (optional) hDC to be drawn into (DPI scaling)
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to get the value for
	//     piVal    - Receives the value of the property
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeMetric(HDC hDC, int iPartID, int iStateID, int iPropID, int* piVal);

	//-----------------------------------------------------------------------
	// Summary:
	//     Returns the specified size of the theme part
	// Parameters:
	//     hDC      - HDC to select font into & measure against
	//     iPartID  - Part number to retrieve size for
	//     iStateID - State number (of the part)
	//     pRect    - (optional) rect for part drawing destination
	//     eSize    - The type of size to be retrieved
	//     pSize    - Receives the specified size of the part
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemePartSize(HDC hDC, int iPartID, int iStateID, RECT *pRect, THEMESIZE eSize, SIZE* pSize);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified position property
	// Parameters:
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to get the value for
	//     pPoint   - Receives the value of the position property
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemePosition(int iPartID, int iStateID, int iPropID, POINT* pPoint);

	//-----------------------------------------------------------------------
	// Summary:
	//     Searches for the specified theme property and sets "pOrigin"
	//     to indicate where it was found (or not found)
	// Parameters:
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to search for
	//     pOrigin  - Receives the value of the property origin
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemePropertyOrigin(int iPartID, int iStateID, int iPropID, PROPERTYORIGIN* pOrigin);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified RECT property
	// Parameters:
	//     iPartID  - Part number
	//     iStateID - State number of part
	//     iPropID  - The property number to get the value for
	//     pRect    - Receives the value of the RECT property
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeRect(int iPartID, int iStateID, int iPropID, RECT* pRect);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value for the specified string property
	// Parameters:
	//     iPartID         - Part number
	//     iStateID        - State number of part
	//     iPropID         - The property number to get the value for
	//     pszBuff         - Receives the string property value
	//     cchMaxBuffChars - Max. number of chars allowed in pszBuff
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeString(int iPartID, int iStateID, int iPropID, LPWSTR pszBuff, int cchMaxBuffChars);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the boolean value of specified System metric.
	// Parameters:
	//     iBoolID - The TMT_XXX BOOL number (first BOOL is
	//               TMT_FLATMENUS)
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	BOOL GetThemeSysBool(int iBoolID);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value of the specified System color.
	// Parameters:
	//     iColorID - The system color index defined in winuser.h
	// Returns:
	//     The value of the specified system color.
	//-----------------------------------------------------------------------
	COLORREF GetThemeSysColor(int iColorID);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the brush for the specified System color.
	// Parameters:
	//     iColorID - The system color index defined in winuser.h
	// Returns:
	//     Handle to brush data.
	//-----------------------------------------------------------------------
	HBRUSH GetThemeSysColorBrush(int iColorID);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the LOGFONT for the specified System font.
	// Parameters:
	//     iFontID - The TMT_XXX font number (first font
	//               is TMT_CAPTIONFONT)
	//     pLF     - Ptr to LOGFONT to receive the font value.
	//               (scaled for the current logical screen dpi)
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeSysFont(int iFontID, LOGFONT* pLF);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value of specified System int.
	// Parameters:
	//     iIntID  - Must be one of the following values:
	//               TMT_DPIX
	//               TMT_DPIY
	//               TMT_MINCOLORDEPTH
	//     piValue - Ptr to int to receive value
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeSysInt(int iIntID, int* piValue);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value of the specified System size metric.  (scaled
	//     for the current logical screen dpi)
	// Parameters:
	//     iSizeID - The following values are supported:
	//               SM_CXBORDER   (border width)
	//               SM_CXVSCROLL  (scrollbar width)
	//               SM_CYHSCROLL  (scrollbar height)
	//               SM_CXSIZE     (caption width)
	//               SM_CYSIZE     (caption height)
	//               SM_CXSMSIZE   (small caption width)
	//               SM_CYSMSIZE   (small caption height)
	//               SM_CXMENUSIZE (menubar width)
	//               SM_CYMENUSIZE (menubar height)
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	int GetThemeSysSize(int iSizeID);

	//-----------------------------------------------------------------------
	// Summary:
	//     Get the value of specified System string metric.
	// Parameters:
	//     iStringID         - Must be one of the following values:
	//                         TMT_CSSNAME
	//                         TMT_XMLNAME
	//     pszStringBuff     - The buffer to receive the string value
	//     cchMaxStringChars - Max. number of chars that pszStringBuff
	//                         can hold
	// Returns:
	//     The size in dots per inch (DPI) scaled for the current
	//     logical screen.
	//-----------------------------------------------------------------------
	HRESULT GetThemeSysString(int iStringID, LPWSTR pszStringBuff, int cchMaxStringChars);

	//-----------------------------------------------------------------------
	// Summary:
	//     Calculates the size/location of the specified text when
	//     rendered in the Theme Font.
	// Parameters:
	//     hDC             - HDC to select font & measure into
	//     iPartID         - Part number to draw.
	//     iStateID        - State number (of the part)
	//     pszText         - The text to be measured
	//     iCharCount      - Number of chars to draw (-1 for all)
	//     dwTextFlags     - Same as DrawText() "uFormat" param
	//     pBoundingRect   - Optional: to control layout of text
	//     pExtentRect     - Receives the RECT for text size/location
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeTextExtent(HDC hDC, int iPartID, int iStateID, LPCWSTR pszText, int iCharCount, DWORD dwTextFlags, const RECT *pBoundingRect, RECT* pExtentRect);

	//-----------------------------------------------------------------------
	// Summary:
	//     Returns info about the theme-specified font for the part/
	//     state passed in.
	// Parameters:
	//     hDC      - Optional: hDC for screen context
	//     iPartID  - Part number to draw.
	//     iStateID - State number (of the part)
	//     ptm      - Receives the font info
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT GetThemeTextMetrics(HDC hDC, int iPartID, int iStateID, TEXTMETRIC* ptm);

	//-----------------------------------------------------------------------
	// Summary:
	//     If window is themed, returns its most recent HTHEME from
	//     OpenThemeData() - Otherwise, returns NULL.
	// Parameters:
	//     hWnd - The window to get the HTHEME of
	// Returns:
	//     The most recent theme handle from OpenThemeData.
	//-----------------------------------------------------------------------
	HTHEME GetWindowTheme(HWND hWnd);

	//-----------------------------------------------------------------------
	// Summary:
	//     Returns a HitTestCode (a subset of the values returned by
	//     WM_NCHITTEST) for the point "ptTest" within the theme-
	//     specified background (bound by pRect).  "pRect" and "ptTest"
	//     should both be in the same coordinate system (client, screen,
	//     etc).
	// Parameters:
	//     hDC           - HDC to draw into
	//     iPartID       - Part number to test against
	//     iStateID      - State number (of the part)
	//     pRect         - The RECT used to draw the part
	//     hRgn          - Optional region to use; must be in same
	//                     coordinates as
	//                     pRect and pTest.
	//     ptTest        - The hit point to be tested
	//     dwOptions     - HTTB_xxx constants
	//     pwHitTestCode - Receives the returned hit test code - One of:
	//                     HTNOWHERE, HTLEFT, HTTOPLEFT, HTBOTTOMLEFT,
	//                     HTRIGHT, HTTOPRIGHT, HTBOTTOMRIGHT,
	//                     HTTOP, HTBOTTOM, HTCLIENT
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT HitTestThemeBackground(HDC hDC, int iPartID, int iStateID, DWORD dwOptions, const RECT *pRect, HRGN hRgn, POINT ptTest, WORD* pwHitTestCode);

	//-----------------------------------------------------------------------
	// Summary:
	//     Reports whether the current application's user interface
	//     displays using visual styles.
	// Returns:
	//     Returns one of the following values.
	//     TRUE  - The application has a visual style applied.
	//     FALSE - The application does not have a visual style applied.
	//-----------------------------------------------------------------------
	BOOL IsAppThemed() const;

	//-----------------------------------------------------------------------
	// Summary:
	//     Can be used to test if a system theme is active for the
	//     current user session.
	//     use the API "IsAppThemed()" to test if a theme is active for
	//     the calling process.
	// Returns:
	//     Returns one of the following values:
	//     TRUE  - A visual style is enabled, and windows with visual
	//             styles applied should call OpenThemeData to start
	//             using theme drawing services.
	//     FALSE - A visual style is not enabled, and the window message
	//             handler does not need to make another call to
	//             IsThemeActive until it receives a WM_THEMECHANGED
	//             message.
	//-----------------------------------------------------------------------
	BOOL IsThemeActive() const;

	//-----------------------------------------------------------------------
	// Summary:
	//     Call this member function to determine if the application should
	//     display Windows XP themes.  IsAppThemeReady() will first check
	//     to see if the operating system supports Windows XP theme display,
	//     then checks to see if the application has any controls that are
	//     able to display Windows XP themes, then finally checks to see if
	//     the application has included a manifest file.
	// Returns:
	//     TRUE if the application can display Windows XP themes, otherwise FALSE.
	//-----------------------------------------------------------------------
	BOOL IsAppThemeReady() const;

	//-----------------------------------------------------------------------
	// Summary:
	//     Returns TRUE if the theme specified background for the part/
	//     state has transparent pieces or alpha-blended pieces.
	// Parameters:
	//     iPartID  - Part number
	//     iStateID - State number of part
	// Returns:
	//     Returns one of the following values.
	//     TRUE  - The theme-specified background for a particular
	//             iPartId and iStateId has transparent pieces or alpha-
	//             blended pieces.
	//     FALSE - The theme-specified background for a particular
	//             iPartId and iStateId does not have transparent pieces
	//             or alpha-blended pieces.
	//-----------------------------------------------------------------------
	BOOL IsThemeBackgroundPartiallyTransparent(int iPartID, int iStateID);

	//-----------------------------------------------------------------------
	// Summary:
	//     Reports whether the dialog supports background texturing.
	// Returns:
	//     Returns one of the following values.
	//     TRUE  - Background texturing is supported.
	//     FALSE - Background texturing is not supported.
	//-----------------------------------------------------------------------
	BOOL IsThemeDialogTextureEnabled();

	//-----------------------------------------------------------------------
	// Summary:
	//     Returns TRUE if the theme has defined parameters for the
	//     specified "iPartID" and "iStateID".
	// Parameters:
	//     iPartID  - Part number to find definition for
	//     iStateID - State number of part
	// Returns:
	//     Returns one of the following values.
	//     TRUE  - The theme has defined parameters for the specified
	//             iPartId and iStateId
	//     FALSE - The theme does not have defined parameters for the
	//             specified iPartId and iStateId
	//-----------------------------------------------------------------------
	BOOL IsThemePartDefined(int iPartID, int iStateID);

	//-----------------------------------------------------------------------
	// Summary:
	//     Sets the flags that control theming within the app
	// Parameters:
	//     dwFlags - The flag values to be set
	//-----------------------------------------------------------------------
	void SetThemeAppProperties(DWORD dwFlags);

	//-----------------------------------------------------------------------
	// Summary:
	//     Redirects an existing Window to use a different section of
	//     the current theme information than its class normally asks
	//     for.
	// Parameters:
	//     hWnd          - The handle of the window (cannot be NULL)
	//     pszSubAppName - App (group) name to use in place of the
	//                     calling app's name.  If NULL, the actual
	//                     calling app name will be used.
	//     pszSubIdList  - Semicolon separated list of class Id names to
	//                     use in place of actual list passed by the
	//                     window's class.  if NULL, the id list from
	//                     the calling class is used.
	// Remarks: The Theme Manager will remember the "pszSubAppName" and the
	//          "pszSubIdList" associations thru the lifetime of the window
	//          (even if themes are subsequently changed).  The window is
	//          sent a "WM_THEMECHANGED" msg at the end of this call, so that
	//          the new theme can be found and applied.
	//          When "pszSubAppName" or "pszSubIdList" are NULL, the Theme
	//          Manager removes the previously remember association.  To turn
	//          off theme-ing for the specified window, you can pass an empty
	//          string (L"") so it won't match any section entries.
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT SetWindowTheme(HWND hWnd, LPCWSTR pszSubAppName, LPCWSTR pszSubIdList);

	//-----------------------------------------------------------------------
	// Summary:
	//     Call this member function to determine if OpenThemeData() was
	//     called to open theme information for a particular window.
	// Returns:
	//     TRUE if theme information was loaded, otherwise FALSE.
	//-----------------------------------------------------------------------
	BOOL ThemeDataOpen() const;

	//-----------------------------------------------------------------------
	// Summary:
	//     Retrieves the property flags that control how visual styles are applied in the current application.
	//-----------------------------------------------------------------------
	DWORD GetThemeAppProperties();


//{{AFX_CODEJOCK_PRIVATE
	static BOOL m_bDllDetached;

	//for compatibility with older versions.
	void CloseTheme() {
		CloseThemeData();
	}
	void OpenTheme(HWND hWnd, LPCWSTR pszClassList) {
		OpenThemeData(hWnd, pszClassList);
	}
	void DrawBackground(HDC hdc, int iPartId, int iStateId, const RECT *pRect,  const RECT* pClipRect) {
		DrawThemeBackground(hdc, iPartId, iStateId, pRect, pClipRect);
	}
//}}AFX_CODEJOCK_PRIVATE

	//-----------------------------------------------------------------------
	// Summary:
	//     Begins a buffered paint operation
	// Parameters:
	//     hdcTarget - Handle of the target device context (DC) on which the buffer will be painted.
	//     prcTarget - Pointer to a RECT structure that specifies the area of the target DC in which to paint.
	//     dwFormat - A member of the BP_BUFFERFORMAT enumeration that specifies the format of the buffer.
	//     pPaintParams - [in] Pointer to a BP_PAINTPARAMS structure that defines the paint operation parameters. This value can be NULL.
	//     phdc - [out] When this function returns, this value points to the handle of the new device context.
	// Returns: A handle to the buffered paint context
	// See Also: EndBufferedPaint
	//-----------------------------------------------------------------------
	HPAINTBUFFER BeginBufferedPaint(HDC hdcTarget, const RECT* prcTarget, XTP_UX_BUFFERFORMAT dwFormat, XTP_UX_PAINTPARAMS *pPaintParams, HDC *phdc);

	//-----------------------------------------------------------------------
	// Summary:
	//     Completes a buffered paint operation and frees the associated buffered paint handle
	// Parameters:
	//     hBufferedPaint - Handle of the buffered paint context, obtained through BeginBufferedPaint
	//     fUpdateTarget - TRUE to copy the buffer to the target device context (DC)
	// See Also: BeginBufferedPaint
	//-----------------------------------------------------------------------
	void EndBufferedPaint(HPAINTBUFFER hBufferedPaint, BOOL fUpdateTarget);

	//-----------------------------------------------------------------------
	// Summary:
	//     Draws the text using the theme-specified color and font for
	//     the "iPartID" and "iStateID".
	// Parameters:
	//     hDC          - HDC to draw into
	//     iPartId      - Part number to draw
	//     iStateId     - State number (of the part) to draw
	//     pszText      - Actual text to draw
	//     cchText      - Number of chars to draw (-1 for all)
	//     dwTextFlags  - Same as DrawText() "uFormat" param
	//     pOptions     - Additional drawing options
	//     pRect        - Defines the size/location of the part
	// Returns:
	//     Returns S_OK if successful, or an error value otherwise.
	//-----------------------------------------------------------------------
	HRESULT DrawThemeTextEx(HDC hdc, int iPartId, int iStateId, LPCWSTR pszText, int cchText, DWORD dwTextFlags, LPRECT pRect, const XTP_UX_DTTOPTS *pOptions);

	//-----------------------------------------------------------------------
	// Parameters:
	//     nThemeWrapper - Wrapper id.
	//     lpWrapperPtr  - Wrapper pointer
	// Summary:
	//     This method is used to set user defined wrappers
	//-----------------------------------------------------------------------
	void SetThemeWrapperPtr(int nThemeWrapper, LPVOID lpWrapperPtr);

private:
	void ReloadLibrary() const;

private:
	HTHEME  m_hTheme;     // Handle to the theme data.
	CSharedData& GetSharedData() const;
};

//{{AFX_CODEJOCK_PRIVATE

struct XTP_DWM_MARGINS
{
	int cxLeftWidth;      // width of left border that retains its size
	int cxRightWidth;     // width of right border that retains its size
	int cyTopHeight;      // height of top border that retains its size
	int cyBottomHeight;   // height of bottom border that retains its size
};

TYPEDEF_WRAPPER_POINTER(0, HRESULT, DwmDefWindowProc)(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, LRESULT *plResult);
TYPEDEF_WRAPPER_POINTER(1, HRESULT, DwmIsCompositionEnabled)( BOOL*);
TYPEDEF_WRAPPER_POINTER(2, HRESULT, DwmExtendFrameIntoClientArea)(HWND, const XTP_DWM_MARGINS*);

//===========================================================================
// Summary:
//     The CXTPWinDwmWrapper class wraps the dwp api.
//===========================================================================
class _XTP_EXT_CLASS CXTPWinDwmWrapper
{
private:
	//-----------------------------------------------------------------------
	// Summary:
	//     Shared data of wrappers
	//-----------------------------------------------------------------------
	class CSharedData
	{
	public:

		//-------------------------------------------------------------------------
		// Summary:
		//     Constructs a CSharedData object.
		//-------------------------------------------------------------------------
		CSharedData();

	public:
		LPVOID m_ptrWrappers[3];   // Wrapper pointer
		HMODULE m_hDwmDll;        // Handle to the theme dll.
	};

public:

	CXTPWinDwmWrapper();
	~CXTPWinDwmWrapper();

public:

	HRESULT DefWindowProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam, LRESULT *plResult);
	BOOL IsCompositionEnabled();
	HRESULT ExtendFrameIntoClientArea(HWND hWnd, int cxLeftWidth, int cyTopHeight, int cxRightWidth, int cyBottomHeight);

public:
	void LogicalToPhysicalPoint(HWND hWnd, LPPOINT lpPoint);
	void SetProcessDPIAware();

private:
	CSharedData& GetSharedData() const;
};

//}}AFX_CODEJOCK_PRIVATE

/////////////////////////////////////////////////////////////////////////////

#endif // !defined(__XTPWINTHEMEWRAPPER_H__)

#include "Common/XTPDrawHelpers.h"
#include "Common/XTPImageManager.h"
#include "Common/XTMaskEditT.h"
#include "Common/XTPPropExchange.h"
#include "Common/XTPToolTipContext.h"
#include "Common/XTPOffice2007Image.h"
#include "Common/XTPNotifyConnection.h"
#include "Common/XTPSmartPtrInternalT.h"

#endif // !defined(__XTPCOMMONINCLUDES_H__)

#endif

#if !defined(_XTP_EXCLUDE_TABMANAGER)
#include "TabManager/Includes.h"      // _XTP_INCLUDE_TABMANAGER
#endif

#if !defined(_XTP_EXCLUDE_GRAPHICLIBRARY)
#include "GraphicLibrary/Includes.h"  // _XTP_INCLUDE_GRAPHICLIBRARY
#endif

#if !defined(_XTP_EXCLUDE_CONTROLS)
#include "Controls/Includes.h"        // _XTP_INCLUDE_CONTROLS
#endif

#if !defined(_XTP_EXCLUDE_COMMANDBARS)
#include "CommandBars/Includes.h"     // _XTP_INCLUDE_COMMANDBARS
#endif

#if !defined(_XTP_EXCLUDE_DOCKINGPANE)
#include "DockingPane/Includes.h"     // _XTP_INCLUDE_DOCKINGPANE
#endif

#if !defined(_XTP_EXCLUDE_PROPERTYGRID)
#include "PropertyGrid/Includes.h"    // _XTP_INCLUDE_PROPERTYGRID
#endif

#if !defined(_XTP_EXCLUDE_REPORTCONTROL)
#include "ReportControl/Includes.h"   // _XTP_INCLUDE_REPORTCONTROL
#endif

#if !defined(_XTP_EXCLUDE_CALENDAR)
#include "Calendar/Includes.h"        // _XTP_INCLUDE_CALENDAR
#endif

#if !defined(_XTP_EXCLUDE_TASKPANEL)
#include "TaskPanel/Includes.h"       // _XTP_INCLUDE_TASKPANEL
#endif

#if !defined(_XTP_EXCLUDE_SHORTCUTBAR)
#include "ShortcutBar/Includes.h"     // _XTP_INCLUDE_SHORTCUTBAR
#endif

#if !defined(_XTP_EXCLUDE_SKINFRAMEWORK)
#include "SkinFramework/Includes.h"   // _XTP_INCLUDE_SKINFRAMEWORK
#endif

#if !defined(_XTP_EXCLUDE_RIBBON)
#include "Ribbon/Includes.h"          // _XTP_INCLUDE_RIBBON
#endif

#if !defined(_XTP_EXCLUDE_SYNTAXEDIT)
#include "SyntaxEdit/Includes.h"      // _XTP_INCLUDE_SYNTAXEDIT
#endif

#define _XTPLIB_FILE_VERSION_STRING_(x) #x
#define _XTPLIB_FILE_VERSION_STRING(x) _XTPLIB_FILE_VERSION_STRING_(x)

#if !defined(_XTP_DEMOMODE) && !defined(_XTP_RETAIL)
#define _XTPLIB_VISUALSTUIDO_VERSION ""
#else
#if _MSC_VER < 1200
#define _XTPLIB_VISUALSTUIDO_VERSION "vc50"
#endif
#if _MSC_VER == 1200
#define _XTPLIB_VISUALSTUIDO_VERSION "vc60"
#endif
#if _MSC_VER == 1300
#define _XTPLIB_VISUALSTUIDO_VERSION "vc70"
#endif
#if _MSC_VER == 1310
#define _XTPLIB_VISUALSTUIDO_VERSION "vc71"
#endif
#if _MSC_VER == 1400
#define _XTPLIB_VISUALSTUIDO_VERSION "vc80"
#endif
#if _MSC_VER == 1500
#define _XTPLIB_VISUALSTUIDO_VERSION "vc90"
#endif


#ifndef _XTPLIB_VISUALSTUIDO_VERSION
#error "Unknown Visual Studio version"
#endif
#endif

#define _XTPLIB_FILE_VERSION _XTPLIB_FILE_VERSION_STRING(_XTPLIB_VERSION_PREFIX)


//------------------------------------------------------
// Xtreme link to the appropriate dll or static library:
//------------------------------------------------------
#if defined(_AFXDLL) && defined(_XTP_STATICLINK)
	#if defined(_DEBUG)
		#if defined(_UNICODE)
			#define _XTPLIB_PROJECT_CONFIGURATION "DSUD"
		#else
			#define _XTPLIB_PROJECT_CONFIGURATION "DSD"
		#endif // _UNICODE
	#else
		#if defined(_UNICODE)
			#define _XTPLIB_PROJECT_CONFIGURATION "DSU"
		#else
			#define _XTPLIB_PROJECT_CONFIGURATION "DS"
		#endif // _UNICODE
	#endif // _DEBUG
	#define _XTPLIB_LINK_TYPE   "lib"
	#define _XTPLIB_LINK_IS_DLL 0
#elif !defined(_AFXDLL)
	#if defined(_DEBUG)
		#if defined(_UNICODE)
			#define _XTPLIB_PROJECT_CONFIGURATION "SUD"
		#else
			#define _XTPLIB_PROJECT_CONFIGURATION "SD"
		#endif // _UNICODE
	#else
		#if defined(_UNICODE)
			#define _XTPLIB_PROJECT_CONFIGURATION "SU"
		#else
			#define _XTPLIB_PROJECT_CONFIGURATION "S"
		#endif // _UNICODE
	#endif // _DEBUG
	#define _XTPLIB_LINK_TYPE   "lib"
	#define _XTPLIB_LINK_IS_DLL 0
#else
	#if defined(_DEBUG)
		#if defined(_UNICODE)
			#define _XTPLIB_PROJECT_CONFIGURATION "UD"
		#else
			#define _XTPLIB_PROJECT_CONFIGURATION "D"
		#endif // _UNICODE
	#else
		#if defined(_UNICODE)
			#define _XTPLIB_PROJECT_CONFIGURATION "U"
		#else
			#define _XTPLIB_PROJECT_CONFIGURATION ""
		#endif // _UNICODE
	#endif // _DEBUG
	#define _XTPLIB_LINK_TYPE   "dll"
	#define _XTPLIB_LINK_IS_DLL 1
#endif // !defined(_AFXDLL) || defined(_XTP_STATICLINK)

#if (_XTPLIB_LINK_IS_DLL == 0) && defined(_XTP_DEMOMODE)
	#pragma message(" ")
	#pragma message("----------------------------------------------------------------------------------------------")
	#pragma message(" The evaluation version of the toolkit only supports DLL configurations.")
	#pragma message(" To purchase the full version (with static link support) please visit http://www.codejock.com")
	#pragma message("----------------------------------------------------------------------------------------------")
	#pragma message(" ")
	#error This build configuration is not supported by the evaluation library
#endif

#if !(defined(_DEBUG)) && defined(_XTP_DEMOMODE)
	#pragma message(" ")
	#pragma message("----------------------------------------------------------------------------------------------")
	#pragma message(" The evaluation version of the toolkit only supports DEBUG configurations.")
	#pragma message(" To purchase the full version (with static link support) please visit http://www.codejock.com")
	#pragma message("----------------------------------------------------------------------------------------------")
	#pragma message(" ")
	#error This build configuration is not supported by the evaluation library
#endif


#if defined(_XTP_DEMOMODE)
	#define _XTPLIB_PROJECT_EVAL "Eval"
#else
	#define _XTPLIB_PROJECT_EVAL ""
#endif

#if defined(_WIN64)
	#define _XTPLIB_PLATFORM "x64"
#else
	#define _XTPLIB_PLATFORM ""
#endif

#ifndef _XTPLIB_NOAUTOLINK
	#pragma comment(lib, "ToolkitPro" _XTPLIB_PROJECT_EVAL _XTPLIB_FILE_VERSION _XTPLIB_VISUALSTUIDO_VERSION _XTPLIB_PLATFORM _XTPLIB_PROJECT_CONFIGURATION ".lib")
	#pragma message("Automatically linking with ToolkitPro" _XTPLIB_PROJECT_EVAL _XTPLIB_FILE_VERSION _XTPLIB_VISUALSTUIDO_VERSION _XTPLIB_PLATFORM _XTPLIB_PROJECT_CONFIGURATION "." _XTPLIB_LINK_TYPE)
#endif //_XTPLIB_NOAUTOLINK

#if !defined(_AFXDLL) && !defined(_XTPLIB_NOAUTOLIBIGNORE)
#ifdef _DEBUG
	#pragma comment(linker, "/NODEFAULTLIB:libcd.lib")
#else
	#pragma comment(linker, "/NODEFAULTLIB:libc.lib")
#endif
#endif

#undef _XTPLIB_FILE_VERSION
#undef _XTPLIB_PROJECT_CONFIGURATION
#undef _XTPLIB_PROJECT_EVAL
#undef _XTPLIB_LINK_TYPE
#undef _XTPLIB_LINK_IS_DLL

#if (_MSC_VER > 1100)
#pragma pack(pop)
#pragma warning(pop)
#endif

/////////////////////////////////////////////////////////////////////////////

#include "DockingPane/Resource.h"

#include "Common/XTPResourceManager.h"
#include "Common/XTPVC80Helpers.h"
#include "Common/XTPDrawHelpers.h"
#include "Common/XTPToolTipContext.h"
#include "TabManager/XTPTabManager.h"

#include "DockingPane/XTPDockingPaneTabbedContainer.h"
#include "DockingPane/XTPDockingPane.h"
#include "DockingPane/XTPDockingPaneContext.h"
#include "DockingPane/XTPDockingPaneManager.h"
#include "DockingPane/XTPDockingPanePaintManager.h"
#include "DockingPane/XTPDockingPaneLayout.h"
#include "DockingPane/XTPDockingPaneAutoHidePanel.h"
#include "DockingPane/XTPDockingPaneMiniWnd.h"
#include "DockingPane/XTPDockingPaneSplitterContainer.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


//////////////////////////////////////////////////////////////////////////
// CTabManagerDropTarget

class CXTPDockingPaneTabbedContainer::CContainerDropTarget : public COleDropTarget
{
	virtual DROPEFFECT OnDragOver(CWnd* pWnd, COleDataObject* /*pDataObject*/, DWORD /*dwKeyState*/, CPoint point)
	{
		CXTPDockingPaneTabbedContainer* pControl = (CXTPDockingPaneTabbedContainer*)pWnd;
		ASSERT_VALID(pControl);

		if (!pControl->GetPaintManager()->m_bSelectOnDragOver)
			return DROPEFFECT_NONE;

		CXTPTabManagerItem* pItem = pControl->CXTPTabManager::HitTest(point);

		if (pItem)
		{
			CXTPDockingPane* pPane = pControl->GetItemPane(pItem->GetIndex());
			if (pControl->GetSelected() != pPane)
			{
				pControl->SelectPane(pPane, FALSE, FALSE);
			}
		}

		return DROPEFFECT_NONE;
	}
};

// CXTPDockingPaneTabbedContainer

void CXTPDockingPaneTabbedContainer::RedrawControl(LPCRECT lpRect, BOOL /*bAnimate*/)
{
	if (!m_bLockReposition)
	{
		if (GetSafeHwnd()) InvalidateRect(lpRect, FALSE);
	}
}
void CXTPDockingPaneTabbedContainer::Reposition()
{
	if (!m_bLockReposition)
	{
		GetDockingPaneManager()->RedrawPanes();
	}

}
CXTPTabPaintManager* CXTPDockingPaneTabbedContainer::GetPaintManager() const
{
	return CXTPDockingPaneBase::GetPaintManager()->GetTabPaintManager();
}

void CXTPDockingPaneTabbedContainer::SetPaintManager(CXTPTabPaintManager* /*pPaintManager*/)
{

}

BOOL CXTPDockingPaneTabbedContainer::DrawIcon(CDC* pDC, CPoint pt, CXTPTabManagerItem* pItem, BOOL bDraw, CSize& szIcon) const
{
	if (!pItem)
		return TRUE;

	if (!CXTPDockingPaneBase::GetPaintManager()->GetTabPaintManager()->m_bShowIcons)
		return FALSE;

	CXTPImageManagerIcon* pImage = ((CXTPDockingPane*)pItem->GetData())->GetIcon(szIcon.cx);

	if (!pImage)
		return FALSE;

	if (!bDraw)
	{
		return TRUE;
	}

	pItem->DrawImage(pDC, CRect(pt, szIcon), pImage);

	return TRUE;
}



IMPLEMENT_DYNAMIC(CXTPDockingPaneTabbedContainer, CWnd)

CXTPDockingPaneTabbedContainer::CXTPDockingPaneTabbedContainer(CXTPDockingPaneLayout* pLayout)
	: CXTPDockingPaneBaseContainer(xtpPaneTypeTabbedContainer, pLayout)
{

	m_pSelectedPane = 0;
	m_pTrackingPane = 0;

	m_bLockReposition = FALSE;

	m_bActive = FALSE;
	m_bTitleVisible = TRUE;
	m_bDelayRedraw = FALSE;

	m_pCaptionButtons = new CXTPDockingPaneCaptionButtons();
	m_pCaptionButtons->Add(new CXTPDockingPaneCaptionButton(XTP_IDS_DOCKINGPANE_CLOSE, this));
	m_pCaptionButtons->Add(new CXTPDockingPaneCaptionButton(XTP_IDS_DOCKINGPANE_MAXIMIZE, this));
	m_pCaptionButtons->Add(new CXTPDockingPaneCaptionButton(XTP_IDS_DOCKINGPANE_RESTORE, this));
	m_pCaptionButtons->Add(new CXTPDockingPaneCaptionButton(XTP_IDS_DOCKINGPANE_AUTOHIDE, this));
	m_pCaptionButtons->Add(new CXTPDockingPaneCaptionButton(XTP_IDS_DOCKINGPANE_MENU, this));

	m_pDropTarget = new CContainerDropTarget();
	m_bMaximized = FALSE;

	EnableAutomation();

}

CXTPDockingPaneCaptionButton* CXTPDockingPaneTabbedContainer::GetCloseButton() const
{
	return FindCaptionButton(XTP_IDS_DOCKINGPANE_CLOSE);
}
CXTPDockingPaneCaptionButton* CXTPDockingPaneTabbedContainer::GetPinButton() const
{
	return FindCaptionButton(XTP_IDS_DOCKINGPANE_AUTOHIDE);
}


void CXTPDockingPaneTabbedContainer::Init(CXTPDockingPane* pPane, CWnd* pFrame)
{
	ASSERT(pPane);
	if (!pPane)
		return;

	m_pDockingSite = pFrame;
	m_szDocking = pPane->m_szDocking;
	m_rcWindow = pPane->m_rcWindow;

	_InsertPane(pPane);
	SelectPane(pPane);
}

CXTPDockingPaneTabbedContainer::~CXTPDockingPaneTabbedContainer()
{
	if (m_hWnd) DestroyWindow();

	delete m_pDropTarget;
}

void CXTPDockingPaneTabbedContainer::SetDockingSite(CWnd* pFrame)
{
	m_pDockingSite = pFrame;

	if (m_hWnd)
	{
		if (GetParent() != pFrame) CWnd::SetParent(pFrame);
	}

	POSITION pos = GetHeadPosition();
	while (pos)
	{
		CXTPDockingPane* pPane = (CXTPDockingPane*)GetNext(pos);
		pPane->SetDockingSite(pFrame);
	}

}

BOOL CXTPDockingPaneTabbedContainer::IsTabsVisible() const
{
	return m_hWnd && !DYNAMIC_DOWNCAST(CXTPDockingPaneAutoHideWnd, GetParent())
		&& (GetItemCount() > 1 || CXTPDockingPaneBase::GetPaintManager()->m_bDrawSingleTab);
}

void CXTPDockingPaneTabbedContainer::InvalidatePane(BOOL bSelectionChanged)
{
	if (!GetSafeHwnd())
		return;

	if (m_pParentContainer == 0)
		return;

	if (m_bLockReposition)
		return;

	m_bLockReposition += 1;
	OnTabsChanged();
	m_bLockReposition -= 1;

	CRect rect = m_rcWindow;
	CXTPDockingPaneBase::GetPaintManager()->AdjustClientRect(this, rect, TRUE);

	if (bSelectionChanged)
	{
		POSITION pos = GetHeadPosition();
		while (pos)
		{
			CXTPDockingPane* pPane = (CXTPDockingPane*)GetNext(pos);
			pPane->ShowWindow(m_pSelectedPane == pPane);
			pPane->OnSizeParent(m_pDockingSite, rect, 0);
		}
	}
	Invalidate(FALSE);

	m_pParentContainer->InvalidatePane(bSelectionChanged);
}

void CXTPDockingPaneTabbedContainer::OnSizeParent(CWnd* pParent, CRect rect, LPVOID lParam)
{
	AFX_SIZEPARENTPARAMS* lpLayout = (AFX_SIZEPARENTPARAMS*)lParam;

	ASSERT(!IsEmpty());

	SetDockingSite(pParent);
	m_rcWindow = rect;

	if (lpLayout == 0 || lpLayout->hDWP != NULL)
	{
		CRect rectOld;
		::GetWindowRect(m_hWnd, rectOld);
		HWND hWndParent = ::GetParent(m_hWnd);
		::ScreenToClient(hWndParent, &rectOld.TopLeft());
		::ScreenToClient(hWndParent, &rectOld.BottomRight());
		if (rectOld != rect || m_bDelayRedraw)
		{
			SetWindowPos(&CWnd::wndBottom, rect.left, rect.top, rect.Width(), rect.Height(), 0);
			Invalidate(FALSE);
			m_bDelayRedraw = FALSE;
		}

		m_bLockReposition += 1;
		OnTabsChanged();
		m_bLockReposition -= 1;

		GetPinButton()->SetState(IsHidden() ? xtpPanePinVisible | xtpPanePinPushed: DYNAMIC_DOWNCAST(CXTPDockingPaneMiniWnd, pParent) == 0 ? xtpPanePinVisible : 0);

		CXTPDockingPaneBase::GetPaintManager()->AdjustClientRect(this, rect, TRUE);

		POSITION pos = GetHeadPosition();
		while (pos)
		{
			CXTPDockingPane* pPane = (CXTPDockingPane*)GetNext(pos);
			pPane->ShowWindow(m_pSelectedPane == pPane);
			pPane->OnSizeParent(pParent, rect, lParam);
		}

	}
}



void CXTPDockingPaneTabbedContainer::OnTabsChanged()
{
	if (!m_hWnd)
		return;

	m_bLockReposition += 1;

	DeleteAllItems();

	POSITION pos = GetHeadPosition();
	while (pos)
	{
		CXTPDockingPane* pPane = (CXTPDockingPane*)GetNext(pos);

		CXTPTabManagerItem* pItem = AddItem(GetItemCount());
		if (m_pSelectedPane == pPane) SetSelectedItem(pItem);

		pItem->SetCaption(pPane->GetShortTitle());
		pItem->SetColor(pPane->GetItemColor());
		pItem->SetTooltip(pPane->GetTitle());
		pItem->SetEnabled(pPane->GetEnabled() & xtpPaneEnableClient);

		pItem->SetData((DWORD_PTR)pPane);
	}
	//////////////////////////////////////////////////////////////////////////

	m_pCaptionButtons->CheckForMouseOver(CPoint(-1, -1));

	m_bLockReposition -= 1;
}

void CXTPDockingPaneTabbedContainer::CreateContainer()
{
	SAFE_CALLPTR(m_pParentContainer, CreateContainer());

	if (!m_hWnd)
	{
		Create(_T("XTPDockingPaneTabbedContainer"), _T(""), WS_CLIPCHILDREN | WS_CLIPSIBLINGS | WS_CHILD | WS_VISIBLE, CRect(0, 0, 0, 0), GetDockingSite(), 0);
		m_pDropTarget->Register(this);
	}
}

void CXTPDockingPaneTabbedContainer::_InsertPane(CXTPDockingPane* pPane, BOOL bSetFocus)
{
	ASSERT(m_pLayout);
	if (!m_pLayout)
		return;

	if (!m_hWnd && !m_pLayout->IsUserLayout())
	{
		CreateContainer();
	}

	m_lstPanes.AddTail(pPane);

	pPane->SetParentContainer(this);
	pPane->SetDockingSite(GetDockingSite());

	m_bDelayRedraw = TRUE;
	GetDockingPaneManager()->RecalcFrameLayout(this, TRUE);

	SelectPane(pPane, bSetFocus);

	SAFE_CALLPTR(m_pParentContainer, OnChildContainerChanged(this));

}

void CXTPDockingPaneTabbedContainer::RemovePane(CXTPDockingPaneBase* pPane)
{
	ASSERT(pPane->GetContainer() == this);

	POSITION pos = m_lstPanes.Find((CXTPDockingPane*)pPane);
	ASSERT(pos);

	m_lstPanes.RemoveAt(pos);
	OnTabsChanged();

	pPane->SetParentContainer(NULL);

	m_pParentContainer->OnChildContainerChanged(this);

	if (m_lstPanes.IsEmpty())
	{
		if (m_bActive)
		{
			m_bActive = FALSE;
			GetDockingPaneManager()->OnActivatePane(FALSE, m_pSelectedPane);
		}
		DestroyWindow();
	}

	m_bDelayRedraw = TRUE;
	GetDockingPaneManager()->RecalcFrameLayout(this, TRUE);

	if (pPane == m_pSelectedPane)
	{
		SelectPane((CXTPDockingPane*)GetLastPane());
	}
}


BEGIN_MESSAGE_MAP(CXTPDockingPaneTabbedContainer, CWnd)
	ON_WM_PAINT()
	ON_MESSAGE(WM_PRINTCLIENT, OnPrintClient)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_CAPTURECHANGED()
	ON_WM_LBUTTONDBLCLK()
	ON_MESSAGE_VOID(WM_MOUSELEAVE, OnMouseLeave)
	ON_MESSAGE(WM_HELPHITTEST, OnHelpHitTest)
	ON_WM_DESTROY()
	ON_WM_SETCURSOR()
	ON_MESSAGE(WM_GETOBJECT, OnGetObject)
END_MESSAGE_MAP()



// CXTPDockingPaneTabbedContainer message handlers

void CXTPDockingPaneTabbedContainer::OnDestroy()
{
	CWnd::OnDestroy();
}

void CXTPDockingPaneTabbedContainer::DeletePane()
{
	InternalRelease();
}

void CXTPDockingPaneTabbedContainer::OnFinalRelease()
{
	if (m_hWnd != NULL)
		DestroyWindow();

	CCmdTarget::OnFinalRelease();
}

BOOL CXTPDockingPaneTabbedContainer::OnSetCursor(CWnd* pWnd, UINT nHitTest, UINT message)
{
	if (GetDockingPaneManager()->m_bShowSizeCursorWhileDragging)
	{
		POINT pt;
		GetCursorPos(&pt);
		ScreenToClient(&pt);

		if (CXTPDockingPaneBase::GetPaintManager()->GetCaptionGripperRect(this).PtInRect(pt))
		{
			SetCursor(AfxGetApp()->LoadStandardCursor(IDC_SIZEALL));
			return TRUE;
		}

	}

	return CWnd::OnSetCursor(pWnd, nHitTest, message);
}


LRESULT CXTPDockingPaneTabbedContainer::OnPrintClient(WPARAM wParam, LPARAM /*lParam*/)
{
	CDC* pDC = CDC::FromHandle((HDC)wParam);
	if (pDC)
	{
		CXTPClientRect rc(this);
		CXTPDockingPaneBase::GetPaintManager()->DrawPane(*pDC, this, rc);
	}

	return TRUE;
}

void CXTPDockingPaneTabbedContainer::OnPaint()
{
	CPaintDC dcPaint(this);
	CXTPClientRect rc(this);
	CXTPBufferDC dc(dcPaint);

	CXTPDockingPaneBase::GetPaintManager()->DrawPane(dc, this, rc);
}


void CXTPDockingPaneTabbedContainer::ShowTitle(BOOL bShow)
{
	m_bTitleVisible = bShow;

	m_bDelayRedraw = TRUE;
	GetDockingPaneManager()->RecalcFrameLayout(this, TRUE);
}

BOOL CXTPDockingPaneTabbedContainer::IsTitleVisible() const
{
	return m_bTitleVisible &&
		(m_pSelectedPane && ((m_pSelectedPane->GetOptions() & xtpPaneNoCaption) == 0)) &&
		CXTPDockingPaneBase::GetPaintManager()->m_bShowCaption;
}


CString CXTPDockingPaneTabbedContainer::GetTitle() const
{
	return m_pSelectedPane ? m_pSelectedPane->GetTitle() : _T("");
}

void CXTPDockingPaneTabbedContainer::OnFocusChanged()
{
	if (!GetSafeHwnd() || IsEmpty())
		return;

	CWnd* pFocus = GetFocus();
	BOOL bActive = (pFocus->GetSafeHwnd() && (pFocus == this || IsChild(pFocus) ||
		(pFocus->GetOwner()->GetSafeHwnd() && IsChild(pFocus->GetOwner()))));

	if (bActive != m_bActive)
	{
		m_bActive = bActive;

		GetDockingPaneManager()->OnActivatePane(bActive, m_pSelectedPane);

		Invalidate(FALSE);
	}
	else if (m_bActive && GetDockingPaneManager()->GetActivePane() != m_pSelectedPane)
	{
		GetDockingPaneManager()->OnActivatePane(bActive, m_pSelectedPane);
	}
}

#define DOCKINGPANE_HITCAPTION -2

int CXTPDockingPaneTabbedContainer::HitTest(CPoint point) const
{
	CXTPClientRect rc(this);

	if (IsTitleVisible())
	{
		if (rc.PtInRect(point))
		{
			CXTPDockingPaneBase::GetPaintManager()->AdjustCaptionRect(this, rc);
			if (!rc.PtInRect(point))
			{
				return DOCKINGPANE_HITCAPTION;
			}
		}
	}

	if (IsTabsVisible())
	{
		CXTPTabManagerItem* pItem = CXTPTabManager::HitTest(point);
		return pItem ? pItem->GetIndex() : -1;
	}
	return -1;
}

CXTPTabManagerItem* CXTPDockingPaneTabbedContainer::GetPaneTab(CXTPDockingPane* pPane) const
{
	for (int i = 0; i < GetItemCount(); i++)
	{
		if (GetItemPane(i) == pPane)
			return GetItem(i);
	}
	return NULL;
}

void CXTPDockingPaneTabbedContainer::SelectPane(CXTPDockingPane* pPane, BOOL bSetFocus, BOOL bDelayRedraw)
{
	if (m_pSelectedPane != pPane)
	{
		m_pSelectedPane = pPane;

		if (bDelayRedraw)
		{
			m_bDelayRedraw = TRUE;
			GetDockingPaneManager()->RecalcFrameLayout(this, TRUE);
			SAFE_CALLPTR(m_pParentContainer, OnChildContainerChanged(this));
		}
		else
		{
			InvalidatePane(TRUE);
		}

		CXTPTabManager::EnsureVisible(GetPaneTab(m_pSelectedPane));
	}

	if (bSetFocus)
	{
		if (m_bActive) GetDockingPaneManager()->OnActivatePane(TRUE, m_pSelectedPane);
		SAFE_CALLPTR(pPane, SetFocus());
	}

}

void CXTPDockingPaneTabbedContainer::OnRButtonDown(UINT /*nFlags*/, CPoint point)
{
	int nHit = HitTest(point);
	if (nHit >= 0)
	{
		SelectPane(GetItemPane(nHit));
		GetDockingPaneManager()->RecalcFrameLayout(this);
	}

	if (m_pSelectedPane)
		m_pSelectedPane->SetFocus();
	else
		SetFocus();

	GetDockingPaneManager()->UpdatePanes();

	GetDockingPaneManager()->NotifyOwner(XTP_DPN_RCLICK, (LPARAM)(CXTPDockingPaneBase*)this);
}

void CXTPDockingPaneTabbedContainer::OnCaptionLButtonDown(CPoint point)
{
	_RestoreFocus();

	if (GetKeyState(VK_LBUTTON) < 0)
	{
		if (GetDockingPaneManager()->_OnAction(xtpPaneActionDragging, m_pSelectedPane))
			return;

		CXTPDockingPaneContext* pContext = GetDockingPaneManager()->GetDockingContext();
		pContext->Drag(this, point);
	}
}


void CXTPDockingPaneTabbedContainer::NormalizeDockingSize()
{
	XTPDockingPaneDirection direction = GetDockingPaneManager()->GetPaneDirection(this);
	BOOL bHoriz = (direction == xtpPaneDockLeft) || (direction == xtpPaneDockRight);

	if (bHoriz) m_szDocking.cx = m_rcWindow.Width();
	else m_szDocking.cy = m_rcWindow.Height();

	POSITION pos = GetHeadPosition();
	while (pos)
	{
		CXTPDockingPaneBase* pPane = GetNext(pos);
		if (!pPane->IsEmpty())
		{
			if (bHoriz) pPane->m_szDocking.cx = m_szDocking.cx;
			else pPane->m_szDocking.cy = m_szDocking.cy;
		}
	}
}

void CXTPDockingPaneTabbedContainer::OnCaptionButtonClick(CXTPDockingPaneCaptionButton* pButton)
{
	CXTPDockingPane* pSelectedPane = m_pSelectedPane;

	CXTPDockingPaneManager* pManager = GetDockingPaneManager();

	switch (pButton->GetID())
	{
	case XTP_IDS_DOCKINGPANE_CLOSE:

		if (pManager->m_bCloseGroupOnButtonClick)
		{
			POSITION pos = m_lstPanes.GetTailPosition();
			while (pos)
			{
				CXTPDockingPane* pPane = (CXTPDockingPane*)m_lstPanes.GetPrev(pos);

				if ((pPane->GetOptions() & xtpPaneNoCloseable) != 0)
					continue;

				pPane->InternalAddRef();

				if (!pManager->_OnAction(xtpPaneActionClosing, pPane))
				{
					pPane->Close();
					pManager->_OnAction(xtpPaneActionClosed, pPane);
				}

				pPane->InternalRelease();
			}

		}
		else if (pSelectedPane)
		{
			pSelectedPane->InternalAddRef();
			if (!pManager->_OnAction(xtpPaneActionClosing, pSelectedPane))
			{
				pSelectedPane->Close();
				pManager->_OnAction(xtpPaneActionClosed, pSelectedPane);
			}
			pSelectedPane->InternalRelease();
		}
		break;


	case XTP_IDS_DOCKINGPANE_AUTOHIDE:

		if (!IsHidden())
		{
			if (!pManager->_OnAction(xtpPaneActionUnpinning, pSelectedPane))
			{
				GetDockingSite()->SetFocus();
				NormalizeDockingSize();
				pSelectedPane->Hide();
				pManager->_OnAction(xtpPaneActionUnpinned, pSelectedPane);
			}

		}
		else
		{
			GetDockingPaneManager()->ToggleDocking(pManager->m_bHideGroupOnButtonClick ?
				(CXTPDockingPaneBase*)this : (CXTPDockingPaneBase*)pSelectedPane);
		}

		break;

	case XTP_IDS_DOCKINGPANE_MAXIMIZE:
		Maximize();
		break;

	case XTP_IDS_DOCKINGPANE_RESTORE:
		Restore();
		break;

	}
}

BOOL CXTPDockingPaneTabbedContainer::OnCaptionButtonDown(CXTPDockingPaneCaptionButton* pButton)
{
	switch (pButton->GetID())
	{
	case XTP_IDS_DOCKINGPANE_MENU:
		if (m_pSelectedPane)
		{
			InternalAddRef();

			CXTPDockingPaneManager* pManager = GetDockingPaneManager();
			XTP_DOCKINGPANE_CLICK menu;

			menu.rcExclude = pButton->GetRect();
			ClientToScreen(&menu.rcExclude);

			menu.pt = GetExStyle() & WS_EX_LAYOUTRTL ? CPoint(menu.rcExclude.right, menu.rcExclude.bottom) : CPoint(menu.rcExclude.left, menu.rcExclude.bottom);
			menu.pPane = m_pSelectedPane;
			pButton->m_bPressed = TRUE;
			Invalidate(FALSE);

			pManager->NotifyOwner(XTP_DPN_PANEMENUCLICK, (LPARAM)&menu);

			pButton->m_bPressed = FALSE;
			if (m_hWnd) Invalidate(FALSE);

			InternalRelease();
		}
		return TRUE;

	}
	return FALSE;
}


void CXTPDockingPaneTabbedContainer::_RestoreFocus()
{
	if (m_pSelectedPane)
		m_pSelectedPane->SetFocus();
	else
		SetFocus();

	GetDockingPaneManager()->UpdatePanes();
}


void CXTPDockingPaneTabbedContainer::OnLButtonDown(UINT /*nFlags*/, CPoint point)
{

	CXTPDockingPaneCaptionButton* pButton = HitTestCaptionButton(point);

	if (pButton)
	{
		_RestoreFocus();

		if (m_pSelectedPane && OnCaptionButtonDown(pButton))
			return;

		if (pButton->Click(this, point) && m_pSelectedPane)
		{
			OnCaptionButtonClick(pButton);
		}

		return;
	}

	if (IsTabsVisible() && PerformClick(m_hWnd, point, TRUE))
		return;

	int nHit = HitTest(point);
	if (nHit == DOCKINGPANE_HITCAPTION && !IsHidden())
	{
		ClientToScreen(&point);
		OnCaptionLButtonDown(point);
	}
	else if (nHit >= 0)
	{
		CXTPDockingPane* pPane = GetItemPane(nHit);
		if (GetDockingPaneManager()->_OnAction(xtpPaneActionDragging, pPane))
		{
			SelectPane(pPane, TRUE, FALSE);
			PerformMouseMove(m_hWnd, point);
			Invalidate(FALSE);
			return;
		}

		m_lstRects.RemoveAll();
		for (int j = 0; j < GetItemCount(); j++)
		{
			CRect rc(GetItem(j)->GetRect());
			m_lstRects.Add(rc);
		}

		m_pTrackingPane = pPane;
		SelectPane(m_pTrackingPane, TRUE, FALSE);

		PerformMouseMove(m_hWnd, point);

		SetCapture();

		Invalidate(FALSE);
	}
	else
	{
		_RestoreFocus();
	}
}

CXTPDockingPane* CXTPDockingPaneTabbedContainer::GetItemPane(int nIndex) const
{
	return (CXTPDockingPane*)GetItem(nIndex)->GetData();
}

void CXTPDockingPaneTabbedContainer::OnLButtonDblClk(UINT /*nFlags*/, CPoint point)
{
	if (PerformClick(m_hWnd, point, TRUE))
		return;

	if (HitTestCaptionButton(point))
		return;

	int nHit = HitTest(point);
	if (nHit == DOCKINGPANE_HITCAPTION)
	{
		CXTPDockingPane* pSelected = GetSelected();
		if (IsHidden() &&pSelected && ((pSelected->GetOptions() & xtpPaneNoHideable) != 0))
			return;

		GetDockingPaneManager()->ToggleDocking(this);
	}
	else if (nHit >= 0)
	{
		CXTPDockingPane* pPane = GetItemPane(nHit);
		GetDockingPaneManager()->ToggleDocking(pPane);
	}

}


void CXTPDockingPaneTabbedContainer::_Swap(CXTPDockingPane* p1, CXTPDockingPane* p2)
{
	POSITION pos1 = m_lstPanes.Find(p1);
	POSITION pos2 = m_lstPanes.Find(p2);
	ASSERT(pos1 && pos2);

	m_lstPanes.SetAt(pos1, p2);
	m_lstPanes.SetAt(pos2, p1);
}

void CXTPDockingPaneTabbedContainer::OnMouseMove(UINT nFlags, CPoint point)
{
	PerformMouseMove(m_hWnd, point);

	if (m_pTrackingPane)
	{
		for (int i = 0; i < m_lstRects.GetSize(); i++)
		{
			if (GetItemPane(i) != m_pTrackingPane && m_lstRects[i].PtInRect(point))
			{
				_Swap(GetItemPane(i), m_pTrackingPane);

				InvalidatePane(TRUE);
				return;
			}
		}


		if (CXTPTabManager::HitTest(point) == NULL)
		{
			if (GetDockingPaneManager()->_OnAction(xtpPaneActionDetaching, m_pTrackingPane))
				return;

			ASSERT(m_pSelectedPane == m_pTrackingPane);
			m_pTrackingPane = NULL;
			ReleaseCapture();

			ClientToScreen(&point);

			CXTPDockingPaneContext* pContext = GetDockingPaneManager()->GetDockingContext();
			pContext->Drag(m_pSelectedPane, point);
		}
	}
	else
	{
		m_pCaptionButtons->CheckForMouseOver(point);
	}

	CWnd::OnMouseMove(nFlags, point);
}

void CXTPDockingPaneTabbedContainer::OnMouseLeave()
{
	OnMouseMove(0, CPoint(-1, -1));
}

void CXTPDockingPaneTabbedContainer::OnLButtonUp(UINT nFlags, CPoint point)
{
	if (m_pTrackingPane)
	{
		m_pTrackingPane = NULL;
		if (GetCapture() == this) ReleaseCapture();
	}

	CWnd::OnLButtonUp(nFlags, point);
}

void CXTPDockingPaneTabbedContainer::OnCaptureChanged(CWnd* pWnd)
{
	m_pTrackingPane = NULL;
	CWnd::OnCaptureChanged(pWnd);
}

void CXTPDockingPaneTabbedContainer::OnParentContainerChanged(CXTPDockingPaneBase* pContainer)
{
	m_pDockingSite = pContainer->m_pDockingSite;
	m_bTitleVisible = TRUE;
	if (pContainer->GetType() == xtpPaneTypeAutoHidePanel)
	{
		if (m_hWnd) ShowWindow(SW_HIDE); //?
	}
}

BOOL CXTPDockingPaneTabbedContainer::CanAttach(CRect& rcClient, CPoint pt) const
{
	CRect rcTitle(rcClient);
	BOOL bVertical = IsCaptionVertical();

	if (m_bTitleVisible)
	{
		if (bVertical)
		{
			rcClient.left += CXTPDockingPaneBase::GetPaintManager()->GetCaptionHeight() + 3;
		}
		else
		{
			rcClient.top += CXTPDockingPaneBase::GetPaintManager()->GetCaptionHeight() + 3;
		}
	}
	else
	{
		SAFE_CALLPTR(m_pDockingSite, GetWindowRect(rcTitle));
	}

	if (bVertical)
	{
		rcTitle.right = rcClient.left;
	}
	else
	{
		rcTitle.bottom = rcClient.top;
	}

	if (rcTitle.PtInRect(pt))
		return TRUE;

	if (IsTabsVisible())
	{
		CRect rcTabs(rcClient);
		rcClient.bottom -= CXTPDockingPaneBase::GetPaintManager()->GetTabsHeight();
		rcTabs.top = rcClient.bottom;

		if (rcTabs.PtInRect(pt))
			return TRUE;
	}

	return FALSE;
}

void CXTPDockingPaneTabbedContainer::Copy(CXTPDockingPaneTabbedContainer* pClone, CXTPPaneToPaneMap* pMap, DWORD dwIgnoredOptions)
{
	ASSERT(pClone);
	if (!pClone)
		return;

	m_bActive = FALSE;
	m_pDockingSite = GetDockingPaneManager()->GetSite();
	m_pSelectedPane = m_pTrackingPane = NULL;

	m_rcWindow = pClone->m_rcWindow;
	m_szDocking = pClone->m_szDocking;
	m_bTitleVisible = TRUE;
	m_bLockReposition = FALSE;

	CXTPDockingPane* pSelected = NULL;
	if (pMap)
	{
		POSITION pos = pClone->GetHeadPosition();
		while (pos)
		{
			CXTPDockingPane* pPane = (CXTPDockingPane*)pClone->GetNext(pos);
			CXTPDockingPane* pNewPane = (CXTPDockingPane*)pPane->Clone(m_pLayout, pMap);
			if (pClone->GetSelected() == pPane) pSelected = pNewPane;
			_InsertPane(pNewPane);
		}
	}
	else
	{

		POSITION pos = pClone->m_lstPanes.GetHeadPosition();
		while (pos)
		{
			CXTPDockingPane* pPane = (CXTPDockingPane*)pClone->GetNext(pos);

			ASSERT(pPane->GetType() == xtpPaneTypeDockingPane);

			if ((((CXTPDockingPane*)pPane)->GetOptions() & dwIgnoredOptions) == 0)
			{
				if (pClone->GetSelected() == pPane && pSelected == NULL) pSelected = pPane;

				pPane->m_pParentContainer->RemovePane(pPane);
				_InsertPane(pPane);
			}
		}
	}
	if (pSelected) SelectPane(pSelected, FALSE);


}

CXTPDockingPaneBase* CXTPDockingPaneTabbedContainer::Clone(CXTPDockingPaneLayout* pLayout, CXTPPaneToPaneMap* pMap, DWORD dwIgnoredOptions)
{
	CXTPDockingPaneTabbedContainer* pPane = (CXTPDockingPaneTabbedContainer*)
		GetDockingPaneManager()->OnCreatePane(GetType(), pLayout);

	pPane->Copy(this, pMap, dwIgnoredOptions);

	SAFE_CALLPTR(pMap, SetAt(this, pPane));

	return pPane;

}

BOOL CXTPDockingPaneTabbedContainer::IsHidden() const
{
	return GetContainer() && GetContainer()->GetType() == xtpPaneTypeAutoHidePanel;
}

void CXTPDockingPaneTabbedContainer::Show(BOOL bSetFocus)
{
	if (m_pSelectedPane &&m_pParentContainer &&
		m_pParentContainer->GetType() == xtpPaneTypeAutoHidePanel)
	{
		((CXTPDockingPaneAutoHidePanel*)m_pParentContainer)->ShowPane(m_pSelectedPane, bSetFocus);
	}
	else if (DYNAMIC_DOWNCAST(CXTPDockingPaneMiniWnd, GetParentFrame()))
	{
		((CXTPDockingPaneMiniWnd*)GetParentFrame())->Expand();
	}
}

void CXTPDockingPaneTabbedContainer::ShowPane(CXTPDockingPane* pPane, BOOL bSetFocus)
{
	ASSERT(pPane);

	if (m_pParentContainer && m_pParentContainer->GetType() == xtpPaneTypeAutoHidePanel)
	{
		((CXTPDockingPaneAutoHidePanel*)m_pParentContainer)->ShowPane(pPane, bSetFocus);
	}
	else
	{
		SelectPane(pPane, bSetFocus);

		if (DYNAMIC_DOWNCAST(CXTPDockingPaneMiniWnd, GetParentFrame()))
			((CXTPDockingPaneMiniWnd*)GetParentFrame())->Expand();
	}

}

BOOL CXTPDockingPaneTabbedContainer::IsAllowMaximize() const
{
	if (!m_pParentContainer || m_pParentContainer->GetType() != xtpPaneTypeSplitterContainer)
		return FALSE;

	if (!GetDockingPaneManager()->IsCaptionMaximizeButtonsVisible())
		return FALSE;

	CXTPDockingPaneBaseList lst;
	((CXTPDockingPaneSplitterContainer*)m_pParentContainer)->FindChildPane(xtpPaneTypeTabbedContainer, &lst);

	return lst.GetCount() > 1;
}

void CXTPDockingPaneTabbedContainer::Maximize()
{
	if (!m_pDockingSite || !m_pParentContainer)
		return;

	CXTPDockingPaneBaseList lst;
	((CXTPDockingPaneSplitterContainer*)m_pParentContainer)->FindChildPane(xtpPaneTypeTabbedContainer, &lst);
	POSITION pos = lst.GetHeadPosition();
	while (pos)
	{
		CXTPDockingPaneTabbedContainer* pTabbedContainer = (CXTPDockingPaneTabbedContainer*)lst.GetNext(pos);
		pTabbedContainer->m_bMaximized = pTabbedContainer == this;
	}

	GetDockingPaneManager()->RecalcFrameLayout(this);
}

void CXTPDockingPaneTabbedContainer::Restore()
{
	if (!m_pDockingSite || !m_pParentContainer)
		return;

	m_bMaximized = FALSE;
	GetDockingPaneManager()->RecalcFrameLayout(this);
}

BOOL CXTPDockingPaneTabbedContainer::IsPaneMaximized() const
{
	if (!IsAllowMaximize())
		return FALSE;

	return m_bMaximized;
}

BOOL CXTPDockingPaneTabbedContainer::IsPaneRestored() const
{
	if (!IsAllowMaximize())
		return FALSE;

	return !m_bMaximized;
}

BOOL CXTPDockingPaneTabbedContainer::IsPaneMinimized() const
{
	if (m_bMaximized)
		return FALSE;

	if (!m_pParentContainer || m_pParentContainer->GetType() != xtpPaneTypeSplitterContainer)
		return FALSE;

	if (!GetDockingPaneManager()->IsCaptionMaximizeButtonsVisible())
		return FALSE;

	CXTPDockingPaneBaseList lst;
	((CXTPDockingPaneSplitterContainer*)m_pParentContainer)->FindChildPane(xtpPaneTypeTabbedContainer, &lst);
	POSITION pos = lst.GetHeadPosition();
	while (pos)
	{
		CXTPDockingPaneTabbedContainer* pTabbedContainer = (CXTPDockingPaneTabbedContainer*)lst.GetNext(pos);
		if (pTabbedContainer->m_bMaximized)
			return TRUE;
	}
	return FALSE;
}



BOOL CXTPDockingPaneTabbedContainer::IsCaptionButtonVisible(CXTPDockingPaneCaptionButton* pButton)
{
	if (pButton->GetID() == XTP_IDS_DOCKINGPANE_CLOSE)
		return m_pSelectedPane && ((m_pSelectedPane->GetOptions() & xtpPaneNoCloseable) == 0);

	if (pButton->GetID() == XTP_IDS_DOCKINGPANE_AUTOHIDE)
		return m_pSelectedPane && ((m_pSelectedPane->GetOptions() & xtpPaneNoHideable) == 0) && (pButton->GetState() & xtpPanePinVisible);

	if (pButton->GetID() == XTP_IDS_DOCKINGPANE_MAXIMIZE)
		return IsPaneRestored();

	if (pButton->GetID() == XTP_IDS_DOCKINGPANE_RESTORE)
		return IsPaneMaximized();

	if (pButton->GetID() == XTP_IDS_DOCKINGPANE_MENU)
		return m_pSelectedPane && (m_pSelectedPane->GetOptions() & xtpPaneHasMenuButton);

	return TRUE;
}


LRESULT CXTPDockingPaneTabbedContainer::OnHelpHitTest(WPARAM, LPARAM lParam)
{
	CXTPDockingPane* pPane = GetSelected();
	CPoint point((DWORD)lParam);

	int nHit = HitTest(point);

	if (nHit >= 0)
	{
		pPane = GetItemPane(nHit);
	}

	if (!pPane)
		return 0;

	int nIDHelp = pPane->m_nIDHelp;

	if (nIDHelp == 0)
	{
		pPane->m_hwndChild ? (int)::GetDlgCtrlID(pPane->m_hwndChild): 0;
	}

	if (nIDHelp == 0)
	{
		nIDHelp = pPane->GetID();
	}

	return HID_BASE_RESOURCE + nIDHelp;
}

CXTPDockingPaneCaptionButton* CXTPDockingPaneTabbedContainer::HitTestCaptionButton(CPoint point) const
{
	if (IsTitleVisible())
	{
		for (int i = 0; i < m_pCaptionButtons->GetSize(); i++)
		{
			CXTPDockingPaneCaptionButton* pButton = m_pCaptionButtons->GetAt(i);
			if (pButton->PtInRect(point))
				return pButton->IsEnabled() ? pButton : NULL;
		}
	}

	return NULL;
}

INT_PTR CXTPDockingPaneTabbedContainer::OnToolHitTest(CPoint point, TOOLINFO* pTI) const
{

	ASSERT_VALID(this);
	ASSERT(::IsWindow(m_hWnd));

	// check child windows first by calling CControlBar
	INT_PTR nHit = CWnd::OnToolHitTest(point, pTI);
	if (nHit != -1)
		return nHit;

	CXTPDockingPaneCaptionButton* pButton = HitTestCaptionButton(point);

	if (pButton)
	{
		nHit = (INT_PTR)pButton->GetID();
		CString strTip;
		XTPResourceManager()->LoadString(&strTip, (UINT)nHit);

		if (strTip.GetLength() == 0)
			return -1;

		CXTPToolTipContext::FillInToolInfo(pTI, m_hWnd, pButton->GetRect(), nHit, strTip);

		return nHit;
	}

	return PerformToolHitTest(m_hWnd, point, pTI);
}

void CXTPDockingPaneTabbedContainer::AdjustMinMaxInfoClientRect(LPMINMAXINFO pMinMaxInfo, BOOL bCaptionOnly) const
{
	CRect rc(0, 0, 1000, 1000);
	if (bCaptionOnly)
	{
		CXTPDockingPaneBase::GetPaintManager()->AdjustCaptionRect(this, rc);
	}
	else
	{
		CXTPDockingPaneBase::GetPaintManager()->AdjustClientRect((CXTPDockingPaneTabbedContainer*)this, rc, FALSE);
	}

	pMinMaxInfo->ptMinTrackSize.x += 1000 - rc.Width();
	pMinMaxInfo->ptMinTrackSize.y += 1000 - rc.Height();

	pMinMaxInfo->ptMaxTrackSize.x += 1000 - rc.Width();
	pMinMaxInfo->ptMaxTrackSize.y += 1000 - rc.Height();

}

void CXTPDockingPaneTabbedContainer::GetMinMaxInfo(LPMINMAXINFO pMinMaxInfo) const
{
	CXTPDockingPaneBase::GetMinMaxInfo(pMinMaxInfo);

	if (IsEmpty())
		return;

	if (IsPaneMinimized())
	{
		if (((CXTPDockingPaneSplitterContainer*)m_pParentContainer)->IsHoriz())
			pMinMaxInfo->ptMaxTrackSize.x = 0;
		else
			pMinMaxInfo->ptMaxTrackSize.y = 0;

		AdjustMinMaxInfoClientRect(pMinMaxInfo, FALSE);
	}
	else
	{
		POSITION pos = GetHeadPosition();
		while (pos)
		{
			CXTPDockingPaneBase* pPane = GetNext(pos);

			MINMAXINFO info;
			pPane->GetMinMaxInfo(&info);

			pMinMaxInfo->ptMinTrackSize.x = max(pMinMaxInfo->ptMinTrackSize.x, info.ptMinTrackSize.x);
			pMinMaxInfo->ptMinTrackSize.y = max(pMinMaxInfo->ptMinTrackSize.y, info.ptMinTrackSize.y);

			pMinMaxInfo->ptMaxTrackSize.x = min(pMinMaxInfo->ptMaxTrackSize.x, info.ptMaxTrackSize.x);
			pMinMaxInfo->ptMaxTrackSize.y = min(pMinMaxInfo->ptMaxTrackSize.y, info.ptMaxTrackSize.y);
		}
		AdjustMinMaxInfoClientRect(pMinMaxInfo);
	}
}


BOOL CXTPDockingPaneTabbedContainer::OnWndMsg(UINT message, WPARAM wParam, LPARAM lParam, LRESULT* pResult)
{
	CXTPDockingPaneManager* pManager = GetDockingPaneManager();

	if (pManager)
	{
		pManager->GetToolTipContext()->FilterToolTipMessage(this, message, wParam, lParam);
	}

	return CWnd::OnWndMsg(message, wParam, lParam, pResult);
}


BOOL CXTPDockingPaneTabbedContainer::IsCaptionVertical() const
{
	CXTPDockingPaneManager* pManager = GetDockingPaneManager();

	switch (pManager->GetCaptionDirection())
	{
		case xtpPaneCaptionHorizontal:
			return FALSE;

		case xtpPaneCaptionAutoBySize:
			return m_rcWindow.Width() > m_rcWindow.Height();

		case xtpPaneCaptionAutoByPosition:
			XTPDockingPaneDirection direction = pManager->GetPaneDirection(this);
			return (direction == xtpPaneDockTop) || (direction == xtpPaneDockBottom);

	}
	return TRUE;
}

//////////////////////////////////////////////////////////////////////////
// Accessible

CCmdTarget* CXTPDockingPaneTabbedContainer::GetAccessible()
{
	return this;
}

HRESULT CXTPDockingPaneTabbedContainer::GetAccessibleParent(IDispatch* FAR* ppdispParent)
{
	*ppdispParent = NULL;

	if (GetSafeHwnd())
	{
		return AccessibleObjectFromWindow(GetSafeHwnd(), OBJID_WINDOW, IID_IDispatch, (void**)ppdispParent);
	}
	return E_FAIL;
}

HRESULT CXTPDockingPaneTabbedContainer::GetAccessibleChildCount(long FAR* pChildCount)
{
	if (pChildCount == 0)
		return E_INVALIDARG;

	*pChildCount = GetItemCount() + 1;

	return S_OK;
}

HRESULT CXTPDockingPaneTabbedContainer::GetAccessibleChild(VARIANT varChild, IDispatch* FAR* ppdispChild)
{
	*ppdispChild = NULL;
	int nChild = GetChildIndex(&varChild);

	if (nChild == 1 && GetSelected())
		return AccessibleObjectFromWindow(GetSelected()->m_hwndChild, OBJID_WINDOW, IID_IDispatch, (void**)ppdispChild);

	if (nChild > 1 && nChild <= GetItemCount() + 1)
	{
		CXTPDockingPane* pPane = GetItemPane(nChild - 2);
		if (pPane)
		{
			*ppdispChild = pPane->GetIDispatch(TRUE);
		}
	}

	return S_OK;
}

HRESULT CXTPDockingPaneTabbedContainer::GetAccessibleName(VARIANT varChild, BSTR* pszName)
{
	int nChild = GetChildIndex(&varChild);

	if (nChild == CHILDID_SELF || nChild == -1)
	{
		*pszName = SysAllocString(L"XTPDockingPaneTabbedContainer");
		return S_OK;
	}

	return E_INVALIDARG;
}

HRESULT CXTPDockingPaneTabbedContainer::GetAccessibleRole(VARIANT varChild, VARIANT* pvarRole)
{
	pvarRole->vt = VT_EMPTY;
	int nChild = GetChildIndex(&varChild);

	if (nChild == CHILDID_SELF)
	{
		pvarRole->vt = VT_I4;
		pvarRole->lVal = ROLE_SYSTEM_PAGETABLIST;
		return S_OK;
	}

	return E_INVALIDARG;
}

HRESULT CXTPDockingPaneTabbedContainer::GetAccessibleState(VARIANT /*varChild*/, VARIANT* pvarState)
{
	pvarState->vt = VT_I4;
	pvarState->lVal = 0;

	return S_OK;
}


HRESULT CXTPDockingPaneTabbedContainer::AccessibleLocation(long* pxLeft, long* pyTop, long* pcxWidth, long* pcyHeight, VARIANT varChild)
{
	*pxLeft = *pyTop = *pcxWidth = *pcyHeight = 0;

	if (!GetSafeHwnd())
		return S_OK;

	int nChild = GetChildIndex(&varChild);

	if (nChild != CHILDID_SELF)
		return E_INVALIDARG;

	CRect rc;
	GetWindowRect(&rc);

	*pxLeft = rc.left;
	*pyTop = rc.top;
	*pcxWidth = rc.Width();
	*pcyHeight = rc.Height();

	return S_OK;
}

HRESULT CXTPDockingPaneTabbedContainer::AccessibleHitTest(long xLeft, long yTop, VARIANT* pvarID)
{
	if (pvarID == NULL)
		return E_INVALIDARG;

	pvarID->vt = VT_EMPTY;

	if (!GetSafeHwnd())
		return S_FALSE;

	if (!CXTPWindowRect(this).PtInRect(CPoint(xLeft, yTop)))
		return S_FALSE;

	CPoint pt(xLeft, yTop);
	ScreenToClient(&pt);

	int nItem = HitTest(pt);
	if (nItem == DOCKINGPANE_HITCAPTION)
	{
		pvarID->vt = VT_I4;
		pvarID->lVal = 0;
		return S_OK;
	}

	if (nItem == -1)
	{
		pvarID->vt = VT_DISPATCH;
		if (GetSelected())
			return AccessibleObjectFromWindow(GetSelected()->m_hwndChild, OBJID_WINDOW, IID_IDispatch, (void**)&pvarID->pdispVal);

		return S_FALSE;
	}

	pvarID->vt = VT_DISPATCH;
	pvarID->pdispVal = GetItemPane(nItem)->GetIDispatch(TRUE);

	return S_OK;
}


LRESULT CXTPDockingPaneTabbedContainer::OnGetObject(WPARAM wParam, LPARAM lParam)
{
	if (lParam != OBJID_CLIENT)
		return (LRESULT)Default();

	LPUNKNOWN lpUnknown = GetInterface(&IID_IAccessible);
	if (!lpUnknown)
		return E_FAIL;

	return LresultFromObject(IID_IAccessible, wParam, lpUnknown);
}


BEGIN_INTERFACE_MAP(CXTPDockingPaneTabbedContainer, CCmdTarget)
	INTERFACE_PART(CXTPDockingPaneTabbedContainer, IID_IAccessible, ExternalAccessible)
END_INTERFACE_MAP()
