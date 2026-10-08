// from server: 100% by auto
// roc 2009-06 00695a90  unit: RBX::Lua::FunctionRef  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695a90
//
// 00695a90  8b442404             mov eax, dword ptr [esp + 4]
// 00695a94  85c0                 test eax, eax
// 00695a96  7409                 je 0x695aa1
// 00695a98  89442404             mov dword ptr [esp + 4], eax
// 00695a9c  e9912f0800           jmp 0x718a32
// 00695aa1  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_destroy_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
