// roc 2012-06 007acd60  unit: RBX::VSky::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007acd60
//
// 007acd60  e83bffffff           call 0x7acca0
// 007acd65  8bc8                 mov ecx, eax
// 007acd67  e9b4e6d0ff           jmp 0x4bb420
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
