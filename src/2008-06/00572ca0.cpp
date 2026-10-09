// roc 2008-06 00572ca0  unit: RBX::ServiceProvider  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00572ca0
//
// 00572ca0  6aff                 push -1
// 00572ca2  64a100000000         mov eax, dword ptr fs:[0]
// 00572ca8  6868917d00           push 0x7d9168
// 00572cad  50                   push eax
// 00572cae  64892500000000       mov dword ptr fs:[0], esp
// 00572cb5  83ec08               sub esp, 8
// 00572cb8  53                   push ebx
// 00572cb9  55                   push ebp
// 00572cba  56                   push esi
// 00572cbb  57                   push edi
// 00572cbc  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00572cc0  6a00                 push 0
// 00572cc2  6844989200           push 0x929844
// 00572cc7  687c909200           push 0x92907c
// 00572ccc  6a00                 push 0
// 00572cce  57                   push edi
// 00572ccf  8bd9                 mov ebx, ecx
// 00572cd1  e8f0ea1200           call 0x6a17c6
// 00572cd6  83c414               add esp, 0x14
// 00572cd9  85c0                 test eax, eax
// 00572cdb  0f84ba000000         je 0x572d9b
// 00572ce1  e88a15feff           call 0x554270
// 00572ce6  8d7710               lea esi, [edi + 0x10]
// 00572ce9  8be8                 mov ebp, eax
// 00572ceb  8b06                 mov eax, dword ptr [esi]
// 00572ced  8b5004               mov edx, dword ptr [eax + 4]
// 00572cf0  8bce                 mov ecx, esi
// 00572cf2  ffd2                 call edx
// 00572cf4  3bc5                 cmp eax, ebp
// 00572cf6  0f8481000000         je 0x572d7d
// 00572cfc  8b06                 mov eax, dword ptr [esi]
// 00572cfe  8b5004               mov edx, dword ptr [eax + 4]
// 00572d01  8bce                 mov ecx, esi
// 00572d03  ffd2                 call edx
// 00572d05  89442428             mov dword ptr [esp + 0x28], eax
// 00572d09  8d442410             lea eax, [esp + 0x10]
// 00572d0d  57                   push edi
// 00572d0e  50                   push eax
// 00572d0f  e82c5d0a00           call 0x618a40
// 00572d14  83c408               add esp, 8
// 00572d17  8bf0                 mov esi, eax
// 00572d19  8d4c2428             lea ecx, [esp + 0x28]
// 00572d1d  51                   push ecx
// 00572d1e  8d8ba8010000         lea ecx, [ebx + 0x1a8]
// 00572d24  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00572d2c  e8dff80100           call 0x592610
// 00572d31  8b16                 mov edx, dword ptr [esi]
// 00572d33  83c604               add esi, 4
// 00572d36  56                   push esi
// 00572d37  8d4804               lea ecx, [eax + 4]
// 00572d3a  8910                 mov dword ptr [eax], edx
// 00572d3c  e86ff8e8ff           call 0x4025b0
// 00572d41  8b442414             mov eax, dword ptr [esp + 0x14]
// 00572d45  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00572d4d  85c0                 test eax, eax
// 00572d4f  742c                 je 0x572d7d
// 00572d51  8bf0                 mov esi, eax
// 00572d53  83c004               add eax, 4
// 00572d56  83c9ff               or ecx, 0xffffffff
// 00572d59  f00fc108             lock xadd dword ptr [eax], ecx
// 00572d5d  751e                 jne 0x572d7d
// 00572d5f  8b16                 mov edx, dword ptr [esi]
// 00572d61  8b4204               mov eax, dword ptr [edx + 4]
// 00572d64  8bce                 mov ecx, esi
// 00572d66  ffd0                 call eax
// 00572d68  8d4e08               lea ecx, [esi + 8]
// 00572d6b  83caff               or edx, 0xffffffff
// 00572d6e  f00fc111             lock xadd dword ptr [ecx], edx
// 00572d72  7509                 jne 0x572d7d
// 00572d74  8b06                 mov eax, dword ptr [esi]
// 00572d76  8b5008               mov edx, dword ptr [eax + 8]
// 00572d79  8bce                 mov ecx, esi
// 00572d7b  ffd2                 call edx
// 00572d7d  83ec08               sub esp, 8
// 00572d80  8bc4                 mov eax, esp
// 00572d82  89642430             mov dword ptr [esp + 0x30], esp
// 00572d86  57                   push edi
// 00572d87  50                   push eax
// 00572d88  e8b35c0a00           call 0x618a40
// 00572d8d  83c408               add esp, 8
// 00572d90  8d8b50010000         lea ecx, [ebx + 0x150]
// 00572d96  e8d58cf1ff           call 0x48ba70
// 00572d9b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00572d9f  5f                   pop edi
// 00572da0  5e                   pop esi
// 00572da1  5d                   pop ebp
// 00572da2  64890d00000000       mov dword ptr fs:[0], ecx
// 00572da9  5b                   pop ebx
// 00572daa  83c414               add esp, 0x14
// 00572dad  c20400               ret 4
// library openrbx-client/App\v8tree\Service.cpp (function ?onChildAdded@ServiceProvider@RBX@@MAEXPAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Service.cpp
