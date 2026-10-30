// from server: 100% by auto
// roc 2012-06 008cad50  unit: RBX::VFlagStand::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008cad50
//
// 008cad50  e8abfeffff           call 0x8cac00
// 008cad55  8bc8                 mov ecx, eax
// 008cad57  e9b4d8e9ff           jmp 0x768610
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
