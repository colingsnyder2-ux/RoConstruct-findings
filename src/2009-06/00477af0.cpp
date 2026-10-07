// roc 2009-06 00477af0  unit: Ogre::RbxMeshLoader  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00477af0
//
// 00477af0  55                   push ebp
// 00477af1  8bec                 mov ebp, esp
// 00477af3  6aff                 push -1
// 00477af5  68b0438500           push 0x8543b0
// 00477afa  64a100000000         mov eax, dword ptr fs:[0]
// 00477b00  50                   push eax
// 00477b01  64892500000000       mov dword ptr fs:[0], esp
// 00477b08  83ec0c               sub esp, 0xc
// 00477b0b  53                   push ebx
// 00477b0c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00477b0f  807b2900             cmp byte ptr [ebx + 0x29], 0
// 00477b13  56                   push esi
// 00477b14  8bf1                 mov esi, ecx
// 00477b16  8b4618               mov eax, dword ptr [esi + 0x18]
// 00477b19  57                   push edi
// 00477b1a  8965f0               mov dword ptr [ebp - 0x10], esp
// 00477b1d  8975e8               mov dword ptr [ebp - 0x18], esi
// 00477b20  8945ec               mov dword ptr [ebp - 0x14], eax
// 00477b23  7547                 jne 0x477b6c
// 00477b25  0fb64b28             movzx ecx, byte ptr [ebx + 0x28]
// 00477b29  51                   push ecx
// 00477b2a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00477b2d  8d530c               lea edx, [ebx + 0xc]
// 00477b30  52                   push edx
// 00477b31  50                   push eax
// 00477b32  51                   push ecx
// 00477b33  50                   push eax
// 00477b34  8bce                 mov ecx, esi
// 00477b36  e815e9ffff           call 0x476450
// 00477b3b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00477b3e  807a2900             cmp byte ptr [edx + 0x29], 0
// 00477b42  8bf8                 mov edi, eax
// 00477b44  7403                 je 0x477b49
// 00477b46  897dec               mov dword ptr [ebp - 0x14], edi
// 00477b49  8b03                 mov eax, dword ptr [ebx]
// 00477b4b  57                   push edi
// 00477b4c  50                   push eax
// 00477b4d  8bce                 mov ecx, esi
// 00477b4f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00477b56  e895ffffff           call 0x477af0
// 00477b5b  8907                 mov dword ptr [edi], eax
// 00477b5d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00477b60  57                   push edi
// 00477b61  51                   push ecx
// 00477b62  8bce                 mov ecx, esi
// 00477b64  e887ffffff           call 0x477af0
// 00477b69  894708               mov dword ptr [edi + 8], eax
// 00477b6c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00477b6f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00477b72  5f                   pop edi
// 00477b73  5e                   pop esi
// 00477b74  64890d00000000       mov dword ptr fs:[0], ecx
// 00477b7b  5b                   pop ebx
// 00477b7c  8be5                 mov esp, ebp
// 00477b7e  5d                   pop ebp
// 00477b7f  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
