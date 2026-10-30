// roc 2009-12 00421a60  unit: RootNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00421a60
//
// 00421a60  b80000ffff           mov eax, 0xffff0000
// 00421a65  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
