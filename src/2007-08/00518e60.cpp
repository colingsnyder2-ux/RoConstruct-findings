// from server: 100% by auto
// roc 2007-08 00518e60  unit: seg_00510000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518e60
//
// 00518e60  8b442404             mov eax, dword ptr [esp + 4]
// 00518e64  81487000400000       or dword ptr [eax + 0x70], 0x4000
// 00518e6b  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_set_gray_to_rgb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
