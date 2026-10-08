// roc 2009-12 008d0980  unit: RBX::SleepStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0980
//
// 008d0980  b80d000000           mov eax, 0xd
// 008d0985  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
