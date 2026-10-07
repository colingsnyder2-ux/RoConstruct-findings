// roc 2011-06 00960b50  unit: Ogre::RbxSceneUpdater  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00960b50
//
// 00960b50  51                   push ecx
// 00960b51  8b542410             mov edx, dword ptr [esp + 0x10]
// 00960b55  c6042400             mov byte ptr [esp], 0
// 00960b59  8b0424               mov eax, dword ptr [esp]
// 00960b5c  50                   push eax
// 00960b5d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00960b61  52                   push edx
// 00960b62  8b542410             mov edx, dword ptr [esp + 0x10]
// 00960b66  51                   push ecx
// 00960b67  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00960b6b  50                   push eax
// 00960b6c  51                   push ecx
// 00960b6d  52                   push edx
// 00960b6e  e83dfdffff           call 0x9608b0
// 00960b73  83c41c               add esp, 0x1c
// 00960b76  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
