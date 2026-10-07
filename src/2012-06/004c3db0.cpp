// roc 2012-06 004c3db0  unit: RBX::AdornRbxGfx  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004c3db0
//
// 004c3db0  55                   push ebp
// 004c3db1  8bec                 mov ebp, esp
// 004c3db3  6aff                 push -1
// 004c3db5  68315caa00           push 0xaa5c31
// 004c3dba  64a100000000         mov eax, dword ptr fs:[0]
// 004c3dc0  50                   push eax
// 004c3dc1  64892500000000       mov dword ptr fs:[0], esp
// 004c3dc8  83ec0c               sub esp, 0xc
// 004c3dcb  53                   push ebx
// 004c3dcc  56                   push esi
// 004c3dcd  57                   push edi
// 004c3dce  8965f0               mov dword ptr [ebp - 0x10], esp
// 004c3dd1  6a3c                 push 0x3c
// 004c3dd3  e842e34b00           call 0x98211a
// 004c3dd8  8bf0                 mov esi, eax
// 004c3dda  83c404               add esp, 4
// 004c3ddd  8975ec               mov dword ptr [ebp - 0x14], esi
// 004c3de0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004c3de7  8975e8               mov dword ptr [ebp - 0x18], esi
// 004c3dea  c645fc01             mov byte ptr [ebp - 4], 1
// 004c3dee  85f6                 test esi, esi
// 004c3df0  7427                 je 0x4c3e19
// 004c3df2  8b4508               mov eax, dword ptr [ebp + 8]
// 004c3df5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004c3df8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004c3dfb  8906                 mov dword ptr [esi], eax
// 004c3dfd  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004c3e00  894e04               mov dword ptr [esi + 4], ecx
// 004c3e03  50                   push eax
// 004c3e04  8d4e0c               lea ecx, [esi + 0xc]
// 004c3e07  895608               mov dword ptr [esi + 8], edx
// 004c3e0a  e821e7ffff           call 0x4c2530
// 004c3e0f  8a4d18               mov cl, byte ptr [ebp + 0x18]
// 004c3e12  884e38               mov byte ptr [esi + 0x38], cl
// 004c3e15  c6463900             mov byte ptr [esi + 0x39], 0
// 004c3e19  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004c3e1c  5f                   pop edi
// 004c3e1d  8bc6                 mov eax, esi
// 004c3e1f  5e                   pop esi
// 004c3e20  64890d00000000       mov dword ptr fs:[0], ecx
// 004c3e27  5b                   pop ebx
// 004c3e28  8be5                 mov esp, ebp
// 004c3e2a  5d                   pop ebp
// 004c3e2b  c21400               ret 0x14
// library boost-1.34.1/libs\program_options\src\variables_map.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@std@@@2@$0A@@std@@@2@PAU342@00ABU?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vvariable_value@program_options@boost@@@2@D@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/variables_map.cpp
