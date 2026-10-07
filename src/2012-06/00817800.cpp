// roc 2012-06 00817800  unit: RBX::VChatService::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00817800
//
// 00817800  e8bbb1d5ff           call 0x5729c0
// 00817805  8bc8                 mov ecx, eax
// 00817807  e954d4d5ff           jmp 0x574c60
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
