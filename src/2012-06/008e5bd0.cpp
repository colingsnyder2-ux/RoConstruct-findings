// roc 2012-06 008e5bd0  unit: RBX::VSelectionPointLasso::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e5bd0
//
// 008e5bd0  e89bffffff           call 0x8e5b70
// 008e5bd5  8bc8                 mov ecx, eax
// 008e5bd7  e9a431e8ff           jmp 0x768d80
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
