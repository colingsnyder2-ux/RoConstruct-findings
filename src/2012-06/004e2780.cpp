// roc 2012-06 004e2780  unit: Ogre::RbxTextureCompositorSceneManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004e2780
//
// 004e2780  51                   push ecx
// 004e2781  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e2785  c6042400             mov byte ptr [esp], 0
// 004e2789  8b0424               mov eax, dword ptr [esp]
// 004e278c  50                   push eax
// 004e278d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e2791  52                   push edx
// 004e2792  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e2796  51                   push ecx
// 004e2797  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e279b  50                   push eax
// 004e279c  51                   push ecx
// 004e279d  52                   push edx
// 004e279e  e89de9ffff           call 0x4e1140
// 004e27a3  83c41c               add esp, 0x1c
// 004e27a6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
