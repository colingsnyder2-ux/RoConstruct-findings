// from server: 100% by auto
// roc 2012-06 004fa4d0  unit: Ogre::UTVertexTangent3DTex::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004fa4d0
//
// 004fa4d0  51                   push ecx
// 004fa4d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fa4d5  c6042400             mov byte ptr [esp], 0
// 004fa4d9  8b0424               mov eax, dword ptr [esp]
// 004fa4dc  50                   push eax
// 004fa4dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fa4e1  52                   push edx
// 004fa4e2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fa4e6  51                   push ecx
// 004fa4e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fa4eb  50                   push eax
// 004fa4ec  51                   push ecx
// 004fa4ed  52                   push edx
// 004fa4ee  e85dfdffff           call 0x4fa250
// 004fa4f3  83c41c               add esp, 0x1c
// 004fa4f6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
