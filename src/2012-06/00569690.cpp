// from server: 100% by auto
// roc 2012-06 00569690  unit: std::N::NV?$allocator::V?$circular_buffer::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00569690
//
// 00569690  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00569693  50                   push eax
// 00569694  e8a7feffff           call 0x569540
// 00569699  59                   pop ecx
// 0056969a  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?dispose@?$sp_counted_impl_p@Um_imp@?$basic_filesystem_error@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@filesystem@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
