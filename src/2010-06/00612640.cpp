// from server: 100% by auto
// roc 2010-06 00612640  unit: RBX::VScriptContext::?$FactoryProduct  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00612640
//
// 00612640  6aff                 push -1
// 00612642  6858a29900           push 0x99a258
// 00612647  64a100000000         mov eax, dword ptr fs:[0]
// 0061264d  50                   push eax
// 0061264e  64892500000000       mov dword ptr fs:[0], esp
// 00612655  51                   push ecx
// 00612656  56                   push esi
// 00612657  8bf1                 mov esi, ecx
// 00612659  57                   push edi
// 0061265a  89742408             mov dword ptr [esp + 8], esi
// 0061265e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00612661  33ff                 xor edi, edi
// 00612663  897c2414             mov dword ptr [esp + 0x14], edi
// 00612667  3bc7                 cmp eax, edi
// 00612669  741f                 je 0x61268a
// 0061266b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061266f  51                   push ecx
// 00612670  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00612673  8d5608               lea edx, [esi + 8]
// 00612676  52                   push edx
// 00612677  51                   push ecx
// 00612678  50                   push eax
// 00612679  e822ecffff           call 0x6112a0
// 0061267e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00612681  52                   push edx
// 00612682  e813531900           call 0x7a799a
// 00612687  83c414               add esp, 0x14
// 0061268a  8b06                 mov eax, dword ptr [esi]
// 0061268c  50                   push eax
// 0061268d  897e0c               mov dword ptr [esi + 0xc], edi
// 00612690  897e10               mov dword ptr [esi + 0x10], edi
// 00612693  897e14               mov dword ptr [esi + 0x14], edi
// 00612696  e8ff521900           call 0x7a799a
// 0061269b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061269f  83c404               add esp, 4
// 006126a2  5f                   pop edi
// 006126a3  5e                   pop esi
// 006126a4  64890d00000000       mov dword ptr fs:[0], ecx
// 006126ab  83c410               add esp, 0x10
// 006126ae  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
