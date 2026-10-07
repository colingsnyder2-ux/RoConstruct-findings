// roc 2010-06 006aa590  unit: boost::Vthread::?$sp_counted_impl_p  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006aa590
//
// 006aa590  8b442404             mov eax, dword ptr [esp + 4]
// 006aa594  85c0                 test eax, eax
// 006aa596  7409                 je 0x6aa5a1
// 006aa598  89442404             mov dword ptr [esp + 4], eax
// 006aa59c  e9f9d30f00           jmp 0x7a799a
// 006aa5a1  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_destroy_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
