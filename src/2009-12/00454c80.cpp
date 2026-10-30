// roc 2009-12 00454c80  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00454c80
//
// 00454c80  b818c19a00           mov eax, 0x9ac118
// 00454c85  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
