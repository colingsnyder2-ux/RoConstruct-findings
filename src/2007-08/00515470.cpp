// from server: 100% by auto
// roc 2007-08 00515470  unit: G3D::_internal::DialogTemplate  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515470
//
// 00515470  8b442404             mov eax, dword ptr [esp + 4]
// 00515474  33c9                 xor ecx, ecx
// 00515476  89883c020000         mov dword ptr [eax + 0x23c], ecx
// 0051547c  888839020000         mov byte ptr [eax + 0x239], cl
// 00515482  888840020000         mov byte ptr [eax + 0x240], cl
// 00515488  c3                   ret 
// library libpng-1.2.5/png.c (function _png_init_mmx_flags)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
