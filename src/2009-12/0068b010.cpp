// roc 2009-12 0068b010  unit: TextXmlParser  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068b010
//
// 0068b010  6aff                 push -1
// 0068b012  6801a19300           push 0x93a101
// 0068b017  64a100000000         mov eax, dword ptr fs:[0]
// 0068b01d  50                   push eax
// 0068b01e  64892500000000       mov dword ptr fs:[0], esp
// 0068b025  83ec24               sub esp, 0x24
// 0068b028  55                   push ebp
// 0068b029  56                   push esi
// 0068b02a  8bf1                 mov esi, ecx
// 0068b02c  57                   push edi
// 0068b02d  8d4c2414             lea ecx, [esp + 0x14]
// 0068b031  ff15e8b69800         call dword ptr [0x98b6e8]
// 0068b037  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0068b03b  8d442414             lea eax, [esp + 0x14]
// 0068b03f  50                   push eax
// 0068b040  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0068b048  e8a3bdfeff           call 0x676df0
// 0068b04d  8d4c2414             lea ecx, [esp + 0x14]
// 0068b051  51                   push ecx
// 0068b052  8d542410             lea edx, [esp + 0x10]
// 0068b056  83c61c               add esi, 0x1c
// 0068b059  52                   push edx
// 0068b05a  8bce                 mov ecx, esi
// 0068b05c  e84fe10d00           call 0x7691b0
// 0068b061  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0068b065  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0068b068  8b36                 mov esi, dword ptr [esi]
// 0068b06a  85ff                 test edi, edi
// 0068b06c  7404                 je 0x68b072
// 0068b06e  3bfe                 cmp edi, esi
// 0068b070  7406                 je 0x68b078
// 0068b072  ff1560b79800         call dword ptr [0x98b760]
// 0068b078  8b742410             mov esi, dword ptr [esp + 0x10]
// 0068b07c  3bf5                 cmp esi, ebp
// 0068b07e  7454                 je 0x68b0d4
// 0068b080  85ff                 test edi, edi
// 0068b082  754c                 jne 0x68b0d0
// 0068b084  ff1560b79800         call dword ptr [0x98b760]
// 0068b08a  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0068b08d  7506                 jne 0x68b095
// 0068b08f  ff1560b79800         call dword ptr [0x98b760]
// 0068b095  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0068b099  8b11                 mov edx, dword ptr [ecx]
// 0068b09b  8b12                 mov edx, dword ptr [edx]
// 0068b09d  8d4628               lea eax, [esi + 0x28]
// 0068b0a0  50                   push eax
// 0068b0a1  8b442448             mov eax, dword ptr [esp + 0x48]
// 0068b0a5  50                   push eax
// 0068b0a6  ffd2                 call edx
// 0068b0a8  8d4c2414             lea ecx, [esp + 0x14]
// 0068b0ac  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0068b0b4  ff15e4b69800         call dword ptr [0x98b6e4]
// 0068b0ba  5f                   pop edi
// 0068b0bb  5e                   pop esi
// 0068b0bc  b001                 mov al, 1
// 0068b0be  5d                   pop ebp
// 0068b0bf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0068b0c3  64890d00000000       mov dword ptr fs:[0], ecx
// 0068b0ca  83c430               add esp, 0x30
// 0068b0cd  c20c00               ret 0xc
// 0068b0d0  8b3f                 mov edi, dword ptr [edi]
// 0068b0d2  ebb6                 jmp 0x68b08a
// 0068b0d4  6a00                 push 0
// 0068b0d6  8d4c2410             lea ecx, [esp + 0x10]
// 0068b0da  e841ab0300           call 0x6c5c20
// 0068b0df  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0068b0e3  8b11                 mov edx, dword ptr [ecx]
// 0068b0e5  8b12                 mov edx, dword ptr [edx]
// 0068b0e7  50                   push eax
// 0068b0e8  8b442448             mov eax, dword ptr [esp + 0x48]
// 0068b0ec  50                   push eax
// 0068b0ed  c644244001           mov byte ptr [esp + 0x40], 1
// 0068b0f2  ffd2                 call edx
// 0068b0f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 0068b0f8  c644243800           mov byte ptr [esp + 0x38], 0
// 0068b0fd  85f6                 test esi, esi
// 0068b0ff  742a                 je 0x68b12b
// 0068b101  8d4604               lea eax, [esi + 4]
// 0068b104  83c9ff               or ecx, 0xffffffff
// 0068b107  f00fc108             lock xadd dword ptr [eax], ecx
// 0068b10b  751e                 jne 0x68b12b
// 0068b10d  8b16                 mov edx, dword ptr [esi]
// 0068b10f  8b4204               mov eax, dword ptr [edx + 4]
// 0068b112  8bce                 mov ecx, esi
// 0068b114  ffd0                 call eax
// 0068b116  8d4e08               lea ecx, [esi + 8]
// 0068b119  83caff               or edx, 0xffffffff
// 0068b11c  f00fc111             lock xadd dword ptr [ecx], edx
// 0068b120  7509                 jne 0x68b12b
// 0068b122  8b06                 mov eax, dword ptr [esi]
// 0068b124  8b5008               mov edx, dword ptr [eax + 8]
// 0068b127  8bce                 mov ecx, esi
// 0068b129  ffd2                 call edx
// 0068b12b  8d4c2414             lea ecx, [esp + 0x14]
// 0068b12f  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0068b137  ff15e4b69800         call dword ptr [0x98b6e4]
// 0068b13d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0068b141  5f                   pop edi
// 0068b142  5e                   pop esi
// 0068b143  32c0                 xor al, al
// 0068b145  5d                   pop ebp
// 0068b146  64890d00000000       mov dword ptr fs:[0], ecx
// 0068b14d  83c430               add esp, 0x30
// 0068b150  c20c00               ret 0xc
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveIDREF@ArchiveBinder@@QAE_NUIDREFBinding@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
