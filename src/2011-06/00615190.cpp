// roc 2011-06 00615190  unit: RBX::MergeBinder  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00615190
//
// 00615190  51                   push ecx
// 00615191  8b542410             mov edx, dword ptr [esp + 0x10]
// 00615195  c6042400             mov byte ptr [esp], 0
// 00615199  8b0424               mov eax, dword ptr [esp]
// 0061519c  50                   push eax
// 0061519d  8b442414             mov eax, dword ptr [esp + 0x14]
// 006151a1  52                   push edx
// 006151a2  8b542410             mov edx, dword ptr [esp + 0x10]
// 006151a6  51                   push ecx
// 006151a7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006151ab  50                   push eax
// 006151ac  51                   push ecx
// 006151ad  52                   push edx
// 006151ae  e88dfaffff           call 0x614c40
// 006151b3  83c41c               add esp, 0x1c
// 006151b6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
