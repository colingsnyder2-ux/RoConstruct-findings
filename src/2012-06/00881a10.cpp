// from server: 100% by auto
// roc 2012-06 00881a10  unit: RBX::VTestService::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00881a10
//
// 00881a10  e85b17e5ff           call 0x6d3170
// 00881a15  8bc8                 mov ecx, eax
// 00881a17  e9842fe5ff           jmp 0x6d49a0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
