// roc 2009-06 004cb0b0  unit: RBX::Network::Players  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004cb0b0
//
// 004cb0b0  64a100000000         mov eax, dword ptr fs:[0]
// 004cb0b6  6aff                 push -1
// 004cb0b8  6856a48500           push 0x85a456
// 004cb0bd  50                   push eax
// 004cb0be  64892500000000       mov dword ptr fs:[0], esp
// 004cb0c5  83ec10               sub esp, 0x10
// 004cb0c8  53                   push ebx
// 004cb0c9  56                   push esi
// 004cb0ca  57                   push edi
// 004cb0cb  8bf9                 mov edi, ecx
// 004cb0cd  33f6                 xor esi, esi
// 004cb0cf  3937                 cmp dword ptr [edi], esi
// 004cb0d1  0f85b0000000         jne 0x4cb187
// 004cb0d7  6a18                 push 0x18
// 004cb0d9  e85ad92400           call 0x718a38
// 004cb0de  83c404               add esp, 4
// 004cb0e1  8944240c             mov dword ptr [esp + 0xc], eax
// 004cb0e5  89742424             mov dword ptr [esp + 0x24], esi
// 004cb0e9  3bc6                 cmp eax, esi
// 004cb0eb  7409                 je 0x4cb0f6
// 004cb0ed  8bc8                 mov ecx, eax
// 004cb0ef  e81cf51800           call 0x65a610
// 004cb0f4  8bf0                 mov esi, eax
// 004cb0f6  83cbff               or ebx, 0xffffffff
// 004cb0f9  56                   push esi
// 004cb0fa  8d4c2414             lea ecx, [esp + 0x14]
// 004cb0fe  895c2428             mov dword ptr [esp + 0x28], ebx
// 004cb102  89742410             mov dword ptr [esp + 0x10], esi
// 004cb106  e895f0ffff           call 0x4ca1a0
// 004cb10b  56                   push esi
// 004cb10c  8d442414             lea eax, [esp + 0x14]
// 004cb110  56                   push esi
// 004cb111  50                   push eax
// 004cb112  e8c9981a00           call 0x6749e0
// 004cb117  83c40c               add esp, 0xc
// 004cb11a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cb11e  8d542410             lea edx, [esp + 0x10]
// 004cb122  890f                 mov dword ptr [edi], ecx
// 004cb124  52                   push edx
// 004cb125  8d4f04               lea ecx, [edi + 4]
// 004cb128  c744242801000000     mov dword ptr [esp + 0x28], 1
// 004cb130  e8cb73f3ff           call 0x402500
// 004cb135  8b742410             mov esi, dword ptr [esp + 0x10]
// 004cb139  895c2424             mov dword ptr [esp + 0x24], ebx
// 004cb13d  85f6                 test esi, esi
// 004cb13f  0f84f2000000         je 0x4cb237
// 004cb145  8d4604               lea eax, [esi + 4]
// 004cb148  8bcb                 mov ecx, ebx
// 004cb14a  f00fc108             lock xadd dword ptr [eax], ecx
// 004cb14e  0f85e3000000         jne 0x4cb237
// 004cb154  8b16                 mov edx, dword ptr [esi]
// 004cb156  8b4204               mov eax, dword ptr [edx + 4]
// 004cb159  8bce                 mov ecx, esi
// 004cb15b  ffd0                 call eax
// 004cb15d  8d4e08               lea ecx, [esi + 8]
// 004cb160  f00fc119             lock xadd dword ptr [ecx], ebx
// 004cb164  0f85cd000000         jne 0x4cb237
// 004cb16a  8b16                 mov edx, dword ptr [esi]
// 004cb16c  8b4208               mov eax, dword ptr [edx + 8]
// 004cb16f  8bce                 mov ecx, esi
// 004cb171  ffd0                 call eax
// 004cb173  8bc7                 mov eax, edi
// 004cb175  5f                   pop edi
// 004cb176  5e                   pop esi
// 004cb177  5b                   pop ebx
// 004cb178  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cb17c  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb183  83c41c               add esp, 0x1c
// 004cb186  c3                   ret 
// 004cb187  8b4704               mov eax, dword ptr [edi + 4]
// 004cb18a  55                   push ebp
// 004cb18b  8d6f04               lea ebp, [edi + 4]
// 004cb18e  3bc6                 cmp eax, esi
// 004cb190  0f84a0000000         je 0x4cb236
// 004cb196  83780401             cmp dword ptr [eax + 4], 1
// 004cb19a  0f8e96000000         jle 0x4cb236
// 004cb1a0  6a18                 push 0x18
// 004cb1a2  e891d82400           call 0x718a38
// 004cb1a7  83c404               add esp, 4
// 004cb1aa  89442410             mov dword ptr [esp + 0x10], eax
// 004cb1ae  c744242802000000     mov dword ptr [esp + 0x28], 2
// 004cb1b6  3bc6                 cmp eax, esi
// 004cb1b8  740c                 je 0x4cb1c6
// 004cb1ba  8b17                 mov edx, dword ptr [edi]
// 004cb1bc  52                   push edx
// 004cb1bd  8bc8                 mov ecx, eax
// 004cb1bf  e87cc71600           call 0x637940
// 004cb1c4  8bf0                 mov esi, eax
// 004cb1c6  83cbff               or ebx, 0xffffffff
// 004cb1c9  56                   push esi
// 004cb1ca  8d4c2420             lea ecx, [esp + 0x20]
// 004cb1ce  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004cb1d2  8974241c             mov dword ptr [esp + 0x1c], esi
// 004cb1d6  e8c5efffff           call 0x4ca1a0
// 004cb1db  56                   push esi
// 004cb1dc  8d4c2420             lea ecx, [esp + 0x20]
// 004cb1e0  56                   push esi
// 004cb1e1  51                   push ecx
// 004cb1e2  e8f9971a00           call 0x6749e0
// 004cb1e7  83c40c               add esp, 0xc
// 004cb1ea  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cb1ee  8d44241c             lea eax, [esp + 0x1c]
// 004cb1f2  50                   push eax
// 004cb1f3  8bcd                 mov ecx, ebp
// 004cb1f5  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 004cb1fd  8917                 mov dword ptr [edi], edx
// 004cb1ff  e8fc72f3ff           call 0x402500
// 004cb204  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004cb208  895c2428             mov dword ptr [esp + 0x28], ebx
// 004cb20c  85f6                 test esi, esi
// 004cb20e  7426                 je 0x4cb236
// 004cb210  8d4e04               lea ecx, [esi + 4]
// 004cb213  8bd3                 mov edx, ebx
// 004cb215  f00fc111             lock xadd dword ptr [ecx], edx
// 004cb219  751b                 jne 0x4cb236
// 004cb21b  8b06                 mov eax, dword ptr [esi]
// 004cb21d  8b5004               mov edx, dword ptr [eax + 4]
// 004cb220  8bce                 mov ecx, esi
// 004cb222  ffd2                 call edx
// 004cb224  8d4608               lea eax, [esi + 8]
// 004cb227  f00fc118             lock xadd dword ptr [eax], ebx
// 004cb22b  7509                 jne 0x4cb236
// 004cb22d  8b16                 mov edx, dword ptr [esi]
// 004cb22f  8b4208               mov eax, dword ptr [edx + 8]
// 004cb232  8bce                 mov ecx, esi
// 004cb234  ffd0                 call eax
// 004cb236  5d                   pop ebp
// 004cb237  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004cb23b  8bc7                 mov eax, edi
// 004cb23d  5f                   pop edi
// 004cb23e  5e                   pop esi
// 004cb23f  5b                   pop ebx
// 004cb240  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb247  83c41c               add esp, 0x1c
// 004cb24a  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?write@?$CopyOnWrite@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@RBX@@QAEAAV?$shared_ptr@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
