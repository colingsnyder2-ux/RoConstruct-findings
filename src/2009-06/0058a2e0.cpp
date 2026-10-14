// roc 2009-06 0058a2e0  unit: seg_00580000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a2e0
//
// 0058a2e0  8b442408             mov eax, dword ptr [esp + 8]
// 0058a2e4  d900                 fld dword ptr [eax]
// 0058a2e6  83ec18               sub esp, 0x18
// 0058a2e9  56                   push esi
// 0058a2ea  8bf1                 mov esi, ecx
// 0058a2ec  d86604               fsub dword ptr [esi + 4]
// 0058a2ef  d94004               fld dword ptr [eax + 4]
// 0058a2f2  d86608               fsub dword ptr [esi + 8]
// 0058a2f5  d94008               fld dword ptr [eax + 8]
// 0058a2f8  d8660c               fsub dword ptr [esi + 0xc]
// 0058a2fb  d94618               fld dword ptr [esi + 0x18]
// 0058a2fe  d8c9                 fmul st(1)
// 0058a300  d94614               fld dword ptr [esi + 0x14]
// 0058a303  d8cb                 fmul st(3)
// 0058a305  dec1                 faddp st(1)
// 0058a307  d94610               fld dword ptr [esi + 0x10]
// 0058a30a  d8cc                 fmul st(4)
// 0058a30c  dec1                 faddp st(1)
// 0058a30e  d9ee                 fldz 
// 0058a310  d8d9                 fcomp st(1)
// 0058a312  dfe0                 fnstsw ax
// 0058a314  f6c441               test ah, 0x41
// 0058a317  0f8a90000000         jp 0x58a3ad
// 0058a31d  d94618               fld dword ptr [esi + 0x18]
// 0058a320  d94614               fld dword ptr [esi + 0x14]
// 0058a323  d94610               fld dword ptr [esi + 0x10]
// 0058a326  dcc8                 fmul st(0), st(0)
// 0058a328  d9c1                 fld st(1)
// 0058a32a  deca                 fmulp st(2)
// 0058a32c  dec1                 faddp st(1)
// 0058a32e  d9c1                 fld st(1)
// 0058a330  deca                 fmulp st(2)
// 0058a332  dec1                 faddp st(1)
// 0058a334  d8d9                 fcomp st(1)
// 0058a336  dfe0                 fnstsw ax
// 0058a338  f6c401               test ah, 1
// 0058a33b  7570                 jne 0x58a3ad
// 0058a33d  dddb                 fstp st(3)
// 0058a33f  51                   push ecx
// 0058a340  ddd9                 fstp st(1)
// 0058a342  8d442414             lea eax, [esp + 0x14]
// 0058a346  ddd8                 fstp st(0)
// 0058a348  8d4c2408             lea ecx, [esp + 8]
// 0058a34c  d94618               fld dword ptr [esi + 0x18]
// 0058a34f  d94614               fld dword ptr [esi + 0x14]
// 0058a352  d94610               fld dword ptr [esi + 0x10]
// 0058a355  d9c2                 fld st(2)
// 0058a357  decb                 fmulp st(3)
// 0058a359  dcc8                 fmul st(0), st(0)
// 0058a35b  dec2                 faddp st(2)
// 0058a35d  dcc8                 fmul st(0), st(0)
// 0058a35f  dec1                 faddp st(1)
// 0058a361  d94610               fld dword ptr [esi + 0x10]
// 0058a364  d8ca                 fmul st(2)
// 0058a366  d95c2408             fstp dword ptr [esp + 8]
// 0058a36a  d94614               fld dword ptr [esi + 0x14]
// 0058a36d  d8ca                 fmul st(2)
// 0058a36f  d95c240c             fstp dword ptr [esp + 0xc]
// 0058a373  d94618               fld dword ptr [esi + 0x18]
// 0058a376  deca                 fmulp st(2)
// 0058a378  d9c9                 fxch st(1)
// 0058a37a  d95c2410             fstp dword ptr [esp + 0x10]
// 0058a37e  d91c24               fstp dword ptr [esp]
// 0058a381  50                   push eax
// 0058a382  e879b3feff           call 0x575700
// 0058a387  d900                 fld dword ptr [eax]
// 0058a389  d84604               fadd dword ptr [esi + 4]
// 0058a38c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058a390  d919                 fstp dword ptr [ecx]
// 0058a392  d94004               fld dword ptr [eax + 4]
// 0058a395  d84608               fadd dword ptr [esi + 8]
// 0058a398  d95904               fstp dword ptr [ecx + 4]
// 0058a39b  d94008               fld dword ptr [eax + 8]
// 0058a39e  8bc1                 mov eax, ecx
// 0058a3a0  d8460c               fadd dword ptr [esi + 0xc]
// 0058a3a3  5e                   pop esi
// 0058a3a4  d95908               fstp dword ptr [ecx + 8]
// 0058a3a7  83c418               add esp, 0x18
// 0058a3aa  c20800               ret 8
// 0058a3ad  ddd8                 fstp st(0)
// 0058a3af  d9c2                 fld st(2)
// 0058a3b1  d86610               fsub dword ptr [esi + 0x10]
// 0058a3b4  d9c2                 fld st(2)
// 0058a3b6  d86614               fsub dword ptr [esi + 0x14]
// 0058a3b9  d9c2                 fld st(2)
// 0058a3bb  d86618               fsub dword ptr [esi + 0x18]
// 0058a3be  d9c3                 fld st(3)
// 0058a3c0  decc                 fmulp st(4)
// 0058a3c2  d9c4                 fld st(4)
// 0058a3c4  decd                 fmulp st(5)
// 0058a3c6  d9cb                 fxch st(3)
// 0058a3c8  dec4                 faddp st(4)
// 0058a3ca  d9c4                 fld st(4)
// 0058a3cc  decd                 fmulp st(5)
// 0058a3ce  d9cb                 fxch st(3)
// 0058a3d0  dec4                 faddp st(4)
// 0058a3d2  d9c1                 fld st(1)
// 0058a3d4  deca                 fmulp st(2)
// 0058a3d6  d9c2                 fld st(2)
// 0058a3d8  decb                 fmulp st(3)
// 0058a3da  d9c9                 fxch st(1)
// 0058a3dc  dec2                 faddp st(2)
// 0058a3de  dcc8                 fmul st(0), st(0)
// 0058a3e0  dec1                 faddp st(1)
// 0058a3e2  ded9                 fcompp 
// 0058a3e4  dfe0                 fnstsw ax
// 0058a3e6  f6c441               test ah, 0x41
// 0058a3e9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058a3ed  7518                 jne 0x58a407
// 0058a3ef  d94604               fld dword ptr [esi + 4]
// 0058a3f2  d918                 fstp dword ptr [eax]
// 0058a3f4  d94608               fld dword ptr [esi + 8]
// 0058a3f7  d95804               fstp dword ptr [eax + 4]
// 0058a3fa  d9460c               fld dword ptr [esi + 0xc]
// 0058a3fd  5e                   pop esi
// 0058a3fe  d95808               fstp dword ptr [eax + 8]
// 0058a401  83c418               add esp, 0x18
// 0058a404  c20800               ret 8
// 0058a407  d94610               fld dword ptr [esi + 0x10]
// 0058a40a  d84604               fadd dword ptr [esi + 4]
// 0058a40d  d918                 fstp dword ptr [eax]
// 0058a40f  d94614               fld dword ptr [esi + 0x14]
// 0058a412  d84608               fadd dword ptr [esi + 8]
// 0058a415  d95804               fstp dword ptr [eax + 4]
// 0058a418  d94618               fld dword ptr [esi + 0x18]
// 0058a41b  d8460c               fadd dword ptr [esi + 0xc]
// 0058a41e  5e                   pop esi
// 0058a41f  d95808               fstp dword ptr [eax + 8]
// 0058a422  83c418               add esp, 0x18
// 0058a425  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\LineSegment.cpp (function ?closestPoint@LineSegment@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/LineSegment.cpp
