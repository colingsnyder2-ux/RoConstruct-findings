// roc 2009-12 008e44b0  unit: CXTCaptionThemeFactory  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e44b0
//
// 008e44b0  b890c3a000           mov eax, 0xa0c390
// 008e44b5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
