// roc 2012-06 008ece90  unit: RBX::VLuaDragger::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008ece90
//
// 008ece90  e83bf8ffff           call 0x8ec6d0
// 008ece95  8bc8                 mov ecx, eax
// 008ece97  e914c1e7ff           jmp 0x768fb0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
