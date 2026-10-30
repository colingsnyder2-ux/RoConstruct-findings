// from server: 100% by auto
// roc 2012-06 00410b80  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00410b80
//
// 00410b80  e82bffffff           call 0x410ab0
// 00410b85  8bc8                 mov ecx, eax
// 00410b87  e9d4ccffff           jmp 0x40d860
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
