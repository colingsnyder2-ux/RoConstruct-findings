// from server: 100% by auto
// roc 2009-06 0043e4f0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043e4f0
//
// 0043e4f0  8b442408             mov eax, dword ptr [esp + 8]
// 0043e4f4  8b542404             mov edx, dword ptr [esp + 4]
// 0043e4f8  50                   push eax
// 0043e4f9  83c108               add ecx, 8
// 0043e4fc  51                   push ecx
// 0043e4fd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043e501  51                   push ecx
// 0043e502  52                   push edx
// 0043e503  e8d8fdffff           call 0x43e2e0
// 0043e508  83c410               add esp, 0x10
// 0043e50b  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
