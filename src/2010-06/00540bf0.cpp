// roc 2010-06 00540bf0  unit: RBX::AggregatingSceneManager  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00540bf0
//
// 00540bf0  6aff                 push -1
// 00540bf2  6858a29900           push 0x99a258
// 00540bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00540bfd  50                   push eax
// 00540bfe  64892500000000       mov dword ptr fs:[0], esp
// 00540c05  51                   push ecx
// 00540c06  56                   push esi
// 00540c07  8bf1                 mov esi, ecx
// 00540c09  57                   push edi
// 00540c0a  89742408             mov dword ptr [esp + 8], esi
// 00540c0e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00540c11  33ff                 xor edi, edi
// 00540c13  897c2414             mov dword ptr [esp + 0x14], edi
// 00540c17  3bc7                 cmp eax, edi
// 00540c19  741f                 je 0x540c3a
// 00540c1b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00540c1f  51                   push ecx
// 00540c20  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00540c23  8d5608               lea edx, [esi + 8]
// 00540c26  52                   push edx
// 00540c27  51                   push ecx
// 00540c28  50                   push eax
// 00540c29  e8f2f6ffff           call 0x540320
// 00540c2e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00540c31  52                   push edx
// 00540c32  e8636d2600           call 0x7a799a
// 00540c37  83c414               add esp, 0x14
// 00540c3a  8b06                 mov eax, dword ptr [esi]
// 00540c3c  50                   push eax
// 00540c3d  897e0c               mov dword ptr [esi + 0xc], edi
// 00540c40  897e10               mov dword ptr [esi + 0x10], edi
// 00540c43  897e14               mov dword ptr [esi + 0x14], edi
// 00540c46  e84f6d2600           call 0x7a799a
// 00540c4b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00540c4f  83c404               add esp, 4
// 00540c52  5f                   pop edi
// 00540c53  5e                   pop esi
// 00540c54  64890d00000000       mov dword ptr fs:[0], ecx
// 00540c5b  83c410               add esp, 0x10
// 00540c5e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
