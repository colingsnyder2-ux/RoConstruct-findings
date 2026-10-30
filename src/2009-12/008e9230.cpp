// roc 2009-12 008e9230  unit: CXTPRibbonGroup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e9230
//
// 008e9230  b898abb600           mov eax, 0xb6ab98
// 008e9235  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
