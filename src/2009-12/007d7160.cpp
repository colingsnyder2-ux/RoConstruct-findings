// roc 2009-12 007d7160  unit: RBX::MovingStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d7160
//
// 007d7160  b806000000           mov eax, 6
// 007d7165  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
