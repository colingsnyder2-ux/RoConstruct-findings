// from server: 100% by auto
// roc 2012-06 008126a0  unit: RBX::VManualSurfaceJointInstance::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008126a0
//
// 008126a0  e82bf8ffff           call 0x811ed0
// 008126a5  8bc8                 mov ecx, eax
// 008126a7  e9c421d6ff           jmp 0x574870
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
