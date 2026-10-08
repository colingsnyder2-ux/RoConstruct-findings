// from server: 100% by auto
// roc 2007-08 00570190  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570190
//
// 00570190  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00570193  85c9                 test ecx, ecx
// 00570195  7408                 je 0x57019f
// 00570197  8b01                 mov eax, dword ptr [ecx]
// 00570199  8b10                 mov edx, dword ptr [eax]
// 0057019b  6a01                 push 1
// 0057019d  ffd2                 call edx
// 0057019f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?dispose@?$sp_counted_impl_p@Voption_description@program_options@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
