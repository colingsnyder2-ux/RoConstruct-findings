// roc 2009-12 0064c1e0  unit: RBX::Joint::W4JointType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064c1e0
//
// 0064c1e0  b808c9b200           mov eax, 0xb2c908
// 0064c1e5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
