// from server: 100% by auto
// roc 2007-08 00518df0  unit: seg_00510000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518df0
//
// 00518df0  8b442404             mov eax, dword ptr [esp + 4]
// 00518df4  81487000040000       or dword ptr [eax + 0x70], 0x400
// 00518dfb  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_set_strip_16)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
