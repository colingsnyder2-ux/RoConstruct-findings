// roc 2009-12 00427ea0  unit: MyXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00427ea0
//
// 00427ea0  b8343a9a00           mov eax, 0x9a3a34
// 00427ea5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
