// roc 2010-06 004ca760  unit: RBX::Network::Players  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ca760
//
// 004ca760  64a100000000         mov eax, dword ptr fs:[0]
// 004ca766  6aff                 push -1
// 004ca768  68a6a59800           push 0x98a5a6
// 004ca76d  50                   push eax
// 004ca76e  64892500000000       mov dword ptr fs:[0], esp
// 004ca775  83ec10               sub esp, 0x10
// 004ca778  53                   push ebx
// 004ca779  56                   push esi
// 004ca77a  57                   push edi
// 004ca77b  8bf9                 mov edi, ecx
// 004ca77d  33f6                 xor esi, esi
// 004ca77f  3937                 cmp dword ptr [edi], esi
// 004ca781  0f85b0000000         jne 0x4ca837
// 004ca787  6a18                 push 0x18
// 004ca789  e812d22d00           call 0x7a79a0
// 004ca78e  83c404               add esp, 4
// 004ca791  8944240c             mov dword ptr [esp + 0xc], eax
// 004ca795  89742424             mov dword ptr [esp + 0x24], esi
// 004ca799  3bc6                 cmp eax, esi
// 004ca79b  7409                 je 0x4ca7a6
// 004ca79d  8bc8                 mov ecx, eax
// 004ca79f  e84ce60f00           call 0x5c8df0
// 004ca7a4  8bf0                 mov esi, eax
// 004ca7a6  83cbff               or ebx, 0xffffffff
// 004ca7a9  56                   push esi
// 004ca7aa  8d4c2414             lea ecx, [esp + 0x14]
// 004ca7ae  895c2428             mov dword ptr [esp + 0x28], ebx
// 004ca7b2  89742410             mov dword ptr [esp + 0x10], esi
// 004ca7b6  e8a5e1ffff           call 0x4c8960
// 004ca7bb  56                   push esi
// 004ca7bc  8d442414             lea eax, [esp + 0x14]
// 004ca7c0  56                   push esi
// 004ca7c1  50                   push eax
// 004ca7c2  e8e99df8ff           call 0x4545b0
// 004ca7c7  83c40c               add esp, 0xc
// 004ca7ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ca7ce  8d542410             lea edx, [esp + 0x10]
// 004ca7d2  890f                 mov dword ptr [edi], ecx
// 004ca7d4  52                   push edx
// 004ca7d5  8d4f04               lea ecx, [edi + 4]
// 004ca7d8  c744242801000000     mov dword ptr [esp + 0x28], 1
// 004ca7e0  e8ab78f3ff           call 0x402090
// 004ca7e5  8b742410             mov esi, dword ptr [esp + 0x10]
// 004ca7e9  895c2424             mov dword ptr [esp + 0x24], ebx
// 004ca7ed  85f6                 test esi, esi
// 004ca7ef  0f84f2000000         je 0x4ca8e7
// 004ca7f5  8d4604               lea eax, [esi + 4]
// 004ca7f8  8bcb                 mov ecx, ebx
// 004ca7fa  f00fc108             lock xadd dword ptr [eax], ecx
// 004ca7fe  0f85e3000000         jne 0x4ca8e7
// 004ca804  8b16                 mov edx, dword ptr [esi]
// 004ca806  8b4204               mov eax, dword ptr [edx + 4]
// 004ca809  8bce                 mov ecx, esi
// 004ca80b  ffd0                 call eax
// 004ca80d  8d4e08               lea ecx, [esi + 8]
// 004ca810  f00fc119             lock xadd dword ptr [ecx], ebx
// 004ca814  0f85cd000000         jne 0x4ca8e7
// 004ca81a  8b16                 mov edx, dword ptr [esi]
// 004ca81c  8b4208               mov eax, dword ptr [edx + 8]
// 004ca81f  8bce                 mov ecx, esi
// 004ca821  ffd0                 call eax
// 004ca823  8bc7                 mov eax, edi
// 004ca825  5f                   pop edi
// 004ca826  5e                   pop esi
// 004ca827  5b                   pop ebx
// 004ca828  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ca82c  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca833  83c41c               add esp, 0x1c
// 004ca836  c3                   ret 
// 004ca837  8b4704               mov eax, dword ptr [edi + 4]
// 004ca83a  55                   push ebp
// 004ca83b  8d6f04               lea ebp, [edi + 4]
// 004ca83e  3bc6                 cmp eax, esi
// 004ca840  0f84a0000000         je 0x4ca8e6
// 004ca846  83780401             cmp dword ptr [eax + 4], 1
// 004ca84a  0f8e96000000         jle 0x4ca8e6
// 004ca850  6a18                 push 0x18
// 004ca852  e849d12d00           call 0x7a79a0
// 004ca857  83c404               add esp, 4
// 004ca85a  89442410             mov dword ptr [esp + 0x10], eax
// 004ca85e  c744242802000000     mov dword ptr [esp + 0x28], 2
// 004ca866  3bc6                 cmp eax, esi
// 004ca868  740c                 je 0x4ca876
// 004ca86a  8b17                 mov edx, dword ptr [edi]
// 004ca86c  52                   push edx
// 004ca86d  8bc8                 mov ecx, eax
// 004ca86f  e88cbff6ff           call 0x436800
// 004ca874  8bf0                 mov esi, eax
// 004ca876  83cbff               or ebx, 0xffffffff
// 004ca879  56                   push esi
// 004ca87a  8d4c2420             lea ecx, [esp + 0x20]
// 004ca87e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004ca882  8974241c             mov dword ptr [esp + 0x1c], esi
// 004ca886  e8d5e0ffff           call 0x4c8960
// 004ca88b  56                   push esi
// 004ca88c  8d4c2420             lea ecx, [esp + 0x20]
// 004ca890  56                   push esi
// 004ca891  51                   push ecx
// 004ca892  e8199df8ff           call 0x4545b0
// 004ca897  83c40c               add esp, 0xc
// 004ca89a  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ca89e  8d44241c             lea eax, [esp + 0x1c]
// 004ca8a2  50                   push eax
// 004ca8a3  8bcd                 mov ecx, ebp
// 004ca8a5  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 004ca8ad  8917                 mov dword ptr [edi], edx
// 004ca8af  e8dc77f3ff           call 0x402090
// 004ca8b4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004ca8b8  895c2428             mov dword ptr [esp + 0x28], ebx
// 004ca8bc  85f6                 test esi, esi
// 004ca8be  7426                 je 0x4ca8e6
// 004ca8c0  8d4e04               lea ecx, [esi + 4]
// 004ca8c3  8bd3                 mov edx, ebx
// 004ca8c5  f00fc111             lock xadd dword ptr [ecx], edx
// 004ca8c9  751b                 jne 0x4ca8e6
// 004ca8cb  8b06                 mov eax, dword ptr [esi]
// 004ca8cd  8b5004               mov edx, dword ptr [eax + 4]
// 004ca8d0  8bce                 mov ecx, esi
// 004ca8d2  ffd2                 call edx
// 004ca8d4  8d4608               lea eax, [esi + 8]
// 004ca8d7  f00fc118             lock xadd dword ptr [eax], ebx
// 004ca8db  7509                 jne 0x4ca8e6
// 004ca8dd  8b16                 mov edx, dword ptr [esi]
// 004ca8df  8b4208               mov eax, dword ptr [edx + 8]
// 004ca8e2  8bce                 mov ecx, esi
// 004ca8e4  ffd0                 call eax
// 004ca8e6  5d                   pop ebp
// 004ca8e7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ca8eb  8bc7                 mov eax, edi
// 004ca8ed  5f                   pop edi
// 004ca8ee  5e                   pop esi
// 004ca8ef  5b                   pop ebx
// 004ca8f0  64890d00000000       mov dword ptr fs:[0], ecx
// 004ca8f7  83c41c               add esp, 0x1c
// 004ca8fa  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?write@?$CopyOnWrite@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@RBX@@QAEAAV?$shared_ptr@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
