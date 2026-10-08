// roc 2009-12 007d7bc0  unit: RBX::HumanoidStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d7bc0
//
// 007d7bc0  b80c000000           mov eax, 0xc
// 007d7bc5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
