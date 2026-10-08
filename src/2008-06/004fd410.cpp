// from server: 100% by auto
// roc 2008-06 004fd410  unit: RBX::ViewNew::SphereBuilder  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fd410
//
// 004fd410  8b442404             mov eax, dword ptr [esp + 4]
// 004fd414  8b10                 mov edx, dword ptr [eax]
// 004fd416  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fd41a  3b11                 cmp edx, dword ptr [ecx]
// 004fd41c  7302                 jae 0x4fd420
// 004fd41e  8bc1                 mov eax, ecx
// 004fd420  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$max@I@std@@YAABIABI0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
