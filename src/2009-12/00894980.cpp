// roc 2009-12 00894980  unit: CXTPRibbonBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894980
//
// 00894980  b8cc89b600           mov eax, 0xb689cc
// 00894985  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
