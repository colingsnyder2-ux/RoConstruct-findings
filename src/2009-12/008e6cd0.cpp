// roc 2009-12 008e6cd0  unit: CXTCaptionPopupWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e6cd0
//
// 008e6cd0  b82ccba000           mov eax, 0xa0cb2c
// 008e6cd5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
