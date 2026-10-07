// roc 2012-06 0072c480  unit: RBX::VHat::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072c480
//
// 0072c480  e8abfdffff           call 0x72c230
// 0072c485  8bc8                 mov ecx, eax
// 0072c487  e924d7d0ff           jmp 0x439bb0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
