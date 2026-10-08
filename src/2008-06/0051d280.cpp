// from server: 100% by auto
// roc 2008-06 0051d280  unit: seg_00510000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d280
//
// 0051d280  837c240400           cmp dword ptr [esp + 4], 0
// 0051d285  742d                 je 0x51d2b4
// 0051d287  8b442408             mov eax, dword ptr [esp + 8]
// 0051d28b  85c0                 test eax, eax
// 0051d28d  7425                 je 0x51d2b4
// 0051d28f  dd442410             fld qword ptr [esp + 0x10]
// 0051d293  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 0051d297  81480800400000       or dword ptr [eax + 8], 0x4000
// 0051d29e  dd98e0000000         fstp qword ptr [eax + 0xe0]
// 0051d2a4  dd442418             fld qword ptr [esp + 0x18]
// 0051d2a8  8888dc000000         mov byte ptr [eax + 0xdc], cl
// 0051d2ae  dd98e8000000         fstp qword ptr [eax + 0xe8]
// 0051d2b4  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
