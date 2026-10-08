// from server: 100% by auto
// roc 2010-06 00770be0  unit: RBX::ScoreHud  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00770be0
//
// 00770be0  8b442408             mov eax, dword ptr [esp + 8]
// 00770be4  8b542404             mov edx, dword ptr [esp + 4]
// 00770be8  50                   push eax
// 00770be9  83c108               add ecx, 8
// 00770bec  51                   push ecx
// 00770bed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00770bf1  51                   push ecx
// 00770bf2  52                   push edx
// 00770bf3  e898f4ffff           call 0x770090
// 00770bf8  83c410               add esp, 0x10
// 00770bfb  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
