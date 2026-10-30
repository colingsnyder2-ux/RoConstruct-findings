// roc 2009-12 008f2c50  unit: CXTPRibbonSystemPopupBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2c50
//
// 008f2c50  b86cf8a000           mov eax, 0xa0f86c
// 008f2c55  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
