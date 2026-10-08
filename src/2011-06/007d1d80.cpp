// from server: 100% by auto
// roc 2011-06 007d1d80  unit: RBX::ScoreHud  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d1d80
//
// 007d1d80  51                   push ecx
// 007d1d81  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d1d85  c6042400             mov byte ptr [esp], 0
// 007d1d89  8b0424               mov eax, dword ptr [esp]
// 007d1d8c  50                   push eax
// 007d1d8d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007d1d91  52                   push edx
// 007d1d92  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d1d96  51                   push ecx
// 007d1d97  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d1d9b  50                   push eax
// 007d1d9c  51                   push ecx
// 007d1d9d  52                   push edx
// 007d1d9e  e8fdf5ffff           call 0x7d13a0
// 007d1da3  83c41c               add esp, 0x1c
// 007d1da6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
