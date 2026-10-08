// roc 2009-12 00854e70  unit: CXTPTabClientWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854e70
//
// 00854e70  b8a0c69f00           mov eax, 0x9fc6a0
// 00854e75  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
