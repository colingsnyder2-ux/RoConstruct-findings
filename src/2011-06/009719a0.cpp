// from server: 100% by auto
// roc 2011-06 009719a0  unit: RBX::SceneUpdater  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009719a0
//
// 009719a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009719a4  85c9                 test ecx, ecx
// 009719a6  7408                 je 0x9719b0
// 009719a8  8b01                 mov eax, dword ptr [ecx]
// 009719aa  8b10                 mov edx, dword ptr [eax]
// 009719ac  6a01                 push 1
// 009719ae  ffd2                 call edx
// 009719b0  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$checked_delete@Voption_description@program_options@boost@@@boost@@YAXPAVoption_description@program_options@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
