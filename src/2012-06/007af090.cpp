// roc 2012-06 007af090  unit: CPropGrid::VUpdateItemsJob::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007af090
//
// 007af090  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 007af093  85c9                 test ecx, ecx
// 007af095  7408                 je 0x7af09f
// 007af097  8b01                 mov eax, dword ptr [ecx]
// 007af099  8b10                 mov edx, dword ptr [eax]
// 007af09b  6a01                 push 1
// 007af09d  ffd2                 call edx
// 007af09f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?dispose@?$sp_counted_impl_p@Voption_description@program_options@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
