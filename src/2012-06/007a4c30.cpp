// from server: 100% by auto
// roc 2012-06 007a4c30  unit: RBX::VExtrudedPartInstance::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a4c30
//
// 007a4c30  e80bffffff           call 0x7a4b40
// 007a4c35  8bc8                 mov ecx, eax
// 007a4c37  e9c428cfff           jmp 0x497500
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
