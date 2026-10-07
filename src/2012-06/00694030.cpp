// roc 2012-06 00694030  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00694030
//
// 00694030  e80bf5ffff           call 0x693540
// 00694035  8bc8                 mov ecx, eax
// 00694037  e984e8d6ff           jmp 0x4028c0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
