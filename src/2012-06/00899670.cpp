// roc 2012-06 00899670  unit: RBX::VHole::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00899670
//
// 00899670  e8ebfaffff           call 0x899160
// 00899675  8bc8                 mov ecx, eax
// 00899677  e924b1e5ff           jmp 0x6f47a0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
