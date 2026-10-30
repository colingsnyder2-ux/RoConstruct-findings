// from server: 100% by auto
// roc 2012-06 008dab90  unit: RBX::VSelectionBox::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008dab90
//
// 008dab90  e89bffffff           call 0x8dab30
// 008dab95  8bc8                 mov ecx, eax
// 008dab97  e944dfe8ff           jmp 0x768ae0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
