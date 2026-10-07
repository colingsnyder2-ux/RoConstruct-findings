// roc 2010-06 0062b460  unit: CPropGrid::UpdateItemsJob  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062b460
//
// 0062b460  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b464  85c9                 test ecx, ecx
// 0062b466  7408                 je 0x62b470
// 0062b468  8b01                 mov eax, dword ptr [ecx]
// 0062b46a  8b10                 mov edx, dword ptr [eax]
// 0062b46c  6a01                 push 1
// 0062b46e  ffd2                 call edx
// 0062b470  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$checked_delete@Voption_description@program_options@boost@@@boost@@YAXPAVoption_description@program_options@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
