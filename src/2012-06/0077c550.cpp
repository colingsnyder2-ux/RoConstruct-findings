// from server: 100% by auto
// roc 2012-06 0077c550  unit: RBX::N$E?sDoubleValue::V?$Value::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0077c550
//
// 0077c550  e82bffffff           call 0x77c480
// 0077c555  8bc8                 mov ecx, eax
// 0077c557  e9a4cbfeff           jmp 0x769100
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
