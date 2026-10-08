// from server: 100% by auto
// roc 2008-06 005a27e0  unit: RBX::Workspace  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a27e0
//
// 005a27e0  8b442408             mov eax, dword ptr [esp + 8]
// 005a27e4  8b542404             mov edx, dword ptr [esp + 4]
// 005a27e8  50                   push eax
// 005a27e9  83c108               add ecx, 8
// 005a27ec  51                   push ecx
// 005a27ed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a27f1  51                   push ecx
// 005a27f2  52                   push edx
// 005a27f3  e898f1ffff           call 0x5a1990
// 005a27f8  83c410               add esp, 0x10
// 005a27fb  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
