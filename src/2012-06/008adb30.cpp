// from server: 100% by auto
// roc 2012-06 008adb30  unit: RBX::VFlag::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008adb30
//
// 008adb30  e85bfdffff           call 0x8ad890
// 008adb35  8bc8                 mov ecx, eax
// 008adb37  e96430e7ff           jmp 0x720ba0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
