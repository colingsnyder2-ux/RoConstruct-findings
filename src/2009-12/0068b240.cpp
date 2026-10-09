// roc 2009-12 0068b240  unit: ArchiveBinder  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068b240
//
// 0068b240  64a100000000         mov eax, dword ptr fs:[0]
// 0068b246  6aff                 push -1
// 0068b248  6838729400           push 0x947238
// 0068b24d  50                   push eax
// 0068b24e  64892500000000       mov dword ptr fs:[0], esp
// 0068b255  a1a80bb900           mov eax, dword ptr [0xb90ba8]
// 0068b25a  83ec18               sub esp, 0x18
// 0068b25d  53                   push ebx
// 0068b25e  55                   push ebp
// 0068b25f  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0068b263  56                   push esi
// 0068b264  57                   push edi
// 0068b265  50                   push eax
// 0068b266  8bcd                 mov ecx, ebp
// 0068b268  e8e3bbfeff           call 0x676e50
// 0068b26d  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0068b271  33db                 xor ebx, ebx
// 0068b273  3bc3                 cmp eax, ebx
// 0068b275  0f84c7000000         je 0x68b342
// 0068b27b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0068b27f  895c2414             mov dword ptr [esp + 0x14], ebx
// 0068b283  8d4c2410             lea ecx, [esp + 0x10]
// 0068b287  51                   push ecx
// 0068b288  8d4808               lea ecx, [eax + 8]
// 0068b28b  895c2434             mov dword ptr [esp + 0x34], ebx
// 0068b28f  e8acc0feff           call 0x677340
// 0068b294  8d542420             lea edx, [esp + 0x20]
// 0068b298  52                   push edx
// 0068b299  8d4c2414             lea ecx, [esp + 0x14]
// 0068b29d  e80e4ce7ff           call 0x4ffeb0
// 0068b2a2  8b00                 mov eax, dword ptr [eax]
// 0068b2a4  89442438             mov dword ptr [esp + 0x38], eax
// 0068b2a8  895c2418             mov dword ptr [esp + 0x18], ebx
// 0068b2ac  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0068b2b0  8d4c2438             lea ecx, [esp + 0x38]
// 0068b2b4  51                   push ecx
// 0068b2b5  8bcf                 mov ecx, edi
// 0068b2b7  c644243402           mov byte ptr [esp + 0x34], 2
// 0068b2bc  e8bf48ebff           call 0x53fb80
// 0068b2c1  8d54241c             lea edx, [esp + 0x1c]
// 0068b2c5  52                   push edx
// 0068b2c6  8d4804               lea ecx, [eax + 4]
// 0068b2c9  8918                 mov dword ptr [eax], ebx
// 0068b2cb  e8d06dd7ff           call 0x4020a0
// 0068b2d0  8b442424             mov eax, dword ptr [esp + 0x24]
// 0068b2d4  885c2430             mov byte ptr [esp + 0x30], bl
// 0068b2d8  3bc3                 cmp eax, ebx
// 0068b2da  742c                 je 0x68b308
// 0068b2dc  8bf0                 mov esi, eax
// 0068b2de  83c004               add eax, 4
// 0068b2e1  83c9ff               or ecx, 0xffffffff
// 0068b2e4  f00fc108             lock xadd dword ptr [eax], ecx
// 0068b2e8  751e                 jne 0x68b308
// 0068b2ea  8b16                 mov edx, dword ptr [esi]
// 0068b2ec  8b4204               mov eax, dword ptr [edx + 4]
// 0068b2ef  8bce                 mov ecx, esi
// 0068b2f1  ffd0                 call eax
// 0068b2f3  8d4e08               lea ecx, [esi + 8]
// 0068b2f6  83caff               or edx, 0xffffffff
// 0068b2f9  f00fc111             lock xadd dword ptr [ecx], edx
// 0068b2fd  7509                 jne 0x68b308
// 0068b2ff  8b06                 mov eax, dword ptr [esi]
// 0068b301  8b5008               mov edx, dword ptr [eax + 8]
// 0068b304  8bce                 mov ecx, esi
// 0068b306  ffd2                 call edx
// 0068b308  8b742414             mov esi, dword ptr [esp + 0x14]
// 0068b30c  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0068b314  3bf3                 cmp esi, ebx
// 0068b316  742a                 je 0x68b342
// 0068b318  8d4604               lea eax, [esi + 4]
// 0068b31b  83c9ff               or ecx, 0xffffffff
// 0068b31e  f00fc108             lock xadd dword ptr [eax], ecx
// 0068b322  751e                 jne 0x68b342
// 0068b324  8b16                 mov edx, dword ptr [esi]
// 0068b326  8b4204               mov eax, dword ptr [edx + 4]
// 0068b329  8bce                 mov ecx, esi
// 0068b32b  ffd0                 call eax
// 0068b32d  8d4e08               lea ecx, [esi + 8]
// 0068b330  83caff               or edx, 0xffffffff
// 0068b333  f00fc111             lock xadd dword ptr [ecx], edx
// 0068b337  7509                 jne 0x68b342
// 0068b339  8b06                 mov eax, dword ptr [esi]
// 0068b33b  8b5008               mov edx, dword ptr [eax + 8]
// 0068b33e  8bce                 mov ecx, esi
// 0068b340  ffd2                 call edx
// 0068b342  8b7504               mov esi, dword ptr [ebp + 4]
// 0068b345  3bf3                 cmp esi, ebx
// 0068b347  7417                 je 0x68b360
// 0068b349  8da42400000000       lea esp, [esp]
// 0068b350  57                   push edi
// 0068b351  56                   push esi
// 0068b352  e8e9feffff           call 0x68b240
// 0068b357  8b36                 mov esi, dword ptr [esi]
// 0068b359  83c408               add esp, 8
// 0068b35c  3bf3                 cmp esi, ebx
// 0068b35e  75f0                 jne 0x68b350
// 0068b360  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068b364  5f                   pop edi
// 0068b365  5e                   pop esi
// 0068b366  5d                   pop ebp
// 0068b367  5b                   pop ebx
// 0068b368  64890d00000000       mov dword ptr fs:[0], ecx
// 0068b36f  83c424               add esp, 0x24
// 0068b372  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?buildIsolationMap@@YAXPAVXmlElement@@AAV?$map@PAVInstance@RBX@@VInstanceHandle@2@U?$less@PAVInstance@RBX@@@std@@V?$allocator@U?$pair@QAVInstance@RBX@@VInstanceHandle@2@@std@@@5@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
