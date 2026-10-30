// roc 2009-12 00834c90  unit: CXTTreeCtrl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834c90
//
// 00834c90  b864669f00           mov eax, 0x9f6664
// 00834c95  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
