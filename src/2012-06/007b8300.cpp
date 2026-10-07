// roc 2012-06 007b8300  unit: RBX::VForceField::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b8300
//
// 007b8300  e89bffffff           call 0x7b82a0
// 007b8305  8bc8                 mov ecx, eax
// 007b8307  e9f4c3d4ff           jmp 0x504700
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
