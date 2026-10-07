// roc 2012-06 006050b0  unit: seg_00600000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006050b0
//
// 006050b0  51                   push ecx
// 006050b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 006050b5  c6042400             mov byte ptr [esp], 0
// 006050b9  8b0424               mov eax, dword ptr [esp]
// 006050bc  50                   push eax
// 006050bd  8b442414             mov eax, dword ptr [esp + 0x14]
// 006050c1  52                   push edx
// 006050c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 006050c6  51                   push ecx
// 006050c7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006050cb  50                   push eax
// 006050cc  51                   push ecx
// 006050cd  52                   push edx
// 006050ce  e89d2eefff           call 0x4f7f70
// 006050d3  83c41c               add esp, 0x1c
// 006050d6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
