// roc 2012-06 0080cb80  unit: RBX::VTextLabel::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0080cb80
//
// 0080cb80  e89bffffff           call 0x80cb20
// 0080cb85  8bc8                 mov ecx, eax
// 0080cb87  e95419d5ff           jmp 0x55e4e0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
