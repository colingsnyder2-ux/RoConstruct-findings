// from server: 100% by auto
// roc 2012-06 008154c0  unit: RBX::VManualGlue::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008154c0
//
// 008154c0  e89bffffff           call 0x815460
// 008154c5  8bc8                 mov ecx, eax
// 008154c7  e984f4d5ff           jmp 0x574950
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
