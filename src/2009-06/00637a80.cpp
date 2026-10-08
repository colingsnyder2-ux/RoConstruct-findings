// from server: 100% by auto
// roc 2009-06 00637a80  unit: RBX::VScriptContext::?$FactoryProduct  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00637a80
//
// 00637a80  8b442408             mov eax, dword ptr [esp + 8]
// 00637a84  8b542404             mov edx, dword ptr [esp + 4]
// 00637a88  50                   push eax
// 00637a89  83c108               add ecx, 8
// 00637a8c  51                   push ecx
// 00637a8d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00637a91  51                   push ecx
// 00637a92  52                   push edx
// 00637a93  e8a8f6ffff           call 0x637140
// 00637a98  83c410               add esp, 0x10
// 00637a9b  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
