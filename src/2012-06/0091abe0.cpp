// from server: 100% by auto
// roc 2012-06 0091abe0  unit: RBX::Assembly  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091abe0
//
// 0091abe0  51                   push ecx
// 0091abe1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0091abe5  c6042400             mov byte ptr [esp], 0
// 0091abe9  8b0424               mov eax, dword ptr [esp]
// 0091abec  50                   push eax
// 0091abed  8b442414             mov eax, dword ptr [esp + 0x14]
// 0091abf1  52                   push edx
// 0091abf2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0091abf6  51                   push ecx
// 0091abf7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0091abfb  50                   push eax
// 0091abfc  51                   push ecx
// 0091abfd  52                   push edx
// 0091abfe  e8ede1c8ff           call 0x5a8df0
// 0091ac03  83c41c               add esp, 0x1c
// 0091ac06  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
