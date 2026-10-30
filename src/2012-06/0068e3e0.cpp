// from server: 100% by auto
// roc 2012-06 0068e3e0  unit: RBX::VModelInstance::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0068e3e0
//
// 0068e3e0  e84bf9ffff           call 0x68dd30
// 0068e3e5  8bc8                 mov ecx, eax
// 0068e3e7  e9f443d7ff           jmp 0x4027e0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
