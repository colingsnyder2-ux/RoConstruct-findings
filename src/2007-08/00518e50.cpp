// from server: 100% by auto
// roc 2007-08 00518e50  unit: seg_00510000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518e50
//
// 00518e50  8b442404             mov eax, dword ptr [esp + 4]
// 00518e54  81487000100000       or dword ptr [eax + 0x70], 0x1000
// 00518e5b  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_set_expand)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
