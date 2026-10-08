// from server: 100% by auto
// roc 2012-06 00880ff0  unit: VAuthoringSettings::?$BoundPropGetSet  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00880ff0
//
// 00880ff0  51                   push ecx
// 00880ff1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00880ff5  8b10                 mov edx, dword ptr [eax]
// 00880ff7  8b01                 mov eax, dword ptr [ecx]
// 00880ff9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00880ffd  56                   push esi
// 00880ffe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00881002  52                   push edx
// 00881003  50                   push eax
// 00881004  56                   push esi
// 00881005  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0088100d  e84ef8ffff           call 0x880860
// 00881012  8bc6                 mov eax, esi
// 00881014  5e                   pop esi
// 00881015  59                   pop ecx
// 00881016  c21400               ret 0x14
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$?RV?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@V?$mf1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@Vcmdline@detail@program_options@boost@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@_mfi@boost@@V?$list1@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@_bi@4@@?$list2@V?$value@PAVcmdline@detail@program_options@boost@@@_bi@boost@@V?$arg@$00@3@@_bi@boost@@QAE?AV?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@V?$type@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@@12@AAV?$mf1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@Vcmdline@detail@program_options@boost@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@_mfi@2@AAV?$list1@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@12@J@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
