// roc 2009-12 007e9f90  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e9f90
//
// 007e9f90  8b442408             mov eax, dword ptr [esp + 8]
// 007e9f94  8b542404             mov edx, dword ptr [esp + 4]
// 007e9f98  50                   push eax
// 007e9f99  83c108               add ecx, 8
// 007e9f9c  51                   push ecx
// 007e9f9d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e9fa1  51                   push ecx
// 007e9fa2  52                   push edx
// 007e9fa3  e8f896cdff           call 0x4c36a0
// 007e9fa8  83c410               add esp, 0x10
// 007e9fab  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
