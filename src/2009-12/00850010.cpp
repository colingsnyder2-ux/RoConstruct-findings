// roc 2009-12 00850010  unit: CXTPPropExchange  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00850010
//
// 00850010  b8ecc29f00           mov eax, 0x9fc2ec
// 00850015  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
