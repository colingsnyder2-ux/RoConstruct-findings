// roc 2012-06 00760630  unit: RBX::VLuaSettings::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00760630
//
// 00760630  e84bffffff           call 0x760580
// 00760635  8bc8                 mov ecx, eax
// 00760637  e9c4f7d0ff           jmp 0x46fe00
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
