// from server: 100% by auto
// roc 2012-06 0073bd40  unit: RBX::VToolbar::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073bd40
//
// 0073bd40  e86bfbffff           call 0x73b8b0
// 0073bd45  8bc8                 mov ecx, eax
// 0073bd47  e9c4e2cfff           jmp 0x43a010
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
