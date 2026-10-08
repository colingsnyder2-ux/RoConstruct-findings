// from server: 100% by auto
// roc 2009-06 006c02d0  unit: RBX::Lua::LuaArguments  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c02d0
//
// 006c02d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c02d4  85c9                 test ecx, ecx
// 006c02d6  7408                 je 0x6c02e0
// 006c02d8  8b01                 mov eax, dword ptr [ecx]
// 006c02da  8b10                 mov edx, dword ptr [eax]
// 006c02dc  6a01                 push 1
// 006c02de  ffd2                 call edx
// 006c02e0  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$checked_delete@Voption_description@program_options@boost@@@boost@@YAXPAVoption_description@program_options@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
