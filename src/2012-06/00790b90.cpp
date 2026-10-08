// from server: 100% by auto
// roc 2012-06 00790b90  unit: RBX::VAnimation::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00790b90
//
// 00790b90  e8abfeffff           call 0x790a40
// 00790b95  8bc8                 mov ecx, eax
// 00790b97  e984e2ceff           jmp 0x47ee20
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
