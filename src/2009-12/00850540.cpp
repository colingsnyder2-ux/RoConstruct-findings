// roc 2009-12 00850540  unit: CXTPPropExchangeArchive  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850540
//
// 00850540  b808c39f00           mov eax, 0x9fc308
// 00850545  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
