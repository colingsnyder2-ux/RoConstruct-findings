// roc 2009-12 007f8f10  unit: CXTPEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f8f10
//
// 007f8f10  b8e81a9f00           mov eax, 0x9f1ae8
// 007f8f15  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
