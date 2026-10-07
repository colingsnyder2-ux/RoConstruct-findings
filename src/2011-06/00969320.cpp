// roc 2011-06 00969320  unit: Ogre::RbxSpatialHashedSceneNode::?3??_findVisibleObjects::NodeVisiter  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00969320
//
// 00969320  51                   push ecx
// 00969321  8b542410             mov edx, dword ptr [esp + 0x10]
// 00969325  c6042400             mov byte ptr [esp], 0
// 00969329  8b0424               mov eax, dword ptr [esp]
// 0096932c  50                   push eax
// 0096932d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00969331  52                   push edx
// 00969332  8b542410             mov edx, dword ptr [esp + 0x10]
// 00969336  51                   push ecx
// 00969337  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0096933b  50                   push eax
// 0096933c  51                   push ecx
// 0096933d  52                   push edx
// 0096933e  e8cdfeffff           call 0x969210
// 00969343  83c41c               add esp, 0x1c
// 00969346  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
