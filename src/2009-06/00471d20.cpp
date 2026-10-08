// from server: 100% by auto
// roc 2009-06 00471d20  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00471d20
//
// 00471d20  8b442408             mov eax, dword ptr [esp + 8]
// 00471d24  8b542404             mov edx, dword ptr [esp + 4]
// 00471d28  50                   push eax
// 00471d29  83c108               add ecx, 8
// 00471d2c  51                   push ecx
// 00471d2d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00471d31  51                   push ecx
// 00471d32  52                   push edx
// 00471d33  e8a8feffff           call 0x471be0
// 00471d38  83c410               add esp, 0x10
// 00471d3b  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
