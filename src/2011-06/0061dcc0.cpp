// from server: 100% by auto
// roc 2011-06 0061dcc0  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061dcc0
//
// 0061dcc0  8b442408             mov eax, dword ptr [esp + 8]
// 0061dcc4  8b542404             mov edx, dword ptr [esp + 4]
// 0061dcc8  50                   push eax
// 0061dcc9  51                   push ecx
// 0061dcca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061dcce  51                   push ecx
// 0061dccf  52                   push edx
// 0061dcd0  e80bf4ffff           call 0x61d0e0
// 0061dcd5  83c410               add esp, 0x10
// 0061dcd8  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
