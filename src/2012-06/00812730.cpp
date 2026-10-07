// roc 2012-06 00812730  unit: RBX::VRotateP::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00812730
//
// 00812730  e89bffffff           call 0x8126d0
// 00812735  8bc8                 mov ecx, eax
// 00812737  e96423d6ff           jmp 0x574aa0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
