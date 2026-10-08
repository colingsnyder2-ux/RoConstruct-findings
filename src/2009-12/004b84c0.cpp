// roc 2009-12 004b84c0  unit: Ogre::RbxArchiveFactory  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004b84c0
//
// 004b84c0  8b442408             mov eax, dword ptr [esp + 8]
// 004b84c4  8b542404             mov edx, dword ptr [esp + 4]
// 004b84c8  50                   push eax
// 004b84c9  83c108               add ecx, 8
// 004b84cc  51                   push ecx
// 004b84cd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b84d1  51                   push ecx
// 004b84d2  52                   push edx
// 004b84d3  e8d8feffff           call 0x4b83b0
// 004b84d8  83c410               add esp, 0x10
// 004b84db  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
