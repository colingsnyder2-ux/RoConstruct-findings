// roc 2012-06 00432f00  unit: ThreadLogManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00432f00
//
// 00432f00  51                   push ecx
// 00432f01  8b542410             mov edx, dword ptr [esp + 0x10]
// 00432f05  c6042400             mov byte ptr [esp], 0
// 00432f09  8b0424               mov eax, dword ptr [esp]
// 00432f0c  50                   push eax
// 00432f0d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00432f11  52                   push edx
// 00432f12  8b542410             mov edx, dword ptr [esp + 0x10]
// 00432f16  51                   push ecx
// 00432f17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00432f1b  50                   push eax
// 00432f1c  51                   push ecx
// 00432f1d  52                   push edx
// 00432f1e  e8ddf5ffff           call 0x432500
// 00432f23  83c41c               add esp, 0x1c
// 00432f26  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
