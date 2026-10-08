// roc 2007-03 004992e0  unit: seg_00490000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004992e0
//
// 004992e0  51                   push ecx
// 004992e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004992e5  8b542410             mov edx, dword ptr [esp + 0x10]
// 004992e9  c6042400             mov byte ptr [esp], 0
// 004992ed  8b0424               mov eax, dword ptr [esp]
// 004992f0  50                   push eax
// 004992f1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004992f5  51                   push ecx
// 004992f6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004992fa  52                   push edx
// 004992fb  8b542414             mov edx, dword ptr [esp + 0x14]
// 004992ff  50                   push eax
// 00499300  51                   push ecx
// 00499301  52                   push edx
// 00499302  e8c9fdffff           call 0x4990d0
// 00499307  83c41c               add esp, 0x1c
// 0049930a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Unchecked_move_backward@PAV?$basic_option@D@program_options@boost@@PAV123@@stdext@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
