// roc 2009-06 006e4e00  unit: RBX::ScoreHud  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e4e00
//
// 006e4e00  6aff                 push -1
// 006e4e02  6878ef8600           push 0x86ef78
// 006e4e07  64a100000000         mov eax, dword ptr fs:[0]
// 006e4e0d  50                   push eax
// 006e4e0e  64892500000000       mov dword ptr fs:[0], esp
// 006e4e15  51                   push ecx
// 006e4e16  56                   push esi
// 006e4e17  8bf1                 mov esi, ecx
// 006e4e19  57                   push edi
// 006e4e1a  89742408             mov dword ptr [esp + 8], esi
// 006e4e1e  8b460c               mov eax, dword ptr [esi + 0xc]
// 006e4e21  33ff                 xor edi, edi
// 006e4e23  897c2414             mov dword ptr [esp + 0x14], edi
// 006e4e27  3bc7                 cmp eax, edi
// 006e4e29  741f                 je 0x6e4e4a
// 006e4e2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e4e2f  51                   push ecx
// 006e4e30  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006e4e33  8d5608               lea edx, [esi + 8]
// 006e4e36  52                   push edx
// 006e4e37  51                   push ecx
// 006e4e38  50                   push eax
// 006e4e39  e8b2dfffff           call 0x6e2df0
// 006e4e3e  8b560c               mov edx, dword ptr [esi + 0xc]
// 006e4e41  52                   push edx
// 006e4e42  e8eb3b0300           call 0x718a32
// 006e4e47  83c414               add esp, 0x14
// 006e4e4a  8b06                 mov eax, dword ptr [esi]
// 006e4e4c  50                   push eax
// 006e4e4d  897e0c               mov dword ptr [esi + 0xc], edi
// 006e4e50  897e10               mov dword ptr [esi + 0x10], edi
// 006e4e53  897e14               mov dword ptr [esi + 0x14], edi
// 006e4e56  e8d73b0300           call 0x718a32
// 006e4e5b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e4e5f  83c404               add esp, 4
// 006e4e62  5f                   pop edi
// 006e4e63  5e                   pop esi
// 006e4e64  64890d00000000       mov dword ptr fs:[0], ecx
// 006e4e6b  83c410               add esp, 0x10
// 006e4e6e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
