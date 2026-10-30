// from server: 100% by tajop
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: mfc-8.0 roc_unit_3675483dd77a30e5.cpp

// Candidate translation unit (score above; library headers required).
#define _AFX_DISABLE_INLINES
#include "stdafx.h"

BOOL rocBeginDrag(HIMAGELIST h, int i, int x, int y) { return AfxImageList_BeginDrag(h, i, x, y); }
void rocEndDrag() { AfxImageList_EndDrag(); }
BOOL rocDragEnter(HWND w, int x, int y) { return AfxImageList_DragEnter(w, x, y); }
BOOL rocDragMove(int x, int y) { return AfxImageList_DragMove(x, y); }
