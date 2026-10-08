// from server: 100% by auto
// roc 2011-06 00952df0  unit: Ogre::UTVertexBasic::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00952df0
//
// 00952df0  51                   push ecx
// 00952df1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00952df5  c6042400             mov byte ptr [esp], 0
// 00952df9  8b0424               mov eax, dword ptr [esp]
// 00952dfc  50                   push eax
// 00952dfd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00952e01  52                   push edx
// 00952e02  8b542410             mov edx, dword ptr [esp + 0x10]
// 00952e06  51                   push ecx
// 00952e07  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00952e0b  50                   push eax
// 00952e0c  51                   push ecx
// 00952e0d  52                   push edx
// 00952e0e  e8ddfdffff           call 0x952bf0
// 00952e13  83c41c               add esp, 0x1c
// 00952e16  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
