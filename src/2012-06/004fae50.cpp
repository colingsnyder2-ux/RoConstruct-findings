// from server: 100% by auto
// roc 2012-06 004fae50  unit: Ogre::UTVertexTangent3DTexColorIndexSurfaceTex::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004fae50
//
// 004fae50  51                   push ecx
// 004fae51  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fae55  c6042400             mov byte ptr [esp], 0
// 004fae59  8b0424               mov eax, dword ptr [esp]
// 004fae5c  50                   push eax
// 004fae5d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fae61  52                   push edx
// 004fae62  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fae66  51                   push ecx
// 004fae67  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fae6b  50                   push eax
// 004fae6c  51                   push ecx
// 004fae6d  52                   push edx
// 004fae6e  e8edfcffff           call 0x4fab60
// 004fae73  83c41c               add esp, 0x1c
// 004fae76  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
