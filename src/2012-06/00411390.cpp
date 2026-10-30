// from server: 100% by auto
// roc 2012-06 00411390  unit: RBX::Reflection::Metadata::VYieldFunctions::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00411390
//
// 00411390  e82bffffff           call 0x4112c0
// 00411395  8bc8                 mov ecx, eax
// 00411397  e9a4c5ffff           jmp 0x40d940
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
