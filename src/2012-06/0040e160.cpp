// from server: 100% by auto
// roc 2012-06 0040e160  unit: VAuthoringSettings::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0040e160
//
// 0040e160  e86be9ffff           call 0x40cad0
// 0040e165  8bc8                 mov ecx, eax
// 0040e167  e994f9ffff           jmp 0x40db00
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
