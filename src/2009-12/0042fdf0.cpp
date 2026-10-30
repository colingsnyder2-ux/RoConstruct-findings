// roc 2009-12 0042fdf0  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0042fdf0
//
// 0042fdf0  b884619a00           mov eax, 0x9a6184
// 0042fdf5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
