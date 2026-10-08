// roc 2009-12 00535810  unit: RBX::Network::IdSerializer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00535810
//
// 00535810  6aff                 push -1
// 00535812  68d8c59300           push 0x93c5d8
// 00535817  64a100000000         mov eax, dword ptr fs:[0]
// 0053581d  50                   push eax
// 0053581e  64892500000000       mov dword ptr fs:[0], esp
// 00535825  51                   push ecx
// 00535826  56                   push esi
// 00535827  8bf1                 mov esi, ecx
// 00535829  57                   push edi
// 0053582a  89742408             mov dword ptr [esp + 8], esi
// 0053582e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00535831  33ff                 xor edi, edi
// 00535833  897c2414             mov dword ptr [esp + 0x14], edi
// 00535837  3bc7                 cmp eax, edi
// 00535839  741f                 je 0x53585a
// 0053583b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053583f  51                   push ecx
// 00535840  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00535843  8d5608               lea edx, [esi + 8]
// 00535846  52                   push edx
// 00535847  51                   push ecx
// 00535848  50                   push eax
// 00535849  e872f9ffff           call 0x5351c0
// 0053584e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00535851  52                   push edx
// 00535852  e803e02b00           call 0x7f385a
// 00535857  83c414               add esp, 0x14
// 0053585a  8b06                 mov eax, dword ptr [esi]
// 0053585c  50                   push eax
// 0053585d  897e0c               mov dword ptr [esi + 0xc], edi
// 00535860  897e10               mov dword ptr [esi + 0x10], edi
// 00535863  897e14               mov dword ptr [esi + 0x14], edi
// 00535866  e8efdf2b00           call 0x7f385a
// 0053586b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053586f  83c404               add esp, 4
// 00535872  5f                   pop edi
// 00535873  5e                   pop esi
// 00535874  64890d00000000       mov dword ptr fs:[0], ecx
// 0053587b  83c410               add esp, 0x10
// 0053587e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
