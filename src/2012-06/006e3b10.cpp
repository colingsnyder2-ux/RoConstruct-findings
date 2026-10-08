// from server: 100% by auto
// roc 2012-06 006e3b10  unit: RBX::DataModel::GenericJob  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006e3b10
//
// 006e3b10  8b442408             mov eax, dword ptr [esp + 8]
// 006e3b14  8b542404             mov edx, dword ptr [esp + 4]
// 006e3b18  50                   push eax
// 006e3b19  51                   push ecx
// 006e3b1a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e3b1e  51                   push ecx
// 006e3b1f  52                   push edx
// 006e3b20  e8cbd2ffff           call 0x6e0df0
// 006e3b25  83c410               add esp, 0x10
// 006e3b28  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
