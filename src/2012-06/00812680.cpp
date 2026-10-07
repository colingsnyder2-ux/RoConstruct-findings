// roc 2012-06 00812680  unit: RBX::VSnap::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00812680
//
// 00812680  e88bf7ffff           call 0x811e10
// 00812685  8bc8                 mov ecx, eax
// 00812687  e90421d6ff           jmp 0x574790
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
