// from server: 100% by auto
// roc 2011-06 00704830  unit: RBX::VSelectionBox::?$FactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00704830
//
// 00704830  8b442404             mov eax, dword ptr [esp + 4]
// 00704834  85c0                 test eax, eax
// 00704836  7409                 je 0x704841
// 00704838  89442404             mov dword ptr [esp + 4], eax
// 0070483c  e917581000           jmp 0x80a058
// 00704841  c3                   ret 
// library libpng-1.2.5/pngmem.c (function _png_destroy_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngmem.c
