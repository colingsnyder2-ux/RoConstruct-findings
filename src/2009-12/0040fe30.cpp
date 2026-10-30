// roc 2009-12 0040fe30  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040fe30
//
// 0040fe30  b8e41a9a00           mov eax, 0x9a1ae4
// 0040fe35  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
