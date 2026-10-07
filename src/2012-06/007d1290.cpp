// roc 2012-06 007d1290  unit: RBX::VBodyColors::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d1290
//
// 007d1290  e89bffffff           call 0x7d1230
// 007d1295  8bc8                 mov ecx, eax
// 007d1297  e9b4e6d4ff           jmp 0x51f950
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
