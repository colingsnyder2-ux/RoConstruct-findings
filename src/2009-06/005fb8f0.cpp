// from server: 100% by auto
// roc 2009-06 005fb8f0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fb8f0
//
// 005fb8f0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 005fb8f3  85c9                 test ecx, ecx
// 005fb8f5  7408                 je 0x5fb8ff
// 005fb8f7  8b01                 mov eax, dword ptr [ecx]
// 005fb8f9  8b10                 mov edx, dword ptr [eax]
// 005fb8fb  6a01                 push 1
// 005fb8fd  ffd2                 call edx
// 005fb8ff  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?dispose@?$sp_counted_impl_p@Voption_description@program_options@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
