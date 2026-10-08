// from server: 100% by auto
// roc 2012-06 00478420  unit: CRobloxControlColorSelector  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00478420
//
// 00478420  51                   push ecx
// 00478421  8b542410             mov edx, dword ptr [esp + 0x10]
// 00478425  c6042400             mov byte ptr [esp], 0
// 00478429  8b0424               mov eax, dword ptr [esp]
// 0047842c  50                   push eax
// 0047842d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00478431  52                   push edx
// 00478432  8b542410             mov edx, dword ptr [esp + 0x10]
// 00478436  51                   push ecx
// 00478437  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047843b  50                   push eax
// 0047843c  51                   push ecx
// 0047843d  52                   push edx
// 0047843e  e85dfeffff           call 0x4782a0
// 00478443  83c41c               add esp, 0x1c
// 00478446  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
