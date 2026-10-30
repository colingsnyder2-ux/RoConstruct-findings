// from server: 100% by auto
// roc 2012-06 0072c470  unit: RBX::VAccoutrement::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072c470
//
// 0072c470  e8cbf8ffff           call 0x72bd40
// 0072c475  8bc8                 mov ecx, eax
// 0072c477  e9c4d6d0ff           jmp 0x439b40
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
