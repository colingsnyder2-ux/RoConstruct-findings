// roc 2012-06 007ce3f0  unit: RBX::VBackpack::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ce3f0
//
// 007ce3f0  e86bffffff           call 0x7ce360
// 007ce3f5  8bc8                 mov ecx, eax
// 007ce3f7  e9b412d5ff           jmp 0x51f6b0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
