// from server: 100% by auto
// roc 2008-06 00427b70  unit: RobloxCrashReporter  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427b70
//
// 00427b70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00427b74  85c9                 test ecx, ecx
// 00427b76  7408                 je 0x427b80
// 00427b78  8b01                 mov eax, dword ptr [ecx]
// 00427b7a  8b10                 mov edx, dword ptr [eax]
// 00427b7c  6a01                 push 1
// 00427b7e  ffd2                 call edx
// 00427b80  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$checked_delete@Voption_description@program_options@boost@@@boost@@YAXPAVoption_description@program_options@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
