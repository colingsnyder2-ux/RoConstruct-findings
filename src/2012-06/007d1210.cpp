// roc 2012-06 007d1210  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d1210
//
// 007d1210  e89bffffff           call 0x7d11b0
// 007d1215  8bc8                 mov ecx, eax
// 007d1217  e9e4e5d4ff           jmp 0x51f800
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
