// from server: 100% by auto
// roc 2012-06 004f8370  unit: Ogre::UTVertexBasic::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004f8370
//
// 004f8370  51                   push ecx
// 004f8371  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f8375  c6042400             mov byte ptr [esp], 0
// 004f8379  8b0424               mov eax, dword ptr [esp]
// 004f837c  50                   push eax
// 004f837d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f8381  52                   push edx
// 004f8382  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f8386  51                   push ecx
// 004f8387  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f838b  50                   push eax
// 004f838c  51                   push ecx
// 004f838d  52                   push edx
// 004f838e  e80dfeffff           call 0x4f81a0
// 004f8393  83c41c               add esp, 0x1c
// 004f8396  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
