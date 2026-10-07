// roc 2012-06 008153f0  unit: RBX::VManualWeld::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008153f0
//
// 008153f0  e89bffffff           call 0x815390
// 008153f5  8bc8                 mov ecx, eax
// 008153f7  e9e4f4d5ff           jmp 0x5748e0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
