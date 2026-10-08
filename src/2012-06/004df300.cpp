// from server: 100% by auto
// roc 2012-06 004df300  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004df300
//
// 004df300  51                   push ecx
// 004df301  8b542410             mov edx, dword ptr [esp + 0x10]
// 004df305  c6042400             mov byte ptr [esp], 0
// 004df309  8b0424               mov eax, dword ptr [esp]
// 004df30c  50                   push eax
// 004df30d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004df311  52                   push edx
// 004df312  8b542410             mov edx, dword ptr [esp + 0x10]
// 004df316  51                   push ecx
// 004df317  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004df31b  50                   push eax
// 004df31c  51                   push ecx
// 004df31d  52                   push edx
// 004df31e  e85df6ffff           call 0x4de980
// 004df323  83c41c               add esp, 0x1c
// 004df326  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
