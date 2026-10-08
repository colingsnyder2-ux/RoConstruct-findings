// roc 2009-12 00452540  unit: CRobloxApp  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00452540
//
// 00452540  b8acb89a00           mov eax, 0x9ab8ac
// 00452545  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
