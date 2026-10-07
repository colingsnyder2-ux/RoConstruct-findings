// roc 2010-06 007720a0  unit: RBX::ScoreHud  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007720a0
//
// 007720a0  6aff                 push -1
// 007720a2  6858a29900           push 0x99a258
// 007720a7  64a100000000         mov eax, dword ptr fs:[0]
// 007720ad  50                   push eax
// 007720ae  64892500000000       mov dword ptr fs:[0], esp
// 007720b5  51                   push ecx
// 007720b6  56                   push esi
// 007720b7  8bf1                 mov esi, ecx
// 007720b9  57                   push edi
// 007720ba  89742408             mov dword ptr [esp + 8], esi
// 007720be  8b460c               mov eax, dword ptr [esi + 0xc]
// 007720c1  33ff                 xor edi, edi
// 007720c3  897c2414             mov dword ptr [esp + 0x14], edi
// 007720c7  3bc7                 cmp eax, edi
// 007720c9  741f                 je 0x7720ea
// 007720cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007720cf  51                   push ecx
// 007720d0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007720d3  8d5608               lea edx, [esi + 8]
// 007720d6  52                   push edx
// 007720d7  51                   push ecx
// 007720d8  50                   push eax
// 007720d9  e8b2dfffff           call 0x770090
// 007720de  8b560c               mov edx, dword ptr [esi + 0xc]
// 007720e1  52                   push edx
// 007720e2  e8b3580300           call 0x7a799a
// 007720e7  83c414               add esp, 0x14
// 007720ea  8b06                 mov eax, dword ptr [esi]
// 007720ec  50                   push eax
// 007720ed  897e0c               mov dword ptr [esi + 0xc], edi
// 007720f0  897e10               mov dword ptr [esi + 0x10], edi
// 007720f3  897e14               mov dword ptr [esi + 0x14], edi
// 007720f6  e89f580300           call 0x7a799a
// 007720fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007720ff  83c404               add esp, 4
// 00772102  5f                   pop edi
// 00772103  5e                   pop esi
// 00772104  64890d00000000       mov dword ptr fs:[0], ecx
// 0077210b  83c410               add esp, 0x10
// 0077210e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
