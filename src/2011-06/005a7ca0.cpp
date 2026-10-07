// roc 2011-06 005a7ca0  unit: RBX::VFriendService::?$FactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a7ca0
//
// 005a7ca0  55                   push ebp
// 005a7ca1  8bec                 mov ebp, esp
// 005a7ca3  6aff                 push -1
// 005a7ca5  6890169e00           push 0x9e1690
// 005a7caa  64a100000000         mov eax, dword ptr fs:[0]
// 005a7cb0  50                   push eax
// 005a7cb1  64892500000000       mov dword ptr fs:[0], esp
// 005a7cb8  83ec0c               sub esp, 0xc
// 005a7cbb  53                   push ebx
// 005a7cbc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 005a7cbf  807b1500             cmp byte ptr [ebx + 0x15], 0
// 005a7cc3  56                   push esi
// 005a7cc4  8bf1                 mov esi, ecx
// 005a7cc6  8b4604               mov eax, dword ptr [esi + 4]
// 005a7cc9  57                   push edi
// 005a7cca  8965f0               mov dword ptr [ebp - 0x10], esp
// 005a7ccd  8975e8               mov dword ptr [ebp - 0x18], esi
// 005a7cd0  8945ec               mov dword ptr [ebp - 0x14], eax
// 005a7cd3  7547                 jne 0x5a7d1c
// 005a7cd5  0fb64b14             movzx ecx, byte ptr [ebx + 0x14]
// 005a7cd9  51                   push ecx
// 005a7cda  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005a7cdd  8d530c               lea edx, [ebx + 0xc]
// 005a7ce0  52                   push edx
// 005a7ce1  50                   push eax
// 005a7ce2  51                   push ecx
// 005a7ce3  50                   push eax
// 005a7ce4  8bce                 mov ecx, esi
// 005a7ce6  e8959eeaff           call 0x451b80
// 005a7ceb  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 005a7cee  807a1500             cmp byte ptr [edx + 0x15], 0
// 005a7cf2  8bf8                 mov edi, eax
// 005a7cf4  7403                 je 0x5a7cf9
// 005a7cf6  897dec               mov dword ptr [ebp - 0x14], edi
// 005a7cf9  8b03                 mov eax, dword ptr [ebx]
// 005a7cfb  57                   push edi
// 005a7cfc  50                   push eax
// 005a7cfd  8bce                 mov ecx, esi
// 005a7cff  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005a7d06  e895ffffff           call 0x5a7ca0
// 005a7d0b  8907                 mov dword ptr [edi], eax
// 005a7d0d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005a7d10  57                   push edi
// 005a7d11  51                   push ecx
// 005a7d12  8bce                 mov ecx, esi
// 005a7d14  e887ffffff           call 0x5a7ca0
// 005a7d19  894708               mov dword ptr [edi + 8], eax
// 005a7d1c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005a7d1f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 005a7d22  5f                   pop edi
// 005a7d23  5e                   pop esi
// 005a7d24  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7d2b  5b                   pop ebx
// 005a7d2c  8be5                 mov esp, ebp
// 005a7d2e  5d                   pop ebp
// 005a7d2f  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
