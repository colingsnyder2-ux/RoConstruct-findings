// roc 2009-12 00834f80  unit: RootNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834f80
//
// 00834f80  b82c739f00           mov eax, 0x9f732c
// 00834f85  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
