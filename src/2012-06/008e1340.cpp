// roc 2012-06 008e1340  unit: RBX::VSkateboardController::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e1340
//
// 008e1340  e84bffffff           call 0x8e1290
// 008e1345  8bc8                 mov ecx, eax
// 008e1347  e97478e8ff           jmp 0x768bc0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
