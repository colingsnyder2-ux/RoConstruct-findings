// roc 2012-06 00812690  unit: RBX::VWeld::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00812690
//
// 00812690  e8dbf7ffff           call 0x811e70
// 00812695  8bc8                 mov ecx, eax
// 00812697  e96421d6ff           jmp 0x574800
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
