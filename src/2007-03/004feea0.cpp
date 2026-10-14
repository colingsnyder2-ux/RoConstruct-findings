// roc 2007-03 004feea0  unit: seg_004f0000  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004feea0
//
// 004feea0  83ec08               sub esp, 8
// 004feea3  56                   push esi
// 004feea4  8bf1                 mov esi, ecx
// 004feea6  d9460c               fld dword ptr [esi + 0xc]
// 004feea9  d906                 fld dword ptr [esi]
// 004feeab  d94618               fld dword ptr [esi + 0x18]
// 004feeae  d9c1                 fld st(1)
// 004feeb0  deca                 fmulp st(2)
// 004feeb2  d9c2                 fld st(2)
// 004feeb4  decb                 fmulp st(3)
// 004feeb6  d9c9                 fxch st(1)
// 004feeb8  dec2                 faddp st(2)
// 004feeba  dcc8                 fmul st(0), st(0)
// 004feebc  dec1                 faddp st(1)
// 004feebe  d95c2404             fstp dword ptr [esp + 4]
// 004feec2  d9442404             fld dword ptr [esp + 4]
// 004feec6  e8e1031200           call 0x61f2ac
// 004feecb  d95c2404             fstp dword ptr [esp + 4]
// 004feecf  d9442404             fld dword ptr [esp + 4]
// 004feed3  d9e8                 fld1 
// 004feed5  def1                 fdivrp st(1)
// 004feed7  d95c2404             fstp dword ptr [esp + 4]
// 004feedb  d906                 fld dword ptr [esi]
// 004feedd  d9442404             fld dword ptr [esp + 4]
// 004feee1  d9c0                 fld st(0)
// 004feee3  deca                 fmulp st(2)
// 004feee5  d9c9                 fxch st(1)
// 004feee7  d95c2404             fstp dword ptr [esp + 4]
// 004feeeb  d9442404             fld dword ptr [esp + 4]
// 004feeef  d916                 fst dword ptr [esi]
// 004feef1  d9c1                 fld st(1)
// 004feef3  d84e0c               fmul dword ptr [esi + 0xc]
// 004feef6  d95c2404             fstp dword ptr [esp + 4]
// 004feefa  d9442404             fld dword ptr [esp + 4]
// 004feefe  d9560c               fst dword ptr [esi + 0xc]
// 004fef01  d94618               fld dword ptr [esi + 0x18]
// 004fef04  decb                 fmulp st(3)
// 004fef06  d9ca                 fxch st(2)
// 004fef08  d95c2404             fstp dword ptr [esp + 4]
// 004fef0c  d9442404             fld dword ptr [esp + 4]
// 004fef10  d95618               fst dword ptr [esi + 0x18]
// 004fef13  d94604               fld dword ptr [esi + 4]
// 004fef16  d8ca                 fmul st(2)
// 004fef18  d9c3                 fld st(3)
// 004fef1a  d84e10               fmul dword ptr [esi + 0x10]
// 004fef1d  dec1                 faddp st(1)
// 004fef1f  d9c1                 fld st(1)
// 004fef21  d84e1c               fmul dword ptr [esi + 0x1c]
// 004fef24  dec1                 faddp st(1)
// 004fef26  d95c2404             fstp dword ptr [esp + 4]
// 004fef2a  d94604               fld dword ptr [esi + 4]
// 004fef2d  d9442404             fld dword ptr [esp + 4]
// 004fef31  d9c0                 fld st(0)
// 004fef33  decc                 fmulp st(4)
// 004fef35  d9c9                 fxch st(1)
// 004fef37  dee3                 fsubrp st(3)
// 004fef39  d9ca                 fxch st(2)
// 004fef3b  d95c2404             fstp dword ptr [esp + 4]
// 004fef3f  d9442404             fld dword ptr [esp + 4]
// 004fef43  d95604               fst dword ptr [esi + 4]
// 004fef46  d94610               fld dword ptr [esi + 0x10]
// 004fef49  d9c3                 fld st(3)
// 004fef4b  decd                 fmulp st(5)
// 004fef4d  dee4                 fsubrp st(4)
// 004fef4f  d9cb                 fxch st(3)
// 004fef51  d95c2404             fstp dword ptr [esp + 4]
// 004fef55  d9442404             fld dword ptr [esp + 4]
// 004fef59  d95610               fst dword ptr [esi + 0x10]
// 004fef5c  d9461c               fld dword ptr [esi + 0x1c]
// 004fef5f  d9ca                 fxch st(2)
// 004fef61  decb                 fmulp st(3)
// 004fef63  d9c9                 fxch st(1)
// 004fef65  dee2                 fsubrp st(2)
// 004fef67  d9c9                 fxch st(1)
// 004fef69  d95c2404             fstp dword ptr [esp + 4]
// 004fef6d  d9442404             fld dword ptr [esp + 4]
// 004fef71  d9561c               fst dword ptr [esi + 0x1c]
// 004fef74  d9c2                 fld st(2)
// 004fef76  decb                 fmulp st(3)
// 004fef78  d9c1                 fld st(1)
// 004fef7a  deca                 fmulp st(2)
// 004fef7c  d9ca                 fxch st(2)
// 004fef7e  dec1                 faddp st(1)
// 004fef80  d9c1                 fld st(1)
// 004fef82  deca                 fmulp st(2)
// 004fef84  dec1                 faddp st(1)
// 004fef86  d95c2404             fstp dword ptr [esp + 4]
// 004fef8a  d9442404             fld dword ptr [esp + 4]
// 004fef8e  e819031200           call 0x61f2ac
// 004fef93  d95c2404             fstp dword ptr [esp + 4]
// 004fef97  d9442404             fld dword ptr [esp + 4]
// 004fef9b  d9e8                 fld1 
// 004fef9d  def1                 fdivrp st(1)
// 004fef9f  d95c2404             fstp dword ptr [esp + 4]
// 004fefa3  d94604               fld dword ptr [esi + 4]
// 004fefa6  d9442404             fld dword ptr [esp + 4]
// 004fefaa  d9c0                 fld st(0)
// 004fefac  deca                 fmulp st(2)
// 004fefae  d9c9                 fxch st(1)
// 004fefb0  d95c2404             fstp dword ptr [esp + 4]
// 004fefb4  d9442404             fld dword ptr [esp + 4]
// 004fefb8  d95604               fst dword ptr [esi + 4]
// 004fefbb  d94610               fld dword ptr [esi + 0x10]
// 004fefbe  d8ca                 fmul st(2)
// 004fefc0  d95c2404             fstp dword ptr [esp + 4]
// 004fefc4  d9442404             fld dword ptr [esp + 4]
// 004fefc8  d95610               fst dword ptr [esi + 0x10]
// 004fefcb  d9461c               fld dword ptr [esi + 0x1c]
// 004fefce  decb                 fmulp st(3)
// 004fefd0  d9ca                 fxch st(2)
// 004fefd2  d95c2404             fstp dword ptr [esp + 4]
// 004fefd6  d9442404             fld dword ptr [esp + 4]
// 004fefda  d9561c               fst dword ptr [esi + 0x1c]
// 004fefdd  d94608               fld dword ptr [esi + 8]
// 004fefe0  deca                 fmulp st(2)
// 004fefe2  d94614               fld dword ptr [esi + 0x14]
// 004fefe5  decb                 fmulp st(3)
// 004fefe7  d9c9                 fxch st(1)
// 004fefe9  dec2                 faddp st(2)
// 004fefeb  d84e20               fmul dword ptr [esi + 0x20]
// 004fefee  dec1                 faddp st(1)
// 004feff0  d95c2408             fstp dword ptr [esp + 8]
// 004feff4  d94614               fld dword ptr [esi + 0x14]
// 004feff7  d84e0c               fmul dword ptr [esi + 0xc]
// 004feffa  d94608               fld dword ptr [esi + 8]
// 004feffd  d80e                 fmul dword ptr [esi]
// 004fefff  dec1                 faddp st(1)
// 004ff001  d94618               fld dword ptr [esi + 0x18]
// 004ff004  d84e20               fmul dword ptr [esi + 0x20]
// 004ff007  dec1                 faddp st(1)
// 004ff009  d95c2404             fstp dword ptr [esp + 4]
// 004ff00d  d94608               fld dword ptr [esi + 8]
// 004ff010  d94604               fld dword ptr [esi + 4]
// 004ff013  d9442408             fld dword ptr [esp + 8]
// 004ff017  d9c0                 fld st(0)
// 004ff019  deca                 fmulp st(2)
// 004ff01b  d906                 fld dword ptr [esi]
// 004ff01d  d9442404             fld dword ptr [esp + 4]
// 004ff021  d9c0                 fld st(0)
// 004ff023  deca                 fmulp st(2)
// 004ff025  d9cb                 fxch st(3)
// 004ff027  dec1                 faddp st(1)
// 004ff029  deeb                 fsubp st(3)
// 004ff02b  d9ca                 fxch st(2)
// 004ff02d  d95c2408             fstp dword ptr [esp + 8]
// 004ff031  d9442408             fld dword ptr [esp + 8]
// 004ff035  d95608               fst dword ptr [esi + 8]
// 004ff038  d94614               fld dword ptr [esi + 0x14]
// 004ff03b  d94610               fld dword ptr [esi + 0x10]
// 004ff03e  d8cc                 fmul st(4)
// 004ff040  d9c3                 fld st(3)
// 004ff042  d84e0c               fmul dword ptr [esi + 0xc]
// 004ff045  dec1                 faddp st(1)
// 004ff047  dee9                 fsubp st(1)
// 004ff049  d95c2408             fstp dword ptr [esp + 8]
// 004ff04d  d9442408             fld dword ptr [esp + 8]
// 004ff051  d95614               fst dword ptr [esi + 0x14]
// 004ff054  d94620               fld dword ptr [esi + 0x20]
// 004ff057  d94618               fld dword ptr [esi + 0x18]
// 004ff05a  decc                 fmulp st(4)
// 004ff05c  d9461c               fld dword ptr [esi + 0x1c]
// 004ff05f  decd                 fmulp st(5)
// 004ff061  d9cb                 fxch st(3)
// 004ff063  dec4                 faddp st(4)
// 004ff065  d9ca                 fxch st(2)
// 004ff067  dee3                 fsubrp st(3)
// 004ff069  d9ca                 fxch st(2)
// 004ff06b  d95c2408             fstp dword ptr [esp + 8]
// 004ff06f  d9442408             fld dword ptr [esp + 8]
// 004ff073  d95620               fst dword ptr [esi + 0x20]
// 004ff076  d9c2                 fld st(2)
// 004ff078  decb                 fmulp st(3)
// 004ff07a  d9c1                 fld st(1)
// 004ff07c  deca                 fmulp st(2)
// 004ff07e  d9ca                 fxch st(2)
// 004ff080  dec1                 faddp st(1)
// 004ff082  d9c1                 fld st(1)
// 004ff084  deca                 fmulp st(2)
// 004ff086  dec1                 faddp st(1)
// 004ff088  d95c2408             fstp dword ptr [esp + 8]
// 004ff08c  d9442408             fld dword ptr [esp + 8]
// 004ff090  e817021200           call 0x61f2ac
// 004ff095  d95c2408             fstp dword ptr [esp + 8]
// 004ff099  d9442408             fld dword ptr [esp + 8]
// 004ff09d  d9e8                 fld1 
// 004ff09f  def1                 fdivrp st(1)
// 004ff0a1  d95c2404             fstp dword ptr [esp + 4]
// 004ff0a5  d94608               fld dword ptr [esi + 8]
// 004ff0a8  d9442404             fld dword ptr [esp + 4]
// 004ff0ac  d9c0                 fld st(0)
// 004ff0ae  deca                 fmulp st(2)
// 004ff0b0  d9c9                 fxch st(1)
// 004ff0b2  d95e08               fstp dword ptr [esi + 8]
// 004ff0b5  d94614               fld dword ptr [esi + 0x14]
// 004ff0b8  d8c9                 fmul st(1)
// 004ff0ba  d95e14               fstp dword ptr [esi + 0x14]
// 004ff0bd  d84e20               fmul dword ptr [esi + 0x20]
// 004ff0c0  d95e20               fstp dword ptr [esi + 0x20]
// 004ff0c3  5e                   pop esi
// 004ff0c4  83c408               add esp, 8
// 004ff0c7  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ?orthonormalize@Matrix3@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
