// roc 2012-06 004f8cc0  unit: Ogre::UTVertexSurfaceTex::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f8cc0
//
// 004f8cc0  51                   push ecx
// 004f8cc1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f8cc5  c6042400             mov byte ptr [esp], 0
// 004f8cc9  8b0424               mov eax, dword ptr [esp]
// 004f8ccc  50                   push eax
// 004f8ccd  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f8cd1  52                   push edx
// 004f8cd2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f8cd6  51                   push ecx
// 004f8cd7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f8cdb  50                   push eax
// 004f8cdc  51                   push ecx
// 004f8cdd  52                   push edx
// 004f8cde  e89dfdffff           call 0x4f8a80
// 004f8ce3  83c41c               add esp, 0x1c
// 004f8ce6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
