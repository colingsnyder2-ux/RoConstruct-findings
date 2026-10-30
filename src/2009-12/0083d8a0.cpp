// roc 2009-12 0083d8a0  unit: CXTPCustomizeSheet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083d8a0
//
// 0083d8a0  b8888a9f00           mov eax, 0x9f8a88
// 0083d8a5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
