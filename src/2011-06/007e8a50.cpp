// roc 2011-06 007e8a50  unit: RBX::AdvRotateTool  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e8a50
//
// 007e8a50  51                   push ecx
// 007e8a51  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e8a55  c6042400             mov byte ptr [esp], 0
// 007e8a59  8b0424               mov eax, dword ptr [esp]
// 007e8a5c  50                   push eax
// 007e8a5d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007e8a61  52                   push edx
// 007e8a62  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e8a66  51                   push ecx
// 007e8a67  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007e8a6b  50                   push eax
// 007e8a6c  51                   push ecx
// 007e8a6d  52                   push edx
// 007e8a6e  e86df7ffff           call 0x7e81e0
// 007e8a73  83c41c               add esp, 0x1c
// 007e8a76  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
