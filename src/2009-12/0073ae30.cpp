// roc 2009-12 0073ae30  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073ae30
//
// 0073ae30  8b442404             mov eax, dword ptr [esp + 4]
// 0073ae34  85c0                 test eax, eax
// 0073ae36  7409                 je 0x73ae41
// 0073ae38  89442404             mov dword ptr [esp + 4], eax
// 0073ae3c  e9198a0b00           jmp 0x7f385a
// 0073ae41  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_destroy_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
