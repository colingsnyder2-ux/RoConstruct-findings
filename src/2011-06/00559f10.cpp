// from server: 100% by auto
// roc 2011-06 00559f10  unit: seg_00550000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00559f10
//
// 00559f10  837c240400           cmp dword ptr [esp + 4], 0
// 00559f15  742d                 je 0x559f44
// 00559f17  8b442408             mov eax, dword ptr [esp + 8]
// 00559f1b  85c0                 test eax, eax
// 00559f1d  7425                 je 0x559f44
// 00559f1f  dd442410             fld qword ptr [esp + 0x10]
// 00559f23  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 00559f27  81480800400000       or dword ptr [eax + 8], 0x4000
// 00559f2e  dd98e0000000         fstp qword ptr [eax + 0xe0]
// 00559f34  dd442418             fld qword ptr [esp + 0x18]
// 00559f38  8888dc000000         mov byte ptr [eax + 0xdc], cl
// 00559f3e  dd98e8000000         fstp qword ptr [eax + 0xe8]
// 00559f44  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_sCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
