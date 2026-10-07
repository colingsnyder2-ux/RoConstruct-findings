// roc 2011-06 0042e680  unit: MainLogManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042e680
//
// 0042e680  51                   push ecx
// 0042e681  8b542410             mov edx, dword ptr [esp + 0x10]
// 0042e685  c6042400             mov byte ptr [esp], 0
// 0042e689  8b0424               mov eax, dword ptr [esp]
// 0042e68c  50                   push eax
// 0042e68d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042e691  52                   push edx
// 0042e692  8b542410             mov edx, dword ptr [esp + 0x10]
// 0042e696  51                   push ecx
// 0042e697  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042e69b  50                   push eax
// 0042e69c  51                   push ecx
// 0042e69d  52                   push edx
// 0042e69e  e85df5ffff           call 0x42dc00
// 0042e6a3  83c41c               add esp, 0x1c
// 0042e6a6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
