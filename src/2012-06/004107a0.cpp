// roc 2012-06 004107a0  unit: RBX::Reflection::Metadata::VClass::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004107a0
//
// 004107a0  e8fbfeffff           call 0x4106a0
// 004107a5  8bc8                 mov ecx, eax
// 004107a7  e944d0ffff           jmp 0x40d7f0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
