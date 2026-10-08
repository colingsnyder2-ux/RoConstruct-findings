// from server: 100% by auto
// roc 2012-06 007d1640  unit: RBX::VShirt::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d1640
//
// 007d1640  e89bffffff           call 0x7d15e0
// 007d1645  8bc8                 mov ecx, eax
// 007d1647  e994e2d4ff           jmp 0x51f8e0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
