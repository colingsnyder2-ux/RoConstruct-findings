// roc 2008-06 0049add0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 411 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049add0
//
// 0049add0  64a100000000         mov eax, dword ptr fs:[0]
// 0049add6  6aff                 push -1
// 0049add8  6856707c00           push 0x7c7056
// 0049addd  50                   push eax
// 0049adde  64892500000000       mov dword ptr fs:[0], esp
// 0049ade5  83ec10               sub esp, 0x10
// 0049ade8  53                   push ebx
// 0049ade9  56                   push esi
// 0049adea  57                   push edi
// 0049adeb  8bf9                 mov edi, ecx
// 0049aded  33f6                 xor esi, esi
// 0049adef  3937                 cmp dword ptr [edi], esi
// 0049adf1  0f85b0000000         jne 0x49aea7
// 0049adf7  6a18                 push 0x18
// 0049adf9  e8225b2000           call 0x6a0920
// 0049adfe  83c404               add esp, 4
// 0049ae01  8944240c             mov dword ptr [esp + 0xc], eax
// 0049ae05  89742424             mov dword ptr [esp + 0x24], esi
// 0049ae09  3bc6                 cmp eax, esi
// 0049ae0b  7409                 je 0x49ae16
// 0049ae0d  8bc8                 mov ecx, eax
// 0049ae0f  e8bce5f8ff           call 0x4293d0
// 0049ae14  8bf0                 mov esi, eax
// 0049ae16  83cbff               or ebx, 0xffffffff
// 0049ae19  56                   push esi
// 0049ae1a  8d4c2414             lea ecx, [esp + 0x14]
// 0049ae1e  895c2428             mov dword ptr [esp + 0x28], ebx
// 0049ae22  89742410             mov dword ptr [esp + 0x10], esi
// 0049ae26  e895f8ffff           call 0x49a6c0
// 0049ae2b  56                   push esi
// 0049ae2c  8d442414             lea eax, [esp + 0x14]
// 0049ae30  56                   push esi
// 0049ae31  50                   push eax
// 0049ae32  e8d925feff           call 0x47d410
// 0049ae37  83c40c               add esp, 0xc
// 0049ae3a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049ae3e  8d542410             lea edx, [esp + 0x10]
// 0049ae42  890f                 mov dword ptr [edi], ecx
// 0049ae44  52                   push edx
// 0049ae45  8d4f04               lea ecx, [edi + 4]
// 0049ae48  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0049ae50  e85b77f6ff           call 0x4025b0
// 0049ae55  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049ae59  895c2424             mov dword ptr [esp + 0x24], ebx
// 0049ae5d  85f6                 test esi, esi
// 0049ae5f  0f84f2000000         je 0x49af57
// 0049ae65  8d4604               lea eax, [esi + 4]
// 0049ae68  8bcb                 mov ecx, ebx
// 0049ae6a  f00fc108             lock xadd dword ptr [eax], ecx
// 0049ae6e  0f85e3000000         jne 0x49af57
// 0049ae74  8b16                 mov edx, dword ptr [esi]
// 0049ae76  8b4204               mov eax, dword ptr [edx + 4]
// 0049ae79  8bce                 mov ecx, esi
// 0049ae7b  ffd0                 call eax
// 0049ae7d  8d4e08               lea ecx, [esi + 8]
// 0049ae80  f00fc119             lock xadd dword ptr [ecx], ebx
// 0049ae84  0f85cd000000         jne 0x49af57
// 0049ae8a  8b16                 mov edx, dword ptr [esi]
// 0049ae8c  8b4208               mov eax, dword ptr [edx + 8]
// 0049ae8f  8bce                 mov ecx, esi
// 0049ae91  ffd0                 call eax
// 0049ae93  8bc7                 mov eax, edi
// 0049ae95  5f                   pop edi
// 0049ae96  5e                   pop esi
// 0049ae97  5b                   pop ebx
// 0049ae98  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049ae9c  64890d00000000       mov dword ptr fs:[0], ecx
// 0049aea3  83c41c               add esp, 0x1c
// 0049aea6  c3                   ret 
// 0049aea7  8b4704               mov eax, dword ptr [edi + 4]
// 0049aeaa  55                   push ebp
// 0049aeab  8d6f04               lea ebp, [edi + 4]
// 0049aeae  3bc6                 cmp eax, esi
// 0049aeb0  0f84a0000000         je 0x49af56
// 0049aeb6  83780401             cmp dword ptr [eax + 4], 1
// 0049aeba  0f8e96000000         jle 0x49af56
// 0049aec0  6a18                 push 0x18
// 0049aec2  e8595a2000           call 0x6a0920
// 0049aec7  83c404               add esp, 4
// 0049aeca  89442410             mov dword ptr [esp + 0x10], eax
// 0049aece  c744242802000000     mov dword ptr [esp + 0x28], 2
// 0049aed6  3bc6                 cmp eax, esi
// 0049aed8  740c                 je 0x49aee6
// 0049aeda  8b17                 mov edx, dword ptr [edi]
// 0049aedc  52                   push edx
// 0049aedd  8bc8                 mov ecx, eax
// 0049aedf  e81c1c1100           call 0x5acb00
// 0049aee4  8bf0                 mov esi, eax
// 0049aee6  83cbff               or ebx, 0xffffffff
// 0049aee9  56                   push esi
// 0049aeea  8d4c2420             lea ecx, [esp + 0x20]
// 0049aeee  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0049aef2  8974241c             mov dword ptr [esp + 0x1c], esi
// 0049aef6  e8c5f7ffff           call 0x49a6c0
// 0049aefb  56                   push esi
// 0049aefc  8d4c2420             lea ecx, [esp + 0x20]
// 0049af00  56                   push esi
// 0049af01  51                   push ecx
// 0049af02  e80925feff           call 0x47d410
// 0049af07  83c40c               add esp, 0xc
// 0049af0a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049af0e  8d44241c             lea eax, [esp + 0x1c]
// 0049af12  50                   push eax
// 0049af13  8bcd                 mov ecx, ebp
// 0049af15  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 0049af1d  8917                 mov dword ptr [edi], edx
// 0049af1f  e88c76f6ff           call 0x4025b0
// 0049af24  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0049af28  895c2428             mov dword ptr [esp + 0x28], ebx
// 0049af2c  85f6                 test esi, esi
// 0049af2e  7426                 je 0x49af56
// 0049af30  8d4e04               lea ecx, [esi + 4]
// 0049af33  8bd3                 mov edx, ebx
// 0049af35  f00fc111             lock xadd dword ptr [ecx], edx
// 0049af39  751b                 jne 0x49af56
// 0049af3b  8b06                 mov eax, dword ptr [esi]
// 0049af3d  8b5004               mov edx, dword ptr [eax + 4]
// 0049af40  8bce                 mov ecx, esi
// 0049af42  ffd2                 call edx
// 0049af44  8d4608               lea eax, [esi + 8]
// 0049af47  f00fc118             lock xadd dword ptr [eax], ebx
// 0049af4b  7509                 jne 0x49af56
// 0049af4d  8b16                 mov edx, dword ptr [esi]
// 0049af4f  8b4208               mov eax, dword ptr [edx + 8]
// 0049af52  8bce                 mov ecx, esi
// 0049af54  ffd0                 call eax
// 0049af56  5d                   pop ebp
// 0049af57  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049af5b  8bc7                 mov eax, edi
// 0049af5d  5f                   pop edi
// 0049af5e  5e                   pop esi
// 0049af5f  5b                   pop ebx
// 0049af60  64890d00000000       mov dword ptr fs:[0], ecx
// 0049af67  83c41c               add esp, 0x1c
// 0049af6a  c3                   ret 
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?write@?$CopyOnWrite@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@RBX@@QAEAAV?$shared_ptr@V?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Selection.cpp
