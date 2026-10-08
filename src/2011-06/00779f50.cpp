// from server: 100% by auto
// roc 2011-06 00779f50  unit: seg_00770000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00779f50
//
// 00779f50  51                   push ecx
// 00779f51  8b542410             mov edx, dword ptr [esp + 0x10]
// 00779f55  c6042400             mov byte ptr [esp], 0
// 00779f59  8b0424               mov eax, dword ptr [esp]
// 00779f5c  50                   push eax
// 00779f5d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00779f61  52                   push edx
// 00779f62  8b542410             mov edx, dword ptr [esp + 0x10]
// 00779f66  51                   push ecx
// 00779f67  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00779f6b  50                   push eax
// 00779f6c  51                   push ecx
// 00779f6d  52                   push edx
// 00779f6e  e8ddfbffff           call 0x779b50
// 00779f73  83c41c               add esp, 0x1c
// 00779f76  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
