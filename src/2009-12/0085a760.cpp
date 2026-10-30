// roc 2009-12 0085a760  unit: CXTPStatusBarPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a760
//
// 0085a760  b810d29f00           mov eax, 0x9fd210
// 0085a765  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
