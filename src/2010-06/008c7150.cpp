// roc 2010-06 008c7150  unit: RBX::AdornRbxGfx  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008c7150
//
// 008c7150  55                   push ebp
// 008c7151  8bec                 mov ebp, esp
// 008c7153  6aff                 push -1
// 008c7155  6891d09b00           push 0x9bd091
// 008c715a  64a100000000         mov eax, dword ptr fs:[0]
// 008c7160  50                   push eax
// 008c7161  64892500000000       mov dword ptr fs:[0], esp
// 008c7168  83ec0c               sub esp, 0xc
// 008c716b  53                   push ebx
// 008c716c  56                   push esi
// 008c716d  57                   push edi
// 008c716e  8965f0               mov dword ptr [ebp - 0x10], esp
// 008c7171  6a3c                 push 0x3c
// 008c7173  e82808eeff           call 0x7a79a0
// 008c7178  8bf0                 mov esi, eax
// 008c717a  83c404               add esp, 4
// 008c717d  8975ec               mov dword ptr [ebp - 0x14], esi
// 008c7180  c745fc00000000       mov dword ptr [ebp - 4], 0
// 008c7187  8975e8               mov dword ptr [ebp - 0x18], esi
// 008c718a  c645fc01             mov byte ptr [ebp - 4], 1
// 008c718e  85f6                 test esi, esi
// 008c7190  7427                 je 0x8c71b9
// 008c7192  8b4508               mov eax, dword ptr [ebp + 8]
// 008c7195  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 008c7198  8b5510               mov edx, dword ptr [ebp + 0x10]
// 008c719b  8906                 mov dword ptr [esi], eax
// 008c719d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 008c71a0  894e04               mov dword ptr [esi + 4], ecx
// 008c71a3  50                   push eax
// 008c71a4  8d4e0c               lea ecx, [esi + 0xc]
// 008c71a7  895608               mov dword ptr [esi + 8], edx
// 008c71aa  e821f1ffff           call 0x8c62d0
// 008c71af  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 008c71b2  884e38               mov byte ptr [esi + 0x38], cl
// 008c71b5  c6463900             mov byte ptr [esi + 0x39], 0
// 008c71b9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 008c71bc  5f                   pop edi
// 008c71bd  8bc6                 mov eax, esi
// 008c71bf  5e                   pop esi
// 008c71c0  64890d00000000       mov dword ptr fs:[0], ecx
// 008c71c7  5b                   pop ebx
// 008c71c8  8be5                 mov esp, ebp
// 008c71ca  5d                   pop ebp
// 008c71cb  c21400               ret 0x14
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
