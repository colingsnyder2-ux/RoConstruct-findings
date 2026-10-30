// roc 2009-12 0064a3a0  unit: RBX::HopperBin::W4BinType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064a3a0
//
// 0064a3a0  b82cc2b200           mov eax, 0xb2c22c
// 0064a3a5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
