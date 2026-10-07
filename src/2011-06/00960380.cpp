// roc 2011-06 00960380  unit: Ogre::RbxSceneUpdater  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00960380
//
// 00960380  51                   push ecx
// 00960381  8b542410             mov edx, dword ptr [esp + 0x10]
// 00960385  c6042400             mov byte ptr [esp], 0
// 00960389  8b0424               mov eax, dword ptr [esp]
// 0096038c  50                   push eax
// 0096038d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00960391  52                   push edx
// 00960392  8b542410             mov edx, dword ptr [esp + 0x10]
// 00960396  51                   push ecx
// 00960397  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0096039b  50                   push eax
// 0096039c  51                   push ecx
// 0096039d  52                   push edx
// 0096039e  e8cdfdffff           call 0x960170
// 009603a3  83c41c               add esp, 0x1c
// 009603a6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
