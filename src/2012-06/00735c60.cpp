// roc 2012-06 00735c60  unit: RBX::VImageLabel::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00735c60
//
// 00735c60  e89bffffff           call 0x735c00
// 00735c65  8bc8                 mov ecx, eax
// 00735c67  e9e441d0ff           jmp 0x439e50
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
