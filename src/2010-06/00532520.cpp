// roc 2010-06 00532520  unit: RBX::G3DTexture  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00532520
//
// 00532520  6aff                 push -1
// 00532522  6858a29900           push 0x99a258
// 00532527  64a100000000         mov eax, dword ptr fs:[0]
// 0053252d  50                   push eax
// 0053252e  64892500000000       mov dword ptr fs:[0], esp
// 00532535  51                   push ecx
// 00532536  56                   push esi
// 00532537  8bf1                 mov esi, ecx
// 00532539  57                   push edi
// 0053253a  89742408             mov dword ptr [esp + 8], esi
// 0053253e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00532541  33ff                 xor edi, edi
// 00532543  897c2414             mov dword ptr [esp + 0x14], edi
// 00532547  3bc7                 cmp eax, edi
// 00532549  741f                 je 0x53256a
// 0053254b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053254f  51                   push ecx
// 00532550  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00532553  8d5608               lea edx, [esi + 8]
// 00532556  52                   push edx
// 00532557  51                   push ecx
// 00532558  50                   push eax
// 00532559  e872c9ffff           call 0x52eed0
// 0053255e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00532561  52                   push edx
// 00532562  e833542700           call 0x7a799a
// 00532567  83c414               add esp, 0x14
// 0053256a  8b06                 mov eax, dword ptr [esi]
// 0053256c  50                   push eax
// 0053256d  897e0c               mov dword ptr [esi + 0xc], edi
// 00532570  897e10               mov dword ptr [esi + 0x10], edi
// 00532573  897e14               mov dword ptr [esi + 0x14], edi
// 00532576  e81f542700           call 0x7a799a
// 0053257b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053257f  83c404               add esp, 4
// 00532582  5f                   pop edi
// 00532583  5e                   pop esi
// 00532584  64890d00000000       mov dword ptr fs:[0], ecx
// 0053258b  83c410               add esp, 0x10
// 0053258e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
