// roc 2009-12 0042ec00  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042ec00
//
// 0042ec00  b8745e9a00           mov eax, 0x9a5e74
// 0042ec05  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
