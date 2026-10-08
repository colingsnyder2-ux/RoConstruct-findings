// from server: 100% by auto
// roc 2009-06 004defc0  unit: RBX::Network::IdSerializer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004defc0
//
// 004defc0  6aff                 push -1
// 004defc2  6878ef8600           push 0x86ef78
// 004defc7  64a100000000         mov eax, dword ptr fs:[0]
// 004defcd  50                   push eax
// 004defce  64892500000000       mov dword ptr fs:[0], esp
// 004defd5  51                   push ecx
// 004defd6  56                   push esi
// 004defd7  8bf1                 mov esi, ecx
// 004defd9  57                   push edi
// 004defda  89742408             mov dword ptr [esp + 8], esi
// 004defde  8b460c               mov eax, dword ptr [esi + 0xc]
// 004defe1  33ff                 xor edi, edi
// 004defe3  897c2414             mov dword ptr [esp + 0x14], edi
// 004defe7  3bc7                 cmp eax, edi
// 004defe9  741f                 je 0x4df00a
// 004defeb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004defef  51                   push ecx
// 004deff0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004deff3  8d5608               lea edx, [esi + 8]
// 004deff6  52                   push edx
// 004deff7  51                   push ecx
// 004deff8  50                   push eax
// 004deff9  e8d2f9ffff           call 0x4de9d0
// 004deffe  8b560c               mov edx, dword ptr [esi + 0xc]
// 004df001  52                   push edx
// 004df002  e82b9a2300           call 0x718a32
// 004df007  83c414               add esp, 0x14
// 004df00a  8b06                 mov eax, dword ptr [esi]
// 004df00c  50                   push eax
// 004df00d  897e0c               mov dword ptr [esi + 0xc], edi
// 004df010  897e10               mov dword ptr [esi + 0x10], edi
// 004df013  897e14               mov dword ptr [esi + 0x14], edi
// 004df016  e8179a2300           call 0x718a32
// 004df01b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004df01f  83c404               add esp, 4
// 004df022  5f                   pop edi
// 004df023  5e                   pop esi
// 004df024  64890d00000000       mov dword ptr fs:[0], ecx
// 004df02b  83c410               add esp, 0x10
// 004df02e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
