// roc 2012-06 0055fbb0  unit: RBX::VMessage::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0055fbb0
//
// 0055fbb0  e81bfeffff           call 0x55f9d0
// 0055fbb5  8bc8                 mov ecx, eax
// 0055fbb7  e944e8ffff           jmp 0x55e400
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
