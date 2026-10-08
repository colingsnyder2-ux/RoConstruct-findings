// roc 2009-12 007abe60  unit: RBX::MovingAssemblyStage  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007abe60
//
// 007abe60  b80a000000           mov eax, 0xa
// 007abe65  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
