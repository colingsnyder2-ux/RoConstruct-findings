// roc 2012-06 00747970  unit: RBX::VDecal::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00747970
//
// 00747970  e8cbfdffff           call 0x747740
// 00747975  8bc8                 mov ecx, eax
// 00747977  e964ead0ff           jmp 0x4563e0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
