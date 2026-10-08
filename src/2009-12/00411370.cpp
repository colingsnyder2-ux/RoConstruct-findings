// roc 2009-12 00411370  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00411370
//
// 00411370  b88c1e9a00           mov eax, 0x9a1e8c
// 00411375  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
