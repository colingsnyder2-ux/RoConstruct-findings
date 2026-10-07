// roc 2012-06 007d2af0  unit: RBX::VTeams::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d2af0
//
// 007d2af0  e8fbf6d6ff           call 0x5421f0
// 007d2af5  8bc8                 mov ecx, eax
// 007d2af7  e934cfd4ff           jmp 0x51fa30
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
