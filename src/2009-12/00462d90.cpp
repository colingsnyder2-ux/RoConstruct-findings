// roc 2009-12 00462d90  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00462d90
//
// 00462d90  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00462d93  85c9                 test ecx, ecx
// 00462d95  7408                 je 0x462d9f
// 00462d97  8b01                 mov eax, dword ptr [ecx]
// 00462d99  8b10                 mov edx, dword ptr [eax]
// 00462d9b  6a01                 push 1
// 00462d9d  ffd2                 call edx
// 00462d9f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?dispose@?$sp_counted_impl_p@Voption_description@program_options@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
