// from server: 100% by auto
// roc 2012-06 008819c0  unit: RBX::TestService  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008819c0
//
// 008819c0  51                   push ecx
// 008819c1  8b442410             mov eax, dword ptr [esp + 0x10]
// 008819c5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008819c9  56                   push esi
// 008819ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008819ce  50                   push eax
// 008819cf  56                   push esi
// 008819d0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 008819d8  e863f8ffff           call 0x881240
// 008819dd  8bc6                 mov eax, esi
// 008819df  5e                   pop esi
// 008819e0  59                   pop ecx
// 008819e1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?invoke@?$function_obj_invoker1@V?$bind_t@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@V?$mf1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@Vcmdline@detail@program_options@boost@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@_mfi@boost@@V?$list2@V?$value@PAVcmdline@detail@program_options@boost@@@_bi@boost@@V?$arg@$00@3@@_bi@5@@_bi@boost@@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@function@detail@boost@@SA?AV?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AATfunction_buffer@234@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@6@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
