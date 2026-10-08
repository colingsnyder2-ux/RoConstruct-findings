// from server: 100% by auto
// roc 2012-06 0077c110  unit: RBX::H$E?sIntValue::V?$Value::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0077c110
//
// 0077c110  e89bfeffff           call 0x77bfb0
// 0077c115  8bc8                 mov ecx, eax
// 0077c117  e974cffeff           jmp 0x769090
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
