// from server: 100% by auto
// roc 2008-06 004ac390  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ac390
//
// 004ac390  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004ac393  85c9                 test ecx, ecx
// 004ac395  7408                 je 0x4ac39f
// 004ac397  8b01                 mov eax, dword ptr [ecx]
// 004ac399  8b10                 mov edx, dword ptr [eax]
// 004ac39b  6a01                 push 1
// 004ac39d  ffd2                 call edx
// 004ac39f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?dispose@?$sp_counted_impl_p@Voption_description@program_options@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
