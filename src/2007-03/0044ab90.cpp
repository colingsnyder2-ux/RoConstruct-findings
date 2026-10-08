// roc 2007-03 0044ab90  unit: seg_00440000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044ab90
//
// 0044ab90  51                   push ecx
// 0044ab91  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044ab95  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044ab99  c6042400             mov byte ptr [esp], 0
// 0044ab9d  8b0424               mov eax, dword ptr [esp]
// 0044aba0  50                   push eax
// 0044aba1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044aba5  51                   push ecx
// 0044aba6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044abaa  52                   push edx
// 0044abab  8b542414             mov edx, dword ptr [esp + 0x14]
// 0044abaf  50                   push eax
// 0044abb0  51                   push ecx
// 0044abb1  52                   push edx
// 0044abb2  e8f9fdffff           call 0x44a9b0
// 0044abb7  83c41c               add esp, 0x1c
// 0044abba  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Unchecked_move_backward@PAV?$basic_option@D@program_options@boost@@PAV123@@stdext@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
