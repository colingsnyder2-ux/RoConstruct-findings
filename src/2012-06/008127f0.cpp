// from server: 100% by auto
// roc 2012-06 008127f0  unit: RBX::VMotor::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008127f0
//
// 008127f0  e8fbf7ffff           call 0x811ff0
// 008127f5  8bc8                 mov ecx, eax
// 008127f7  e98423d6ff           jmp 0x574b80
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
