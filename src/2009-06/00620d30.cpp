// from server: 100% by auto
// roc 2009-06 00620d30  unit: TextXmlParser  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00620d30
//
// 00620d30  6aff                 push -1
// 00620d32  6878ef8600           push 0x86ef78
// 00620d37  64a100000000         mov eax, dword ptr fs:[0]
// 00620d3d  50                   push eax
// 00620d3e  64892500000000       mov dword ptr fs:[0], esp
// 00620d45  51                   push ecx
// 00620d46  56                   push esi
// 00620d47  8bf1                 mov esi, ecx
// 00620d49  57                   push edi
// 00620d4a  89742408             mov dword ptr [esp + 8], esi
// 00620d4e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00620d51  33ff                 xor edi, edi
// 00620d53  897c2414             mov dword ptr [esp + 0x14], edi
// 00620d57  3bc7                 cmp eax, edi
// 00620d59  741f                 je 0x620d7a
// 00620d5b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00620d5f  51                   push ecx
// 00620d60  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00620d63  8d5608               lea edx, [esi + 8]
// 00620d66  52                   push edx
// 00620d67  51                   push ecx
// 00620d68  50                   push eax
// 00620d69  e802feffff           call 0x620b70
// 00620d6e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00620d71  52                   push edx
// 00620d72  e8bb7c0f00           call 0x718a32
// 00620d77  83c414               add esp, 0x14
// 00620d7a  8b06                 mov eax, dword ptr [esi]
// 00620d7c  50                   push eax
// 00620d7d  897e0c               mov dword ptr [esi + 0xc], edi
// 00620d80  897e10               mov dword ptr [esi + 0x10], edi
// 00620d83  897e14               mov dword ptr [esi + 0x14], edi
// 00620d86  e8a77c0f00           call 0x718a32
// 00620d8b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00620d8f  83c404               add esp, 4
// 00620d92  5f                   pop edi
// 00620d93  5e                   pop esi
// 00620d94  64890d00000000       mov dword ptr fs:[0], ecx
// 00620d9b  83c410               add esp, 0x10
// 00620d9e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
