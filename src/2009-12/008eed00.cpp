// roc 2009-12 008eed00  unit: CXTPRibbonTabPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eed00
//
// 008eed00  b8a0dba000           mov eax, 0xa0dba0
// 008eed05  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
