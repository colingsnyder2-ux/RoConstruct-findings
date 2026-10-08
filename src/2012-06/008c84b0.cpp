// from server: 100% by auto
// roc 2012-06 008c84b0  unit: RBX::VDialogRoot::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c84b0
//
// 008c84b0  e8bbfdffff           call 0x8c8270
// 008c84b5  8bc8                 mov ecx, eax
// 008c84b7  e90400eaff           jmp 0x7684c0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
