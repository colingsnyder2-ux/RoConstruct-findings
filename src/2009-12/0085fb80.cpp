// roc 2009-12 0085fb80  unit: CXTColorDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085fb80
//
// 0085fb80  b8a4dc9f00           mov eax, 0x9fdca4
// 0085fb85  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
