// from server: 100% by auto
// roc 2011-06 00938f50  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00938f50
//
// 00938f50  51                   push ecx
// 00938f51  8b542410             mov edx, dword ptr [esp + 0x10]
// 00938f55  c6042400             mov byte ptr [esp], 0
// 00938f59  8b0424               mov eax, dword ptr [esp]
// 00938f5c  50                   push eax
// 00938f5d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00938f61  52                   push edx
// 00938f62  8b542410             mov edx, dword ptr [esp + 0x10]
// 00938f66  51                   push ecx
// 00938f67  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00938f6b  50                   push eax
// 00938f6c  51                   push ecx
// 00938f6d  52                   push edx
// 00938f6e  e88df6ffff           call 0x938600
// 00938f73  83c41c               add esp, 0x1c
// 00938f76  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
