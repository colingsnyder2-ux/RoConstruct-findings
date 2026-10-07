// roc 2012-06 00465840  unit: VCRenderSettingsItem::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00465840
//
// 00465840  e81bf8ffff           call 0x465060
// 00465845  8bc8                 mov ecx, eax
// 00465847  e9d416faff           jmp 0x406f20
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
