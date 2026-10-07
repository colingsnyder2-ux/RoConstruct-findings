// roc 2008-06 006a7610  unit: CXTPEdit  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7610
//
// 006a7610  0fb7442404           movzx eax, word ptr [esp + 4]
// 006a7615  3d25e10000           cmp eax, 0xe125
// 006a761a  751b                 jne 0x6a7637
// 006a761c  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006a761f  6a00                 push 0
// 006a7621  6a00                 push 0
// 006a7623  6802030000           push 0x302
// 006a7628  50                   push eax
// 006a7629  ff15142e8000         call dword ptr [0x802e14]
// 006a762f  b801000000           mov eax, 1
// 006a7634  c20800               ret 8
// 006a7637  3d22e10000           cmp eax, 0xe122
// 006a763c  751b                 jne 0x6a7659
// 006a763e  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006a7641  6a00                 push 0
// 006a7643  6a00                 push 0
// 006a7645  6801030000           push 0x301
// 006a764a  51                   push ecx
// 006a764b  ff15142e8000         call dword ptr [0x802e14]
// 006a7651  b801000000           mov eax, 1
// 006a7656  c20800               ret 8
// 006a7659  3d23e10000           cmp eax, 0xe123
// 006a765e  751b                 jne 0x6a767b
// 006a7660  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006a7663  6a00                 push 0
// 006a7665  6a00                 push 0
// 006a7667  6800030000           push 0x300
// 006a766c  52                   push edx
// 006a766d  ff15142e8000         call dword ptr [0x802e14]
// 006a7673  b801000000           mov eax, 1
// 006a7678  c20800               ret 8
// 006a767b  33c0                 xor eax, eax
// 006a767d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?OnCommand@CXTPEdit@@UAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
