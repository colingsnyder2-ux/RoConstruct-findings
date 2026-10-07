// roc 2008-06 0046e350  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046e350
//
// 0046e350  8b442408             mov eax, dword ptr [esp + 8]
// 0046e354  8b542404             mov edx, dword ptr [esp + 4]
// 0046e358  50                   push eax
// 0046e359  83c108               add ecx, 8
// 0046e35c  51                   push ecx
// 0046e35d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046e361  51                   push ecx
// 0046e362  52                   push edx
// 0046e363  e8a8feffff           call 0x46e210
// 0046e368  83c410               add esp, 0x10
// 0046e36b  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
