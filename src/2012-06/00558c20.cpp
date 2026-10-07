// roc 2012-06 00558c20  unit: RBX::VNetworkSettings::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00558c20
//
// 00558c20  e87bfcffff           call 0x5588a0
// 00558c25  8bc8                 mov ecx, eax
// 00558c27  e96471f1ff           jmp 0x46fd90
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
