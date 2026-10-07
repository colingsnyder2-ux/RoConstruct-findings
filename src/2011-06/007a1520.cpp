// roc 2011-06 007a1520  unit: RBX::Network::VPersistentDataStore::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a1520
//
// 007a1520  51                   push ecx
// 007a1521  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a1525  c6042400             mov byte ptr [esp], 0
// 007a1529  8b0424               mov eax, dword ptr [esp]
// 007a152c  50                   push eax
// 007a152d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a1531  52                   push edx
// 007a1532  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a1536  51                   push ecx
// 007a1537  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a153b  50                   push eax
// 007a153c  51                   push ecx
// 007a153d  52                   push edx
// 007a153e  e87df9ffff           call 0x7a0ec0
// 007a1543  83c41c               add esp, 0x1c
// 007a1546  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
