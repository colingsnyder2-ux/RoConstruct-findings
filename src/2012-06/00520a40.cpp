// roc 2012-06 00520a40  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00520a40
//
// 00520a40  e83bd3ffff           call 0x51dd80
// 00520a45  8bc8                 mov ecx, eax
// 00520a47  e92466eeff           jmp 0x407070
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
