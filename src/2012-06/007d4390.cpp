// roc 2012-06 007d4390  unit: RBX::VTimerService::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d4390
//
// 007d4390  e86b9ad4ff           call 0x51de00
// 007d4395  8bc8                 mov ecx, eax
// 007d4397  e904b7d4ff           jmp 0x51faa0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
