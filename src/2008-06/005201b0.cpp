// roc 2008-06 005201b0  unit: seg_00520000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005201b0
//
// 005201b0  8b442404             mov eax, dword ptr [esp + 4]
// 005201b4  81487000040000       or dword ptr [eax + 0x70], 0x400
// 005201bb  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_set_strip_16)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
