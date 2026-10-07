// roc 2012-06 008d7460  unit: RBX::VArcHandles::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008d7460
//
// 008d7460  e89bffffff           call 0x8d7400
// 008d7465  8bc8                 mov ecx, eax
// 008d7467  e99415e9ff           jmp 0x768a00
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
