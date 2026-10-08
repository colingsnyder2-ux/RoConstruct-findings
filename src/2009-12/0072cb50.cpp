// roc 2009-12 0072cb50  unit: RBX::ThreadPool::ThreadPoolData  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072cb50
//
// 0072cb50  6aff                 push -1
// 0072cb52  68d8c59300           push 0x93c5d8
// 0072cb57  64a100000000         mov eax, dword ptr fs:[0]
// 0072cb5d  50                   push eax
// 0072cb5e  64892500000000       mov dword ptr fs:[0], esp
// 0072cb65  51                   push ecx
// 0072cb66  56                   push esi
// 0072cb67  8bf1                 mov esi, ecx
// 0072cb69  57                   push edi
// 0072cb6a  89742408             mov dword ptr [esp + 8], esi
// 0072cb6e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0072cb71  33ff                 xor edi, edi
// 0072cb73  897c2414             mov dword ptr [esp + 0x14], edi
// 0072cb77  3bc7                 cmp eax, edi
// 0072cb79  741f                 je 0x72cb9a
// 0072cb7b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0072cb7f  51                   push ecx
// 0072cb80  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0072cb83  8d5608               lea edx, [esi + 8]
// 0072cb86  52                   push edx
// 0072cb87  51                   push ecx
// 0072cb88  50                   push eax
// 0072cb89  e892f7ffff           call 0x72c320
// 0072cb8e  8b560c               mov edx, dword ptr [esi + 0xc]
// 0072cb91  52                   push edx
// 0072cb92  e8c36c0c00           call 0x7f385a
// 0072cb97  83c414               add esp, 0x14
// 0072cb9a  8b06                 mov eax, dword ptr [esi]
// 0072cb9c  50                   push eax
// 0072cb9d  897e0c               mov dword ptr [esi + 0xc], edi
// 0072cba0  897e10               mov dword ptr [esi + 0x10], edi
// 0072cba3  897e14               mov dword ptr [esi + 0x14], edi
// 0072cba6  e8af6c0c00           call 0x7f385a
// 0072cbab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072cbaf  83c404               add esp, 4
// 0072cbb2  5f                   pop edi
// 0072cbb3  5e                   pop esi
// 0072cbb4  64890d00000000       mov dword ptr fs:[0], ecx
// 0072cbbb  83c410               add esp, 0x10
// 0072cbbe  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
