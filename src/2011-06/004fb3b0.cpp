// roc 2011-06 004fb3b0  unit: RBX::Network::Replicator  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004fb3b0
//
// 004fb3b0  51                   push ecx
// 004fb3b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fb3b5  c6042400             mov byte ptr [esp], 0
// 004fb3b9  8b0424               mov eax, dword ptr [esp]
// 004fb3bc  50                   push eax
// 004fb3bd  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fb3c1  52                   push edx
// 004fb3c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fb3c6  51                   push ecx
// 004fb3c7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fb3cb  50                   push eax
// 004fb3cc  51                   push ecx
// 004fb3cd  52                   push edx
// 004fb3ce  e81dc6ffff           call 0x4f79f0
// 004fb3d3  83c41c               add esp, 0x1c
// 004fb3d6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
