// roc 2010-06 004d4520  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004d4520
//
// 004d4520  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004d4523  85c9                 test ecx, ecx
// 004d4525  7408                 je 0x4d452f
// 004d4527  8b01                 mov eax, dword ptr [ecx]
// 004d4529  8b10                 mov edx, dword ptr [eax]
// 004d452b  6a01                 push 1
// 004d452d  ffd2                 call edx
// 004d452f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?dispose@?$sp_counted_impl_p@Voption_description@program_options@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
