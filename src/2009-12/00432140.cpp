// roc 2009-12 00432140  unit: CDataModelPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00432140
//
// 00432140  b8b0689a00           mov eax, 0x9a68b0
// 00432145  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
