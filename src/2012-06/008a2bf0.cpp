// from server: 100% by auto
// roc 2012-06 008a2bf0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a2bf0
//
// 008a2bf0  e8ebfdffff           call 0x8a29e0
// 008a2bf5  8bc8                 mov ecx, eax
// 008a2bf7  e97463e7ff           jmp 0x718f70
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
