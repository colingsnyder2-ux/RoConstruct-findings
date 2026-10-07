// roc 2012-06 008d2f50  unit: RBX::Handles  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008d2f50
//
// 008d2f50  8b442404             mov eax, dword ptr [esp + 4]
// 008d2f54  85c0                 test eax, eax
// 008d2f56  7409                 je 0x8d2f61
// 008d2f58  89442404             mov dword ptr [esp + 4], eax
// 008d2f5c  e9b3f10a00           jmp 0x982114
// 008d2f61  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_destroy_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
