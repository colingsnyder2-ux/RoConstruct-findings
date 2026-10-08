// roc 2009-12 00535550  unit: RBX::Network::IdSerializer  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00535550
//
// 00535550  8b442408             mov eax, dword ptr [esp + 8]
// 00535554  8b542404             mov edx, dword ptr [esp + 4]
// 00535558  50                   push eax
// 00535559  83c108               add ecx, 8
// 0053555c  51                   push ecx
// 0053555d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00535561  51                   push ecx
// 00535562  52                   push edx
// 00535563  e858fcffff           call 0x5351c0
// 00535568  83c410               add esp, 0x10
// 0053556b  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
