// roc 2009-12 0086acc0  unit: CXTPPropertyGridItemBool  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086acc0
//
// 0086acc0  b8b8f79f00           mov eax, 0x9ff7b8
// 0086acc5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
