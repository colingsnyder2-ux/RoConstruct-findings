// from server: 100% by auto
// roc 2012-06 007d1320  unit: RBX::VSkin::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d1320
//
// 007d1320  e89bffffff           call 0x7d12c0
// 007d1325  8bc8                 mov ecx, eax
// 007d1327  e994e6d4ff           jmp 0x51f9c0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
