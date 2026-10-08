// from server: 100% by auto
// roc 2012-06 007a5d70  unit: RBX::VPose::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a5d70
//
// 007a5d70  e8bbfeffff           call 0x7a5c30
// 007a5d75  8bc8                 mov ecx, eax
// 007a5d77  e9f4bcd0ff           jmp 0x4b1a70
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
