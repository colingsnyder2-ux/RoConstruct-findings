// from server: 100% by auto
// roc 2012-06 008cf6c0  unit: RBX::VRocket::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008cf6c0
//
// 008cf6c0  e8abd4ffff           call 0x8ccb70
// 008cf6c5  8bc8                 mov ecx, eax
// 008cf6c7  e95492e9ff           jmp 0x768920
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
