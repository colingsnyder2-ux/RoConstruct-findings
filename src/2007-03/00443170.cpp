// roc 2007-03 00443170  unit: seg_00440000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00443170
//
// 00443170  51                   push ecx
// 00443171  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00443175  8b542410             mov edx, dword ptr [esp + 0x10]
// 00443179  c6042400             mov byte ptr [esp], 0
// 0044317d  8b0424               mov eax, dword ptr [esp]
// 00443180  50                   push eax
// 00443181  8b442414             mov eax, dword ptr [esp + 0x14]
// 00443185  51                   push ecx
// 00443186  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044318a  52                   push edx
// 0044318b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0044318f  50                   push eax
// 00443190  51                   push ecx
// 00443191  52                   push edx
// 00443192  e879ffffff           call 0x443110
// 00443197  83c41c               add esp, 0x1c
// 0044319a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Unchecked_move_backward@PAV?$basic_option@D@program_options@boost@@PAV123@@stdext@@YAPAV?$basic_option@D@program_options@boost@@PAV123@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
