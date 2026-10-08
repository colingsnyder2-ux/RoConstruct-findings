// from server: 100% by auto
// roc 2011-06 00955830  unit: Ogre::UTVertexTangent3DTexColorIndexSurfaceTex::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00955830
//
// 00955830  51                   push ecx
// 00955831  8b542410             mov edx, dword ptr [esp + 0x10]
// 00955835  c6042400             mov byte ptr [esp], 0
// 00955839  8b0424               mov eax, dword ptr [esp]
// 0095583c  50                   push eax
// 0095583d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00955841  52                   push edx
// 00955842  8b542410             mov edx, dword ptr [esp + 0x10]
// 00955846  51                   push ecx
// 00955847  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0095584b  50                   push eax
// 0095584c  51                   push ecx
// 0095584d  52                   push edx
// 0095584e  e8edfcffff           call 0x955540
// 00955853  83c41c               add esp, 0x1c
// 00955856  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
