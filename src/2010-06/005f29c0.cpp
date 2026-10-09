// roc 2010-06 005f29c0  unit: ArchiveBinder  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f29c0
//
// 005f29c0  64a100000000         mov eax, dword ptr fs:[0]
// 005f29c6  6aff                 push -1
// 005f29c8  68189a9900           push 0x999a18
// 005f29cd  50                   push eax
// 005f29ce  64892500000000       mov dword ptr fs:[0], esp
// 005f29d5  a1d892c100           mov eax, dword ptr [0xc192d8]
// 005f29da  83ec18               sub esp, 0x18
// 005f29dd  53                   push ebx
// 005f29de  55                   push ebp
// 005f29df  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 005f29e3  56                   push esi
// 005f29e4  57                   push edi
// 005f29e5  50                   push eax
// 005f29e6  8bcd                 mov ecx, ebp
// 005f29e8  e823d3feff           call 0x5dfd10
// 005f29ed  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005f29f1  33db                 xor ebx, ebx
// 005f29f3  3bc3                 cmp eax, ebx
// 005f29f5  0f84c7000000         je 0x5f2ac2
// 005f29fb  895c2410             mov dword ptr [esp + 0x10], ebx
// 005f29ff  895c2414             mov dword ptr [esp + 0x14], ebx
// 005f2a03  8d4c2410             lea ecx, [esp + 0x10]
// 005f2a07  51                   push ecx
// 005f2a08  8d4808               lea ecx, [eax + 8]
// 005f2a0b  895c2434             mov dword ptr [esp + 0x34], ebx
// 005f2a0f  e81cd7feff           call 0x5e0130
// 005f2a14  8d542420             lea edx, [esp + 0x20]
// 005f2a18  52                   push edx
// 005f2a19  8d4c2414             lea ecx, [esp + 0x14]
// 005f2a1d  e80e6ce1ff           call 0x409630
// 005f2a22  8b00                 mov eax, dword ptr [eax]
// 005f2a24  89442438             mov dword ptr [esp + 0x38], eax
// 005f2a28  895c2418             mov dword ptr [esp + 0x18], ebx
// 005f2a2c  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005f2a30  8d4c2438             lea ecx, [esp + 0x38]
// 005f2a34  51                   push ecx
// 005f2a35  8bcf                 mov ecx, edi
// 005f2a37  c644243402           mov byte ptr [esp + 0x34], 2
// 005f2a3c  e8cfb4efff           call 0x4edf10
// 005f2a41  8d54241c             lea edx, [esp + 0x1c]
// 005f2a45  52                   push edx
// 005f2a46  8d4804               lea ecx, [eax + 4]
// 005f2a49  8918                 mov dword ptr [eax], ebx
// 005f2a4b  e840f6e0ff           call 0x402090
// 005f2a50  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f2a54  885c2430             mov byte ptr [esp + 0x30], bl
// 005f2a58  3bc3                 cmp eax, ebx
// 005f2a5a  742c                 je 0x5f2a88
// 005f2a5c  8bf0                 mov esi, eax
// 005f2a5e  83c004               add eax, 4
// 005f2a61  83c9ff               or ecx, 0xffffffff
// 005f2a64  f00fc108             lock xadd dword ptr [eax], ecx
// 005f2a68  751e                 jne 0x5f2a88
// 005f2a6a  8b16                 mov edx, dword ptr [esi]
// 005f2a6c  8b4204               mov eax, dword ptr [edx + 4]
// 005f2a6f  8bce                 mov ecx, esi
// 005f2a71  ffd0                 call eax
// 005f2a73  8d4e08               lea ecx, [esi + 8]
// 005f2a76  83caff               or edx, 0xffffffff
// 005f2a79  f00fc111             lock xadd dword ptr [ecx], edx
// 005f2a7d  7509                 jne 0x5f2a88
// 005f2a7f  8b06                 mov eax, dword ptr [esi]
// 005f2a81  8b5008               mov edx, dword ptr [eax + 8]
// 005f2a84  8bce                 mov ecx, esi
// 005f2a86  ffd2                 call edx
// 005f2a88  8b742414             mov esi, dword ptr [esp + 0x14]
// 005f2a8c  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005f2a94  3bf3                 cmp esi, ebx
// 005f2a96  742a                 je 0x5f2ac2
// 005f2a98  8d4604               lea eax, [esi + 4]
// 005f2a9b  83c9ff               or ecx, 0xffffffff
// 005f2a9e  f00fc108             lock xadd dword ptr [eax], ecx
// 005f2aa2  751e                 jne 0x5f2ac2
// 005f2aa4  8b16                 mov edx, dword ptr [esi]
// 005f2aa6  8b4204               mov eax, dword ptr [edx + 4]
// 005f2aa9  8bce                 mov ecx, esi
// 005f2aab  ffd0                 call eax
// 005f2aad  8d4e08               lea ecx, [esi + 8]
// 005f2ab0  83caff               or edx, 0xffffffff
// 005f2ab3  f00fc111             lock xadd dword ptr [ecx], edx
// 005f2ab7  7509                 jne 0x5f2ac2
// 005f2ab9  8b06                 mov eax, dword ptr [esi]
// 005f2abb  8b5008               mov edx, dword ptr [eax + 8]
// 005f2abe  8bce                 mov ecx, esi
// 005f2ac0  ffd2                 call edx
// 005f2ac2  8b7504               mov esi, dword ptr [ebp + 4]
// 005f2ac5  3bf3                 cmp esi, ebx
// 005f2ac7  7417                 je 0x5f2ae0
// 005f2ac9  8da42400000000       lea esp, [esp]
// 005f2ad0  57                   push edi
// 005f2ad1  56                   push esi
// 005f2ad2  e8e9feffff           call 0x5f29c0
// 005f2ad7  8b36                 mov esi, dword ptr [esi]
// 005f2ad9  83c408               add esp, 8
// 005f2adc  3bf3                 cmp esi, ebx
// 005f2ade  75f0                 jne 0x5f2ad0
// 005f2ae0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f2ae4  5f                   pop edi
// 005f2ae5  5e                   pop esi
// 005f2ae6  5d                   pop ebp
// 005f2ae7  5b                   pop ebx
// 005f2ae8  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2aef  83c424               add esp, 0x24
// 005f2af2  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?buildIsolationMap@@YAXPAVXmlElement@@AAV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
