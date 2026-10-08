// from server: 100% by auto
// roc 2012-06 008cf6a0  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008cf6a0
//
// 008cf6a0  e80bd4ffff           call 0x8ccab0
// 008cf6a5  8bc8                 mov ecx, eax
// 008cf6a7  e99491e9ff           jmp 0x768840
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
