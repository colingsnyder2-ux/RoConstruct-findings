// from server: 100% by auto
// roc 2012-06 0055fbc0  unit: RBX::VHint::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0055fbc0
//
// 0055fbc0  e8ebfeffff           call 0x55fab0
// 0055fbc5  8bc8                 mov ecx, eax
// 0055fbc7  e9a4e8ffff           jmp 0x55e470
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
