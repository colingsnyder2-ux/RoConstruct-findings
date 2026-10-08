// from server: 100% by auto
// roc 2012-06 004f95c0  unit: Ogre::UTVertexSurfaceTexTangent::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f95c0
//
// 004f95c0  51                   push ecx
// 004f95c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f95c5  c6042400             mov byte ptr [esp], 0
// 004f95c9  8b0424               mov eax, dword ptr [esp]
// 004f95cc  50                   push eax
// 004f95cd  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f95d1  52                   push edx
// 004f95d2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f95d6  51                   push ecx
// 004f95d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f95db  50                   push eax
// 004f95dc  51                   push ecx
// 004f95dd  52                   push edx
// 004f95de  e84dfdffff           call 0x4f9330
// 004f95e3  83c41c               add esp, 0x1c
// 004f95e6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
