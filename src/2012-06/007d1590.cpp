// roc 2012-06 007d1590  unit: RBX::VPants::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d1590
//
// 007d1590  e89bffffff           call 0x7d1530
// 007d1595  8bc8                 mov ecx, eax
// 007d1597  e9d4e2d4ff           jmp 0x51f870
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
