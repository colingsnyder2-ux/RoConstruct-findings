// from server: 100% by auto
// roc 2008-06 00443c40  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443c40
//
// 00443c40  8b442408             mov eax, dword ptr [esp + 8]
// 00443c44  8b542404             mov edx, dword ptr [esp + 4]
// 00443c48  50                   push eax
// 00443c49  83c108               add ecx, 8
// 00443c4c  51                   push ecx
// 00443c4d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00443c51  51                   push ecx
// 00443c52  52                   push edx
// 00443c53  e808feffff           call 0x443a60
// 00443c58  83c410               add esp, 0x10
// 00443c5b  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
