// roc 2008-06 0051fc90  unit: seg_00510000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051fc90
//
// 0051fc90  8b442404             mov eax, dword ptr [esp + 4]
// 0051fc94  b108                 mov cl, 8
// 0051fc96  388827010000         cmp byte ptr [eax + 0x127], cl
// 0051fc9c  730a                 jae 0x51fca8
// 0051fc9e  83487004             or dword ptr [eax + 0x70], 4
// 0051fca2  888828010000         mov byte ptr [eax + 0x128], cl
// 0051fca8  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_set_packing)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
