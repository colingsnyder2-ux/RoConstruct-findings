// roc 2012-06 00876df0  unit: RBX::VNotificationBox::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00876df0
//
// 00876df0  e89bffffff           call 0x876d90
// 00876df5  8bc8                 mov ecx, eax
// 00876df7  e934dbe5ff           jmp 0x6d4930
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
