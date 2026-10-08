// from server: 100% by auto
// roc 2007-08 00518e00  unit: seg_00510000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518e00
//
// 00518e00  dd442408             fld qword ptr [esp + 8]
// 00518e04  d9c0                 fld st(0)
// 00518e06  dd442410             fld qword ptr [esp + 0x10]
// 00518e0a  dcc9                 fmul st(1), st(0)
// 00518e0c  d9c9                 fxch st(1)
// 00518e0e  dc2598317900         fsub qword ptr [0x793198]
// 00518e14  d9e1                 fabs 
// 00518e16  dc1dd8067a00         fcomp qword ptr [0x7a06d8]
// 00518e1c  dfe0                 fnstsw ax
// 00518e1e  f6c441               test ah, 0x41
// 00518e21  8b442404             mov eax, dword ptr [esp + 4]
// 00518e25  7410                 je 0x518e37
// 00518e27  8a8826010000         mov cl, byte ptr [eax + 0x126]
// 00518e2d  f6c104               test cl, 4
// 00518e30  7505                 jne 0x518e37
// 00518e32  80f903               cmp cl, 3
// 00518e35  7507                 jne 0x518e3e
// 00518e37  81487000200000       or dword ptr [eax + 0x70], 0x2000
// 00518e3e  d9985c010000         fstp dword ptr [eax + 0x15c]
// 00518e44  d99860010000         fstp dword ptr [eax + 0x160]
// 00518e4a  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_set_gamma)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
