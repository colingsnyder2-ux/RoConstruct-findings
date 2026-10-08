// from server: 100% by auto
// roc 2011-06 00972360  unit: CPropGrid::VUpdateItemsJob::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00972360
//
// 00972360  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00972363  85c9                 test ecx, ecx
// 00972365  7408                 je 0x97236f
// 00972367  8b01                 mov eax, dword ptr [ecx]
// 00972369  8b10                 mov edx, dword ptr [eax]
// 0097236b  6a01                 push 1
// 0097236d  ffd2                 call edx
// 0097236f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?dispose@?$sp_counted_impl_p@Voption_description@program_options@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
