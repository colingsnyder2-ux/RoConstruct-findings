// roc 2010-06 0076f880  unit: RBX::ScoreHud  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076f880
//
// 0076f880  55                   push ebp
// 0076f881  8bec                 mov ebp, esp
// 0076f883  6aff                 push -1
// 0076f885  68e0c29a00           push 0x9ac2e0
// 0076f88a  64a100000000         mov eax, dword ptr fs:[0]
// 0076f890  50                   push eax
// 0076f891  64892500000000       mov dword ptr fs:[0], esp
// 0076f898  83ec0c               sub esp, 0xc
// 0076f89b  53                   push ebx
// 0076f89c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0076f89f  807b2d00             cmp byte ptr [ebx + 0x2d], 0
// 0076f8a3  56                   push esi
// 0076f8a4  8bf1                 mov esi, ecx
// 0076f8a6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0076f8a9  57                   push edi
// 0076f8aa  8965f0               mov dword ptr [ebp - 0x10], esp
// 0076f8ad  8975e8               mov dword ptr [ebp - 0x18], esi
// 0076f8b0  8945ec               mov dword ptr [ebp - 0x14], eax
// 0076f8b3  7547                 jne 0x76f8fc
// 0076f8b5  0fb64b2c             movzx ecx, byte ptr [ebx + 0x2c]
// 0076f8b9  51                   push ecx
// 0076f8ba  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0076f8bd  8d530c               lea edx, [ebx + 0xc]
// 0076f8c0  52                   push edx
// 0076f8c1  50                   push eax
// 0076f8c2  51                   push ecx
// 0076f8c3  50                   push eax
// 0076f8c4  8bce                 mov ecx, esi
// 0076f8c6  e8e59ffcff           call 0x7398b0
// 0076f8cb  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0076f8ce  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 0076f8d2  8bf8                 mov edi, eax
// 0076f8d4  7403                 je 0x76f8d9
// 0076f8d6  897dec               mov dword ptr [ebp - 0x14], edi
// 0076f8d9  8b03                 mov eax, dword ptr [ebx]
// 0076f8db  57                   push edi
// 0076f8dc  50                   push eax
// 0076f8dd  8bce                 mov ecx, esi
// 0076f8df  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0076f8e6  e895ffffff           call 0x76f880
// 0076f8eb  8907                 mov dword ptr [edi], eax
// 0076f8ed  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0076f8f0  57                   push edi
// 0076f8f1  51                   push ecx
// 0076f8f2  8bce                 mov ecx, esi
// 0076f8f4  e887ffffff           call 0x76f880
// 0076f8f9  894708               mov dword ptr [edi + 8], eax
// 0076f8fc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0076f8ff  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0076f902  5f                   pop edi
// 0076f903  5e                   pop esi
// 0076f904  64890d00000000       mov dword ptr fs:[0], ecx
// 0076f90b  5b                   pop ebx
// 0076f90c  8be5                 mov esp, ebp
// 0076f90e  5d                   pop ebp
// 0076f90f  c20800               ret 8
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Copy@?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
