// from server: 100% by auto
// roc 2012-06 008e3390  unit: RBX::VVehicleSeat::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e3390
//
// 008e3390  e89bffffff           call 0x8e3330
// 008e3395  8bc8                 mov ecx, eax
// 008e3397  e90459e8ff           jmp 0x768ca0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
