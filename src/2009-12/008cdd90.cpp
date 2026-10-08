// roc 2009-12 008cdd90  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cdd90
//
// 008cdd90  b8cca5a000           mov eax, 0xa0a5cc
// 008cdd95  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
