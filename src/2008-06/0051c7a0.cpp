// roc 2008-06 0051c7a0  unit: G3D::_internal::DialogTemplate  size: 827 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051c7a0
//
// 0051c7a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051c7a4  85c9                 test ecx, ecx
// 0051c7a6  0f842e030000         je 0x51cada
// 0051c7ac  56                   push esi
// 0051c7ad  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051c7b1  85f6                 test esi, esi
// 0051c7b3  0f8420030000         je 0x51cad9
// 0051c7b9  d9ee                 fldz 
// 0051c7bb  dd442410             fld qword ptr [esp + 0x10]
// 0051c7bf  d8d1                 fcom st(1)
// 0051c7c1  dfe0                 fnstsw ax
// 0051c7c3  f6c405               test ah, 5
// 0051c7c6  0f8bfb020000         jnp 0x51cac7
// 0051c7cc  dd442418             fld qword ptr [esp + 0x18]
// 0051c7d0  d8d2                 fcom st(2)
// 0051c7d2  dfe0                 fnstsw ax
// 0051c7d4  f6c405               test ah, 5
// 0051c7d7  0f8b96020000         jnp 0x51ca73
// 0051c7dd  d9ca                 fxch st(2)
// 0051c7df  dc542420             fcom qword ptr [esp + 0x20]
// 0051c7e3  dfe0                 fnstsw ax
// 0051c7e5  f6c441               test ah, 0x41
// 0051c7e8  0f84bb020000         je 0x51caa9
// 0051c7ee  dc542428             fcom qword ptr [esp + 0x28]
// 0051c7f2  dfe0                 fnstsw ax
// 0051c7f4  f6c441               test ah, 0x41
// 0051c7f7  0f84ac020000         je 0x51caa9
// 0051c7fd  dd442430             fld qword ptr [esp + 0x30]
// 0051c801  d8d1                 fcom st(1)
// 0051c803  dfe0                 fnstsw ax
// 0051c805  f6c405               test ah, 5
// 0051c808  0f8bb5020000         jnp 0x51cac3
// 0051c80e  dd442438             fld qword ptr [esp + 0x38]
// 0051c812  d8d2                 fcom st(2)
// 0051c814  dfe0                 fnstsw ax
// 0051c816  f6c405               test ah, 5
// 0051c819  0f8b6a020000         jnp 0x51ca89
// 0051c81f  dd442440             fld qword ptr [esp + 0x40]
// 0051c823  d8d3                 fcom st(3)
// 0051c825  dfe0                 fnstsw ax
// 0051c827  f6c405               test ah, 5
// 0051c82a  0f8b73020000         jnp 0x51caa3
// 0051c830  dd442448             fld qword ptr [esp + 0x48]
// 0051c834  d8d4                 fcom st(4)
// 0051c836  dfe0                 fnstsw ax
// 0051c838  dddc                 fstp st(4)
// 0051c83a  f6c405               test ah, 5
// 0051c83d  0f8b7c020000         jnp 0x51cabf
// 0051c843  dd05788f8200         fld qword ptr [0x828f78]
// 0051c849  d8d5                 fcom st(5)
// 0051c84b  dfe0                 fnstsw ax
// 0051c84d  f6c405               test ah, 5
// 0051c850  0f8b4f010000         jnp 0x51c9a5
// 0051c856  d8d6                 fcom st(6)
// 0051c858  dfe0                 fnstsw ax
// 0051c85a  ddde                 fstp st(6)
// 0051c85c  f6c405               test ah, 5
// 0051c85f  0f8b5e010000         jnp 0x51c9c3
// 0051c865  d9cd                 fxch st(5)
// 0051c867  dc542420             fcom qword ptr [esp + 0x20]
// 0051c86b  dfe0                 fnstsw ax
// 0051c86d  f6c405               test ah, 5
// 0051c870  0f8b69010000         jnp 0x51c9df
// 0051c876  dd442428             fld qword ptr [esp + 0x28]
// 0051c87a  d8d1                 fcom st(1)
// 0051c87c  dfe0                 fnstsw ax
// 0051c87e  f6c441               test ah, 0x41
// 0051c881  0f8474010000         je 0x51c9fb
// 0051c887  d9cb                 fxch st(3)
// 0051c889  d8d1                 fcom st(1)
// 0051c88b  dfe0                 fnstsw ax
// 0051c88d  f6c441               test ah, 0x41
// 0051c890  0f8483010000         je 0x51ca19
// 0051c896  d9ca                 fxch st(2)
// 0051c898  d8d1                 fcom st(1)
// 0051c89a  dfe0                 fnstsw ax
// 0051c89c  f6c441               test ah, 0x41
// 0051c89f  0f8492010000         je 0x51ca37
// 0051c8a5  d9ce                 fxch st(6)
// 0051c8a7  d8d1                 fcom st(1)
// 0051c8a9  dfe0                 fnstsw ax
// 0051c8ab  f6c441               test ah, 0x41
// 0051c8ae  0f84a1010000         je 0x51ca55
// 0051c8b4  d9c9                 fxch st(1)
// 0051c8b6  d8dc                 fcomp st(4)
// 0051c8b8  dfe0                 fnstsw ax
// 0051c8ba  f6c405               test ah, 5
// 0051c8bd  0f8b94010000         jnp 0x51ca57
// 0051c8c3  d9cc                 fxch st(4)
// 0051c8c5  d99680000000         fst dword ptr [esi + 0x80]
// 0051c8cb  dd442418             fld qword ptr [esp + 0x18]
// 0051c8cf  d99e84000000         fstp dword ptr [esi + 0x84]
// 0051c8d5  dd442420             fld qword ptr [esp + 0x20]
// 0051c8d9  d99e88000000         fstp dword ptr [esi + 0x88]
// 0051c8df  d9ca                 fxch st(2)
// 0051c8e1  d99e8c000000         fstp dword ptr [esi + 0x8c]
// 0051c8e7  d99690000000         fst dword ptr [esi + 0x90]
// 0051c8ed  d9cc                 fxch st(4)
// 0051c8ef  d99694000000         fst dword ptr [esi + 0x94]
// 0051c8f5  d9cb                 fxch st(3)
// 0051c8f7  d99698000000         fst dword ptr [esi + 0x98]
// 0051c8fd  d9ca                 fxch st(2)
// 0051c8ff  d9969c000000         fst dword ptr [esi + 0x9c]
// 0051c905  dd05708f8200         fld qword ptr [0x828f70]
// 0051c90b  dcca                 fmul st(2), st(0)
// 0051c90d  dd0538e78100         fld qword ptr [0x81e738]
// 0051c913  dcc3                 fadd st(3), st(0)
// 0051c915  d9cb                 fxch st(3)
// 0051c917  e8d44e1800           call 0x6a17f0
// 0051c91c  dd442418             fld qword ptr [esp + 0x18]
// 0051c920  d8c9                 fmul st(1)
// 0051c922  898600010000         mov dword ptr [esi + 0x100], eax
// 0051c928  d8c3                 fadd st(3)
// 0051c92a  e8c14e1800           call 0x6a17f0
// 0051c92f  dd442420             fld qword ptr [esp + 0x20]
// 0051c933  d8c9                 fmul st(1)
// 0051c935  898604010000         mov dword ptr [esi + 0x104], eax
// 0051c93b  d8c3                 fadd st(3)
// 0051c93d  e8ae4e1800           call 0x6a17f0
// 0051c942  dd442428             fld qword ptr [esp + 0x28]
// 0051c946  d8c9                 fmul st(1)
// 0051c948  898608010000         mov dword ptr [esi + 0x108], eax
// 0051c94e  d8c3                 fadd st(3)
// 0051c950  e89b4e1800           call 0x6a17f0
// 0051c955  dccd                 fmul st(5), st(0)
// 0051c957  d9cd                 fxch st(5)
// 0051c959  89860c010000         mov dword ptr [esi + 0x10c], eax
// 0051c95f  d8c2                 fadd st(2)
// 0051c961  e88a4e1800           call 0x6a17f0
// 0051c966  d9cb                 fxch st(3)
// 0051c968  d8cc                 fmul st(4)
// 0051c96a  898610010000         mov dword ptr [esi + 0x110], eax
// 0051c970  d8c1                 fadd st(1)
// 0051c972  e8794e1800           call 0x6a17f0
// 0051c977  d9c9                 fxch st(1)
// 0051c979  d8cb                 fmul st(3)
// 0051c97b  898614010000         mov dword ptr [esi + 0x114], eax
// 0051c981  d8c1                 fadd st(1)
// 0051c983  e8684e1800           call 0x6a17f0
// 0051c988  d9c9                 fxch st(1)
// 0051c98a  deca                 fmulp st(2)
// 0051c98c  898618010000         mov dword ptr [esi + 0x118], eax
// 0051c992  dec1                 faddp st(1)
// 0051c994  e8574e1800           call 0x6a17f0
// 0051c999  834e0804             or dword ptr [esi + 8], 4
// 0051c99d  89861c010000         mov dword ptr [esi + 0x11c], eax
// 0051c9a3  5e                   pop esi
// 0051c9a4  c3                   ret 
// 0051c9a5  ddd8                 fstp st(0)
// 0051c9a7  682c8f8200           push 0x828f2c
// 0051c9ac  dddc                 fstp st(4)
// 0051c9ae  51                   push ecx
// 0051c9af  dddc                 fstp st(4)
// 0051c9b1  ddd9                 fstp st(1)
// 0051c9b3  ddd9                 fstp st(1)
// 0051c9b5  ddd9                 fstp st(1)
// 0051c9b7  ddd8                 fstp st(0)
// 0051c9b9  e892d00000           call 0x529a50
// 0051c9be  83c408               add esp, 8
// 0051c9c1  5e                   pop esi
// 0051c9c2  c3                   ret 
// 0051c9c3  dddd                 fstp st(5)
// 0051c9c5  682c8f8200           push 0x828f2c
// 0051c9ca  dddb                 fstp st(3)
// 0051c9cc  51                   push ecx
// 0051c9cd  ddd9                 fstp st(1)
// 0051c9cf  ddda                 fstp st(2)
// 0051c9d1  ddd8                 fstp st(0)
// 0051c9d3  ddd8                 fstp st(0)
// 0051c9d5  e876d00000           call 0x529a50
// 0051c9da  83c408               add esp, 8
// 0051c9dd  5e                   pop esi
// 0051c9de  c3                   ret 
// 0051c9df  ddd8                 fstp st(0)
// 0051c9e1  682c8f8200           push 0x828f2c
// 0051c9e6  dddb                 fstp st(3)
// 0051c9e8  51                   push ecx
// 0051c9e9  ddd9                 fstp st(1)
// 0051c9eb  ddda                 fstp st(2)
// 0051c9ed  ddd8                 fstp st(0)
// 0051c9ef  ddd8                 fstp st(0)
// 0051c9f1  e85ad00000           call 0x529a50
// 0051c9f6  83c408               add esp, 8
// 0051c9f9  5e                   pop esi
// 0051c9fa  c3                   ret 
// 0051c9fb  ddd9                 fstp st(1)
// 0051c9fd  682c8f8200           push 0x828f2c
// 0051ca02  dddc                 fstp st(4)
// 0051ca04  51                   push ecx
// 0051ca05  dddb                 fstp st(3)
// 0051ca07  ddd9                 fstp st(1)
// 0051ca09  ddda                 fstp st(2)
// 0051ca0b  ddd8                 fstp st(0)
// 0051ca0d  ddd8                 fstp st(0)
// 0051ca0f  e83cd00000           call 0x529a50
// 0051ca14  83c408               add esp, 8
// 0051ca17  5e                   pop esi
// 0051ca18  c3                   ret 
// 0051ca19  ddd9                 fstp st(1)
// 0051ca1b  682c8f8200           push 0x828f2c
// 0051ca20  dddc                 fstp st(4)
// 0051ca22  51                   push ecx
// 0051ca23  ddd9                 fstp st(1)
// 0051ca25  ddd9                 fstp st(1)
// 0051ca27  ddda                 fstp st(2)
// 0051ca29  ddd9                 fstp st(1)
// 0051ca2b  ddd8                 fstp st(0)
// 0051ca2d  e81ed00000           call 0x529a50
// 0051ca32  83c408               add esp, 8
// 0051ca35  5e                   pop esi
// 0051ca36  c3                   ret 
// 0051ca37  ddd9                 fstp st(1)
// 0051ca39  682c8f8200           push 0x828f2c
// 0051ca3e  dddc                 fstp st(4)
// 0051ca40  51                   push ecx
// 0051ca41  ddd9                 fstp st(1)
// 0051ca43  ddd9                 fstp st(1)
// 0051ca45  ddda                 fstp st(2)
// 0051ca47  ddd8                 fstp st(0)
// 0051ca49  ddd8                 fstp st(0)
// 0051ca4b  e800d00000           call 0x529a50
// 0051ca50  83c408               add esp, 8
// 0051ca53  5e                   pop esi
// 0051ca54  c3                   ret 
// 0051ca55  ddd9                 fstp st(1)
// 0051ca57  dddc                 fstp st(4)
// 0051ca59  682c8f8200           push 0x828f2c
// 0051ca5e  ddd9                 fstp st(1)
// 0051ca60  51                   push ecx
// 0051ca61  ddd9                 fstp st(1)
// 0051ca63  ddd9                 fstp st(1)
// 0051ca65  ddd9                 fstp st(1)
// 0051ca67  ddd8                 fstp st(0)
// 0051ca69  e8e2cf0000           call 0x529a50
// 0051ca6e  83c408               add esp, 8
// 0051ca71  5e                   pop esi
// 0051ca72  c3                   ret 
// 0051ca73  ddda                 fstp st(2)
// 0051ca75  68f88e8200           push 0x828ef8
// 0051ca7a  ddd8                 fstp st(0)
// 0051ca7c  51                   push ecx
// 0051ca7d  ddd8                 fstp st(0)
// 0051ca7f  e8cccf0000           call 0x529a50
// 0051ca84  83c408               add esp, 8
// 0051ca87  5e                   pop esi
// 0051ca88  c3                   ret 
// 0051ca89  ddda                 fstp st(2)
// 0051ca8b  68f88e8200           push 0x828ef8
// 0051ca90  ddda                 fstp st(2)
// 0051ca92  51                   push ecx
// 0051ca93  ddda                 fstp st(2)
// 0051ca95  ddd9                 fstp st(1)
// 0051ca97  ddd8                 fstp st(0)
// 0051ca99  e8b2cf0000           call 0x529a50
// 0051ca9e  83c408               add esp, 8
// 0051caa1  5e                   pop esi
// 0051caa2  c3                   ret 
// 0051caa3  dddb                 fstp st(3)
// 0051caa5  dddb                 fstp st(3)
// 0051caa7  dddb                 fstp st(3)
// 0051caa9  ddd8                 fstp st(0)
// 0051caab  68f88e8200           push 0x828ef8
// 0051cab0  ddd8                 fstp st(0)
// 0051cab2  51                   push ecx
// 0051cab3  ddd8                 fstp st(0)
// 0051cab5  e896cf0000           call 0x529a50
// 0051caba  83c408               add esp, 8
// 0051cabd  5e                   pop esi
// 0051cabe  c3                   ret 
// 0051cabf  dddc                 fstp st(4)
// 0051cac1  dddc                 fstp st(4)
// 0051cac3  ddd9                 fstp st(1)
// 0051cac5  ddd9                 fstp st(1)
// 0051cac7  68f88e8200           push 0x828ef8
// 0051cacc  ddd9                 fstp st(1)
// 0051cace  51                   push ecx
// 0051cacf  ddd8                 fstp st(0)
// 0051cad1  e87acf0000           call 0x529a50
// 0051cad6  83c408               add esp, 8
// 0051cad9  5e                   pop esi
// 0051cada  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_cHRM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
