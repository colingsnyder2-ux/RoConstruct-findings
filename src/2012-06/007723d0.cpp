// roc 2012-06 007723d0  unit: RBX::VCustomEventReceiver::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007723d0
//
// 007723d0  e84bfeffff           call 0x772220
// 007723d5  8bc8                 mov ecx, eax
// 007723d7  e9945fffff           jmp 0x768370
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
