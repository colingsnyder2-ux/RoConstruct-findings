// roc 2009-12 00441d50  unit: CSelectionPropGrid  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00441d50
//
// 00441d50  b8a89d9a00           mov eax, 0x9a9da8
// 00441d55  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
