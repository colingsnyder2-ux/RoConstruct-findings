// from server: 100% by auto
// roc 2012-06 007cf790  unit: RBX::VSpawnLocation::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007cf790
//
// 007cf790  e81bfeffff           call 0x7cf5b0
// 007cf795  8bc8                 mov ecx, eax
// 007cf797  e9f4ffd4ff           jmp 0x51f790
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
