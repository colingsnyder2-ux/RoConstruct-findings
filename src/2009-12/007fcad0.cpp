// roc 2009-12 007fcad0  unit: CPatchedControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fcad0
//
// 007fcad0  b848279f00           mov eax, 0x9f2748
// 007fcad5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
