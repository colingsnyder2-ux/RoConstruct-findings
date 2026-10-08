// roc 2009-12 0047f4b0  unit: RBX::AdornRbxGfx  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047f4b0
//
// 0047f4b0  55                   push ebp
// 0047f4b1  8bec                 mov ebp, esp
// 0047f4b3  6aff                 push -1
// 0047f4b5  6891ea9200           push 0x92ea91
// 0047f4ba  64a100000000         mov eax, dword ptr fs:[0]
// 0047f4c0  50                   push eax
// 0047f4c1  64892500000000       mov dword ptr fs:[0], esp
// 0047f4c8  83ec0c               sub esp, 0xc
// 0047f4cb  53                   push ebx
// 0047f4cc  56                   push esi
// 0047f4cd  57                   push edi
// 0047f4ce  8965f0               mov dword ptr [ebp - 0x10], esp
// 0047f4d1  6a3c                 push 0x3c
// 0047f4d3  e888433700           call 0x7f3860
// 0047f4d8  8bf0                 mov esi, eax
// 0047f4da  83c404               add esp, 4
// 0047f4dd  8975ec               mov dword ptr [ebp - 0x14], esi
// 0047f4e0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0047f4e7  8975e8               mov dword ptr [ebp - 0x18], esi
// 0047f4ea  c645fc01             mov byte ptr [ebp - 4], 1
// 0047f4ee  85f6                 test esi, esi
// 0047f4f0  7427                 je 0x47f519
// 0047f4f2  8b4508               mov eax, dword ptr [ebp + 8]
// 0047f4f5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0047f4f8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0047f4fb  8906                 mov dword ptr [esi], eax
// 0047f4fd  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0047f500  894e04               mov dword ptr [esi + 4], ecx
// 0047f503  50                   push eax
// 0047f504  8d4e0c               lea ecx, [esi + 0xc]
// 0047f507  895608               mov dword ptr [esi + 8], edx
// 0047f50a  e841f1ffff           call 0x47e650
// 0047f50f  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 0047f512  884e38               mov byte ptr [esi + 0x38], cl
// 0047f515  c6463900             mov byte ptr [esi + 0x39], 0
// 0047f519  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0047f51c  5f                   pop edi
// 0047f51d  8bc6                 mov eax, esi
// 0047f51f  5e                   pop esi
// 0047f520  64890d00000000       mov dword ptr fs:[0], ecx
// 0047f527  5b                   pop ebx
// 0047f528  8be5                 mov esp, ebp
// 0047f52a  5d                   pop ebp
// 0047f52b  c21400               ret 0x14
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
