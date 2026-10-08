// from server: 100% by auto
// roc 2012-06 0071c5f0  unit: RBX::VLocalScript::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071c5f0
//
// 0071c5f0  e89bffffff           call 0x71c590
// 0071c5f5  8bc8                 mov ecx, eax
// 0071c5f7  e9b4fbd0ff           jmp 0x42c1b0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
