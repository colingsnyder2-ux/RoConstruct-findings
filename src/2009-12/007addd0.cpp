// roc 2009-12 007addd0  unit: RBX::HUMAN::HumanoidState  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007addd0
//
// 007addd0  b813000000           mov eax, 0x13
// 007addd5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
