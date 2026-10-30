// from server: 100% by auto
// roc 2011-06 0086a730  unit: CXTPPropertyGrid  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086a730
//
// 0086a730  e87beaffff           call 0x8691b0
// 0086a735  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086a739  8b5020               mov edx, dword ptr [eax + 0x20]
// 0086a73c  6a00                 push 0
// 0086a73e  51                   push ecx
// 0086a73f  6897010000           push 0x197
// 0086a744  52                   push edx
// 0086a745  ff15c019a400         call dword ptr [0xa419c0]
// 0086a74b  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?SetTopIndex@CXTPControlComboBoxList@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
