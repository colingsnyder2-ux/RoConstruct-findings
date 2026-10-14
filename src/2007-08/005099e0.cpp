// roc 2007-08 005099e0  unit: G3D::GCamera  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005099e0
//
// 005099e0  83ec08               sub esp, 8
// 005099e3  56                   push esi
// 005099e4  8bf1                 mov esi, ecx
// 005099e6  d9460c               fld dword ptr [esi + 0xc]
// 005099e9  d906                 fld dword ptr [esi]
// 005099eb  d94618               fld dword ptr [esi + 0x18]
// 005099ee  d9c1                 fld st(1)
// 005099f0  deca                 fmulp st(2)
// 005099f2  d9c2                 fld st(2)
// 005099f4  decb                 fmulp st(3)
// 005099f6  d9c9                 fxch st(1)
// 005099f8  dec2                 faddp st(2)
// 005099fa  dcc8                 fmul st(0), st(0)
// 005099fc  dec1                 faddp st(1)
// 005099fe  d95c2404             fstp dword ptr [esp + 4]
// 00509a02  d9442404             fld dword ptr [esp + 4]
// 00509a06  e801741200           call 0x630e0c
// 00509a0b  d95c2404             fstp dword ptr [esp + 4]
// 00509a0f  d9442404             fld dword ptr [esp + 4]
// 00509a13  d9e8                 fld1 
// 00509a15  def1                 fdivrp st(1)
// 00509a17  d95c2404             fstp dword ptr [esp + 4]
// 00509a1b  d906                 fld dword ptr [esi]
// 00509a1d  d9442404             fld dword ptr [esp + 4]
// 00509a21  d9c0                 fld st(0)
// 00509a23  deca                 fmulp st(2)
// 00509a25  d9c9                 fxch st(1)
// 00509a27  d95c2404             fstp dword ptr [esp + 4]
// 00509a2b  d9442404             fld dword ptr [esp + 4]
// 00509a2f  d916                 fst dword ptr [esi]
// 00509a31  d9c1                 fld st(1)
// 00509a33  d84e0c               fmul dword ptr [esi + 0xc]
// 00509a36  d95c2404             fstp dword ptr [esp + 4]
// 00509a3a  d9442404             fld dword ptr [esp + 4]
// 00509a3e  d9560c               fst dword ptr [esi + 0xc]
// 00509a41  d94618               fld dword ptr [esi + 0x18]
// 00509a44  decb                 fmulp st(3)
// 00509a46  d9ca                 fxch st(2)
// 00509a48  d95c2404             fstp dword ptr [esp + 4]
// 00509a4c  d9442404             fld dword ptr [esp + 4]
// 00509a50  d95618               fst dword ptr [esi + 0x18]
// 00509a53  d94604               fld dword ptr [esi + 4]
// 00509a56  d8ca                 fmul st(2)
// 00509a58  d9c3                 fld st(3)
// 00509a5a  d84e10               fmul dword ptr [esi + 0x10]
// 00509a5d  dec1                 faddp st(1)
// 00509a5f  d9c1                 fld st(1)
// 00509a61  d84e1c               fmul dword ptr [esi + 0x1c]
// 00509a64  dec1                 faddp st(1)
// 00509a66  d95c2404             fstp dword ptr [esp + 4]
// 00509a6a  d94604               fld dword ptr [esi + 4]
// 00509a6d  d9442404             fld dword ptr [esp + 4]
// 00509a71  d9c0                 fld st(0)
// 00509a73  decc                 fmulp st(4)
// 00509a75  d9c9                 fxch st(1)
// 00509a77  dee3                 fsubrp st(3)
// 00509a79  d9ca                 fxch st(2)
// 00509a7b  d95c2404             fstp dword ptr [esp + 4]
// 00509a7f  d9442404             fld dword ptr [esp + 4]
// 00509a83  d95604               fst dword ptr [esi + 4]
// 00509a86  d94610               fld dword ptr [esi + 0x10]
// 00509a89  d9c3                 fld st(3)
// 00509a8b  decd                 fmulp st(5)
// 00509a8d  dee4                 fsubrp st(4)
// 00509a8f  d9cb                 fxch st(3)
// 00509a91  d95c2404             fstp dword ptr [esp + 4]
// 00509a95  d9442404             fld dword ptr [esp + 4]
// 00509a99  d95610               fst dword ptr [esi + 0x10]
// 00509a9c  d9461c               fld dword ptr [esi + 0x1c]
// 00509a9f  d9ca                 fxch st(2)
// 00509aa1  decb                 fmulp st(3)
// 00509aa3  d9c9                 fxch st(1)
// 00509aa5  dee2                 fsubrp st(2)
// 00509aa7  d9c9                 fxch st(1)
// 00509aa9  d95c2404             fstp dword ptr [esp + 4]
// 00509aad  d9442404             fld dword ptr [esp + 4]
// 00509ab1  d9561c               fst dword ptr [esi + 0x1c]
// 00509ab4  d9c2                 fld st(2)
// 00509ab6  decb                 fmulp st(3)
// 00509ab8  d9c1                 fld st(1)
// 00509aba  deca                 fmulp st(2)
// 00509abc  d9ca                 fxch st(2)
// 00509abe  dec1                 faddp st(1)
// 00509ac0  d9c1                 fld st(1)
// 00509ac2  deca                 fmulp st(2)
// 00509ac4  dec1                 faddp st(1)
// 00509ac6  d95c2404             fstp dword ptr [esp + 4]
// 00509aca  d9442404             fld dword ptr [esp + 4]
// 00509ace  e839731200           call 0x630e0c
// 00509ad3  d95c2404             fstp dword ptr [esp + 4]
// 00509ad7  d9442404             fld dword ptr [esp + 4]
// 00509adb  d9e8                 fld1 
// 00509add  def1                 fdivrp st(1)
// 00509adf  d95c2404             fstp dword ptr [esp + 4]
// 00509ae3  d94604               fld dword ptr [esi + 4]
// 00509ae6  d9442404             fld dword ptr [esp + 4]
// 00509aea  d9c0                 fld st(0)
// 00509aec  deca                 fmulp st(2)
// 00509aee  d9c9                 fxch st(1)
// 00509af0  d95c2404             fstp dword ptr [esp + 4]
// 00509af4  d9442404             fld dword ptr [esp + 4]
// 00509af8  d95604               fst dword ptr [esi + 4]
// 00509afb  d94610               fld dword ptr [esi + 0x10]
// 00509afe  d8ca                 fmul st(2)
// 00509b00  d95c2404             fstp dword ptr [esp + 4]
// 00509b04  d9442404             fld dword ptr [esp + 4]
// 00509b08  d95610               fst dword ptr [esi + 0x10]
// 00509b0b  d9461c               fld dword ptr [esi + 0x1c]
// 00509b0e  decb                 fmulp st(3)
// 00509b10  d9ca                 fxch st(2)
// 00509b12  d95c2404             fstp dword ptr [esp + 4]
// 00509b16  d9442404             fld dword ptr [esp + 4]
// 00509b1a  d9561c               fst dword ptr [esi + 0x1c]
// 00509b1d  d94608               fld dword ptr [esi + 8]
// 00509b20  deca                 fmulp st(2)
// 00509b22  d94614               fld dword ptr [esi + 0x14]
// 00509b25  decb                 fmulp st(3)
// 00509b27  d9c9                 fxch st(1)
// 00509b29  dec2                 faddp st(2)
// 00509b2b  d84e20               fmul dword ptr [esi + 0x20]
// 00509b2e  dec1                 faddp st(1)
// 00509b30  d95c2408             fstp dword ptr [esp + 8]
// 00509b34  d94614               fld dword ptr [esi + 0x14]
// 00509b37  d84e0c               fmul dword ptr [esi + 0xc]
// 00509b3a  d94608               fld dword ptr [esi + 8]
// 00509b3d  d80e                 fmul dword ptr [esi]
// 00509b3f  dec1                 faddp st(1)
// 00509b41  d94618               fld dword ptr [esi + 0x18]
// 00509b44  d84e20               fmul dword ptr [esi + 0x20]
// 00509b47  dec1                 faddp st(1)
// 00509b49  d95c2404             fstp dword ptr [esp + 4]
// 00509b4d  d94608               fld dword ptr [esi + 8]
// 00509b50  d94604               fld dword ptr [esi + 4]
// 00509b53  d9442408             fld dword ptr [esp + 8]
// 00509b57  d9c0                 fld st(0)
// 00509b59  deca                 fmulp st(2)
// 00509b5b  d906                 fld dword ptr [esi]
// 00509b5d  d9442404             fld dword ptr [esp + 4]
// 00509b61  d9c0                 fld st(0)
// 00509b63  deca                 fmulp st(2)
// 00509b65  d9cb                 fxch st(3)
// 00509b67  dec1                 faddp st(1)
// 00509b69  deeb                 fsubp st(3)
// 00509b6b  d9ca                 fxch st(2)
// 00509b6d  d95c2408             fstp dword ptr [esp + 8]
// 00509b71  d9442408             fld dword ptr [esp + 8]
// 00509b75  d95608               fst dword ptr [esi + 8]
// 00509b78  d94614               fld dword ptr [esi + 0x14]
// 00509b7b  d94610               fld dword ptr [esi + 0x10]
// 00509b7e  d8cc                 fmul st(4)
// 00509b80  d9c3                 fld st(3)
// 00509b82  d84e0c               fmul dword ptr [esi + 0xc]
// 00509b85  dec1                 faddp st(1)
// 00509b87  dee9                 fsubp st(1)
// 00509b89  d95c2408             fstp dword ptr [esp + 8]
// 00509b8d  d9442408             fld dword ptr [esp + 8]
// 00509b91  d95614               fst dword ptr [esi + 0x14]
// 00509b94  d94620               fld dword ptr [esi + 0x20]
// 00509b97  d94618               fld dword ptr [esi + 0x18]
// 00509b9a  decc                 fmulp st(4)
// 00509b9c  d9461c               fld dword ptr [esi + 0x1c]
// 00509b9f  decd                 fmulp st(5)
// 00509ba1  d9cb                 fxch st(3)
// 00509ba3  dec4                 faddp st(4)
// 00509ba5  d9ca                 fxch st(2)
// 00509ba7  dee3                 fsubrp st(3)
// 00509ba9  d9ca                 fxch st(2)
// 00509bab  d95c2408             fstp dword ptr [esp + 8]
// 00509baf  d9442408             fld dword ptr [esp + 8]
// 00509bb3  d95620               fst dword ptr [esi + 0x20]
// 00509bb6  d9c2                 fld st(2)
// 00509bb8  decb                 fmulp st(3)
// 00509bba  d9c1                 fld st(1)
// 00509bbc  deca                 fmulp st(2)
// 00509bbe  d9ca                 fxch st(2)
// 00509bc0  dec1                 faddp st(1)
// 00509bc2  d9c1                 fld st(1)
// 00509bc4  deca                 fmulp st(2)
// 00509bc6  dec1                 faddp st(1)
// 00509bc8  d95c2408             fstp dword ptr [esp + 8]
// 00509bcc  d9442408             fld dword ptr [esp + 8]
// 00509bd0  e837721200           call 0x630e0c
// 00509bd5  d95c2408             fstp dword ptr [esp + 8]
// 00509bd9  d9442408             fld dword ptr [esp + 8]
// 00509bdd  d9e8                 fld1 
// 00509bdf  def1                 fdivrp st(1)
// 00509be1  d95c2404             fstp dword ptr [esp + 4]
// 00509be5  d94608               fld dword ptr [esi + 8]
// 00509be8  d9442404             fld dword ptr [esp + 4]
// 00509bec  d9c0                 fld st(0)
// 00509bee  deca                 fmulp st(2)
// 00509bf0  d9c9                 fxch st(1)
// 00509bf2  d95e08               fstp dword ptr [esi + 8]
// 00509bf5  d94614               fld dword ptr [esi + 0x14]
// 00509bf8  d8c9                 fmul st(1)
// 00509bfa  d95e14               fstp dword ptr [esi + 0x14]
// 00509bfd  d84e20               fmul dword ptr [esi + 0x20]
// 00509c00  d95e20               fstp dword ptr [esi + 0x20]
// 00509c03  5e                   pop esi
// 00509c04  83c408               add esp, 8
// 00509c07  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ?orthonormalize@Matrix3@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
