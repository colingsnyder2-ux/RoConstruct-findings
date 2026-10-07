// roc 2011-06 00923440  unit: RBX::AdornRbxGfx  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00923440
//
// 00923440  55                   push ebp
// 00923441  8bec                 mov ebp, esp
// 00923443  6aff                 push -1
// 00923445  68e1fda000           push 0xa0fde1
// 0092344a  64a100000000         mov eax, dword ptr fs:[0]
// 00923450  50                   push eax
// 00923451  64892500000000       mov dword ptr fs:[0], esp
// 00923458  83ec0c               sub esp, 0xc
// 0092345b  53                   push ebx
// 0092345c  56                   push esi
// 0092345d  57                   push edi
// 0092345e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00923461  6a3c                 push 0x3c
// 00923463  e8f66beeff           call 0x80a05e
// 00923468  8bf0                 mov esi, eax
// 0092346a  83c404               add esp, 4
// 0092346d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00923470  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00923477  8975e8               mov dword ptr [ebp - 0x18], esi
// 0092347a  c645fc01             mov byte ptr [ebp - 4], 1
// 0092347e  85f6                 test esi, esi
// 00923480  7427                 je 0x9234a9
// 00923482  8b4508               mov eax, dword ptr [ebp + 8]
// 00923485  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00923488  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0092348b  8906                 mov dword ptr [esi], eax
// 0092348d  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00923490  894e04               mov dword ptr [esi + 4], ecx
// 00923493  50                   push eax
// 00923494  8d4e0c               lea ecx, [esi + 0xc]
// 00923497  895608               mov dword ptr [esi + 8], edx
// 0092349a  e8f1efffff           call 0x922490
// 0092349f  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 009234a2  884e38               mov byte ptr [esi + 0x38], cl
// 009234a5  c6463900             mov byte ptr [esi + 0x39], 0
// 009234a9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 009234ac  5f                   pop edi
// 009234ad  8bc6                 mov eax, esi
// 009234af  5e                   pop esi
// 009234b0  64890d00000000       mov dword ptr fs:[0], ecx
// 009234b7  5b                   pop ebx
// 009234b8  8be5                 mov esp, ebp
// 009234ba  5d                   pop ebp
// 009234bb  c21400               ret 0x14
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
