// roc 2007-03 00410b30  unit: seg_00410000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00410b30
//
// 00410b30  51                   push ecx
// 00410b31  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00410b35  8b542410             mov edx, dword ptr [esp + 0x10]
// 00410b39  c6042400             mov byte ptr [esp], 0
// 00410b3d  8b0424               mov eax, dword ptr [esp]
// 00410b40  50                   push eax
// 00410b41  8b442414             mov eax, dword ptr [esp + 0x14]
// 00410b45  51                   push ecx
// 00410b46  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00410b4a  52                   push edx
// 00410b4b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00410b4f  50                   push eax
// 00410b50  51                   push ecx
// 00410b51  52                   push edx
// 00410b52  e8d9fcffff           call 0x410830
// 00410b57  83c41c               add esp, 0x1c
// 00410b5a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Unchecked_move_backward@PAV?$basic_option@D@program_options@boost@@PAV123@@stdext@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
