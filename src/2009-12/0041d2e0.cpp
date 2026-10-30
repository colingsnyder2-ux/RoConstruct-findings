// roc 2009-12 0041d2e0  unit: CSelectionTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041d2e0
//
// 0041d2e0  b8c42f9a00           mov eax, 0x9a2fc4
// 0041d2e5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
