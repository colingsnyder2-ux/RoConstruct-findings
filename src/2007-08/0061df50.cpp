// from server: 100% by auto
// roc 2007-08 0061df50  unit: RBX::ScoreHud  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061df50
//
// 0061df50  55                   push ebp
// 0061df51  8bec                 mov ebp, esp
// 0061df53  6aff                 push -1
// 0061df55  68e0c97500           push 0x75c9e0
// 0061df5a  64a100000000         mov eax, dword ptr fs:[0]
// 0061df60  50                   push eax
// 0061df61  64892500000000       mov dword ptr fs:[0], esp
// 0061df68  83ec0c               sub esp, 0xc
// 0061df6b  53                   push ebx
// 0061df6c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0061df6f  807b2d00             cmp byte ptr [ebx + 0x2d], 0
// 0061df73  56                   push esi
// 0061df74  8bf1                 mov esi, ecx
// 0061df76  8b4604               mov eax, dword ptr [esi + 4]
// 0061df79  57                   push edi
// 0061df7a  8965f0               mov dword ptr [ebp - 0x10], esp
// 0061df7d  8975e8               mov dword ptr [ebp - 0x18], esi
// 0061df80  8945ec               mov dword ptr [ebp - 0x14], eax
// 0061df83  7547                 jne 0x61dfcc
// 0061df85  0fb64b2c             movzx ecx, byte ptr [ebx + 0x2c]
// 0061df89  51                   push ecx
// 0061df8a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0061df8d  8d530c               lea edx, [ebx + 0xc]
// 0061df90  52                   push edx
// 0061df91  50                   push eax
// 0061df92  51                   push ecx
// 0061df93  50                   push eax
// 0061df94  8bce                 mov ecx, esi
// 0061df96  e8f5cafbff           call 0x5daa90
// 0061df9b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0061df9e  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 0061dfa2  8bf8                 mov edi, eax
// 0061dfa4  7403                 je 0x61dfa9
// 0061dfa6  897dec               mov dword ptr [ebp - 0x14], edi
// 0061dfa9  8b03                 mov eax, dword ptr [ebx]
// 0061dfab  57                   push edi
// 0061dfac  50                   push eax
// 0061dfad  8bce                 mov ecx, esi
// 0061dfaf  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0061dfb6  e895ffffff           call 0x61df50
// 0061dfbb  8907                 mov dword ptr [edi], eax
// 0061dfbd  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0061dfc0  57                   push edi
// 0061dfc1  51                   push ecx
// 0061dfc2  8bce                 mov ecx, esi
// 0061dfc4  e887ffffff           call 0x61df50
// 0061dfc9  894708               mov dword ptr [edi + 8], eax
// 0061dfcc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0061dfcf  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0061dfd2  5f                   pop edi
// 0061dfd3  5e                   pop esi
// 0061dfd4  64890d00000000       mov dword ptr fs:[0], ecx
// 0061dfdb  5b                   pop ebx
// 0061dfdc  8be5                 mov esp, ebp
// 0061dfde  5d                   pop ebp
// 0061dfdf  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
