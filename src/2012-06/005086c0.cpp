// roc 2012-06 005086c0  unit: Ogre::RbxSceneUpdater  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005086c0
//
// 005086c0  51                   push ecx
// 005086c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005086c5  c6042400             mov byte ptr [esp], 0
// 005086c9  8b0424               mov eax, dword ptr [esp]
// 005086cc  50                   push eax
// 005086cd  8b442414             mov eax, dword ptr [esp + 0x14]
// 005086d1  52                   push edx
// 005086d2  8b542410             mov edx, dword ptr [esp + 0x10]
// 005086d6  51                   push ecx
// 005086d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005086db  50                   push eax
// 005086dc  51                   push ecx
// 005086dd  52                   push edx
// 005086de  e84dfbffff           call 0x508230
// 005086e3  83c41c               add esp, 0x1c
// 005086e6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
