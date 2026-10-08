// roc 2009-12 007e31a0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e31a0
//
// 007e31a0  8b442408             mov eax, dword ptr [esp + 8]
// 007e31a4  8b542404             mov edx, dword ptr [esp + 4]
// 007e31a8  50                   push eax
// 007e31a9  83c108               add ecx, 8
// 007e31ac  51                   push ecx
// 007e31ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007e31b1  51                   push ecx
// 007e31b2  52                   push edx
// 007e31b3  e828fdffff           call 0x7e2ee0
// 007e31b8  83c410               add esp, 0x10
// 007e31bb  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
