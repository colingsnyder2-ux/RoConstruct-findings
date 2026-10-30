// from server: 100% by auto
// roc 2012-06 008eeed0  unit: RBX::VAdvLuaDragger::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008eeed0
//
// 008eeed0  e8dbfcffff           call 0x8eebb0
// 008eeed5  8bc8                 mov ecx, eax
// 008eeed7  e944a1e7ff           jmp 0x769020
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
