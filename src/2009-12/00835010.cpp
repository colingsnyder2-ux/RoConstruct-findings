// roc 2009-12 00835010  unit: CXTPFrameWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00835010
//
// 00835010  b8f0749f00           mov eax, 0x9f74f0
// 00835015  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
