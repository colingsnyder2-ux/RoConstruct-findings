// roc 2010-06 0066cda0  unit: RBX::Humanoid  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066cda0
//
// 0066cda0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066cda4  85c9                 test ecx, ecx
// 0066cda6  7409                 je 0x66cdb1
// 0066cda8  8b01                 mov eax, dword ptr [ecx]
// 0066cdaa  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0066cdad  6a01                 push 1
// 0066cdaf  ffd2                 call edx
// 0066cdb1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$checked_delete@$$CBVvalue_semantic@program_options@boost@@@boost@@YAXPBVvalue_semantic@program_options@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
