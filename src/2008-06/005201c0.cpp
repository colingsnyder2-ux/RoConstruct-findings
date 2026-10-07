// roc 2008-06 005201c0  unit: seg_00520000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005201c0
//
// 005201c0  dd442408             fld qword ptr [esp + 8]
// 005201c4  d9c0                 fld st(0)
// 005201c6  dd442410             fld qword ptr [esp + 0x10]
// 005201ca  dcc9                 fmul st(1), st(0)
// 005201cc  d9c9                 fxch st(1)
// 005201ce  dc2538128100         fsub qword ptr [0x811238]
// 005201d4  d9e1                 fabs 
// 005201d6  dc1d38cb8100         fcomp qword ptr [0x81cb38]
// 005201dc  dfe0                 fnstsw ax
// 005201de  f6c441               test ah, 0x41
// 005201e1  8b442404             mov eax, dword ptr [esp + 4]
// 005201e5  7410                 je 0x5201f7
// 005201e7  8a8826010000         mov cl, byte ptr [eax + 0x126]
// 005201ed  f6c104               test cl, 4
// 005201f0  7505                 jne 0x5201f7
// 005201f2  80f903               cmp cl, 3
// 005201f5  7507                 jne 0x5201fe
// 005201f7  81487000200000       or dword ptr [eax + 0x70], 0x2000
// 005201fe  d9985c010000         fstp dword ptr [eax + 0x15c]
// 00520204  d99860010000         fstp dword ptr [eax + 0x160]
// 0052020a  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_set_gamma)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
