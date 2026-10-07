// roc 2012-06 007a66e0  unit: RBX::VKeyframe::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a66e0
//
// 007a66e0  e83bffffff           call 0x7a6620
// 007a66e5  8bc8                 mov ecx, eax
// 007a66e7  e9f4b3d0ff           jmp 0x4b1ae0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
