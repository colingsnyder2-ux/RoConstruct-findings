// roc 2009-12 004532c0  unit: CRobloxControlMaterialSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004532c0
//
// 004532c0  b83895b000           mov eax, 0xb09538
// 004532c5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
