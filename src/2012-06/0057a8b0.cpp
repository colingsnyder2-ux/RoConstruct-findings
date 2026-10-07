// roc 2012-06 0057a8b0  unit: std::H::HV?$allocator::V?$circular_buffer::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0057a8b0
//
// 0057a8b0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0057a8b3  50                   push eax
// 0057a8b4  e847f9ffff           call 0x57a200
// 0057a8b9  59                   pop ecx
// 0057a8ba  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?dispose@?$sp_counted_impl_p@Um_imp@?$basic_filesystem_error@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@filesystem@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
