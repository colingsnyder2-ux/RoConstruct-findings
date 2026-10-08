// from server: 100% by auto
// roc 2010-06 004440e0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004440e0
//
// 004440e0  6aff                 push -1
// 004440e2  6858a29900           push 0x99a258
// 004440e7  64a100000000         mov eax, dword ptr fs:[0]
// 004440ed  50                   push eax
// 004440ee  64892500000000       mov dword ptr fs:[0], esp
// 004440f5  51                   push ecx
// 004440f6  56                   push esi
// 004440f7  8bf1                 mov esi, ecx
// 004440f9  57                   push edi
// 004440fa  89742408             mov dword ptr [esp + 8], esi
// 004440fe  8b460c               mov eax, dword ptr [esi + 0xc]
// 00444101  33ff                 xor edi, edi
// 00444103  897c2414             mov dword ptr [esp + 0x14], edi
// 00444107  3bc7                 cmp eax, edi
// 00444109  741f                 je 0x44412a
// 0044410b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044410f  51                   push ecx
// 00444110  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00444113  8d5608               lea edx, [esi + 8]
// 00444116  52                   push edx
// 00444117  51                   push ecx
// 00444118  50                   push eax
// 00444119  e802fdffff           call 0x443e20
// 0044411e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00444121  52                   push edx
// 00444122  e873383600           call 0x7a799a
// 00444127  83c414               add esp, 0x14
// 0044412a  8b06                 mov eax, dword ptr [esi]
// 0044412c  50                   push eax
// 0044412d  897e0c               mov dword ptr [esi + 0xc], edi
// 00444130  897e10               mov dword ptr [esi + 0x10], edi
// 00444133  897e14               mov dword ptr [esi + 0x14], edi
// 00444136  e85f383600           call 0x7a799a
// 0044413b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044413f  83c404               add esp, 4
// 00444142  5f                   pop edi
// 00444143  5e                   pop esi
// 00444144  64890d00000000       mov dword ptr fs:[0], ecx
// 0044414b  83c410               add esp, 0x10
// 0044414e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
