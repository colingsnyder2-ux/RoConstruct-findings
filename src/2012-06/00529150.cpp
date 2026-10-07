// roc 2012-06 00529150  unit: RBX::VStringValue::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00529150
//
// 00529150  e82bffffff           call 0x529080
// 00529155  8bc8                 mov ecx, eax
// 00529157  e9246affff           jmp 0x51fb80
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
