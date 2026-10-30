// from server: 100% by auto
// roc 2012-06 0077c990  unit: RBX::_N$E?sBoolValue::V?$Value::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0077c990
//
// 0077c990  e82bffffff           call 0x77c8c0
// 0077c995  8bc8                 mov ecx, eax
// 0077c997  e9d4c7feff           jmp 0x769170
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
