// roc 2011-06 0097ed40  unit: RBX::BeveledBlockBuilder  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0097ed40
//
// 0097ed40  51                   push ecx
// 0097ed41  8b542410             mov edx, dword ptr [esp + 0x10]
// 0097ed45  c6042400             mov byte ptr [esp], 0
// 0097ed49  8b0424               mov eax, dword ptr [esp]
// 0097ed4c  50                   push eax
// 0097ed4d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0097ed51  52                   push edx
// 0097ed52  8b542410             mov edx, dword ptr [esp + 0x10]
// 0097ed56  51                   push ecx
// 0097ed57  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0097ed5b  50                   push eax
// 0097ed5c  51                   push ecx
// 0097ed5d  52                   push edx
// 0097ed5e  e8bdfeffff           call 0x97ec20
// 0097ed63  83c41c               add esp, 0x1c
// 0097ed66  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
