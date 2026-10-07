// roc 2012-06 005a9fd0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a9fd0
//
// 005a9fd0  51                   push ecx
// 005a9fd1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a9fd5  c6042400             mov byte ptr [esp], 0
// 005a9fd9  8b0424               mov eax, dword ptr [esp]
// 005a9fdc  50                   push eax
// 005a9fdd  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a9fe1  52                   push edx
// 005a9fe2  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a9fe6  51                   push ecx
// 005a9fe7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a9feb  50                   push eax
// 005a9fec  51                   push ecx
// 005a9fed  52                   push edx
// 005a9fee  e82dfaffff           call 0x5a9a20
// 005a9ff3  83c41c               add esp, 0x1c
// 005a9ff6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
