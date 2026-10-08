// roc 2009-12 0064afa0  unit: RBX::PlayerCamera::W4CameraType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064afa0
//
// 0064afa0  b8e8c4b200           mov eax, 0xb2c4e8
// 0064afa5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
