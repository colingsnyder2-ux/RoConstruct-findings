// roc 2011-06 0075cc30  unit: RBX::BoxSelectCommand  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0075cc30
//
// 0075cc30  55                   push ebp
// 0075cc31  8bec                 mov ebp, esp
// 0075cc33  6aff                 push -1
// 0075cc35  68c0a09f00           push 0x9fa0c0
// 0075cc3a  64a100000000         mov eax, dword ptr fs:[0]
// 0075cc40  50                   push eax
// 0075cc41  64892500000000       mov dword ptr fs:[0], esp
// 0075cc48  83ec0c               sub esp, 0xc
// 0075cc4b  53                   push ebx
// 0075cc4c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0075cc4f  807b1500             cmp byte ptr [ebx + 0x15], 0
// 0075cc53  56                   push esi
// 0075cc54  8bf1                 mov esi, ecx
// 0075cc56  8b4604               mov eax, dword ptr [esi + 4]
// 0075cc59  57                   push edi
// 0075cc5a  8965f0               mov dword ptr [ebp - 0x10], esp
// 0075cc5d  8975e8               mov dword ptr [ebp - 0x18], esi
// 0075cc60  8945ec               mov dword ptr [ebp - 0x14], eax
// 0075cc63  7547                 jne 0x75ccac
// 0075cc65  0fb64b14             movzx ecx, byte ptr [ebx + 0x14]
// 0075cc69  51                   push ecx
// 0075cc6a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0075cc6d  8d530c               lea edx, [ebx + 0xc]
// 0075cc70  52                   push edx
// 0075cc71  50                   push eax
// 0075cc72  51                   push ecx
// 0075cc73  50                   push eax
// 0075cc74  8bce                 mov ecx, esi
// 0075cc76  e835ef0900           call 0x7fbbb0
// 0075cc7b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0075cc7e  807a1500             cmp byte ptr [edx + 0x15], 0
// 0075cc82  8bf8                 mov edi, eax
// 0075cc84  7403                 je 0x75cc89
// 0075cc86  897dec               mov dword ptr [ebp - 0x14], edi
// 0075cc89  8b03                 mov eax, dword ptr [ebx]
// 0075cc8b  57                   push edi
// 0075cc8c  50                   push eax
// 0075cc8d  8bce                 mov ecx, esi
// 0075cc8f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0075cc96  e895ffffff           call 0x75cc30
// 0075cc9b  8907                 mov dword ptr [edi], eax
// 0075cc9d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0075cca0  57                   push edi
// 0075cca1  51                   push ecx
// 0075cca2  8bce                 mov ecx, esi
// 0075cca4  e887ffffff           call 0x75cc30
// 0075cca9  894708               mov dword ptr [edi + 8], eax
// 0075ccac  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0075ccaf  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0075ccb2  5f                   pop edi
// 0075ccb3  5e                   pop esi
// 0075ccb4  64890d00000000       mov dword ptr fs:[0], ecx
// 0075ccbb  5b                   pop ebx
// 0075ccbc  8be5                 mov esp, ebp
// 0075ccbe  5d                   pop ebp
// 0075ccbf  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
