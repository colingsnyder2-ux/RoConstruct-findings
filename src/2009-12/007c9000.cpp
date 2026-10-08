// roc 2009-12 007c9000  unit: RBX::ScoreHud  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007c9000
//
// 007c9000  6aff                 push -1
// 007c9002  68d8c59300           push 0x93c5d8
// 007c9007  64a100000000         mov eax, dword ptr fs:[0]
// 007c900d  50                   push eax
// 007c900e  64892500000000       mov dword ptr fs:[0], esp
// 007c9015  51                   push ecx
// 007c9016  56                   push esi
// 007c9017  8bf1                 mov esi, ecx
// 007c9019  57                   push edi
// 007c901a  89742408             mov dword ptr [esp + 8], esi
// 007c901e  8b460c               mov eax, dword ptr [esi + 0xc]
// 007c9021  33ff                 xor edi, edi
// 007c9023  897c2414             mov dword ptr [esp + 0x14], edi
// 007c9027  3bc7                 cmp eax, edi
// 007c9029  741f                 je 0x7c904a
// 007c902b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007c902f  51                   push ecx
// 007c9030  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007c9033  8d5608               lea edx, [esi + 8]
// 007c9036  52                   push edx
// 007c9037  51                   push ecx
// 007c9038  50                   push eax
// 007c9039  e8b2dfffff           call 0x7c6ff0
// 007c903e  8b560c               mov edx, dword ptr [esi + 0xc]
// 007c9041  52                   push edx
// 007c9042  e813a80200           call 0x7f385a
// 007c9047  83c414               add esp, 0x14
// 007c904a  8b06                 mov eax, dword ptr [esi]
// 007c904c  50                   push eax
// 007c904d  897e0c               mov dword ptr [esi + 0xc], edi
// 007c9050  897e10               mov dword ptr [esi + 0x10], edi
// 007c9053  897e14               mov dword ptr [esi + 0x14], edi
// 007c9056  e8ffa70200           call 0x7f385a
// 007c905b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007c905f  83c404               add esp, 4
// 007c9062  5f                   pop edi
// 007c9063  5e                   pop esi
// 007c9064  64890d00000000       mov dword ptr fs:[0], ecx
// 007c906b  83c410               add esp, 0x10
// 007c906e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
