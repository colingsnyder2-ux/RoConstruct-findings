// roc 2012-06 004102c0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004102c0
//
// 004102c0  e82bffffff           call 0x4101f0
// 004102c5  8bc8                 mov ecx, eax
// 004102c7  e9b4d4ffff           jmp 0x40d780
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
