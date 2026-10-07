// roc 2009-06 0045d660  unit: RBX::Tasks::VBarrier::?$sp_counted_impl_p  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045d660
//
// 0045d660  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0045d663  50                   push eax
// 0045d664  e807ffffff           call 0x45d570
// 0045d669  59                   pop ecx
// 0045d66a  c3                   ret 
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?dispose@?$sp_counted_impl_p@Um_imp@?$basic_filesystem_error@V?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@@filesystem@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
