// roc 2009-12 006e4120  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e4120
//
// 006e4120  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006e4123  85c9                 test ecx, ecx
// 006e4125  7409                 je 0x6e4130
// 006e4127  8b01                 mov eax, dword ptr [ecx]
// 006e4129  8b501c               mov edx, dword ptr [eax + 0x1c]
// 006e412c  6a01                 push 1
// 006e412e  ffd2                 call edx
// 006e4130  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?dispose@?$sp_counted_impl_p@$$CBVvalue_semantic@program_options@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
