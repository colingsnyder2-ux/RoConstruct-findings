// roc 2009-12 0041d2d0  unit: CRobloxTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041d2d0
//
// 0041d2d0  b8a82f9a00           mov eax, 0x9a2fa8
// 0041d2d5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
