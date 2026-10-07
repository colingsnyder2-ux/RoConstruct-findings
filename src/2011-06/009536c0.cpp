// roc 2011-06 009536c0  unit: Ogre::UTVertexSurfaceTex::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009536c0
//
// 009536c0  51                   push ecx
// 009536c1  8b542410             mov edx, dword ptr [esp + 0x10]
// 009536c5  c6042400             mov byte ptr [esp], 0
// 009536c9  8b0424               mov eax, dword ptr [esp]
// 009536cc  50                   push eax
// 009536cd  8b442414             mov eax, dword ptr [esp + 0x14]
// 009536d1  52                   push edx
// 009536d2  8b542410             mov edx, dword ptr [esp + 0x10]
// 009536d6  51                   push ecx
// 009536d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009536db  50                   push eax
// 009536dc  51                   push ecx
// 009536dd  52                   push edx
// 009536de  e89dfdffff           call 0x953480
// 009536e3  83c41c               add esp, 0x1c
// 009536e6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
