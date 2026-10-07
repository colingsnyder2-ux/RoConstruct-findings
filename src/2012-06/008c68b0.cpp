// roc 2012-06 008c68b0  unit: RBX::VVirtualUser::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c68b0
//
// 008c68b0  e84bffffff           call 0x8c6800
// 008c68b5  8bc8                 mov ecx, eax
// 008c68b7  e9941beaff           jmp 0x768450
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
