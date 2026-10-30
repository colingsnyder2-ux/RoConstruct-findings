// roc 2009-12 008e2e70  unit: CXTColorPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e2e70
//
// 008e2e70  b8c4bfa000           mov eax, 0xa0bfc4
// 008e2e75  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
