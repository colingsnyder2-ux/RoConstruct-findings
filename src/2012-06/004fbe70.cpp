// from server: 100% by auto
// roc 2012-06 004fbe70  unit: Ogre::UTVertexPositionNormalStudsTex::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004fbe70
//
// 004fbe70  51                   push ecx
// 004fbe71  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fbe75  c6042400             mov byte ptr [esp], 0
// 004fbe79  8b0424               mov eax, dword ptr [esp]
// 004fbe7c  50                   push eax
// 004fbe7d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fbe81  52                   push edx
// 004fbe82  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fbe86  51                   push ecx
// 004fbe87  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fbe8b  50                   push eax
// 004fbe8c  51                   push ecx
// 004fbe8d  52                   push edx
// 004fbe8e  e82dfeffff           call 0x4fbcc0
// 004fbe93  83c41c               add esp, 0x1c
// 004fbe96  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
