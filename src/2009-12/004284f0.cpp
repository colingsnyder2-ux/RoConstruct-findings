// roc 2009-12 004284f0  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004284f0
//
// 004284f0  b8d44ab000           mov eax, 0xb04ad4
// 004284f5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
