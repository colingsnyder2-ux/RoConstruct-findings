// from server: 100% by auto
// roc 2012-06 0056e550  unit: RBX::Network::IdSerializer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056e550
//
// 0056e550  51                   push ecx
// 0056e551  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056e555  c6042400             mov byte ptr [esp], 0
// 0056e559  8b0424               mov eax, dword ptr [esp]
// 0056e55c  50                   push eax
// 0056e55d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056e561  52                   push edx
// 0056e562  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056e566  51                   push ecx
// 0056e567  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056e56b  50                   push eax
// 0056e56c  51                   push ecx
// 0056e56d  52                   push edx
// 0056e56e  e8ddf8ffff           call 0x56de50
// 0056e573  83c41c               add esp, 0x1c
// 0056e576  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
