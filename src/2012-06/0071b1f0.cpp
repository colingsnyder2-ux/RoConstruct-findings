// from server: 100% by auto
// roc 2012-06 0071b1f0  unit: RBX::VScript::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071b1f0
//
// 0071b1f0  e86bfbffff           call 0x71ad60
// 0071b1f5  8bc8                 mov ecx, eax
// 0071b1f7  e9440fd1ff           jmp 0x42c140
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
