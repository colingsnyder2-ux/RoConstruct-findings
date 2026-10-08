// roc 2007-03 0052b090  unit: seg_00520000  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052b090
//
// 0052b090  83ec18               sub esp, 0x18
// 0052b093  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052b097  d900                 fld dword ptr [eax]
// 0052b099  56                   push esi
// 0052b09a  8bf1                 mov esi, ecx
// 0052b09c  d86604               fsub dword ptr [esi + 4]
// 0052b09f  d95c2404             fstp dword ptr [esp + 4]
// 0052b0a3  d94004               fld dword ptr [eax + 4]
// 0052b0a6  d86608               fsub dword ptr [esi + 8]
// 0052b0a9  d95c2408             fstp dword ptr [esp + 8]
// 0052b0ad  d94008               fld dword ptr [eax + 8]
// 0052b0b0  d8660c               fsub dword ptr [esi + 0xc]
// 0052b0b3  d95c240c             fstp dword ptr [esp + 0xc]
// 0052b0b7  d94614               fld dword ptr [esi + 0x14]
// 0052b0ba  d9442408             fld dword ptr [esp + 8]
// 0052b0be  d9c0                 fld st(0)
// 0052b0c0  deca                 fmulp st(2)
// 0052b0c2  d94610               fld dword ptr [esi + 0x10]
// 0052b0c5  d9442404             fld dword ptr [esp + 4]
// 0052b0c9  d9c0                 fld st(0)
// 0052b0cb  deca                 fmulp st(2)
// 0052b0cd  d9cb                 fxch st(3)
// 0052b0cf  dec1                 faddp st(1)
// 0052b0d1  d94618               fld dword ptr [esi + 0x18]
// 0052b0d4  d944240c             fld dword ptr [esp + 0xc]
// 0052b0d8  d9c0                 fld st(0)
// 0052b0da  deca                 fmulp st(2)
// 0052b0dc  d9ca                 fxch st(2)
// 0052b0de  dec1                 faddp st(1)
// 0052b0e0  d95c2424             fstp dword ptr [esp + 0x24]
// 0052b0e4  d9ee                 fldz 
// 0052b0e6  d9442424             fld dword ptr [esp + 0x24]
// 0052b0ea  d8d1                 fcom st(1)
// 0052b0ec  dfe0                 fnstsw ax
// 0052b0ee  ddd9                 fstp st(1)
// 0052b0f0  f6c401               test ah, 1
// 0052b0f3  0f85a6000000         jne 0x52b19f
// 0052b0f9  d94614               fld dword ptr [esi + 0x14]
// 0052b0fc  d94610               fld dword ptr [esi + 0x10]
// 0052b0ff  d94618               fld dword ptr [esi + 0x18]
// 0052b102  dd5c2404             fstp qword ptr [esp + 4]
// 0052b106  dcc8                 fmul st(0), st(0)
// 0052b108  d9c1                 fld st(1)
// 0052b10a  deca                 fmulp st(2)
// 0052b10c  dec1                 faddp st(1)
// 0052b10e  dd442404             fld qword ptr [esp + 4]
// 0052b112  dcc8                 fmul st(0), st(0)
// 0052b114  dec1                 faddp st(1)
// 0052b116  d95c2424             fstp dword ptr [esp + 0x24]
// 0052b11a  d9442424             fld dword ptr [esp + 0x24]
// 0052b11e  d8d9                 fcomp st(1)
// 0052b120  dfe0                 fnstsw ax
// 0052b122  f6c401               test ah, 1
// 0052b125  7578                 jne 0x52b19f
// 0052b127  ddda                 fstp st(2)
// 0052b129  51                   push ecx
// 0052b12a  ddda                 fstp st(2)
// 0052b12c  8d442414             lea eax, [esp + 0x14]
// 0052b130  ddd9                 fstp st(1)
// 0052b132  8d4c2408             lea ecx, [esp + 8]
// 0052b136  d94614               fld dword ptr [esi + 0x14]
// 0052b139  d94610               fld dword ptr [esi + 0x10]
// 0052b13c  d94618               fld dword ptr [esi + 0x18]
// 0052b13f  d9c1                 fld st(1)
// 0052b141  deca                 fmulp st(2)
// 0052b143  d9c2                 fld st(2)
// 0052b145  decb                 fmulp st(3)
// 0052b147  d9c9                 fxch st(1)
// 0052b149  dec2                 faddp st(2)
// 0052b14b  dcc8                 fmul st(0), st(0)
// 0052b14d  dec1                 faddp st(1)
// 0052b14f  d95c2428             fstp dword ptr [esp + 0x28]
// 0052b153  d94610               fld dword ptr [esi + 0x10]
// 0052b156  d8c9                 fmul st(1)
// 0052b158  d95c2408             fstp dword ptr [esp + 8]
// 0052b15c  d94614               fld dword ptr [esi + 0x14]
// 0052b15f  d8c9                 fmul st(1)
// 0052b161  d95c240c             fstp dword ptr [esp + 0xc]
// 0052b165  d84e18               fmul dword ptr [esi + 0x18]
// 0052b168  d95c2410             fstp dword ptr [esp + 0x10]
// 0052b16c  d9442428             fld dword ptr [esp + 0x28]
// 0052b170  d91c24               fstp dword ptr [esp]
// 0052b173  50                   push eax
// 0052b174  e8778bfdff           call 0x503cf0
// 0052b179  d900                 fld dword ptr [eax]
// 0052b17b  d84604               fadd dword ptr [esi + 4]
// 0052b17e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052b182  d919                 fstp dword ptr [ecx]
// 0052b184  d94004               fld dword ptr [eax + 4]
// 0052b187  d84608               fadd dword ptr [esi + 8]
// 0052b18a  d95904               fstp dword ptr [ecx + 4]
// 0052b18d  d94008               fld dword ptr [eax + 8]
// 0052b190  8bc1                 mov eax, ecx
// 0052b192  d8460c               fadd dword ptr [esi + 0xc]
// 0052b195  5e                   pop esi
// 0052b196  d95908               fstp dword ptr [ecx + 8]
// 0052b199  83c418               add esp, 0x18
// 0052b19c  c20800               ret 8
// 0052b19f  ddd8                 fstp st(0)
// 0052b1a1  d9c2                 fld st(2)
// 0052b1a3  d86610               fsub dword ptr [esi + 0x10]
// 0052b1a6  d95c2404             fstp dword ptr [esp + 4]
// 0052b1aa  d9c1                 fld st(1)
// 0052b1ac  d86614               fsub dword ptr [esi + 0x14]
// 0052b1af  d95c2408             fstp dword ptr [esp + 8]
// 0052b1b3  d9c0                 fld st(0)
// 0052b1b5  d86618               fsub dword ptr [esi + 0x18]
// 0052b1b8  d95c240c             fstp dword ptr [esp + 0xc]
// 0052b1bc  d9442408             fld dword ptr [esp + 8]
// 0052b1c0  d9442404             fld dword ptr [esp + 4]
// 0052b1c4  d944240c             fld dword ptr [esp + 0xc]
// 0052b1c8  d9c5                 fld st(5)
// 0052b1ca  dece                 fmulp st(6)
// 0052b1cc  d9c4                 fld st(4)
// 0052b1ce  decd                 fmulp st(5)
// 0052b1d0  d9cd                 fxch st(5)
// 0052b1d2  dec4                 faddp st(4)
// 0052b1d4  d9c2                 fld st(2)
// 0052b1d6  decb                 fmulp st(3)
// 0052b1d8  d9cb                 fxch st(3)
// 0052b1da  dec2                 faddp st(2)
// 0052b1dc  d9c9                 fxch st(1)
// 0052b1de  d95c2424             fstp dword ptr [esp + 0x24]
// 0052b1e2  d9442424             fld dword ptr [esp + 0x24]
// 0052b1e6  d9c2                 fld st(2)
// 0052b1e8  decb                 fmulp st(3)
// 0052b1ea  d9c1                 fld st(1)
// 0052b1ec  deca                 fmulp st(2)
// 0052b1ee  d9ca                 fxch st(2)
// 0052b1f0  dec1                 faddp st(1)
// 0052b1f2  d9c2                 fld st(2)
// 0052b1f4  decb                 fmulp st(3)
// 0052b1f6  dec2                 faddp st(2)
// 0052b1f8  d9c9                 fxch st(1)
// 0052b1fa  d95c2424             fstp dword ptr [esp + 0x24]
// 0052b1fe  d9442424             fld dword ptr [esp + 0x24]
// 0052b202  ded9                 fcompp 
// 0052b204  dfe0                 fnstsw ax
// 0052b206  f6c441               test ah, 0x41
// 0052b209  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052b20d  7518                 jne 0x52b227
// 0052b20f  d94604               fld dword ptr [esi + 4]
// 0052b212  d918                 fstp dword ptr [eax]
// 0052b214  d94608               fld dword ptr [esi + 8]
// 0052b217  d95804               fstp dword ptr [eax + 4]
// 0052b21a  d9460c               fld dword ptr [esi + 0xc]
// 0052b21d  5e                   pop esi
// 0052b21e  d95808               fstp dword ptr [eax + 8]
// 0052b221  83c418               add esp, 0x18
// 0052b224  c20800               ret 8
// 0052b227  d94610               fld dword ptr [esi + 0x10]
// 0052b22a  d84604               fadd dword ptr [esi + 4]
// 0052b22d  d918                 fstp dword ptr [eax]
// 0052b22f  d94614               fld dword ptr [esi + 0x14]
// 0052b232  d84608               fadd dword ptr [esi + 8]
// 0052b235  d95804               fstp dword ptr [eax + 4]
// 0052b238  d94618               fld dword ptr [esi + 0x18]
// 0052b23b  d8460c               fadd dword ptr [esi + 0xc]
// 0052b23e  5e                   pop esi
// 0052b23f  d95808               fstp dword ptr [eax + 8]
// 0052b242  83c418               add esp, 0x18
// 0052b245  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\LineSegment.cpp (function ?closestPoint@LineSegment@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/LineSegment.cpp
