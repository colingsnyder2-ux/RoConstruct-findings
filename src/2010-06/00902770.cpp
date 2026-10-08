// from server: 100% by auto
// roc 2010-06 00902770  unit: std::D::DU?$char_traits::V?$basic_string::V?$vector::?$SharedPtr  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00902770
//
// 00902770  6aff                 push -1
// 00902772  6858a29900           push 0x99a258
// 00902777  64a100000000         mov eax, dword ptr fs:[0]
// 0090277d  50                   push eax
// 0090277e  64892500000000       mov dword ptr fs:[0], esp
// 00902785  51                   push ecx
// 00902786  56                   push esi
// 00902787  8bf1                 mov esi, ecx
// 00902789  57                   push edi
// 0090278a  89742408             mov dword ptr [esp + 8], esi
// 0090278e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00902791  33ff                 xor edi, edi
// 00902793  897c2414             mov dword ptr [esp + 0x14], edi
// 00902797  3bc7                 cmp eax, edi
// 00902799  741f                 je 0x9027ba
// 0090279b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0090279f  51                   push ecx
// 009027a0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 009027a3  8d5608               lea edx, [esi + 8]
// 009027a6  52                   push edx
// 009027a7  51                   push ecx
// 009027a8  50                   push eax
// 009027a9  e852feffff           call 0x902600
// 009027ae  8b560c               mov edx, dword ptr [esi + 0xc]
// 009027b1  52                   push edx
// 009027b2  e8e351eaff           call 0x7a799a
// 009027b7  83c414               add esp, 0x14
// 009027ba  8b06                 mov eax, dword ptr [esi]
// 009027bc  50                   push eax
// 009027bd  897e0c               mov dword ptr [esi + 0xc], edi
// 009027c0  897e10               mov dword ptr [esi + 0x10], edi
// 009027c3  897e14               mov dword ptr [esi + 0x14], edi
// 009027c6  e8cf51eaff           call 0x7a799a
// 009027cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009027cf  83c404               add esp, 4
// 009027d2  5f                   pop edi
// 009027d3  5e                   pop esi
// 009027d4  64890d00000000       mov dword ptr fs:[0], ecx
// 009027db  83c410               add esp, 0x10
// 009027de  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
