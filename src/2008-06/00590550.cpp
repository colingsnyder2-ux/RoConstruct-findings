// roc 2008-06 00590550  unit: RBX::RootInstance  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590550
//
// 00590550  6aff                 push -1
// 00590552  68e8727d00           push 0x7d72e8
// 00590557  64a100000000         mov eax, dword ptr fs:[0]
// 0059055d  50                   push eax
// 0059055e  64892500000000       mov dword ptr fs:[0], esp
// 00590565  51                   push ecx
// 00590566  56                   push esi
// 00590567  8bf1                 mov esi, ecx
// 00590569  57                   push edi
// 0059056a  89742408             mov dword ptr [esp + 8], esi
// 0059056e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00590571  33ff                 xor edi, edi
// 00590573  897c2414             mov dword ptr [esp + 0x14], edi
// 00590577  3bc7                 cmp eax, edi
// 00590579  741f                 je 0x59059a
// 0059057b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059057f  51                   push ecx
// 00590580  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00590583  8d5608               lea edx, [esi + 8]
// 00590586  52                   push edx
// 00590587  51                   push ecx
// 00590588  50                   push eax
// 00590589  e802feffff           call 0x590390
// 0059058e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00590591  52                   push edx
// 00590592  e8e3001100           call 0x6a067a
// 00590597  83c414               add esp, 0x14
// 0059059a  8b06                 mov eax, dword ptr [esi]
// 0059059c  50                   push eax
// 0059059d  897e0c               mov dword ptr [esi + 0xc], edi
// 005905a0  897e10               mov dword ptr [esi + 0x10], edi
// 005905a3  897e14               mov dword ptr [esi + 0x14], edi
// 005905a6  e8cf001100           call 0x6a067a
// 005905ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005905af  83c404               add esp, 4
// 005905b2  5f                   pop edi
// 005905b3  5e                   pop esi
// 005905b4  64890d00000000       mov dword ptr fs:[0], ecx
// 005905bb  83c410               add esp, 0x10
// 005905be  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
