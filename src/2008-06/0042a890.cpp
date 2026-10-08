// from server: 100% by auto
// roc 2008-06 0042a890  unit: boost::detail::H::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a890
//
// 0042a890  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0042a893  50                   push eax
// 0042a894  e8e15d2700           call 0x6a067a
// 0042a899  59                   pop ecx
// 0042a89a  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?dispose@?$sp_counted_impl_p@Um_imp@?$basic_filesystem_error@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@filesystem@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
