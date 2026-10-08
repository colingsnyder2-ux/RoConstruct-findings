// roc 2009-12 0047be50  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047be50
//
// 0047be50  6aff                 push -1
// 0047be52  68d8c59300           push 0x93c5d8
// 0047be57  64a100000000         mov eax, dword ptr fs:[0]
// 0047be5d  50                   push eax
// 0047be5e  64892500000000       mov dword ptr fs:[0], esp
// 0047be65  51                   push ecx
// 0047be66  56                   push esi
// 0047be67  8bf1                 mov esi, ecx
// 0047be69  57                   push edi
// 0047be6a  89742408             mov dword ptr [esp + 8], esi
// 0047be6e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0047be71  33ff                 xor edi, edi
// 0047be73  897c2414             mov dword ptr [esp + 0x14], edi
// 0047be77  3bc7                 cmp eax, edi
// 0047be79  741f                 je 0x47be9a
// 0047be7b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047be7f  51                   push ecx
// 0047be80  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0047be83  8d5608               lea edx, [esi + 8]
// 0047be86  52                   push edx
// 0047be87  51                   push ecx
// 0047be88  50                   push eax
// 0047be89  e812feffff           call 0x47bca0
// 0047be8e  8b560c               mov edx, dword ptr [esi + 0xc]
// 0047be91  52                   push edx
// 0047be92  e8c3793700           call 0x7f385a
// 0047be97  83c414               add esp, 0x14
// 0047be9a  8b06                 mov eax, dword ptr [esi]
// 0047be9c  50                   push eax
// 0047be9d  897e0c               mov dword ptr [esi + 0xc], edi
// 0047bea0  897e10               mov dword ptr [esi + 0x10], edi
// 0047bea3  897e14               mov dword ptr [esi + 0x14], edi
// 0047bea6  e8af793700           call 0x7f385a
// 0047beab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047beaf  83c404               add esp, 4
// 0047beb2  5f                   pop edi
// 0047beb3  5e                   pop esi
// 0047beb4  64890d00000000       mov dword ptr fs:[0], ecx
// 0047bebb  83c410               add esp, 0x10
// 0047bebe  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
