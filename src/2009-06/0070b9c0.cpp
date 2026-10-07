// roc 2009-06 0070b9c0  unit: RBX::VCEvent::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0070b9c0
//
// 0070b9c0  6aff                 push -1
// 0070b9c2  6878ef8600           push 0x86ef78
// 0070b9c7  64a100000000         mov eax, dword ptr fs:[0]
// 0070b9cd  50                   push eax
// 0070b9ce  64892500000000       mov dword ptr fs:[0], esp
// 0070b9d5  51                   push ecx
// 0070b9d6  56                   push esi
// 0070b9d7  8bf1                 mov esi, ecx
// 0070b9d9  57                   push edi
// 0070b9da  89742408             mov dword ptr [esp + 8], esi
// 0070b9de  8b460c               mov eax, dword ptr [esi + 0xc]
// 0070b9e1  33ff                 xor edi, edi
// 0070b9e3  897c2414             mov dword ptr [esp + 0x14], edi
// 0070b9e7  3bc7                 cmp eax, edi
// 0070b9e9  741f                 je 0x70ba0a
// 0070b9eb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0070b9ef  51                   push ecx
// 0070b9f0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0070b9f3  8d5608               lea edx, [esi + 8]
// 0070b9f6  52                   push edx
// 0070b9f7  51                   push ecx
// 0070b9f8  50                   push eax
// 0070b9f9  e8a2b2f2ff           call 0x636ca0
// 0070b9fe  8b560c               mov edx, dword ptr [esi + 0xc]
// 0070ba01  52                   push edx
// 0070ba02  e82bd00000           call 0x718a32
// 0070ba07  83c414               add esp, 0x14
// 0070ba0a  8b06                 mov eax, dword ptr [esi]
// 0070ba0c  50                   push eax
// 0070ba0d  897e0c               mov dword ptr [esi + 0xc], edi
// 0070ba10  897e10               mov dword ptr [esi + 0x10], edi
// 0070ba13  897e14               mov dword ptr [esi + 0x14], edi
// 0070ba16  e817d00000           call 0x718a32
// 0070ba1b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070ba1f  83c404               add esp, 4
// 0070ba22  5f                   pop edi
// 0070ba23  5e                   pop esi
// 0070ba24  64890d00000000       mov dword ptr fs:[0], ecx
// 0070ba2b  83c410               add esp, 0x10
// 0070ba2e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
