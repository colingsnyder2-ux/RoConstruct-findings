// roc 2009-12 0083c880  unit: CXTPControlPopupColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c880
//
// 0083c880  b82469b600           mov eax, 0xb66924
// 0083c885  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
