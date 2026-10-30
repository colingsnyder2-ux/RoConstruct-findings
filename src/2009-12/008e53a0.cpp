// roc 2009-12 008e53a0  unit: CXTCaptionButton  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e53a0
//
// 008e53a0  b8e8c5a000           mov eax, 0xa0c5e8
// 008e53a5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
