// roc 2009-12 008488d0  unit: CXTPControlCheckBox  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008488d0
//
// 008488d0  b8746db600           mov eax, 0xb66d74
// 008488d5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
