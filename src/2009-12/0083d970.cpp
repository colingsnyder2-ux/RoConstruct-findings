// roc 2009-12 0083d970  unit: RBX::JointStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083d970
//
// 0083d970  b801000000           mov eax, 1
// 0083d975  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
