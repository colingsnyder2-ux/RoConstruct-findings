// from server: 100% by auto
// roc 2011-06 00779f80  unit: seg_00770000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00779f80
//
// 00779f80  51                   push ecx
// 00779f81  8b542410             mov edx, dword ptr [esp + 0x10]
// 00779f85  c6042400             mov byte ptr [esp], 0
// 00779f89  8b0424               mov eax, dword ptr [esp]
// 00779f8c  50                   push eax
// 00779f8d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00779f91  52                   push edx
// 00779f92  8b542410             mov edx, dword ptr [esp + 0x10]
// 00779f96  51                   push ecx
// 00779f97  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00779f9b  50                   push eax
// 00779f9c  51                   push ecx
// 00779f9d  52                   push edx
// 00779f9e  e81dfcffff           call 0x779bc0
// 00779fa3  83c41c               add esp, 0x1c
// 00779fa6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
