// from server: 100% by auto
// roc 2007-08 00513990  unit: G3D::_internal::DialogTemplate  size: 827 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513990
//
// 00513990  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00513994  85c9                 test ecx, ecx
// 00513996  0f842e030000         je 0x513cca
// 0051399c  56                   push esi
// 0051399d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005139a1  85f6                 test esi, esi
// 005139a3  0f8420030000         je 0x513cc9
// 005139a9  d9ee                 fldz 
// 005139ab  dd442410             fld qword ptr [esp + 0x10]
// 005139af  d8d1                 fcom st(1)
// 005139b1  dfe0                 fnstsw ax
// 005139b3  f6c405               test ah, 5
// 005139b6  0f8bfb020000         jnp 0x513cb7
// 005139bc  dd442418             fld qword ptr [esp + 0x18]
// 005139c0  d8d2                 fcom st(2)
// 005139c2  dfe0                 fnstsw ax
// 005139c4  f6c405               test ah, 5
// 005139c7  0f8b96020000         jnp 0x513c63
// 005139cd  d9ca                 fxch st(2)
// 005139cf  dc542420             fcom qword ptr [esp + 0x20]
// 005139d3  dfe0                 fnstsw ax
// 005139d5  f6c441               test ah, 0x41
// 005139d8  0f84bb020000         je 0x513c99
// 005139de  dc542428             fcom qword ptr [esp + 0x28]
// 005139e2  dfe0                 fnstsw ax
// 005139e4  f6c441               test ah, 0x41
// 005139e7  0f84ac020000         je 0x513c99
// 005139ed  dd442430             fld qword ptr [esp + 0x30]
// 005139f1  d8d1                 fcom st(1)
// 005139f3  dfe0                 fnstsw ax
// 005139f5  f6c405               test ah, 5
// 005139f8  0f8bb5020000         jnp 0x513cb3
// 005139fe  dd442438             fld qword ptr [esp + 0x38]
// 00513a02  d8d2                 fcom st(2)
// 00513a04  dfe0                 fnstsw ax
// 00513a06  f6c405               test ah, 5
// 00513a09  0f8b6a020000         jnp 0x513c79
// 00513a0f  dd442440             fld qword ptr [esp + 0x40]
// 00513a13  d8d3                 fcom st(3)
// 00513a15  dfe0                 fnstsw ax
// 00513a17  f6c405               test ah, 5
// 00513a1a  0f8b73020000         jnp 0x513c93
// 00513a20  dd442448             fld qword ptr [esp + 0x48]
// 00513a24  d8d4                 fcom st(4)
// 00513a26  dfe0                 fnstsw ax
// 00513a28  dddc                 fstp st(4)
// 00513a2a  f6c405               test ah, 5
// 00513a2d  0f8b7c020000         jnp 0x513caf
// 00513a33  dd0550117a00         fld qword ptr [0x7a1150]
// 00513a39  d8d5                 fcom st(5)
// 00513a3b  dfe0                 fnstsw ax
// 00513a3d  f6c405               test ah, 5
// 00513a40  0f8b4f010000         jnp 0x513b95
// 00513a46  d8d6                 fcom st(6)
// 00513a48  dfe0                 fnstsw ax
// 00513a4a  ddde                 fstp st(6)
// 00513a4c  f6c405               test ah, 5
// 00513a4f  0f8b5e010000         jnp 0x513bb3
// 00513a55  d9cd                 fxch st(5)
// 00513a57  dc542420             fcom qword ptr [esp + 0x20]
// 00513a5b  dfe0                 fnstsw ax
// 00513a5d  f6c405               test ah, 5
// 00513a60  0f8b69010000         jnp 0x513bcf
// 00513a66  dd442428             fld qword ptr [esp + 0x28]
// 00513a6a  d8d1                 fcom st(1)
// 00513a6c  dfe0                 fnstsw ax
// 00513a6e  f6c441               test ah, 0x41
// 00513a71  0f8474010000         je 0x513beb
// 00513a77  d9cb                 fxch st(3)
// 00513a79  d8d1                 fcom st(1)
// 00513a7b  dfe0                 fnstsw ax
// 00513a7d  f6c441               test ah, 0x41
// 00513a80  0f8483010000         je 0x513c09
// 00513a86  d9ca                 fxch st(2)
// 00513a88  d8d1                 fcom st(1)
// 00513a8a  dfe0                 fnstsw ax
// 00513a8c  f6c441               test ah, 0x41
// 00513a8f  0f8492010000         je 0x513c27
// 00513a95  d9ce                 fxch st(6)
// 00513a97  d8d1                 fcom st(1)
// 00513a99  dfe0                 fnstsw ax
// 00513a9b  f6c441               test ah, 0x41
// 00513a9e  0f84a1010000         je 0x513c45
// 00513aa4  d9c9                 fxch st(1)
// 00513aa6  d8dc                 fcomp st(4)
// 00513aa8  dfe0                 fnstsw ax
// 00513aaa  f6c405               test ah, 5
// 00513aad  0f8b94010000         jnp 0x513c47
// 00513ab3  d9cc                 fxch st(4)
// 00513ab5  d99680000000         fst dword ptr [esi + 0x80]
// 00513abb  dd442418             fld qword ptr [esp + 0x18]
// 00513abf  d99e84000000         fstp dword ptr [esi + 0x84]
// 00513ac5  dd442420             fld qword ptr [esp + 0x20]
// 00513ac9  d99e88000000         fstp dword ptr [esi + 0x88]
// 00513acf  d9ca                 fxch st(2)
// 00513ad1  d99e8c000000         fstp dword ptr [esi + 0x8c]
// 00513ad7  d99690000000         fst dword ptr [esi + 0x90]
// 00513add  d9cc                 fxch st(4)
// 00513adf  d99694000000         fst dword ptr [esi + 0x94]
// 00513ae5  d9cb                 fxch st(3)
// 00513ae7  d99698000000         fst dword ptr [esi + 0x98]
// 00513aed  d9ca                 fxch st(2)
// 00513aef  d9969c000000         fst dword ptr [esi + 0x9c]
// 00513af5  dd0548117a00         fld qword ptr [0x7a1148]
// 00513afb  dcca                 fmul st(2), st(0)
// 00513afd  dd05485b7900         fld qword ptr [0x795b48]
// 00513b03  dcc3                 fadd st(3), st(0)
// 00513b05  d9cb                 fxch st(3)
// 00513b07  e854d21100           call 0x630d60
// 00513b0c  dd442418             fld qword ptr [esp + 0x18]
// 00513b10  d8c9                 fmul st(1)
// 00513b12  898600010000         mov dword ptr [esi + 0x100], eax
// 00513b18  d8c3                 fadd st(3)
// 00513b1a  e841d21100           call 0x630d60
// 00513b1f  dd442420             fld qword ptr [esp + 0x20]
// 00513b23  d8c9                 fmul st(1)
// 00513b25  898604010000         mov dword ptr [esi + 0x104], eax
// 00513b2b  d8c3                 fadd st(3)
// 00513b2d  e82ed21100           call 0x630d60
// 00513b32  dd442428             fld qword ptr [esp + 0x28]
// 00513b36  d8c9                 fmul st(1)
// 00513b38  898608010000         mov dword ptr [esi + 0x108], eax
// 00513b3e  d8c3                 fadd st(3)
// 00513b40  e81bd21100           call 0x630d60
// 00513b45  dccd                 fmul st(5), st(0)
// 00513b47  d9cd                 fxch st(5)
// 00513b49  89860c010000         mov dword ptr [esi + 0x10c], eax
// 00513b4f  d8c2                 fadd st(2)
// 00513b51  e80ad21100           call 0x630d60
// 00513b56  d9cb                 fxch st(3)
// 00513b58  d8cc                 fmul st(4)
// 00513b5a  898610010000         mov dword ptr [esi + 0x110], eax
// 00513b60  d8c1                 fadd st(1)
// 00513b62  e8f9d11100           call 0x630d60
// 00513b67  d9c9                 fxch st(1)
// 00513b69  d8cb                 fmul st(3)
// 00513b6b  898614010000         mov dword ptr [esi + 0x114], eax
// 00513b71  d8c1                 fadd st(1)
// 00513b73  e8e8d11100           call 0x630d60
// 00513b78  d9c9                 fxch st(1)
// 00513b7a  deca                 fmulp st(2)
// 00513b7c  898618010000         mov dword ptr [esi + 0x118], eax
// 00513b82  dec1                 faddp st(1)
// 00513b84  e8d7d11100           call 0x630d60
// 00513b89  834e0804             or dword ptr [esi + 8], 4
// 00513b8d  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00513b93  5e                   pop esi
// 00513b94  c3                   ret 
// 00513b95  ddd8                 fstp st(0)
// 00513b97  6804117a00           push 0x7a1104
// 00513b9c  dddc                 fstp st(4)
// 00513b9e  51                   push ecx
// 00513b9f  dddc                 fstp st(4)
// 00513ba1  ddd9                 fstp st(1)
// 00513ba3  ddd9                 fstp st(1)
// 00513ba5  ddd9                 fstp st(1)
// 00513ba7  ddd8                 fstp st(0)
// 00513ba9  e8e2ad0000           call 0x51e990
// 00513bae  83c408               add esp, 8
// 00513bb1  5e                   pop esi
// 00513bb2  c3                   ret 
// 00513bb3  dddd                 fstp st(5)
// 00513bb5  6804117a00           push 0x7a1104
// 00513bba  dddb                 fstp st(3)
// 00513bbc  51                   push ecx
// 00513bbd  ddd9                 fstp st(1)
// 00513bbf  ddda                 fstp st(2)
// 00513bc1  ddd8                 fstp st(0)
// 00513bc3  ddd8                 fstp st(0)
// 00513bc5  e8c6ad0000           call 0x51e990
// 00513bca  83c408               add esp, 8
// 00513bcd  5e                   pop esi
// 00513bce  c3                   ret 
// 00513bcf  ddd8                 fstp st(0)
// 00513bd1  6804117a00           push 0x7a1104
// 00513bd6  dddb                 fstp st(3)
// 00513bd8  51                   push ecx
// 00513bd9  ddd9                 fstp st(1)
// 00513bdb  ddda                 fstp st(2)
// 00513bdd  ddd8                 fstp st(0)
// 00513bdf  ddd8                 fstp st(0)
// 00513be1  e8aaad0000           call 0x51e990
// 00513be6  83c408               add esp, 8
// 00513be9  5e                   pop esi
// 00513bea  c3                   ret 
// 00513beb  ddd9                 fstp st(1)
// 00513bed  6804117a00           push 0x7a1104
// 00513bf2  dddc                 fstp st(4)
// 00513bf4  51                   push ecx
// 00513bf5  dddb                 fstp st(3)
// 00513bf7  ddd9                 fstp st(1)
// 00513bf9  ddda                 fstp st(2)
// 00513bfb  ddd8                 fstp st(0)
// 00513bfd  ddd8                 fstp st(0)
// 00513bff  e88cad0000           call 0x51e990
// 00513c04  83c408               add esp, 8
// 00513c07  5e                   pop esi
// 00513c08  c3                   ret 
// 00513c09  ddd9                 fstp st(1)
// 00513c0b  6804117a00           push 0x7a1104
// 00513c10  dddc                 fstp st(4)
// 00513c12  51                   push ecx
// 00513c13  ddd9                 fstp st(1)
// 00513c15  ddd9                 fstp st(1)
// 00513c17  ddda                 fstp st(2)
// 00513c19  ddd9                 fstp st(1)
// 00513c1b  ddd8                 fstp st(0)
// 00513c1d  e86ead0000           call 0x51e990
// 00513c22  83c408               add esp, 8
// 00513c25  5e                   pop esi
// 00513c26  c3                   ret 
// 00513c27  ddd9                 fstp st(1)
// 00513c29  6804117a00           push 0x7a1104
// 00513c2e  dddc                 fstp st(4)
// 00513c30  51                   push ecx
// 00513c31  ddd9                 fstp st(1)
// 00513c33  ddd9                 fstp st(1)
// 00513c35  ddda                 fstp st(2)
// 00513c37  ddd8                 fstp st(0)
// 00513c39  ddd8                 fstp st(0)
// 00513c3b  e850ad0000           call 0x51e990
// 00513c40  83c408               add esp, 8
// 00513c43  5e                   pop esi
// 00513c44  c3                   ret 
// 00513c45  ddd9                 fstp st(1)
// 00513c47  dddc                 fstp st(4)
// 00513c49  6804117a00           push 0x7a1104
// 00513c4e  ddd9                 fstp st(1)
// 00513c50  51                   push ecx
// 00513c51  ddd9                 fstp st(1)
// 00513c53  ddd9                 fstp st(1)
// 00513c55  ddd9                 fstp st(1)
// 00513c57  ddd8                 fstp st(0)
// 00513c59  e832ad0000           call 0x51e990
// 00513c5e  83c408               add esp, 8
// 00513c61  5e                   pop esi
// 00513c62  c3                   ret 
// 00513c63  ddda                 fstp st(2)
// 00513c65  68d0107a00           push 0x7a10d0
// 00513c6a  ddd8                 fstp st(0)
// 00513c6c  51                   push ecx
// 00513c6d  ddd8                 fstp st(0)
// 00513c6f  e81cad0000           call 0x51e990
// 00513c74  83c408               add esp, 8
// 00513c77  5e                   pop esi
// 00513c78  c3                   ret 
// 00513c79  ddda                 fstp st(2)
// 00513c7b  68d0107a00           push 0x7a10d0
// 00513c80  ddda                 fstp st(2)
// 00513c82  51                   push ecx
// 00513c83  ddda                 fstp st(2)
// 00513c85  ddd9                 fstp st(1)
// 00513c87  ddd8                 fstp st(0)
// 00513c89  e802ad0000           call 0x51e990
// 00513c8e  83c408               add esp, 8
// 00513c91  5e                   pop esi
// 00513c92  c3                   ret 
// 00513c93  dddb                 fstp st(3)
// 00513c95  dddb                 fstp st(3)
// 00513c97  dddb                 fstp st(3)
// 00513c99  ddd8                 fstp st(0)
// 00513c9b  68d0107a00           push 0x7a10d0
// 00513ca0  ddd8                 fstp st(0)
// 00513ca2  51                   push ecx
// 00513ca3  ddd8                 fstp st(0)
// 00513ca5  e8e6ac0000           call 0x51e990
// 00513caa  83c408               add esp, 8
// 00513cad  5e                   pop esi
// 00513cae  c3                   ret 
// 00513caf  dddc                 fstp st(4)
// 00513cb1  dddc                 fstp st(4)
// 00513cb3  ddd9                 fstp st(1)
// 00513cb5  ddd9                 fstp st(1)
// 00513cb7  68d0107a00           push 0x7a10d0
// 00513cbc  ddd9                 fstp st(1)
// 00513cbe  51                   push ecx
// 00513cbf  ddd8                 fstp st(0)
// 00513cc1  e8caac0000           call 0x51e990
// 00513cc6  83c408               add esp, 8
// 00513cc9  5e                   pop esi
// 00513cca  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_cHRM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
