// from server: 100% by auto
// roc 2012-06 007cec70  unit: RBX::VGuiImageButton::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007cec70
//
// 007cec70  e89bffffff           call 0x7cec10
// 007cec75  8bc8                 mov ecx, eax
// 007cec77  e9a40ad5ff           jmp 0x51f720
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
