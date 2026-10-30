// from server: 100% by auto
// roc 2012-06 006886f0  unit: RBX::VCamera::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006886f0
//
// 006886f0  e8fbf1ffff           call 0x6878f0
// 006886f5  8bc8                 mov ecx, eax
// 006886f7  e974a0d7ff           jmp 0x402770
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
