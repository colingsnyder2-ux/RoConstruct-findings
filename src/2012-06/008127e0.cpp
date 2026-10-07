// roc 2012-06 008127e0  unit: RBX::VRotateV::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008127e0
//
// 008127e0  e89bffffff           call 0x812780
// 008127e5  8bc8                 mov ecx, eax
// 008127e7  e92423d6ff           jmp 0x574b10
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
