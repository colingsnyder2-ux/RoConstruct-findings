// roc 2009-12 007c7b40  unit: RBX::ScoreHud  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007c7b40
//
// 007c7b40  8b442408             mov eax, dword ptr [esp + 8]
// 007c7b44  8b542404             mov edx, dword ptr [esp + 4]
// 007c7b48  50                   push eax
// 007c7b49  83c108               add ecx, 8
// 007c7b4c  51                   push ecx
// 007c7b4d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007c7b51  51                   push ecx
// 007c7b52  52                   push edx
// 007c7b53  e898f4ffff           call 0x7c6ff0
// 007c7b58  83c410               add esp, 0x10
// 007c7b5b  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
