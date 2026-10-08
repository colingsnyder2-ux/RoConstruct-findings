// roc 2009-12 00892c20  unit: CXTPMenuBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892c20
//
// 00892c20  b86488b600           mov eax, 0xb68864
// 00892c25  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
