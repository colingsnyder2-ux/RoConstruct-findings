// roc 2009-12 00465ff0  unit: RBX::Tasks::VBarrier::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00465ff0
//
// 00465ff0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00465ff3  50                   push eax
// 00465ff4  e8d7fcffff           call 0x465cd0
// 00465ff9  59                   pop ecx
// 00465ffa  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?dispose@?$sp_counted_impl_p@Um_imp@?$basic_filesystem_error@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@filesystem@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
