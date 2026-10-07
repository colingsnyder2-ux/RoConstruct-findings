// roc 2012-06 0081a020  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0081a020
//
// 0081a020  e88bfeffff           call 0x819eb0
// 0081a025  8bc8                 mov ecx, eax
// 0081a027  e9a4acd5ff           jmp 0x574cd0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
