// roc 2009-12 00602a90  unit: seg_00600000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00602a90
//
// 00602a90  837c240400           cmp dword ptr [esp + 4], 0
// 00602a95  742d                 je 0x602ac4
// 00602a97  8b442408             mov eax, dword ptr [esp + 8]
// 00602a9b  85c0                 test eax, eax
// 00602a9d  7425                 je 0x602ac4
// 00602a9f  dd442410             fld qword ptr [esp + 0x10]
// 00602aa3  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 00602aa7  81480800400000       or dword ptr [eax + 8], 0x4000
// 00602aae  dd98e0000000         fstp qword ptr [eax + 0xe0]
// 00602ab4  dd442418             fld qword ptr [esp + 0x18]
// 00602ab8  8888dc000000         mov byte ptr [eax + 0xdc], cl
// 00602abe  dd98e8000000         fstp qword ptr [eax + 0xe8]
// 00602ac4  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
