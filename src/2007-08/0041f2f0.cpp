// from server: 100% by tajop
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: mfc-8.0 roc_unit_77ed0dc909d1d753.cpp

// Candidate translation unit (score above; library headers required).
#define _AFX_DISABLE_INLINES
#include "stdafx.h"

BOOL rocDragLeave(HWND w) { return AfxImageList_DragLeave(w); }
BOOL rocDragShowNolock(BOOL f) { return AfxImageList_DragShowNolock(f); }
BOOL rocGetImageInfo(HIMAGELIST h, int i, IMAGEINFO* p) { return AfxImageList_GetImageInfo(h, i, p); }
