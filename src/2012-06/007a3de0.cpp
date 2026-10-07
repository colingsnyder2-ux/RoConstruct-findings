// roc 2012-06 007a3de0  unit: RBX::VVehicleController::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a3de0
//
// 007a3de0  e89bffffff           call 0x7a3d80
// 007a3de5  8bc8                 mov ecx, eax
// 007a3de7  e9a436cfff           jmp 0x497490
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
