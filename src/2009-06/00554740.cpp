// from server: 100% by auto
// roc 2009-06 00554740  unit: RBX::PBBBuilder  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00554740
//
// 00554740  8b442404             mov eax, dword ptr [esp + 4]
// 00554744  8b10                 mov edx, dword ptr [eax]
// 00554746  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055474a  3b11                 cmp edx, dword ptr [ecx]
// 0055474c  7302                 jae 0x554750
// 0055474e  8bc1                 mov eax, ecx
// 00554750  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$max@I@std@@YAABIABI0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
