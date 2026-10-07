// roc 2010-06 00564400  unit: seg_00560000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00564400
//
// 00564400  837c240400           cmp dword ptr [esp + 4], 0
// 00564405  742d                 je 0x564434
// 00564407  8b442408             mov eax, dword ptr [esp + 8]
// 0056440b  85c0                 test eax, eax
// 0056440d  7425                 je 0x564434
// 0056440f  dd442410             fld qword ptr [esp + 0x10]
// 00564413  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 00564417  81480800400000       or dword ptr [eax + 8], 0x4000
// 0056441e  dd98e0000000         fstp qword ptr [eax + 0xe0]
// 00564424  dd442418             fld qword ptr [esp + 0x18]
// 00564428  8888dc000000         mov byte ptr [eax + 0xdc], cl
// 0056442e  dd98e8000000         fstp qword ptr [eax + 0xe8]
// 00564434  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
