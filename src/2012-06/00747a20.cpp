// roc 2012-06 00747a20  unit: RBX::VTexture::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00747a20
//
// 00747a20  e89bffffff           call 0x7479c0
// 00747a25  8bc8                 mov ecx, eax
// 00747a27  e924ead0ff           jmp 0x456450
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
