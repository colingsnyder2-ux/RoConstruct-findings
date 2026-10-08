// roc 2009-12 007f9200  unit: CXTPControlComboBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9200
//
// 007f9200  b84453b600           mov eax, 0xb65344
// 007f9205  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
