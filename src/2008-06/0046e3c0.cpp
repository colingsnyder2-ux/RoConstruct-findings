// roc 2008-06 0046e3c0  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046e3c0
//
// 0046e3c0  6aff                 push -1
// 0046e3c2  68e8727d00           push 0x7d72e8
// 0046e3c7  64a100000000         mov eax, dword ptr fs:[0]
// 0046e3cd  50                   push eax
// 0046e3ce  64892500000000       mov dword ptr fs:[0], esp
// 0046e3d5  51                   push ecx
// 0046e3d6  56                   push esi
// 0046e3d7  8bf1                 mov esi, ecx
// 0046e3d9  57                   push edi
// 0046e3da  89742408             mov dword ptr [esp + 8], esi
// 0046e3de  8b460c               mov eax, dword ptr [esi + 0xc]
// 0046e3e1  33ff                 xor edi, edi
// 0046e3e3  897c2414             mov dword ptr [esp + 0x14], edi
// 0046e3e7  3bc7                 cmp eax, edi
// 0046e3e9  741f                 je 0x46e40a
// 0046e3eb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046e3ef  51                   push ecx
// 0046e3f0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0046e3f3  8d5608               lea edx, [esi + 8]
// 0046e3f6  52                   push edx
// 0046e3f7  51                   push ecx
// 0046e3f8  50                   push eax
// 0046e3f9  e812feffff           call 0x46e210
// 0046e3fe  8b560c               mov edx, dword ptr [esi + 0xc]
// 0046e401  52                   push edx
// 0046e402  e873222300           call 0x6a067a
// 0046e407  83c414               add esp, 0x14
// 0046e40a  8b06                 mov eax, dword ptr [esi]
// 0046e40c  50                   push eax
// 0046e40d  897e0c               mov dword ptr [esi + 0xc], edi
// 0046e410  897e10               mov dword ptr [esi + 0x10], edi
// 0046e413  897e14               mov dword ptr [esi + 0x14], edi
// 0046e416  e85f222300           call 0x6a067a
// 0046e41b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046e41f  83c404               add esp, 4
// 0046e422  5f                   pop edi
// 0046e423  5e                   pop esi
// 0046e424  64890d00000000       mov dword ptr fs:[0], ecx
// 0046e42b  83c410               add esp, 0x10
// 0046e42e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
