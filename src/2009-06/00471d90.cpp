// roc 2009-06 00471d90  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00471d90
//
// 00471d90  6aff                 push -1
// 00471d92  6878ef8600           push 0x86ef78
// 00471d97  64a100000000         mov eax, dword ptr fs:[0]
// 00471d9d  50                   push eax
// 00471d9e  64892500000000       mov dword ptr fs:[0], esp
// 00471da5  51                   push ecx
// 00471da6  56                   push esi
// 00471da7  8bf1                 mov esi, ecx
// 00471da9  57                   push edi
// 00471daa  89742408             mov dword ptr [esp + 8], esi
// 00471dae  8b460c               mov eax, dword ptr [esi + 0xc]
// 00471db1  33ff                 xor edi, edi
// 00471db3  897c2414             mov dword ptr [esp + 0x14], edi
// 00471db7  3bc7                 cmp eax, edi
// 00471db9  741f                 je 0x471dda
// 00471dbb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00471dbf  51                   push ecx
// 00471dc0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00471dc3  8d5608               lea edx, [esi + 8]
// 00471dc6  52                   push edx
// 00471dc7  51                   push ecx
// 00471dc8  50                   push eax
// 00471dc9  e812feffff           call 0x471be0
// 00471dce  8b560c               mov edx, dword ptr [esi + 0xc]
// 00471dd1  52                   push edx
// 00471dd2  e85b6c2a00           call 0x718a32
// 00471dd7  83c414               add esp, 0x14
// 00471dda  8b06                 mov eax, dword ptr [esi]
// 00471ddc  50                   push eax
// 00471ddd  897e0c               mov dword ptr [esi + 0xc], edi
// 00471de0  897e10               mov dword ptr [esi + 0x10], edi
// 00471de3  897e14               mov dword ptr [esi + 0x14], edi
// 00471de6  e8476c2a00           call 0x718a32
// 00471deb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00471def  83c404               add esp, 4
// 00471df2  5f                   pop edi
// 00471df3  5e                   pop esi
// 00471df4  64890d00000000       mov dword ptr fs:[0], ecx
// 00471dfb  83c410               add esp, 0x10
// 00471dfe  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
