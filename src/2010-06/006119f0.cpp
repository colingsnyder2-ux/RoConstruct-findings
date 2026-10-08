// from server: 100% by auto
// roc 2010-06 006119f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006119f0
//
// 006119f0  8b442408             mov eax, dword ptr [esp + 8]
// 006119f4  8b542404             mov edx, dword ptr [esp + 4]
// 006119f8  50                   push eax
// 006119f9  83c108               add ecx, 8
// 006119fc  51                   push ecx
// 006119fd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00611a01  51                   push ecx
// 00611a02  52                   push edx
// 00611a03  e898f8ffff           call 0x6112a0
// 00611a08  83c410               add esp, 0x10
// 00611a0b  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
