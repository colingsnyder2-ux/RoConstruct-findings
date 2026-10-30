// from server: 100% by auto
// roc 2012-06 008dc470  unit: RBX::VSkateboardPlatform::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008dc470
//
// 008dc470  e85bf9ffff           call 0x8dbdd0
// 008dc475  8bc8                 mov ecx, eax
// 008dc477  e9d4c6e8ff           jmp 0x768b50
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
