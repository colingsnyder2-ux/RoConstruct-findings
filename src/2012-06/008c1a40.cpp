// roc 2012-06 008c1a40  unit: RBX::VBillboardGui::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008c1a40
//
// 008c1a40  e8ebfeffff           call 0x8c1930
// 008c1a45  8bc8                 mov ecx, eax
// 008c1a47  e94468eaff           jmp 0x768290
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
