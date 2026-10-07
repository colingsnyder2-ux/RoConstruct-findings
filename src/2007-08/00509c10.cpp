// roc 2007-08 00509c10  unit: G3D::GCamera  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509c10
//
// 00509c10  83ec14               sub esp, 0x14
// 00509c13  d9442420             fld dword ptr [esp + 0x20]
// 00509c17  e824771200           call 0x631340
// 00509c1c  d91c24               fstp dword ptr [esp]
// 00509c1f  d90424               fld dword ptr [esp]
// 00509c22  d91c24               fstp dword ptr [esp]
// 00509c25  d9442420             fld dword ptr [esp + 0x20]
// 00509c29  e818771200           call 0x631346
// 00509c2e  d95c2420             fstp dword ptr [esp + 0x20]
// 00509c32  d9442420             fld dword ptr [esp + 0x20]
// 00509c36  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00509c3a  d95c2404             fstp dword ptr [esp + 4]
// 00509c3e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00509c42  d90424               fld dword ptr [esp]
// 00509c45  d9c0                 fld st(0)
// 00509c47  d9e8                 fld1 
// 00509c49  dee1                 fsubrp st(1)
// 00509c4b  d95c2420             fstp dword ptr [esp + 0x20]
// 00509c4f  d901                 fld dword ptr [ecx]
// 00509c51  d84904               fmul dword ptr [ecx + 4]
// 00509c54  d9442420             fld dword ptr [esp + 0x20]
// 00509c58  d9c0                 fld st(0)
// 00509c5a  deca                 fmulp st(2)
// 00509c5c  d9c9                 fxch st(1)
// 00509c5e  d95c241c             fstp dword ptr [esp + 0x1c]
// 00509c62  d94108               fld dword ptr [ecx + 8]
// 00509c65  d809                 fmul dword ptr [ecx]
// 00509c67  d8c9                 fmul st(1)
// 00509c69  d95c2408             fstp dword ptr [esp + 8]
// 00509c6d  d94108               fld dword ptr [ecx + 8]
// 00509c70  d84904               fmul dword ptr [ecx + 4]
// 00509c73  d8c9                 fmul st(1)
// 00509c75  d95c240c             fstp dword ptr [esp + 0xc]
// 00509c79  d901                 fld dword ptr [ecx]
// 00509c7b  d9442404             fld dword ptr [esp + 4]
// 00509c7f  d9c0                 fld st(0)
// 00509c81  deca                 fmulp st(2)
// 00509c83  d9c9                 fxch st(1)
// 00509c85  d95c2410             fstp dword ptr [esp + 0x10]
// 00509c89  d9c0                 fld st(0)
// 00509c8b  d84904               fmul dword ptr [ecx + 4]
// 00509c8e  d91c24               fstp dword ptr [esp]
// 00509c91  d84908               fmul dword ptr [ecx + 8]
// 00509c94  d95c2404             fstp dword ptr [esp + 4]
// 00509c98  d901                 fld dword ptr [ecx]
// 00509c9a  dcc8                 fmul st(0), st(0)
// 00509c9c  d95c2420             fstp dword ptr [esp + 0x20]
// 00509ca0  d9442420             fld dword ptr [esp + 0x20]
// 00509ca4  d8c9                 fmul st(1)
// 00509ca6  d8c2                 fadd st(2)
// 00509ca8  d918                 fstp dword ptr [eax]
// 00509caa  d944241c             fld dword ptr [esp + 0x1c]
// 00509cae  d9c0                 fld st(0)
// 00509cb0  d9442404             fld dword ptr [esp + 4]
// 00509cb4  d9c0                 fld st(0)
// 00509cb6  deea                 fsubp st(2)
// 00509cb8  d9c9                 fxch st(1)
// 00509cba  d95804               fstp dword ptr [eax + 4]
// 00509cbd  d90424               fld dword ptr [esp]
// 00509cc0  d9c0                 fld st(0)
// 00509cc2  d9442408             fld dword ptr [esp + 8]
// 00509cc6  d9c0                 fld st(0)
// 00509cc8  dec2                 faddp st(2)
// 00509cca  d9c9                 fxch st(1)
// 00509ccc  d95808               fstp dword ptr [eax + 8]
// 00509ccf  d9ca                 fxch st(2)
// 00509cd1  dec3                 faddp st(3)
// 00509cd3  d9ca                 fxch st(2)
// 00509cd5  d9580c               fstp dword ptr [eax + 0xc]
// 00509cd8  d94104               fld dword ptr [ecx + 4]
// 00509cdb  dcc8                 fmul st(0), st(0)
// 00509cdd  d95c2420             fstp dword ptr [esp + 0x20]
// 00509ce1  d9442420             fld dword ptr [esp + 0x20]
// 00509ce5  d8cb                 fmul st(3)
// 00509ce7  d8c4                 fadd st(4)
// 00509ce9  d95810               fstp dword ptr [eax + 0x10]
// 00509cec  d944240c             fld dword ptr [esp + 0xc]
// 00509cf0  d9c0                 fld st(0)
// 00509cf2  d9442410             fld dword ptr [esp + 0x10]
// 00509cf6  d9c0                 fld st(0)
// 00509cf8  deea                 fsubp st(2)
// 00509cfa  d9c9                 fxch st(1)
// 00509cfc  d95814               fstp dword ptr [eax + 0x14]
// 00509cff  d9ca                 fxch st(2)
// 00509d01  dee3                 fsubrp st(3)
// 00509d03  d9ca                 fxch st(2)
// 00509d05  d95818               fstp dword ptr [eax + 0x18]
// 00509d08  dec1                 faddp st(1)
// 00509d0a  d9581c               fstp dword ptr [eax + 0x1c]
// 00509d0d  d94108               fld dword ptr [ecx + 8]
// 00509d10  dcc8                 fmul st(0), st(0)
// 00509d12  d95c2420             fstp dword ptr [esp + 0x20]
// 00509d16  d84c2420             fmul dword ptr [esp + 0x20]
// 00509d1a  dec1                 faddp st(1)
// 00509d1c  d95820               fstp dword ptr [eax + 0x20]
// 00509d1f  83c414               add esp, 0x14
// 00509d22  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?fromAxisAngle@Matrix3@G3D@@SA?AV12@ABVVector3@2@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
