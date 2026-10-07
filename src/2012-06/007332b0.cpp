// roc 2012-06 007332b0  unit: RBX::VGuiMain::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007332b0
//
// 007332b0  e89bffffff           call 0x733250
// 007332b5  8bc8                 mov ecx, eax
// 007332b7  e9b46ad0ff           jmp 0x439d70
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
