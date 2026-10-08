// roc 2009-12 00890150  unit: CXTPToolBar::CControlButtonHide  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890150
//
// 00890150  b8a887b600           mov eax, 0xb687a8
// 00890155  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
