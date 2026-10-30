// roc 2009-12 007f5be0  unit: CXTPControlAction  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5be0
//
// 007f5be0  b894179f00           mov eax, 0x9f1794
// 007f5be5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
