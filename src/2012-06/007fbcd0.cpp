// from server: 100% by auto
// roc 2012-06 007fbcd0  unit: RBX::VInsertService::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007fbcd0
//
// 007fbcd0  e87b65d4ff           call 0x542250
// 007fbcd5  8bc8                 mov ecx, eax
// 007fbcd7  e9d47dd4ff           jmp 0x543ab0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
