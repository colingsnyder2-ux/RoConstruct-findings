// roc 2009-12 008ee9b0  unit: CXTPRibbonBarMorePopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ee9b0
//
// 008ee9b0  b884dba000           mov eax, 0xa0db84
// 008ee9b5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
