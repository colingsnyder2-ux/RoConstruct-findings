// from server: 100% by auto
// roc 2012-06 00899680  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00899680
//
// 00899680  e83bfbffff           call 0x8991c0
// 00899685  8bc8                 mov ecx, eax
// 00899687  e984b1e5ff           jmp 0x6f4810
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
