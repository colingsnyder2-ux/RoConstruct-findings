// roc 2012-06 008101a0  unit: RBX::VTextBox::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008101a0
//
// 008101a0  e89bffffff           call 0x810140
// 008101a5  8bc8                 mov ecx, eax
// 008101a7  e9a4e3d4ff           jmp 0x55e550
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
