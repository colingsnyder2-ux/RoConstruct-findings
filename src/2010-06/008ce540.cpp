// from server: 100% by auto
// roc 2010-06 008ce540  unit: Ogre::RbxMeshLoader  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ce540
//
// 008ce540  8b442408             mov eax, dword ptr [esp + 8]
// 008ce544  8b542404             mov edx, dword ptr [esp + 4]
// 008ce548  50                   push eax
// 008ce549  83c108               add ecx, 8
// 008ce54c  51                   push ecx
// 008ce54d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008ce551  51                   push ecx
// 008ce552  52                   push edx
// 008ce553  e8f8f2ffff           call 0x8cd850
// 008ce558  83c410               add esp, 0x10
// 008ce55b  c20800               ret 8
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Destroy@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
