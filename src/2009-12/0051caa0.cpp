// roc 2009-12 0051caa0  unit: RBX::Network::Players  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0051caa0
//
// 0051caa0  64a100000000         mov eax, dword ptr fs:[0]
// 0051caa6  6aff                 push -1
// 0051caa8  68a67f9300           push 0x937fa6
// 0051caad  50                   push eax
// 0051caae  64892500000000       mov dword ptr fs:[0], esp
// 0051cab5  83ec10               sub esp, 0x10
// 0051cab8  53                   push ebx
// 0051cab9  56                   push esi
// 0051caba  57                   push edi
// 0051cabb  8bf9                 mov edi, ecx
// 0051cabd  33f6                 xor esi, esi
// 0051cabf  3937                 cmp dword ptr [edi], esi
// 0051cac1  0f85b0000000         jne 0x51cb77
// 0051cac7  6a18                 push 0x18
// 0051cac9  e8926d2d00           call 0x7f3860
// 0051cace  83c404               add esp, 4
// 0051cad1  8944240c             mov dword ptr [esp + 0xc], eax
// 0051cad5  89742424             mov dword ptr [esp + 0x24], esi
// 0051cad9  3bc6                 cmp eax, esi
// 0051cadb  7409                 je 0x51cae6
// 0051cadd  8bc8                 mov ecx, eax
// 0051cadf  e85ce60600           call 0x58b140
// 0051cae4  8bf0                 mov esi, eax
// 0051cae6  83cbff               or ebx, 0xffffffff
// 0051cae9  56                   push esi
// 0051caea  8d4c2414             lea ecx, [esp + 0x14]
// 0051caee  895c2428             mov dword ptr [esp + 0x28], ebx
// 0051caf2  89742410             mov dword ptr [esp + 0x10], esi
// 0051caf6  e895e2ffff           call 0x51ad90
// 0051cafb  56                   push esi
// 0051cafc  8d442414             lea eax, [esp + 0x14]
// 0051cb00  56                   push esi
// 0051cb01  50                   push eax
// 0051cb02  e8897f3300           call 0x854a90
// 0051cb07  83c40c               add esp, 0xc
// 0051cb0a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051cb0e  8d542410             lea edx, [esp + 0x10]
// 0051cb12  890f                 mov dword ptr [edi], ecx
// 0051cb14  52                   push edx
// 0051cb15  8d4f04               lea ecx, [edi + 4]
// 0051cb18  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0051cb20  e87b55eeff           call 0x4020a0
// 0051cb25  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051cb29  895c2424             mov dword ptr [esp + 0x24], ebx
// 0051cb2d  85f6                 test esi, esi
// 0051cb2f  0f84f2000000         je 0x51cc27
// 0051cb35  8d4604               lea eax, [esi + 4]
// 0051cb38  8bcb                 mov ecx, ebx
// 0051cb3a  f00fc108             lock xadd dword ptr [eax], ecx
// 0051cb3e  0f85e3000000         jne 0x51cc27
// 0051cb44  8b16                 mov edx, dword ptr [esi]
// 0051cb46  8b4204               mov eax, dword ptr [edx + 4]
// 0051cb49  8bce                 mov ecx, esi
// 0051cb4b  ffd0                 call eax
// 0051cb4d  8d4e08               lea ecx, [esi + 8]
// 0051cb50  f00fc119             lock xadd dword ptr [ecx], ebx
// 0051cb54  0f85cd000000         jne 0x51cc27
// 0051cb5a  8b16                 mov edx, dword ptr [esi]
// 0051cb5c  8b4208               mov eax, dword ptr [edx + 8]
// 0051cb5f  8bce                 mov ecx, esi
// 0051cb61  ffd0                 call eax
// 0051cb63  8bc7                 mov eax, edi
// 0051cb65  5f                   pop edi
// 0051cb66  5e                   pop esi
// 0051cb67  5b                   pop ebx
// 0051cb68  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051cb6c  64890d00000000       mov dword ptr fs:[0], ecx
// 0051cb73  83c41c               add esp, 0x1c
// 0051cb76  c3                   ret 
// 0051cb77  8b4704               mov eax, dword ptr [edi + 4]
// 0051cb7a  55                   push ebp
// 0051cb7b  8d6f04               lea ebp, [edi + 4]
// 0051cb7e  3bc6                 cmp eax, esi
// 0051cb80  0f84a0000000         je 0x51cc26
// 0051cb86  83780401             cmp dword ptr [eax + 4], 1
// 0051cb8a  0f8e96000000         jle 0x51cc26
// 0051cb90  6a18                 push 0x18
// 0051cb92  e8c96c2d00           call 0x7f3860
// 0051cb97  83c404               add esp, 4
// 0051cb9a  89442410             mov dword ptr [esp + 0x10], eax
// 0051cb9e  c744242802000000     mov dword ptr [esp + 0x28], 2
// 0051cba6  3bc6                 cmp eax, esi
// 0051cba8  740c                 je 0x51cbb6
// 0051cbaa  8b17                 mov edx, dword ptr [edi]
// 0051cbac  52                   push edx
// 0051cbad  8bc8                 mov ecx, eax
// 0051cbaf  e8ac85f1ff           call 0x435160
// 0051cbb4  8bf0                 mov esi, eax
// 0051cbb6  83cbff               or ebx, 0xffffffff
// 0051cbb9  56                   push esi
// 0051cbba  8d4c2420             lea ecx, [esp + 0x20]
// 0051cbbe  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0051cbc2  8974241c             mov dword ptr [esp + 0x1c], esi
// 0051cbc6  e8c5e1ffff           call 0x51ad90
// 0051cbcb  56                   push esi
// 0051cbcc  8d4c2420             lea ecx, [esp + 0x20]
// 0051cbd0  56                   push esi
// 0051cbd1  51                   push ecx
// 0051cbd2  e8b97e3300           call 0x854a90
// 0051cbd7  83c40c               add esp, 0xc
// 0051cbda  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051cbde  8d44241c             lea eax, [esp + 0x1c]
// 0051cbe2  50                   push eax
// 0051cbe3  8bcd                 mov ecx, ebp
// 0051cbe5  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 0051cbed  8917                 mov dword ptr [edi], edx
// 0051cbef  e8ac54eeff           call 0x4020a0
// 0051cbf4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0051cbf8  895c2428             mov dword ptr [esp + 0x28], ebx
// 0051cbfc  85f6                 test esi, esi
// 0051cbfe  7426                 je 0x51cc26
// 0051cc00  8d4e04               lea ecx, [esi + 4]
// 0051cc03  8bd3                 mov edx, ebx
// 0051cc05  f00fc111             lock xadd dword ptr [ecx], edx
// 0051cc09  751b                 jne 0x51cc26
// 0051cc0b  8b06                 mov eax, dword ptr [esi]
// 0051cc0d  8b5004               mov edx, dword ptr [eax + 4]
// 0051cc10  8bce                 mov ecx, esi
// 0051cc12  ffd2                 call edx
// 0051cc14  8d4608               lea eax, [esi + 8]
// 0051cc17  f00fc118             lock xadd dword ptr [eax], ebx
// 0051cc1b  7509                 jne 0x51cc26
// 0051cc1d  8b16                 mov edx, dword ptr [esi]
// 0051cc1f  8b4208               mov eax, dword ptr [edx + 8]
// 0051cc22  8bce                 mov ecx, esi
// 0051cc24  ffd0                 call eax
// 0051cc26  5d                   pop ebp
// 0051cc27  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051cc2b  8bc7                 mov eax, edi
// 0051cc2d  5f                   pop edi
// 0051cc2e  5e                   pop esi
// 0051cc2f  5b                   pop ebx
// 0051cc30  64890d00000000       mov dword ptr fs:[0], ecx
// 0051cc37  83c41c               add esp, 0x1c
// 0051cc3a  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?write@?$CopyOnWrite@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@RBX@@QAEAAV?$shared_ptr@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
