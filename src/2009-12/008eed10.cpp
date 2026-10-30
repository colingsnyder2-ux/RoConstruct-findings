// roc 2009-12 008eed10  unit: CXTPRibbonGroupPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eed10
//
// 008eed10  b8d4adb600           mov eax, 0xb6add4
// 008eed15  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
