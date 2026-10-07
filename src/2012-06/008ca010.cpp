// roc 2012-06 008ca010  unit: RBX::VDialogChoice::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008ca010
//
// 008ca010  e83bffffff           call 0x8c9f50
// 008ca015  8bc8                 mov ecx, eax
// 008ca017  e914e5e9ff           jmp 0x768530
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
