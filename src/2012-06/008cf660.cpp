// roc 2012-06 008cf660  unit: RBX::VBodyGyro::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008cf660
//
// 008cf660  e8cbd2ffff           call 0x8cc930
// 008cf665  8bc8                 mov ecx, eax
// 008cf667  e91490e9ff           jmp 0x768680
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
