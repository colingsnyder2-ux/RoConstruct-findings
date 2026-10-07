// roc 2012-06 004cb5a0  unit: ResourceGroupHelper::UpdateMaterialRenderableVisitor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004cb5a0
//
// 004cb5a0  8b442408             mov eax, dword ptr [esp + 8]
// 004cb5a4  8b542404             mov edx, dword ptr [esp + 4]
// 004cb5a8  50                   push eax
// 004cb5a9  51                   push ecx
// 004cb5aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cb5ae  51                   push ecx
// 004cb5af  52                   push edx
// 004cb5b0  e81bf9ffff           call 0x4caed0
// 004cb5b5  83c410               add esp, 0x10
// 004cb5b8  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
