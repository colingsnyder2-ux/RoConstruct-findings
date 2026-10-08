// roc 2009-12 008f1a20  unit: CXTPRibbonControlSystemPopupBarButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1a20
//
// 008f1a20  b874afb600           mov eax, 0xb6af74
// 008f1a25  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
