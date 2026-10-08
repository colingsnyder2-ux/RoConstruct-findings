// from server: 100% by auto
// roc 2012-06 008cf680  unit: RBX::VBodyThrust::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008cf680
//
// 008cf680  e86bd3ffff           call 0x8cc9f0
// 008cf685  8bc8                 mov ecx, eax
// 008cf687  e9d490e9ff           jmp 0x768760
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
