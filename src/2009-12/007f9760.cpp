// roc 2009-12 007f9760  unit: CXTPControlComboBoxList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9760
//
// 007f9760  b87c53b600           mov eax, 0xb6537c
// 007f9765  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
