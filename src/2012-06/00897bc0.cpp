// roc 2012-06 00897bc0  unit: RBX::BoxSelectCommand  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00897bc0
//
// 00897bc0  55                   push ebp
// 00897bc1  8bec                 mov ebp, esp
// 00897bc3  6aff                 push -1
// 00897bc5  68b01cad00           push 0xad1cb0
// 00897bca  64a100000000         mov eax, dword ptr fs:[0]
// 00897bd0  50                   push eax
// 00897bd1  64892500000000       mov dword ptr fs:[0], esp
// 00897bd8  83ec0c               sub esp, 0xc
// 00897bdb  53                   push ebx
// 00897bdc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00897bdf  807b1500             cmp byte ptr [ebx + 0x15], 0
// 00897be3  56                   push esi
// 00897be4  8bf1                 mov esi, ecx
// 00897be6  8b4604               mov eax, dword ptr [esi + 4]
// 00897be9  57                   push edi
// 00897bea  8965f0               mov dword ptr [ebp - 0x10], esp
// 00897bed  8975e8               mov dword ptr [ebp - 0x18], esi
// 00897bf0  8945ec               mov dword ptr [ebp - 0x14], eax
// 00897bf3  7547                 jne 0x897c3c
// 00897bf5  0fb64b14             movzx ecx, byte ptr [ebx + 0x14]
// 00897bf9  51                   push ecx
// 00897bfa  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00897bfd  8d530c               lea edx, [ebx + 0xc]
// 00897c00  52                   push edx
// 00897c01  50                   push eax
// 00897c02  51                   push ecx
// 00897c03  50                   push eax
// 00897c04  8bce                 mov ecx, esi
// 00897c06  e875de0d00           call 0x975a80
// 00897c0b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 00897c0e  807a1500             cmp byte ptr [edx + 0x15], 0
// 00897c12  8bf8                 mov edi, eax
// 00897c14  7403                 je 0x897c19
// 00897c16  897dec               mov dword ptr [ebp - 0x14], edi
// 00897c19  8b03                 mov eax, dword ptr [ebx]
// 00897c1b  57                   push edi
// 00897c1c  50                   push eax
// 00897c1d  8bce                 mov ecx, esi
// 00897c1f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00897c26  e895ffffff           call 0x897bc0
// 00897c2b  8907                 mov dword ptr [edi], eax
// 00897c2d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00897c30  57                   push edi
// 00897c31  51                   push ecx
// 00897c32  8bce                 mov ecx, esi
// 00897c34  e887ffffff           call 0x897bc0
// 00897c39  894708               mov dword ptr [edi + 8], eax
// 00897c3c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00897c3f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00897c42  5f                   pop edi
// 00897c43  5e                   pop esi
// 00897c44  64890d00000000       mov dword ptr fs:[0], ecx
// 00897c4b  5b                   pop ebx
// 00897c4c  8be5                 mov esp, ebp
// 00897c4e  5d                   pop ebp
// 00897c4f  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
