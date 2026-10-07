// roc 2011-06 00783370  unit: RBX::Tasks::VExclusive::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00783370
//
// 00783370  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00783373  50                   push eax
// 00783374  e8df6c0800           call 0x80a058
// 00783379  59                   pop ecx
// 0078337a  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?dispose@?$sp_counted_impl_p@Um_imp@?$basic_filesystem_error@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@filesystem@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
