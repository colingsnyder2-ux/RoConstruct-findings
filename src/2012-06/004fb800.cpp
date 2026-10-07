// roc 2012-06 004fb800  unit: Ogre::UTVertexTangent3DTexSurfaceTex::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004fb800
//
// 004fb800  51                   push ecx
// 004fb801  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fb805  c6042400             mov byte ptr [esp], 0
// 004fb809  8b0424               mov eax, dword ptr [esp]
// 004fb80c  50                   push eax
// 004fb80d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fb811  52                   push edx
// 004fb812  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fb816  51                   push ecx
// 004fb817  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fb81b  50                   push eax
// 004fb81c  51                   push ecx
// 004fb81d  52                   push edx
// 004fb81e  e8edfcffff           call 0x4fb510
// 004fb823  83c41c               add esp, 0x1c
// 004fb826  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
