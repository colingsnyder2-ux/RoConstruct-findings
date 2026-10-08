// from server: 100% by auto
// roc 2012-06 00646d90  unit: seg_00640000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00646d90
//
// 00646d90  837c240400           cmp dword ptr [esp + 4], 0
// 00646d95  742d                 je 0x646dc4
// 00646d97  8b442408             mov eax, dword ptr [esp + 8]
// 00646d9b  85c0                 test eax, eax
// 00646d9d  7425                 je 0x646dc4
// 00646d9f  dd442410             fld qword ptr [esp + 0x10]
// 00646da3  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 00646da7  81480800400000       or dword ptr [eax + 8], 0x4000
// 00646dae  dd98e0000000         fstp qword ptr [eax + 0xe0]
// 00646db4  dd442418             fld qword ptr [esp + 0x18]
// 00646db8  8888dc000000         mov byte ptr [eax + 0xdc], cl
// 00646dbe  dd98e8000000         fstp qword ptr [eax + 0xe8]
// 00646dc4  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
