// roc 2012-06 00411f90  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00411f90
//
// 00411f90  e82bffffff           call 0x411ec0
// 00411f95  8bc8                 mov ecx, eax
// 00411f97  e9f4baffff           jmp 0x40da90
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
