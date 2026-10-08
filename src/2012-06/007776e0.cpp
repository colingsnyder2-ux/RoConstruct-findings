// from server: 100% by auto
// roc 2012-06 007776e0  unit: RBX::VSeat::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007776e0
//
// 007776e0  e89bffffff           call 0x777680
// 007776e5  8bc8                 mov ecx, eax
// 007776e7  e98413ffff           jmp 0x768a70
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
