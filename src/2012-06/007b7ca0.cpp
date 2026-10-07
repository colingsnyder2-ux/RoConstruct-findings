// roc 2012-06 007b7ca0  unit: RBX::VSparkles::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b7ca0
//
// 007b7ca0  e83bffffff           call 0x7b7be0
// 007b7ca5  8bc8                 mov ecx, eax
// 007b7ca7  e974c9d4ff           jmp 0x504620
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
