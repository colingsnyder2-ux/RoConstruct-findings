// roc 2012-06 0098f0f0  unit: CXTPControlComboBoxList  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098f0f0
//
// 0098f0f0  51                   push ecx
// 0098f0f1  56                   push esi
// 0098f0f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0098f0f6  57                   push edi
// 0098f0f7  8bf9                 mov edi, ecx
// 0098f0f9  81fe25e10000         cmp esi, 0xe125
// 0098f0ff  7523                 jne 0x98f124
// 0098f101  e8cca41000           call 0xa995d2
// 0098f106  a900080008           test eax, 0x8000800
// 0098f10b  756b                 jne 0x98f178
// 0098f10d  6a01                 push 1
// 0098f10f  ff15603ab200         call dword ptr [0xb23a60]
// 0098f115  85c0                 test eax, eax
// 0098f117  745f                 je 0x98f178
// 0098f119  5f                   pop edi
// 0098f11a  b801000000           mov eax, 1
// 0098f11f  5e                   pop esi
// 0098f120  59                   pop ecx
// 0098f121  c20400               ret 4
// 0098f124  81fe23e10000         cmp esi, 0xe123
// 0098f12a  7413                 je 0x98f13f
// 0098f12c  81fe22e10000         cmp esi, 0xe122
// 0098f132  740b                 je 0x98f13f
// 0098f134  5f                   pop edi
// 0098f135  b801000000           mov eax, 1
// 0098f13a  5e                   pop esi
// 0098f13b  59                   pop ecx
// 0098f13c  c20400               ret 4
// 0098f13f  8b5720               mov edx, dword ptr [edi + 0x20]
// 0098f142  8d442408             lea eax, [esp + 8]
// 0098f146  50                   push eax
// 0098f147  8d4c2414             lea ecx, [esp + 0x14]
// 0098f14b  51                   push ecx
// 0098f14c  68b0000000           push 0xb0
// 0098f151  52                   push edx
// 0098f152  ff15043cb200         call dword ptr [0xb23c04]
// 0098f158  8b442410             mov eax, dword ptr [esp + 0x10]
// 0098f15c  3b442408             cmp eax, dword ptr [esp + 8]
// 0098f160  7416                 je 0x98f178
// 0098f162  81fe22e10000         cmp esi, 0xe122
// 0098f168  74ca                 je 0x98f134
// 0098f16a  8bcf                 mov ecx, edi
// 0098f16c  e861a41000           call 0xa995d2
// 0098f171  a900080008           test eax, 0x8000800
// 0098f176  74bc                 je 0x98f134
// 0098f178  5f                   pop edi
// 0098f179  33c0                 xor eax, eax
// 0098f17b  5e                   pop esi
// 0098f17c  59                   pop ecx
// 0098f17d  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?IsCommandEnabled@CXTPCommandBarEditCtrl@@IAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
