// roc 2012-06 007d4a00  unit: RBX::VConfiguration::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d4a00
//
// 007d4a00  e89bffffff           call 0x7d49a0
// 007d4a05  8bc8                 mov ecx, eax
// 007d4a07  e904b1d4ff           jmp 0x51fb10
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
