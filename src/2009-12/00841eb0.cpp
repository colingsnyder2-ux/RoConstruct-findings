// roc 2009-12 00841eb0  unit: CXTPPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841eb0
//
// 00841eb0  b8fc6bb600           mov eax, 0xb66bfc
// 00841eb5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
