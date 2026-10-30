// roc 2009-12 008c69d0  unit: CXTPPropertyGridInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c69d0
//
// 008c69d0  b8989ba000           mov eax, 0xa09b98
// 008c69d5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
