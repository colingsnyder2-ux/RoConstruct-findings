// from server: 100% by auto
// roc 2012-06 00529590  unit: RBX::VObjectValue::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00529590
//
// 00529590  e82bffffff           call 0x5294c0
// 00529595  8bc8                 mov ecx, eax
// 00529597  e95466ffff           jmp 0x51fbf0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
