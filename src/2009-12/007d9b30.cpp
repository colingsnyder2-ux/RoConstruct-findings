// roc 2009-12 007d9b30  unit: RBX::SimulateStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d9b30
//
// 007d9b30  b80e000000           mov eax, 0xe
// 007d9b35  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
