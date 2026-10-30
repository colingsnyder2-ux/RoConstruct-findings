#pragma comment(linker, "/INCLUDE:?RefreshMetrics@CXTPDockingPaneVisioTheme@XTPDockingPanePaintThemes@@UAEXXZ")
#pragma comment(linker, "/INCLUDE:?RefreshMetrics@CXTPDockingPanePaintManager@@UAEXXZ")
#include "force_verified.h"
// XTP module test: the colour manager (XTPColorManager.cpp) answers system colours after MFC is initialised.
#include <afxwin.h>
#include <XTToolkitPro.h>
#include <CommandBars/XTPPaintManager.h>
#include <stdio.h>

int main()
{
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
		return 2;
	COLORREF window = XTPColorManager()->GetColor(COLOR_WINDOW);
	printf("xtp window colour %06x\n", (unsigned)window);
	if (window != ::GetSysColor(COLOR_WINDOW)) return 1;
	CXTPPaintManager* paint = XTPPaintManager();
	paint->SetCommandBarsFontIndirect(NULL, FALSE);
	for (int height = -13; height >= -19; height -= 6) {
		LOGFONT font = {0}, regular = {0}, bold = {0};
		font.lfHeight = height; font.lfWeight = FW_NORMAL;
		lstrcpy(font.lfFaceName, _T("Arial"));
		paint->SetCommandBarsFontIndirect(&font, FALSE);
		if (!paint->GetRegularFont()->GetLogFont(&regular) ||
			!paint->GetRegularBoldFont()->GetLogFont(&bold) ||
			regular.lfHeight != height || regular.lfWeight != FW_NORMAL || bold.lfWeight != FW_BOLD)
			return printf("font height/weight mismatch\n"), 3;
	}
	printf("font null/update/replace checks passed\n");
	return 0;
}
