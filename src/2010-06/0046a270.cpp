// roc 2010-06 0046a270  unit: RBX::Tasks::VBarrier::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046a270
//
// 0046a270  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0046a273  50                   push eax
// 0046a274  e8d7fcffff           call 0x469f50
// 0046a279  59                   pop ecx
// 0046a27a  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?dispose@?$sp_counted_impl_p@Um_imp@?$basic_filesystem_error@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@filesystem@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
