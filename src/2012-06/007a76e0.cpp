// from server: 100% by auto
// roc 2012-06 007a76e0  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a76e0
//
// 007a76e0  e83bfeffff           call 0x7a7520
// 007a76e5  8bc8                 mov ecx, eax
// 007a76e7  e964a4d0ff           jmp 0x4b1b50
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
