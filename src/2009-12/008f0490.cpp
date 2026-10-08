// roc 2009-12 008f0490  unit: CXTPRibbonControlTab  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0490
//
// 008f0490  b8fcaeb600           mov eax, 0xb6aefc
// 008f0495  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
