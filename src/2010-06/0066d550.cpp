// roc 2010-06 0066d550  unit: RBX::HUMAN::VHumanoidState::?$sp_counted_impl_p  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066d550
//
// 0066d550  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0066d553  85c9                 test ecx, ecx
// 0066d555  7409                 je 0x66d560
// 0066d557  8b01                 mov eax, dword ptr [ecx]
// 0066d559  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0066d55c  6a01                 push 1
// 0066d55e  ffd2                 call edx
// 0066d560  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?dispose@?$sp_counted_impl_p@$$CBVvalue_semantic@program_options@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
