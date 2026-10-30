// from server: 100% by auto
// roc 2012-06 00694040  unit: RBX::VStockSound::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00694040
//
// 00694040  e81bfeffff           call 0x693e60
// 00694045  8bc8                 mov ecx, eax
// 00694047  e9b4feffff           jmp 0x693f00
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
