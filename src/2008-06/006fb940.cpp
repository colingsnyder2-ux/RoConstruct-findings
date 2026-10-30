// from server: 100% by auto
// roc 2008-06 006fb940  unit: CXTPPropertyGrid  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fb940
//
// 006fb940  e86beaffff           call 0x6fa3b0
// 006fb945  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006fb949  8b5020               mov edx, dword ptr [eax + 0x20]
// 006fb94c  6a00                 push 0
// 006fb94e  51                   push ecx
// 006fb94f  6897010000           push 0x197
// 006fb954  52                   push edx
// 006fb955  ff15142e8000         call dword ptr [0x802e14]
// 006fb95b  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?SetTopIndex@CXTPControlComboBoxList@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBoxExt.cpp
