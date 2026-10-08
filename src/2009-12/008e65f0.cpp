// roc 2009-12 008e65f0  unit: CXTCaptionPopupWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e65f0
//
// 008e65f0  b8a4c9a000           mov eax, 0xa0c9a4
// 008e65f5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
