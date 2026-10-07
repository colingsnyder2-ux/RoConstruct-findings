// roc 2008-06 0051e220  unit: seg_00510000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051e220
//
// 0051e220  8b442404             mov eax, dword ptr [esp + 4]
// 0051e224  33c9                 xor ecx, ecx
// 0051e226  89883c020000         mov dword ptr [eax + 0x23c], ecx
// 0051e22c  888839020000         mov byte ptr [eax + 0x239], cl
// 0051e232  888840020000         mov byte ptr [eax + 0x240], cl
// 0051e238  c3                   ret 
// library libpng-1.2.5/png.c (function _png_init_mmx_flags)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
