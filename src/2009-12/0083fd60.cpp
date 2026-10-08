// roc 2009-12 0083fd60  unit: CXTPCustomizeSheet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083fd60
//
// 0083fd60  b8748f9f00           mov eax, 0x9f8f74
// 0083fd65  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
