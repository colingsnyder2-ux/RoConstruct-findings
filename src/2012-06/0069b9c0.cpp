// roc 2012-06 0069b9c0  unit: RBX::VFriendService::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069b9c0
//
// 0069b9c0  e85b23e8ff           call 0x51dd20
// 0069b9c5  8bc8                 mov ecx, eax
// 0069b9c7  e934b6d6ff           jmp 0x407000
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
