// roc 2009-12 00422b40  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00422b40
//
// 00422b40  b830369a00           mov eax, 0x9a3630
// 00422b45  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
