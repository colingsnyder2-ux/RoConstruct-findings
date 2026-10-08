// from server: 100% by auto
// roc 2012-06 008652e0  unit: RBX::BaseThreadPool::PoolData  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008652e0
//
// 008652e0  51                   push ecx
// 008652e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 008652e5  c6042400             mov byte ptr [esp], 0
// 008652e9  8b0424               mov eax, dword ptr [esp]
// 008652ec  50                   push eax
// 008652ed  8b442414             mov eax, dword ptr [esp + 0x14]
// 008652f1  52                   push edx
// 008652f2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008652f6  51                   push ecx
// 008652f7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008652fb  50                   push eax
// 008652fc  51                   push ecx
// 008652fd  52                   push edx
// 008652fe  e8adf4ffff           call 0x8647b0
// 00865303  83c41c               add esp, 0x1c
// 00865306  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
