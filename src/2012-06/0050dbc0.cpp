// from server: 100% by auto
// roc 2012-06 0050dbc0  unit: Ogre::RbxSpatialHashedSceneNode::?3??_findVisibleObjects::NodeVisiter  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050dbc0
//
// 0050dbc0  51                   push ecx
// 0050dbc1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050dbc5  c6042400             mov byte ptr [esp], 0
// 0050dbc9  8b0424               mov eax, dword ptr [esp]
// 0050dbcc  50                   push eax
// 0050dbcd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050dbd1  52                   push edx
// 0050dbd2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0050dbd6  51                   push ecx
// 0050dbd7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0050dbdb  50                   push eax
// 0050dbdc  51                   push ecx
// 0050dbdd  52                   push edx
// 0050dbde  e8cdf4ffff           call 0x50d0b0
// 0050dbe3  83c41c               add esp, 0x1c
// 0050dbe6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
