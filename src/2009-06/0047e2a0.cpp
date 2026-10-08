// from server: 100% by auto
// roc 2009-06 0047e2a0  unit: Ogre::RbxPart  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0047e2a0
//
// 0047e2a0  6aff                 push -1
// 0047e2a2  6878ef8600           push 0x86ef78
// 0047e2a7  64a100000000         mov eax, dword ptr fs:[0]
// 0047e2ad  50                   push eax
// 0047e2ae  64892500000000       mov dword ptr fs:[0], esp
// 0047e2b5  51                   push ecx
// 0047e2b6  56                   push esi
// 0047e2b7  8bf1                 mov esi, ecx
// 0047e2b9  57                   push edi
// 0047e2ba  89742408             mov dword ptr [esp + 8], esi
// 0047e2be  8b460c               mov eax, dword ptr [esi + 0xc]
// 0047e2c1  33ff                 xor edi, edi
// 0047e2c3  897c2414             mov dword ptr [esp + 0x14], edi
// 0047e2c7  3bc7                 cmp eax, edi
// 0047e2c9  741f                 je 0x47e2ea
// 0047e2cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047e2cf  51                   push ecx
// 0047e2d0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0047e2d3  8d5608               lea edx, [esi + 8]
// 0047e2d6  52                   push edx
// 0047e2d7  51                   push ecx
// 0047e2d8  50                   push eax
// 0047e2d9  e852fdffff           call 0x47e030
// 0047e2de  8b560c               mov edx, dword ptr [esi + 0xc]
// 0047e2e1  52                   push edx
// 0047e2e2  e84ba72900           call 0x718a32
// 0047e2e7  83c414               add esp, 0x14
// 0047e2ea  8b06                 mov eax, dword ptr [esi]
// 0047e2ec  50                   push eax
// 0047e2ed  897e0c               mov dword ptr [esi + 0xc], edi
// 0047e2f0  897e10               mov dword ptr [esi + 0x10], edi
// 0047e2f3  897e14               mov dword ptr [esi + 0x14], edi
// 0047e2f6  e837a72900           call 0x718a32
// 0047e2fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047e2ff  83c404               add esp, 4
// 0047e302  5f                   pop edi
// 0047e303  5e                   pop esi
// 0047e304  64890d00000000       mov dword ptr fs:[0], ecx
// 0047e30b  83c410               add esp, 0x10
// 0047e30e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
