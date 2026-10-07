// roc 2010-06 005f4000  unit: RBX::RootInstance  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f4000
//
// 005f4000  6aff                 push -1
// 005f4002  6858a29900           push 0x99a258
// 005f4007  64a100000000         mov eax, dword ptr fs:[0]
// 005f400d  50                   push eax
// 005f400e  64892500000000       mov dword ptr fs:[0], esp
// 005f4015  51                   push ecx
// 005f4016  56                   push esi
// 005f4017  8bf1                 mov esi, ecx
// 005f4019  57                   push edi
// 005f401a  89742408             mov dword ptr [esp + 8], esi
// 005f401e  8b460c               mov eax, dword ptr [esi + 0xc]
// 005f4021  33ff                 xor edi, edi
// 005f4023  897c2414             mov dword ptr [esp + 0x14], edi
// 005f4027  3bc7                 cmp eax, edi
// 005f4029  741f                 je 0x5f404a
// 005f402b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f402f  51                   push ecx
// 005f4030  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005f4033  8d5608               lea edx, [esi + 8]
// 005f4036  52                   push edx
// 005f4037  51                   push ecx
// 005f4038  50                   push eax
// 005f4039  e8c2720c00           call 0x6bb300
// 005f403e  8b560c               mov edx, dword ptr [esi + 0xc]
// 005f4041  52                   push edx
// 005f4042  e853391b00           call 0x7a799a
// 005f4047  83c414               add esp, 0x14
// 005f404a  8b06                 mov eax, dword ptr [esi]
// 005f404c  50                   push eax
// 005f404d  897e0c               mov dword ptr [esi + 0xc], edi
// 005f4050  897e10               mov dword ptr [esi + 0x10], edi
// 005f4053  897e14               mov dword ptr [esi + 0x14], edi
// 005f4056  e83f391b00           call 0x7a799a
// 005f405b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f405f  83c404               add esp, 4
// 005f4062  5f                   pop edi
// 005f4063  5e                   pop esi
// 005f4064  64890d00000000       mov dword ptr fs:[0], ecx
// 005f406b  83c410               add esp, 0x10
// 005f406e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
