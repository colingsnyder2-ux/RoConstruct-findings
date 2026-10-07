// roc 2012-06 0091d6b0  unit: seg_00910000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091d6b0
//
// 0091d6b0  51                   push ecx
// 0091d6b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0091d6b5  c6042400             mov byte ptr [esp], 0
// 0091d6b9  8b0424               mov eax, dword ptr [esp]
// 0091d6bc  50                   push eax
// 0091d6bd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0091d6c1  52                   push edx
// 0091d6c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0091d6c6  51                   push ecx
// 0091d6c7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0091d6cb  50                   push eax
// 0091d6cc  51                   push ecx
// 0091d6cd  52                   push edx
// 0091d6ce  e87df9ffff           call 0x91d050
// 0091d6d3  83c41c               add esp, 0x1c
// 0091d6d6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
