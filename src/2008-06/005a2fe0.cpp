// roc 2008-06 005a2fe0  unit: RBX::Workspace  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2fe0
//
// 005a2fe0  6aff                 push -1
// 005a2fe2  68e8727d00           push 0x7d72e8
// 005a2fe7  64a100000000         mov eax, dword ptr fs:[0]
// 005a2fed  50                   push eax
// 005a2fee  64892500000000       mov dword ptr fs:[0], esp
// 005a2ff5  51                   push ecx
// 005a2ff6  56                   push esi
// 005a2ff7  8bf1                 mov esi, ecx
// 005a2ff9  57                   push edi
// 005a2ffa  89742408             mov dword ptr [esp + 8], esi
// 005a2ffe  8b460c               mov eax, dword ptr [esi + 0xc]
// 005a3001  33ff                 xor edi, edi
// 005a3003  897c2414             mov dword ptr [esp + 0x14], edi
// 005a3007  3bc7                 cmp eax, edi
// 005a3009  741f                 je 0x5a302a
// 005a300b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a300f  51                   push ecx
// 005a3010  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005a3013  8d5608               lea edx, [esi + 8]
// 005a3016  52                   push edx
// 005a3017  51                   push ecx
// 005a3018  50                   push eax
// 005a3019  e872e9ffff           call 0x5a1990
// 005a301e  8b560c               mov edx, dword ptr [esi + 0xc]
// 005a3021  52                   push edx
// 005a3022  e853d60f00           call 0x6a067a
// 005a3027  83c414               add esp, 0x14
// 005a302a  8b06                 mov eax, dword ptr [esi]
// 005a302c  50                   push eax
// 005a302d  897e0c               mov dword ptr [esi + 0xc], edi
// 005a3030  897e10               mov dword ptr [esi + 0x10], edi
// 005a3033  897e14               mov dword ptr [esi + 0x14], edi
// 005a3036  e83fd60f00           call 0x6a067a
// 005a303b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a303f  83c404               add esp, 4
// 005a3042  5f                   pop edi
// 005a3043  5e                   pop esi
// 005a3044  64890d00000000       mov dword ptr fs:[0], ecx
// 005a304b  83c410               add esp, 0x10
// 005a304e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
