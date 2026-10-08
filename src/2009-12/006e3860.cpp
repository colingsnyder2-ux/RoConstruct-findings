// roc 2009-12 006e3860  unit: RBX::Humanoid  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e3860
//
// 006e3860  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e3864  85c9                 test ecx, ecx
// 006e3866  7409                 je 0x6e3871
// 006e3868  8b01                 mov eax, dword ptr [ecx]
// 006e386a  8b501c               mov edx, dword ptr [eax + 0x1c]
// 006e386d  6a01                 push 1
// 006e386f  ffd2                 call edx
// 006e3871  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$checked_delete@$$CBVvalue_semantic@program_options@boost@@@boost@@YAXPBVvalue_semantic@program_options@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
