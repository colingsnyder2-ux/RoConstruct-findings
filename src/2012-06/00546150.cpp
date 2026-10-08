// from server: 100% by auto
// roc 2012-06 00546150  unit: rbx::signals::Z::$$A6AX_NH::?$signal::Vslot::?$callable  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00546150
//
// 00546150  55                   push ebp
// 00546151  8bec                 mov ebp, esp
// 00546153  6aff                 push -1
// 00546155  6810ceaa00           push 0xaace10
// 0054615a  64a100000000         mov eax, dword ptr fs:[0]
// 00546160  50                   push eax
// 00546161  64892500000000       mov dword ptr fs:[0], esp
// 00546168  83ec0c               sub esp, 0xc
// 0054616b  53                   push ebx
// 0054616c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0054616f  807b2900             cmp byte ptr [ebx + 0x29], 0
// 00546173  56                   push esi
// 00546174  8bf1                 mov esi, ecx
// 00546176  8b4604               mov eax, dword ptr [esi + 4]
// 00546179  57                   push edi
// 0054617a  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054617d  8975e8               mov dword ptr [ebp - 0x18], esi
// 00546180  8945ec               mov dword ptr [ebp - 0x14], eax
// 00546183  7547                 jne 0x5461cc
// 00546185  0fb64b28             movzx ecx, byte ptr [ebx + 0x28]
// 00546189  51                   push ecx
// 0054618a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054618d  8d530c               lea edx, [ebx + 0xc]
// 00546190  52                   push edx
// 00546191  50                   push eax
// 00546192  51                   push ecx
// 00546193  50                   push eax
// 00546194  8bce                 mov ecx, esi
// 00546196  e8b5c1ffff           call 0x542350
// 0054619b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0054619e  807a2900             cmp byte ptr [edx + 0x29], 0
// 005461a2  8bf8                 mov edi, eax
// 005461a4  7403                 je 0x5461a9
// 005461a6  897dec               mov dword ptr [ebp - 0x14], edi
// 005461a9  8b03                 mov eax, dword ptr [ebx]
// 005461ab  57                   push edi
// 005461ac  50                   push eax
// 005461ad  8bce                 mov ecx, esi
// 005461af  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005461b6  e895ffffff           call 0x546150
// 005461bb  8907                 mov dword ptr [edi], eax
// 005461bd  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005461c0  57                   push edi
// 005461c1  51                   push ecx
// 005461c2  8bce                 mov ecx, esi
// 005461c4  e887ffffff           call 0x546150
// 005461c9  894708               mov dword ptr [edi + 8], eax
// 005461cc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005461cf  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 005461d2  5f                   pop edi
// 005461d3  5e                   pop esi
// 005461d4  64890d00000000       mov dword ptr fs:[0], ecx
// 005461db  5b                   pop ebx
// 005461dc  8be5                 mov esp, ebp
// 005461de  5d                   pop ebp
// 005461df  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\config_file.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/config_file.cpp
