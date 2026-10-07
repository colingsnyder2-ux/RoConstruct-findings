// roc 2012-06 00791e90  unit: RBX::VSpecialShape::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00791e90
//
// 00791e90  e89bffffff           call 0x791e30
// 00791e95  8bc8                 mov ecx, eax
// 00791e97  e964d0ceff           jmp 0x47ef00
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
