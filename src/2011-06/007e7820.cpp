// roc 2011-06 007e7820  unit: RBX::AdvRotateTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e7820
//
// 007e7820  51                   push ecx
// 007e7821  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e7825  c6042400             mov byte ptr [esp], 0
// 007e7829  8b0424               mov eax, dword ptr [esp]
// 007e782c  50                   push eax
// 007e782d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007e7831  52                   push edx
// 007e7832  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e7836  51                   push ecx
// 007e7837  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007e783b  50                   push eax
// 007e783c  51                   push ecx
// 007e783d  52                   push edx
// 007e783e  e8cdf9ffff           call 0x7e7210
// 007e7843  83c41c               add esp, 0x1c
// 007e7846  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
