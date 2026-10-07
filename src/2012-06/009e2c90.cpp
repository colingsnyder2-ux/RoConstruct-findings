// roc 2012-06 009e2c90  unit: CXTPPropertyGrid  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e2c90
//
// 009e2c90  e88beaffff           call 0x9e1720
// 009e2c95  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009e2c99  8b5020               mov edx, dword ptr [eax + 0x20]
// 009e2c9c  6a00                 push 0
// 009e2c9e  51                   push ecx
// 009e2c9f  6897010000           push 0x197
// 009e2ca4  52                   push edx
// 009e2ca5  ff15043cb200         call dword ptr [0xb23c04]
// 009e2cab  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?SetTopIndex@CXTPControlComboBoxList@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
