// roc 2009-12 008f0080  unit: CXTPRibbonControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0080
//
// 008f0080  b8ece5a000           mov eax, 0xa0e5ec
// 008f0085  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
