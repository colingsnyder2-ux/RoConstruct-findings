// roc 2012-06 0072e860  unit: RBX::VGameSettings::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072e860
//
// 0072e860  e8abfeffff           call 0x72e710
// 0072e865  8bc8                 mov ecx, eax
// 0072e867  e9b4b3d0ff           jmp 0x439c20
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
