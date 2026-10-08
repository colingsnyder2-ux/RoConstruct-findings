// from server: 100% by auto
// roc 2010-06 004e3b20  unit: RBX::Network::IdSerializer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e3b20
//
// 004e3b20  6aff                 push -1
// 004e3b22  6858a29900           push 0x99a258
// 004e3b27  64a100000000         mov eax, dword ptr fs:[0]
// 004e3b2d  50                   push eax
// 004e3b2e  64892500000000       mov dword ptr fs:[0], esp
// 004e3b35  51                   push ecx
// 004e3b36  56                   push esi
// 004e3b37  8bf1                 mov esi, ecx
// 004e3b39  57                   push edi
// 004e3b3a  89742408             mov dword ptr [esp + 8], esi
// 004e3b3e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004e3b41  33ff                 xor edi, edi
// 004e3b43  897c2414             mov dword ptr [esp + 0x14], edi
// 004e3b47  3bc7                 cmp eax, edi
// 004e3b49  741f                 je 0x4e3b6a
// 004e3b4b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e3b4f  51                   push ecx
// 004e3b50  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004e3b53  8d5608               lea edx, [esi + 8]
// 004e3b56  52                   push edx
// 004e3b57  51                   push ecx
// 004e3b58  50                   push eax
// 004e3b59  e872f9ffff           call 0x4e34d0
// 004e3b5e  8b560c               mov edx, dword ptr [esi + 0xc]
// 004e3b61  52                   push edx
// 004e3b62  e8333e2c00           call 0x7a799a
// 004e3b67  83c414               add esp, 0x14
// 004e3b6a  8b06                 mov eax, dword ptr [esi]
// 004e3b6c  50                   push eax
// 004e3b6d  897e0c               mov dword ptr [esi + 0xc], edi
// 004e3b70  897e10               mov dword ptr [esi + 0x10], edi
// 004e3b73  897e14               mov dword ptr [esi + 0x14], edi
// 004e3b76  e81f3e2c00           call 0x7a799a
// 004e3b7b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e3b7f  83c404               add esp, 4
// 004e3b82  5f                   pop edi
// 004e3b83  5e                   pop esi
// 004e3b84  64890d00000000       mov dword ptr fs:[0], ecx
// 004e3b8b  83c410               add esp, 0x10
// 004e3b8e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
