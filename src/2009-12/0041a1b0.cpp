// roc 2009-12 0041a1b0  unit: CInsertObjectDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041a1b0
//
// 0041a1b0  b84c299a00           mov eax, 0x9a294c
// 0041a1b5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
