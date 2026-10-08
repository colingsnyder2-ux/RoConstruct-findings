// from server: 100% by auto
// roc 2010-06 004821f0  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004821f0
//
// 004821f0  6aff                 push -1
// 004821f2  6858a29900           push 0x99a258
// 004821f7  64a100000000         mov eax, dword ptr fs:[0]
// 004821fd  50                   push eax
// 004821fe  64892500000000       mov dword ptr fs:[0], esp
// 00482205  51                   push ecx
// 00482206  56                   push esi
// 00482207  8bf1                 mov esi, ecx
// 00482209  57                   push edi
// 0048220a  89742408             mov dword ptr [esp + 8], esi
// 0048220e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00482211  33ff                 xor edi, edi
// 00482213  897c2414             mov dword ptr [esp + 0x14], edi
// 00482217  3bc7                 cmp eax, edi
// 00482219  741f                 je 0x48223a
// 0048221b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048221f  51                   push ecx
// 00482220  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00482223  8d5608               lea edx, [esi + 8]
// 00482226  52                   push edx
// 00482227  51                   push ecx
// 00482228  50                   push eax
// 00482229  e812feffff           call 0x482040
// 0048222e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00482231  52                   push edx
// 00482232  e863573200           call 0x7a799a
// 00482237  83c414               add esp, 0x14
// 0048223a  8b06                 mov eax, dword ptr [esi]
// 0048223c  50                   push eax
// 0048223d  897e0c               mov dword ptr [esi + 0xc], edi
// 00482240  897e10               mov dword ptr [esi + 0x10], edi
// 00482243  897e14               mov dword ptr [esi + 0x14], edi
// 00482246  e84f573200           call 0x7a799a
// 0048224b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048224f  83c404               add esp, 4
// 00482252  5f                   pop edi
// 00482253  5e                   pop esi
// 00482254  64890d00000000       mov dword ptr fs:[0], ecx
// 0048225b  83c410               add esp, 0x10
// 0048225e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
