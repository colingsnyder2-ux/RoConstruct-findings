// roc 2009-12 004548f0  unit: CAboutRobloxDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004548f0
//
// 004548f0  b8f4be9a00           mov eax, 0x9abef4
// 004548f5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
