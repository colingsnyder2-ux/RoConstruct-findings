// from server: 100% by auto
// roc 2012-06 0070ca60  unit: RBX::VStarterGear::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070ca60
//
// 0070ca60  e8abf9ffff           call 0x70c410
// 0070ca65  8bc8                 mov ecx, eax
// 0070ca67  e90423d1ff           jmp 0x41ed70
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
