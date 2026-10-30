// from server: 100% by auto
// roc 2012-06 0077e610  unit: RBX::H$E?sIntConstrainedValue::V?$ConstrainedValue::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0077e610
//
// 0077e610  e82bffffff           call 0x77e540
// 0077e615  8bc8                 mov ecx, eax
// 0077e617  e9f4adfeff           jmp 0x769410
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
