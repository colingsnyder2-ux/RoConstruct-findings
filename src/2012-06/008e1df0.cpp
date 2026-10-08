// from server: 100% by auto
// roc 2012-06 008e1df0  unit: RBX::VSurfaceSelection::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e1df0
//
// 008e1df0  e89bffffff           call 0x8e1d90
// 008e1df5  8bc8                 mov ecx, eax
// 008e1df7  e9346ee8ff           jmp 0x768c30
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
