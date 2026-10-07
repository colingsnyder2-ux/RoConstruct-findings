// roc 2009-06 00580ce0  unit: seg_00580000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00580ce0
//
// 00580ce0  837c240400           cmp dword ptr [esp + 4], 0
// 00580ce5  742d                 je 0x580d14
// 00580ce7  8b442408             mov eax, dword ptr [esp + 8]
// 00580ceb  85c0                 test eax, eax
// 00580ced  7425                 je 0x580d14
// 00580cef  dd442410             fld qword ptr [esp + 0x10]
// 00580cf3  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 00580cf7  81480800400000       or dword ptr [eax + 8], 0x4000
// 00580cfe  dd98e0000000         fstp qword ptr [eax + 0xe0]
// 00580d04  dd442418             fld qword ptr [esp + 0x18]
// 00580d08  8888dc000000         mov byte ptr [eax + 0xdc], cl
// 00580d0e  dd98e8000000         fstp qword ptr [eax + 0xe8]
// 00580d14  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
