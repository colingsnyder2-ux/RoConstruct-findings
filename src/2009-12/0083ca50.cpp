// roc 2009-12 0083ca50  unit: CXTPControlColorSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ca50
//
// 0083ca50  b85c69b600           mov eax, 0xb6695c
// 0083ca55  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
