// roc 2009-12 005db5a0  unit: boost::bad_lexical_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005db5a0
//
// 005db5a0  b870139c00           mov eax, 0x9c1370
// 005db5a5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
