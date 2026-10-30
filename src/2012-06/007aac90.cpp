// from server: 100% by auto
// roc 2012-06 007aac90  unit: RBX::VLighting::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007aac90
//
// 007aac90  e89bffd0ff           call 0x4bac30
// 007aac95  8bc8                 mov ecx, eax
// 007aac97  e91407d1ff           jmp 0x4bb3b0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
