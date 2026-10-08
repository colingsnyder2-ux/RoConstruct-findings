// from server: 100% by auto
// roc 2010-06 0079c3d0  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0079c3d0
//
// 0079c3d0  6aff                 push -1
// 0079c3d2  6858a29900           push 0x99a258
// 0079c3d7  64a100000000         mov eax, dword ptr fs:[0]
// 0079c3dd  50                   push eax
// 0079c3de  64892500000000       mov dword ptr fs:[0], esp
// 0079c3e5  51                   push ecx
// 0079c3e6  56                   push esi
// 0079c3e7  8bf1                 mov esi, ecx
// 0079c3e9  57                   push edi
// 0079c3ea  89742408             mov dword ptr [esp + 8], esi
// 0079c3ee  8b460c               mov eax, dword ptr [esi + 0xc]
// 0079c3f1  33ff                 xor edi, edi
// 0079c3f3  897c2414             mov dword ptr [esp + 0x14], edi
// 0079c3f7  3bc7                 cmp eax, edi
// 0079c3f9  741f                 je 0x79c41a
// 0079c3fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0079c3ff  51                   push ecx
// 0079c400  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0079c403  8d5608               lea edx, [esi + 8]
// 0079c406  52                   push edx
// 0079c407  51                   push ecx
// 0079c408  50                   push eax
// 0079c409  e8a271e6ff           call 0x6035b0
// 0079c40e  8b560c               mov edx, dword ptr [esi + 0xc]
// 0079c411  52                   push edx
// 0079c412  e883b50000           call 0x7a799a
// 0079c417  83c414               add esp, 0x14
// 0079c41a  8b06                 mov eax, dword ptr [esi]
// 0079c41c  50                   push eax
// 0079c41d  897e0c               mov dword ptr [esi + 0xc], edi
// 0079c420  897e10               mov dword ptr [esi + 0x10], edi
// 0079c423  897e14               mov dword ptr [esi + 0x14], edi
// 0079c426  e86fb50000           call 0x7a799a
// 0079c42b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079c42f  83c404               add esp, 4
// 0079c432  5f                   pop edi
// 0079c433  5e                   pop esi
// 0079c434  64890d00000000       mov dword ptr fs:[0], ecx
// 0079c43b  83c410               add esp, 0x10
// 0079c43e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
