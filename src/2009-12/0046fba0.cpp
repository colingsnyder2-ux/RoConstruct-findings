// roc 2009-12 0046fba0  unit: CSelectionCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046fba0
//
// 0046fba0  b8d0099b00           mov eax, 0x9b09d0
// 0046fba5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
