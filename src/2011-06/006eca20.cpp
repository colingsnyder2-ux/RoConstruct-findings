// from server: 100% by auto
// roc 2011-06 006eca20  unit: RBX::BaseThreadPool::PoolData  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eca20
//
// 006eca20  51                   push ecx
// 006eca21  8b542410             mov edx, dword ptr [esp + 0x10]
// 006eca25  c6042400             mov byte ptr [esp], 0
// 006eca29  8b0424               mov eax, dword ptr [esp]
// 006eca2c  50                   push eax
// 006eca2d  8b442414             mov eax, dword ptr [esp + 0x14]
// 006eca31  52                   push edx
// 006eca32  8b542410             mov edx, dword ptr [esp + 0x10]
// 006eca36  51                   push ecx
// 006eca37  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006eca3b  50                   push eax
// 006eca3c  51                   push ecx
// 006eca3d  52                   push edx
// 006eca3e  e85df6ffff           call 0x6ec0a0
// 006eca43  83c41c               add esp, 0x1c
// 006eca46  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
