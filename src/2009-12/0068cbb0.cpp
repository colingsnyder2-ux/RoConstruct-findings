// roc 2009-12 0068cbb0  unit: RBX::RootInstance  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068cbb0
//
// 0068cbb0  6aff                 push -1
// 0068cbb2  68d8c59300           push 0x93c5d8
// 0068cbb7  64a100000000         mov eax, dword ptr fs:[0]
// 0068cbbd  50                   push eax
// 0068cbbe  64892500000000       mov dword ptr fs:[0], esp
// 0068cbc5  51                   push ecx
// 0068cbc6  56                   push esi
// 0068cbc7  8bf1                 mov esi, ecx
// 0068cbc9  57                   push edi
// 0068cbca  89742408             mov dword ptr [esp + 8], esi
// 0068cbce  8b460c               mov eax, dword ptr [esi + 0xc]
// 0068cbd1  33ff                 xor edi, edi
// 0068cbd3  897c2414             mov dword ptr [esp + 0x14], edi
// 0068cbd7  3bc7                 cmp eax, edi
// 0068cbd9  741f                 je 0x68cbfa
// 0068cbdb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068cbdf  51                   push ecx
// 0068cbe0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0068cbe3  8d5608               lea edx, [esi + 8]
// 0068cbe6  52                   push edx
// 0068cbe7  51                   push ecx
// 0068cbe8  50                   push eax
// 0068cbe9  e8c2000b00           call 0x73ccb0
// 0068cbee  8b560c               mov edx, dword ptr [esi + 0xc]
// 0068cbf1  52                   push edx
// 0068cbf2  e8636c1600           call 0x7f385a
// 0068cbf7  83c414               add esp, 0x14
// 0068cbfa  8b06                 mov eax, dword ptr [esi]
// 0068cbfc  50                   push eax
// 0068cbfd  897e0c               mov dword ptr [esi + 0xc], edi
// 0068cc00  897e10               mov dword ptr [esi + 0x10], edi
// 0068cc03  897e14               mov dword ptr [esi + 0x14], edi
// 0068cc06  e84f6c1600           call 0x7f385a
// 0068cc0b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068cc0f  83c404               add esp, 4
// 0068cc12  5f                   pop edi
// 0068cc13  5e                   pop esi
// 0068cc14  64890d00000000       mov dword ptr fs:[0], ecx
// 0068cc1b  83c410               add esp, 0x10
// 0068cc1e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
