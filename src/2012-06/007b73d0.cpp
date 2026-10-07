// roc 2012-06 007b73d0  unit: RBX::VFire::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b73d0
//
// 007b73d0  e8bbfeffff           call 0x7b7290
// 007b73d5  8bc8                 mov ecx, eax
// 007b73d7  e9b4d2d4ff           jmp 0x504690
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
