// roc 2012-06 004df260  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004df260
//
// 004df260  51                   push ecx
// 004df261  8b542410             mov edx, dword ptr [esp + 0x10]
// 004df265  c6042400             mov byte ptr [esp], 0
// 004df269  8b0424               mov eax, dword ptr [esp]
// 004df26c  50                   push eax
// 004df26d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004df271  52                   push edx
// 004df272  8b542410             mov edx, dword ptr [esp + 0x10]
// 004df276  51                   push ecx
// 004df277  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004df27b  50                   push eax
// 004df27c  51                   push ecx
// 004df27d  52                   push edx
// 004df27e  e81dfdffff           call 0x4defa0
// 004df283  83c41c               add esp, 0x1c
// 004df286  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
