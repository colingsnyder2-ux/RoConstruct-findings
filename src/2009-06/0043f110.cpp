// roc 2009-06 0043f110  unit: RBX::MergeBinder  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043f110
//
// 0043f110  6aff                 push -1
// 0043f112  68e8a68600           push 0x86a6e8
// 0043f117  64a100000000         mov eax, dword ptr fs:[0]
// 0043f11d  50                   push eax
// 0043f11e  64892500000000       mov dword ptr fs:[0], esp
// 0043f125  83ec08               sub esp, 8
// 0043f128  56                   push esi
// 0043f129  c744240400000000     mov dword ptr [esp + 4], 0
// 0043f131  c744240800000000     mov dword ptr [esp + 8], 0
// 0043f139  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043f13d  8d442404             lea eax, [esp + 4]
// 0043f141  50                   push eax
// 0043f142  8bce                 mov ecx, esi
// 0043f144  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0043f14c  e87fad1c00           call 0x609ed0
// 0043f151  84c0                 test al, al
// 0043f153  746e                 je 0x43f1c3
// 0043f155  8b542420             mov edx, dword ptr [esp + 0x20]
// 0043f159  83ec08               sub esp, 8
// 0043f15c  8bcc                 mov ecx, esp
// 0043f15e  89642424             mov dword ptr [esp + 0x24], esp
// 0043f162  52                   push edx
// 0043f163  51                   push ecx
// 0043f164  e847981c00           call 0x6089b0
// 0043f169  83c408               add esp, 8
// 0043f16c  8d4c240c             lea ecx, [esp + 0xc]
// 0043f170  e88bd32000           call 0x64c500
// 0043f175  8b742408             mov esi, dword ptr [esp + 8]
// 0043f179  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0043f181  85f6                 test esi, esi
// 0043f183  742a                 je 0x43f1af
// 0043f185  8d4604               lea eax, [esi + 4]
// 0043f188  83c9ff               or ecx, 0xffffffff
// 0043f18b  f00fc108             lock xadd dword ptr [eax], ecx
// 0043f18f  751e                 jne 0x43f1af
// 0043f191  8b16                 mov edx, dword ptr [esi]
// 0043f193  8b4204               mov eax, dword ptr [edx + 4]
// 0043f196  8bce                 mov ecx, esi
// 0043f198  ffd0                 call eax
// 0043f19a  8d4e08               lea ecx, [esi + 8]
// 0043f19d  83caff               or edx, 0xffffffff
// 0043f1a0  f00fc111             lock xadd dword ptr [ecx], edx
// 0043f1a4  7509                 jne 0x43f1af
// 0043f1a6  8b06                 mov eax, dword ptr [esi]
// 0043f1a8  8b5008               mov edx, dword ptr [eax + 8]
// 0043f1ab  8bce                 mov ecx, esi
// 0043f1ad  ffd2                 call edx
// 0043f1af  b001                 mov al, 1
// 0043f1b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043f1b5  64890d00000000       mov dword ptr fs:[0], ecx
// 0043f1bc  5e                   pop esi
// 0043f1bd  83c414               add esp, 0x14
// 0043f1c0  c20800               ret 8
// 0043f1c3  a1acb0a400           mov eax, dword ptr [0xa4b0ac]
// 0043f1c8  50                   push eax
// 0043f1c9  8bce                 mov ecx, esi
// 0043f1cb  e8e0a71c00           call 0x6099b0
// 0043f1d0  8b742408             mov esi, dword ptr [esp + 8]
// 0043f1d4  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0043f1dc  84c0                 test al, al
// 0043f1de  7442                 je 0x43f222
// 0043f1e0  85f6                 test esi, esi
// 0043f1e2  742a                 je 0x43f20e
// 0043f1e4  8d4e04               lea ecx, [esi + 4]
// 0043f1e7  83caff               or edx, 0xffffffff
// 0043f1ea  f00fc111             lock xadd dword ptr [ecx], edx
// 0043f1ee  751e                 jne 0x43f20e
// 0043f1f0  8b06                 mov eax, dword ptr [esi]
// 0043f1f2  8b5004               mov edx, dword ptr [eax + 4]
// 0043f1f5  8bce                 mov ecx, esi
// 0043f1f7  ffd2                 call edx
// 0043f1f9  8d4608               lea eax, [esi + 8]
// 0043f1fc  83c9ff               or ecx, 0xffffffff
// 0043f1ff  f00fc108             lock xadd dword ptr [eax], ecx
// 0043f203  7509                 jne 0x43f20e
// 0043f205  8b16                 mov edx, dword ptr [esi]
// 0043f207  8b4208               mov eax, dword ptr [edx + 8]
// 0043f20a  8bce                 mov ecx, esi
// 0043f20c  ffd0                 call eax
// 0043f20e  b001                 mov al, 1
// 0043f210  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043f214  64890d00000000       mov dword ptr fs:[0], ecx
// 0043f21b  5e                   pop esi
// 0043f21c  83c414               add esp, 0x14
// 0043f21f  c20800               ret 8
// 0043f222  85f6                 test esi, esi
// 0043f224  742a                 je 0x43f250
// 0043f226  8d4e04               lea ecx, [esi + 4]
// 0043f229  83caff               or edx, 0xffffffff
// 0043f22c  f00fc111             lock xadd dword ptr [ecx], edx
// 0043f230  751e                 jne 0x43f250
// 0043f232  8b06                 mov eax, dword ptr [esi]
// 0043f234  8b5004               mov edx, dword ptr [eax + 4]
// 0043f237  8bce                 mov ecx, esi
// 0043f239  ffd2                 call edx
// 0043f23b  8d4608               lea eax, [esi + 8]
// 0043f23e  83c9ff               or ecx, 0xffffffff
// 0043f241  f00fc108             lock xadd dword ptr [eax], ecx
// 0043f245  7509                 jne 0x43f250
// 0043f247  8b16                 mov edx, dword ptr [esi]
// 0043f249  8b4208               mov eax, dword ptr [edx + 8]
// 0043f24c  8bce                 mov ecx, esi
// 0043f24e  ffd0                 call eax
// 0043f250  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0043f254  32c0                 xor al, al
// 0043f256  64890d00000000       mov dword ptr fs:[0], ecx
// 0043f25d  5e                   pop esi
// 0043f25e  83c414               add esp, 0x14
// 0043f261  c20800               ret 8
// library rbxgs/v8xml\SerializerV2.cpp (function ?processID@MergeBinder@RBX@@MAE_NPBVXmlNameValuePair@@PAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
