// roc 2009-12 0040f3e0  unit: CChatPrompt  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040f3e0
//
// 0040f3e0  b868179a00           mov eax, 0x9a1768
// 0040f3e5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
