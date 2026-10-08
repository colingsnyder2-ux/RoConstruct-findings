// from server: 100% by auto
// roc 2008-06 005ad190  unit: RBX::Reflection::UTuple::?$holder  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad190
//
// 005ad190  6aff                 push -1
// 005ad192  68e8727d00           push 0x7d72e8
// 005ad197  64a100000000         mov eax, dword ptr fs:[0]
// 005ad19d  50                   push eax
// 005ad19e  64892500000000       mov dword ptr fs:[0], esp
// 005ad1a5  51                   push ecx
// 005ad1a6  56                   push esi
// 005ad1a7  8bf1                 mov esi, ecx
// 005ad1a9  57                   push edi
// 005ad1aa  89742408             mov dword ptr [esp + 8], esi
// 005ad1ae  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ad1b1  33ff                 xor edi, edi
// 005ad1b3  897c2414             mov dword ptr [esp + 0x14], edi
// 005ad1b7  3bc7                 cmp eax, edi
// 005ad1b9  741f                 je 0x5ad1da
// 005ad1bb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ad1bf  51                   push ecx
// 005ad1c0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005ad1c3  8d5608               lea edx, [esi + 8]
// 005ad1c6  52                   push edx
// 005ad1c7  51                   push ecx
// 005ad1c8  50                   push eax
// 005ad1c9  e832f8ffff           call 0x5aca00
// 005ad1ce  8b560c               mov edx, dword ptr [esi + 0xc]
// 005ad1d1  52                   push edx
// 005ad1d2  e8a3340f00           call 0x6a067a
// 005ad1d7  83c414               add esp, 0x14
// 005ad1da  8b06                 mov eax, dword ptr [esi]
// 005ad1dc  50                   push eax
// 005ad1dd  897e0c               mov dword ptr [esi + 0xc], edi
// 005ad1e0  897e10               mov dword ptr [esi + 0x10], edi
// 005ad1e3  897e14               mov dword ptr [esi + 0x14], edi
// 005ad1e6  e88f340f00           call 0x6a067a
// 005ad1eb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ad1ef  83c404               add esp, 4
// 005ad1f2  5f                   pop edi
// 005ad1f3  5e                   pop esi
// 005ad1f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005ad1fb  83c410               add esp, 0x10
// 005ad1fe  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
