// roc 2009-12 008f3b90  unit: CXTMemDC  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3b90
//
// 008f3b90  b86cfaa000           mov eax, 0xa0fa6c
// 008f3b95  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
