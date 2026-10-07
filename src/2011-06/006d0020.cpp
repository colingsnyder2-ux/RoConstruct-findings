// roc 2011-06 006d0020  unit: RBX::Mechanism  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d0020
//
// 006d0020  51                   push ecx
// 006d0021  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d0025  c6042400             mov byte ptr [esp], 0
// 006d0029  8b0424               mov eax, dword ptr [esp]
// 006d002c  50                   push eax
// 006d002d  8b442414             mov eax, dword ptr [esp + 0x14]
// 006d0031  52                   push edx
// 006d0032  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d0036  51                   push ecx
// 006d0037  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006d003b  50                   push eax
// 006d003c  51                   push ecx
// 006d003d  52                   push edx
// 006d003e  e87df5ffff           call 0x6cf5c0
// 006d0043  83c41c               add esp, 0x1c
// 006d0046  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
