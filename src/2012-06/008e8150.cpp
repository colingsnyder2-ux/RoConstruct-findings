// from server: 100% by auto
// roc 2012-06 008e8150  unit: RBX::VFloorWire::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e8150
//
// 008e8150  e85bffffff           call 0x8e80b0
// 008e8155  8bc8                 mov ecx, eax
// 008e8157  e9040de8ff           jmp 0x768e60
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
