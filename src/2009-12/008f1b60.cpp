// roc 2009-12 008f1b60  unit: CXTPRibbonControlSystemRecentFileList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1b60
//
// 008f1b60  b8c8afb600           mov eax, 0xb6afc8
// 008f1b65  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
