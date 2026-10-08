// from server: 100% by auto
// roc 2012-06 005aa3a0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005aa3a0
//
// 005aa3a0  51                   push ecx
// 005aa3a1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005aa3a5  c6042400             mov byte ptr [esp], 0
// 005aa3a9  8b0424               mov eax, dword ptr [esp]
// 005aa3ac  50                   push eax
// 005aa3ad  8b442414             mov eax, dword ptr [esp + 0x14]
// 005aa3b1  52                   push edx
// 005aa3b2  8b542410             mov edx, dword ptr [esp + 0x10]
// 005aa3b6  51                   push ecx
// 005aa3b7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005aa3bb  50                   push eax
// 005aa3bc  51                   push ecx
// 005aa3bd  52                   push edx
// 005aa3be  e8adf7ffff           call 0x5a9b70
// 005aa3c3  83c41c               add esp, 0x1c
// 005aa3c6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
