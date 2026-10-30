// from server: 100% by auto
// roc 2012-06 008761d0  unit: RBX::VNotificationObject::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008761d0
//
// 008761d0  e89bffffff           call 0x876170
// 008761d5  8bc8                 mov ecx, eax
// 008761d7  e9e4e6e5ff           jmp 0x6d48c0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
