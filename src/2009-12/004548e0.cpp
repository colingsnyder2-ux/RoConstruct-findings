// roc 2009-12 004548e0  unit: CRobloxDHtmlDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004548e0
//
// 004548e0  b8d8be9a00           mov eax, 0x9abed8
// 004548e5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
