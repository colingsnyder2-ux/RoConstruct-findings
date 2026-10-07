// roc 2009-06 006e3a30  unit: RBX::ScoreHud  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e3a30
//
// 006e3a30  8b442408             mov eax, dword ptr [esp + 8]
// 006e3a34  8b542404             mov edx, dword ptr [esp + 4]
// 006e3a38  50                   push eax
// 006e3a39  83c108               add ecx, 8
// 006e3a3c  51                   push ecx
// 006e3a3d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e3a41  51                   push ecx
// 006e3a42  52                   push edx
// 006e3a43  e8a8f3ffff           call 0x6e2df0
// 006e3a48  83c410               add esp, 0x10
// 006e3a4b  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
