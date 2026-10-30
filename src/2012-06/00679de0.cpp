// from server: 100% by auto
// roc 2012-06 00679de0  unit: RBX::VDebugSettings::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00679de0
//
// 00679de0  e8abf6ffff           call 0x679490
// 00679de5  8bc8                 mov ecx, eax
// 00679de7  e9d479d8ff           jmp 0x4017c0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
