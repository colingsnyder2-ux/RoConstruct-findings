// from server: 100% by auto
// roc 2012-06 007354b0  unit: RBX::VFrame::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007354b0
//
// 007354b0  e89bffffff           call 0x735450
// 007354b5  8bc8                 mov ecx, eax
// 007354b7  e92449d0ff           jmp 0x439de0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
