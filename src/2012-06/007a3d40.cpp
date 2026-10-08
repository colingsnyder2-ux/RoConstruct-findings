// from server: 100% by auto
// roc 2012-06 007a3d40  unit: RBX::VHumanoidController::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a3d40
//
// 007a3d40  e89bffffff           call 0x7a3ce0
// 007a3d45  8bc8                 mov ecx, eax
// 007a3d47  e9d436cfff           jmp 0x497420
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
