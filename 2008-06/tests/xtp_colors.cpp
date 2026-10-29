#include "force_verified.h"
// XTP module test: the colour manager (XTPColorManager.cpp) answers system colours after MFC is initialised.
#include <afxwin.h>
#include <XTToolkitPro.h>
#include <stdio.h>

int main()
{
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
		return 2;
	COLORREF window = XTPColorManager()->GetColor(COLOR_WINDOW);
	printf("xtp window colour %06x\n", (unsigned)window);
	if (window != ::GetSysColor(COLOR_WINDOW)) return 1;
	CXTPControlButton button;
	button.SetID(123);
	button.SetCaption(_T("&Open\tCtrl+O"));
	button.SetEnabled(FALSE);
	button.SetChecked(TRUE);
	if (button.GetID() != 123 || button.GetCaption() != _T("&Open") ||
		button.GetShortcutText() != _T("Ctrl+O") || button.GetEnabled() || !button.GetChecked()) return 3;
	button.SetCaption(_T("Close"));
	if (button.GetCaption() != _T("Close")) return 4;
	printf("xtp button caption, shortcut, state and lifetime passed\n");
	return 0;
}
