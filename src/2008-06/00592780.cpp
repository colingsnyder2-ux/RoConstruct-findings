// roc 2008-06 00592780  unit: ArchiveBinder  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00592780
//
// 00592780  64a100000000         mov eax, dword ptr fs:[0]
// 00592786  6aff                 push -1
// 00592788  68e82e7d00           push 0x7d2ee8
// 0059278d  50                   push eax
// 0059278e  64892500000000       mov dword ptr fs:[0], esp
// 00592795  a110539700           mov eax, dword ptr [0x975310]
// 0059279a  83ec18               sub esp, 0x18
// 0059279d  53                   push ebx
// 0059279e  55                   push ebp
// 0059279f  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 005927a3  56                   push esi
// 005927a4  57                   push edi
// 005927a5  50                   push eax
// 005927a6  8bcd                 mov ecx, ebp
// 005927a8  e8039bfeff           call 0x57c2b0
// 005927ad  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005927b1  33db                 xor ebx, ebx
// 005927b3  3bc3                 cmp eax, ebx
// 005927b5  0f84c7000000         je 0x592882
// 005927bb  895c2410             mov dword ptr [esp + 0x10], ebx
// 005927bf  895c2414             mov dword ptr [esp + 0x14], ebx
// 005927c3  8d4c2410             lea ecx, [esp + 0x10]
// 005927c7  51                   push ecx
// 005927c8  8d4808               lea ecx, [eax + 8]
// 005927cb  895c2434             mov dword ptr [esp + 0x34], ebx
// 005927cf  e80c9ffeff           call 0x57c6e0
// 005927d4  8d542420             lea edx, [esp + 0x20]
// 005927d8  52                   push edx
// 005927d9  8d4c2414             lea ecx, [esp + 0x14]
// 005927dd  e8ceedefff           call 0x4915b0
// 005927e2  8b00                 mov eax, dword ptr [eax]
// 005927e4  89442438             mov dword ptr [esp + 0x38], eax
// 005927e8  895c2418             mov dword ptr [esp + 0x18], ebx
// 005927ec  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005927f0  8d4c2438             lea ecx, [esp + 0x38]
// 005927f4  51                   push ecx
// 005927f5  8bcf                 mov ecx, edi
// 005927f7  c644243402           mov byte ptr [esp + 0x34], 2
// 005927fc  e80ffeffff           call 0x592610
// 00592801  8d54241c             lea edx, [esp + 0x1c]
// 00592805  52                   push edx
// 00592806  8d4804               lea ecx, [eax + 4]
// 00592809  8918                 mov dword ptr [eax], ebx
// 0059280b  e8a0fde6ff           call 0x4025b0
// 00592810  8b442424             mov eax, dword ptr [esp + 0x24]
// 00592814  885c2430             mov byte ptr [esp + 0x30], bl
// 00592818  3bc3                 cmp eax, ebx
// 0059281a  742c                 je 0x592848
// 0059281c  8bf0                 mov esi, eax
// 0059281e  83c004               add eax, 4
// 00592821  83c9ff               or ecx, 0xffffffff
// 00592824  f00fc108             lock xadd dword ptr [eax], ecx
// 00592828  751e                 jne 0x592848
// 0059282a  8b16                 mov edx, dword ptr [esi]
// 0059282c  8b4204               mov eax, dword ptr [edx + 4]
// 0059282f  8bce                 mov ecx, esi
// 00592831  ffd0                 call eax
// 00592833  8d4e08               lea ecx, [esi + 8]
// 00592836  83caff               or edx, 0xffffffff
// 00592839  f00fc111             lock xadd dword ptr [ecx], edx
// 0059283d  7509                 jne 0x592848
// 0059283f  8b06                 mov eax, dword ptr [esi]
// 00592841  8b5008               mov edx, dword ptr [eax + 8]
// 00592844  8bce                 mov ecx, esi
// 00592846  ffd2                 call edx
// 00592848  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059284c  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00592854  3bf3                 cmp esi, ebx
// 00592856  742a                 je 0x592882
// 00592858  8d4604               lea eax, [esi + 4]
// 0059285b  83c9ff               or ecx, 0xffffffff
// 0059285e  f00fc108             lock xadd dword ptr [eax], ecx
// 00592862  751e                 jne 0x592882
// 00592864  8b16                 mov edx, dword ptr [esi]
// 00592866  8b4204               mov eax, dword ptr [edx + 4]
// 00592869  8bce                 mov ecx, esi
// 0059286b  ffd0                 call eax
// 0059286d  8d4e08               lea ecx, [esi + 8]
// 00592870  83caff               or edx, 0xffffffff
// 00592873  f00fc111             lock xadd dword ptr [ecx], edx
// 00592877  7509                 jne 0x592882
// 00592879  8b06                 mov eax, dword ptr [esi]
// 0059287b  8b5008               mov edx, dword ptr [eax + 8]
// 0059287e  8bce                 mov ecx, esi
// 00592880  ffd2                 call edx
// 00592882  8b7504               mov esi, dword ptr [ebp + 4]
// 00592885  3bf3                 cmp esi, ebx
// 00592887  7417                 je 0x5928a0
// 00592889  8da42400000000       lea esp, [esp]
// 00592890  57                   push edi
// 00592891  56                   push esi
// 00592892  e8e9feffff           call 0x592780
// 00592897  8b36                 mov esi, dword ptr [esi]
// 00592899  83c408               add esp, 8
// 0059289c  3bf3                 cmp esi, ebx
// 0059289e  75f0                 jne 0x592890
// 005928a0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005928a4  5f                   pop edi
// 005928a5  5e                   pop esi
// 005928a6  5d                   pop ebp
// 005928a7  5b                   pop ebx
// 005928a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005928af  83c424               add esp, 0x24
// 005928b2  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?buildIsolationMap@@YAXPAVXmlElement@@AAV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
