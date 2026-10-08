// roc 2009-12 006c1ac0  unit: RBX::VInstance::?$NonFactoryProduct  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c1ac0
//
// 006c1ac0  6aff                 push -1
// 006c1ac2  68d8c59300           push 0x93c5d8
// 006c1ac7  64a100000000         mov eax, dword ptr fs:[0]
// 006c1acd  50                   push eax
// 006c1ace  64892500000000       mov dword ptr fs:[0], esp
// 006c1ad5  51                   push ecx
// 006c1ad6  56                   push esi
// 006c1ad7  8bf1                 mov esi, ecx
// 006c1ad9  57                   push edi
// 006c1ada  89742408             mov dword ptr [esp + 8], esi
// 006c1ade  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c1ae1  33ff                 xor edi, edi
// 006c1ae3  897c2414             mov dword ptr [esp + 0x14], edi
// 006c1ae7  3bc7                 cmp eax, edi
// 006c1ae9  741f                 je 0x6c1b0a
// 006c1aeb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c1aef  51                   push ecx
// 006c1af0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006c1af3  8d5608               lea edx, [esi + 8]
// 006c1af6  52                   push edx
// 006c1af7  51                   push ecx
// 006c1af8  50                   push eax
// 006c1af9  e862e8ffff           call 0x6c0360
// 006c1afe  8b560c               mov edx, dword ptr [esi + 0xc]
// 006c1b01  52                   push edx
// 006c1b02  e8531d1300           call 0x7f385a
// 006c1b07  83c414               add esp, 0x14
// 006c1b0a  8b06                 mov eax, dword ptr [esi]
// 006c1b0c  50                   push eax
// 006c1b0d  897e0c               mov dword ptr [esi + 0xc], edi
// 006c1b10  897e10               mov dword ptr [esi + 0x10], edi
// 006c1b13  897e14               mov dword ptr [esi + 0x14], edi
// 006c1b16  e83f1d1300           call 0x7f385a
// 006c1b1b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c1b1f  83c404               add esp, 4
// 006c1b22  5f                   pop edi
// 006c1b23  5e                   pop esi
// 006c1b24  64890d00000000       mov dword ptr fs:[0], ecx
// 006c1b2b  83c410               add esp, 0x10
// 006c1b2e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
