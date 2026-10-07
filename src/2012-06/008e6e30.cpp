// roc 2012-06 008e6e30  unit: RBX::VTextureTrail::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e6e30
//
// 008e6e30  e89bffffff           call 0x8e6dd0
// 008e6e35  8bc8                 mov ecx, eax
// 008e6e37  e9b41fe8ff           jmp 0x768df0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
