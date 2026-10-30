// roc 2009-12 0083c950  unit: CXTPControlButtonColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c950
//
// 0083c950  b84069b600           mov eax, 0xb66940
// 0083c955  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
