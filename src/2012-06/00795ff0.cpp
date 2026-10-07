// roc 2012-06 00795ff0  unit: RBX::VHumanoid::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00795ff0
//
// 00795ff0  e80bf4ffff           call 0x795400
// 00795ff5  8bc8                 mov ecx, eax
// 00795ff7  e9b413d0ff           jmp 0x4973b0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
