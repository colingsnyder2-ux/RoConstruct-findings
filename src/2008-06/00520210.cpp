// roc 2008-06 00520210  unit: seg_00520000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00520210
//
// 00520210  8b442404             mov eax, dword ptr [esp + 4]
// 00520214  81487000100000       or dword ptr [eax + 0x70], 0x1000
// 0052021b  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_set_expand)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
