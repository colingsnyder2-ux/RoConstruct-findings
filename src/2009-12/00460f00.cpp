// roc 2009-12 00460f00  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00460f00
//
// 00460f00  b888e39a00           mov eax, 0x9ae388
// 00460f05  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
