// roc 2009-12 0064cdf0  unit: RBX::Humanoid::W4Status::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064cdf0
//
// 0064cdf0  b8a8cbb200           mov eax, 0xb2cba8
// 0064cdf5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
