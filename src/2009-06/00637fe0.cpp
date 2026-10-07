// roc 2009-06 00637fe0  unit: RBX::VScriptContext::?$FactoryProduct  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00637fe0
//
// 00637fe0  6aff                 push -1
// 00637fe2  6878ef8600           push 0x86ef78
// 00637fe7  64a100000000         mov eax, dword ptr fs:[0]
// 00637fed  50                   push eax
// 00637fee  64892500000000       mov dword ptr fs:[0], esp
// 00637ff5  51                   push ecx
// 00637ff6  56                   push esi
// 00637ff7  8bf1                 mov esi, ecx
// 00637ff9  57                   push edi
// 00637ffa  89742408             mov dword ptr [esp + 8], esi
// 00637ffe  8b460c               mov eax, dword ptr [esi + 0xc]
// 00638001  33ff                 xor edi, edi
// 00638003  897c2414             mov dword ptr [esp + 0x14], edi
// 00638007  3bc7                 cmp eax, edi
// 00638009  741f                 je 0x63802a
// 0063800b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063800f  51                   push ecx
// 00638010  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00638013  8d5608               lea edx, [esi + 8]
// 00638016  52                   push edx
// 00638017  51                   push ecx
// 00638018  50                   push eax
// 00638019  e822f1ffff           call 0x637140
// 0063801e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00638021  52                   push edx
// 00638022  e80b0a0e00           call 0x718a32
// 00638027  83c414               add esp, 0x14
// 0063802a  8b06                 mov eax, dword ptr [esi]
// 0063802c  50                   push eax
// 0063802d  897e0c               mov dword ptr [esi + 0xc], edi
// 00638030  897e10               mov dword ptr [esi + 0x10], edi
// 00638033  897e14               mov dword ptr [esi + 0x14], edi
// 00638036  e8f7090e00           call 0x718a32
// 0063803b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063803f  83c404               add esp, 4
// 00638042  5f                   pop edi
// 00638043  5e                   pop esi
// 00638044  64890d00000000       mov dword ptr fs:[0], ecx
// 0063804b  83c410               add esp, 0x10
// 0063804e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
