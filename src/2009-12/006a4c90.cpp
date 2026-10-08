// roc 2009-12 006a4c90  unit: RBX::VScriptContext::?$FactoryProduct  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a4c90
//
// 006a4c90  8b442408             mov eax, dword ptr [esp + 8]
// 006a4c94  8b542404             mov edx, dword ptr [esp + 4]
// 006a4c98  50                   push eax
// 006a4c99  83c108               add ecx, 8
// 006a4c9c  51                   push ecx
// 006a4c9d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a4ca1  51                   push ecx
// 006a4ca2  52                   push edx
// 006a4ca3  e8a8fbffff           call 0x6a4850
// 006a4ca8  83c410               add esp, 0x10
// 006a4cab  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
