// roc 2009-12 008df1c0  unit: CXTColorPageCustom  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008df1c0
//
// 008df1c0  b8f4b9a000           mov eax, 0xa0b9f4
// 008df1c5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
