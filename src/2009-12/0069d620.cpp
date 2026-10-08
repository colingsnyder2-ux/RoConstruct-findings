// roc 2009-12 0069d620  unit: RBX::Workspace  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069d620
//
// 0069d620  b88816b900           mov eax, 0xb91688
// 0069d625  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
