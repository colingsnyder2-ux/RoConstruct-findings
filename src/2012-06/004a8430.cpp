// from server: 100% by auto
// roc 2012-06 004a8430  unit: DxUserInputHardwareMouse  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a8430
//
// 004a8430  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a8434  85c9                 test ecx, ecx
// 004a8436  7408                 je 0x4a8440
// 004a8438  8b01                 mov eax, dword ptr [ecx]
// 004a843a  8b10                 mov edx, dword ptr [eax]
// 004a843c  6a01                 push 1
// 004a843e  ffd2                 call edx
// 004a8440  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$checked_delete@Voption_description@program_options@boost@@@boost@@YAXPAVoption_description@program_options@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
