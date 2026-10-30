// roc 2009-12 008cdfa0  unit: CXTPTabManagerItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cdfa0
//
// 008cdfa0  b87ca6a000           mov eax, 0xa0a67c
// 008cdfa5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
