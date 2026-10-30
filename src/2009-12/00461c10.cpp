// roc 2009-12 00461c10  unit: CRobloxWnd::PartDropTarget  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00461c10
//
// 00461c10  b801000000           mov eax, 1
// 00461c15  c21400               ret 0x14
// library mfc-8.0/atlmfc\src\mfc\dlgdhtml.cpp (function ?ShowContextMenu@CDHtmlDialog@@UAGJKPAUtagPOINT@@PAUIUnknown@@PAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dlgdhtml.cpp
