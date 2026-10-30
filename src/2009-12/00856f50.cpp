// roc 2009-12 00856f50  unit: CXTPTabClientWnd::CWorkspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856f50
//
// 00856f50  b870cc9f00           mov eax, 0x9fcc70
// 00856f55  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
