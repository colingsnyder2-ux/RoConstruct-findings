// roc 2012-06 008e5b10  unit: RBX::VSelectionPartLasso::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e5b10
//
// 008e5b10  e89bffffff           call 0x8e5ab0
// 008e5b15  8bc8                 mov ecx, eax
// 008e5b17  e9f431e8ff           jmp 0x768d10
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
