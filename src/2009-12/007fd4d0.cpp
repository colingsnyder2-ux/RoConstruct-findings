// roc 2009-12 007fd4d0  unit: CXTPControlComboBoxList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd4d0
//
// 007fd4d0  b810289f00           mov eax, 0x9f2810
// 007fd4d5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
