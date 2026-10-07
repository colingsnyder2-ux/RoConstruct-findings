// roc 2012-06 004117d0  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004117d0
//
// 004117d0  e82bffffff           call 0x411700
// 004117d5  8bc8                 mov ecx, eax
// 004117d7  e9d4c1ffff           jmp 0x40d9b0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
