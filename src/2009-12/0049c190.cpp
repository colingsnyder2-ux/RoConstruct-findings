// roc 2009-12 0049c190  unit: RBX::VHeadBuilder::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0049c190
//
// 0049c190  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0049c193  50                   push eax
// 0049c194  e8c1763500           call 0x7f385a
// 0049c199  59                   pop ecx
// 0049c19a  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?dispose@?$sp_counted_impl_p@Um_imp@?$basic_filesystem_error@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@filesystem@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
