// roc 2009-12 004b8580  unit: std::D::DU?$char_traits::V?$basic_string::V?$vector::?$SharedPtr  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004b8580
//
// 004b8580  6aff                 push -1
// 004b8582  68d8c59300           push 0x93c5d8
// 004b8587  64a100000000         mov eax, dword ptr fs:[0]
// 004b858d  50                   push eax
// 004b858e  64892500000000       mov dword ptr fs:[0], esp
// 004b8595  51                   push ecx
// 004b8596  56                   push esi
// 004b8597  8bf1                 mov esi, ecx
// 004b8599  57                   push edi
// 004b859a  89742408             mov dword ptr [esp + 8], esi
// 004b859e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b85a1  33ff                 xor edi, edi
// 004b85a3  897c2414             mov dword ptr [esp + 0x14], edi
// 004b85a7  3bc7                 cmp eax, edi
// 004b85a9  741f                 je 0x4b85ca
// 004b85ab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b85af  51                   push ecx
// 004b85b0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004b85b3  8d5608               lea edx, [esi + 8]
// 004b85b6  52                   push edx
// 004b85b7  51                   push ecx
// 004b85b8  50                   push eax
// 004b85b9  e8f2fdffff           call 0x4b83b0
// 004b85be  8b560c               mov edx, dword ptr [esi + 0xc]
// 004b85c1  52                   push edx
// 004b85c2  e893b23300           call 0x7f385a
// 004b85c7  83c414               add esp, 0x14
// 004b85ca  8b06                 mov eax, dword ptr [esi]
// 004b85cc  50                   push eax
// 004b85cd  897e0c               mov dword ptr [esi + 0xc], edi
// 004b85d0  897e10               mov dword ptr [esi + 0x10], edi
// 004b85d3  897e14               mov dword ptr [esi + 0x14], edi
// 004b85d6  e87fb23300           call 0x7f385a
// 004b85db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b85df  83c404               add esp, 4
// 004b85e2  5f                   pop edi
// 004b85e3  5e                   pop esi
// 004b85e4  64890d00000000       mov dword ptr fs:[0], ecx
// 004b85eb  83c410               add esp, 0x10
// 004b85ee  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
