// roc 2012-06 00815540  unit: RBX::VMotor6D::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00815540
//
// 00815540  e89bffffff           call 0x8154e0
// 00815545  8bc8                 mov ecx, eax
// 00815547  e9a4f6d5ff           jmp 0x574bf0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
