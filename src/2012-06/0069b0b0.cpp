// from server: 100% by auto
// roc 2012-06 0069b0b0  unit: RBX::VFriendService::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069b0b0
//
// 0069b0b0  55                   push ebp
// 0069b0b1  8bec                 mov ebp, esp
// 0069b0b3  6aff                 push -1
// 0069b0b5  687070ab00           push 0xab7070
// 0069b0ba  64a100000000         mov eax, dword ptr fs:[0]
// 0069b0c0  50                   push eax
// 0069b0c1  64892500000000       mov dword ptr fs:[0], esp
// 0069b0c8  83ec0c               sub esp, 0xc
// 0069b0cb  53                   push ebx
// 0069b0cc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0069b0cf  807b1500             cmp byte ptr [ebx + 0x15], 0
// 0069b0d3  56                   push esi
// 0069b0d4  8bf1                 mov esi, ecx
// 0069b0d6  8b4604               mov eax, dword ptr [esi + 4]
// 0069b0d9  57                   push edi
// 0069b0da  8965f0               mov dword ptr [ebp - 0x10], esp
// 0069b0dd  8975e8               mov dword ptr [ebp - 0x18], esi
// 0069b0e0  8945ec               mov dword ptr [ebp - 0x14], eax
// 0069b0e3  7547                 jne 0x69b12c
// 0069b0e5  0fb64b14             movzx ecx, byte ptr [ebx + 0x14]
// 0069b0e9  51                   push ecx
// 0069b0ea  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0069b0ed  8d530c               lea edx, [ebx + 0xc]
// 0069b0f0  52                   push edx
// 0069b0f1  50                   push eax
// 0069b0f2  51                   push ecx
// 0069b0f3  50                   push eax
// 0069b0f4  8bce                 mov ecx, esi
// 0069b0f6  e815a0dcff           call 0x465110
// 0069b0fb  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0069b0fe  807a1500             cmp byte ptr [edx + 0x15], 0
// 0069b102  8bf8                 mov edi, eax
// 0069b104  7403                 je 0x69b109
// 0069b106  897dec               mov dword ptr [ebp - 0x14], edi
// 0069b109  8b03                 mov eax, dword ptr [ebx]
// 0069b10b  57                   push edi
// 0069b10c  50                   push eax
// 0069b10d  8bce                 mov ecx, esi
// 0069b10f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0069b116  e895ffffff           call 0x69b0b0
// 0069b11b  8907                 mov dword ptr [edi], eax
// 0069b11d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0069b120  57                   push edi
// 0069b121  51                   push ecx
// 0069b122  8bce                 mov ecx, esi
// 0069b124  e887ffffff           call 0x69b0b0
// 0069b129  894708               mov dword ptr [edi + 8], eax
// 0069b12c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0069b12f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0069b132  5f                   pop edi
// 0069b133  5e                   pop esi
// 0069b134  64890d00000000       mov dword ptr fs:[0], ecx
// 0069b13b  5b                   pop ebx
// 0069b13c  8be5                 mov esp, ebp
// 0069b13e  5d                   pop ebp
// 0069b13f  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
