// from server: 100% by auto
// roc 2012-06 004f9c00  unit: Ogre::UTVertex3DTex::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f9c00
//
// 004f9c00  51                   push ecx
// 004f9c01  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f9c05  c6042400             mov byte ptr [esp], 0
// 004f9c09  8b0424               mov eax, dword ptr [esp]
// 004f9c0c  50                   push eax
// 004f9c0d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f9c11  52                   push edx
// 004f9c12  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f9c16  51                   push ecx
// 004f9c17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f9c1b  50                   push eax
// 004f9c1c  51                   push ecx
// 004f9c1d  52                   push edx
// 004f9c1e  e8adfdffff           call 0x4f99d0
// 004f9c23  83c41c               add esp, 0x1c
// 004f9c26  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
