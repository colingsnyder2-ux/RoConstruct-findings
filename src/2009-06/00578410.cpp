// roc 2009-06 00578410  unit: G3D::LineSegment  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578410
//
// 00578410  83ec18               sub esp, 0x18
// 00578413  56                   push esi
// 00578414  8d44240c             lea eax, [esp + 0xc]
// 00578418  8bf1                 mov esi, ecx
// 0057841a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057841e  50                   push eax
// 0057841f  e8ccf6ffff           call 0x577af0
// 00578424  d944240c             fld dword ptr [esp + 0xc]
// 00578428  d9c0                 fld st(0)
// 0057842a  8bc6                 mov eax, esi
// 0057842c  d8c9                 fmul st(1)
// 0057842e  d90544d08b00         fld dword ptr [0x8bd044]
// 00578434  dcc9                 fmul st(1), st(0)
// 00578436  d9c9                 fxch st(1)
// 00578438  d95c2404             fstp dword ptr [esp + 4]
// 0057843c  d9442410             fld dword ptr [esp + 0x10]
// 00578440  d9c0                 fld st(0)
// 00578442  d8cb                 fmul st(3)
// 00578444  d8ca                 fmul st(2)
// 00578446  d9442414             fld dword ptr [esp + 0x14]
// 0057844a  d9c0                 fld st(0)
// 0057844c  d8cd                 fmul st(5)
// 0057844e  d8cc                 fmul st(4)
// 00578450  d9442418             fld dword ptr [esp + 0x18]
// 00578454  d9c0                 fld st(0)
// 00578456  decf                 fmulp st(7)
// 00578458  d9ce                 fxch st(6)
// 0057845a  d8cd                 fmul st(5)
// 0057845c  d9c4                 fld st(4)
// 0057845e  d8cd                 fmul st(5)
// 00578460  d8ce                 fmul st(6)
// 00578462  d95c2420             fstp dword ptr [esp + 0x20]
// 00578466  d9c2                 fld st(2)
// 00578468  d8cd                 fmul st(5)
// 0057846a  d8ce                 fmul st(6)
// 0057846c  d95c2408             fstp dword ptr [esp + 8]
// 00578470  d9c6                 fld st(6)
// 00578472  decd                 fmulp st(5)
// 00578474  d9cc                 fxch st(4)
// 00578476  d8cd                 fmul st(5)
// 00578478  d9c2                 fld st(2)
// 0057847a  d8cb                 fmul st(3)
// 0057847c  d8ce                 fmul st(6)
// 0057847e  d9cf                 fxch st(7)
// 00578480  decb                 fmulp st(3)
// 00578482  d9ca                 fxch st(2)
// 00578484  decd                 fmulp st(5)
// 00578486  d9e8                 fld1 
// 00578488  d9442420             fld dword ptr [esp + 0x20]
// 0057848c  dce9                 fsub st(1), st(0)
// 0057848e  d9c9                 fxch st(1)
// 00578490  d8e7                 fsub st(7)
// 00578492  d91e                 fstp dword ptr [esi]
// 00578494  d9c3                 fld st(3)
// 00578496  d8e6                 fsub st(6)
// 00578498  d95e04               fstp dword ptr [esi + 4]
// 0057849b  d9c2                 fld st(2)
// 0057849d  d8c2                 fadd st(2)
// 0057849f  d95e08               fstp dword ptr [esi + 8]
// 005784a2  d9cd                 fxch st(5)
// 005784a4  dec3                 faddp st(3)
// 005784a6  d9ca                 fxch st(2)
// 005784a8  d95e0c               fstp dword ptr [esi + 0xc]
// 005784ab  d9e8                 fld1 
// 005784ad  d8642404             fsub dword ptr [esp + 4]
// 005784b1  d9c0                 fld st(0)
// 005784b3  dee6                 fsubrp st(6)
// 005784b5  d9cd                 fxch st(5)
// 005784b7  d95e10               fstp dword ptr [esi + 0x10]
// 005784ba  d9442408             fld dword ptr [esp + 8]
// 005784be  d9c0                 fld st(0)
// 005784c0  d8e4                 fsub st(4)
// 005784c2  d95e14               fstp dword ptr [esi + 0x14]
// 005784c5  d9ca                 fxch st(2)
// 005784c7  dee1                 fsubrp st(1)
// 005784c9  d95e18               fstp dword ptr [esi + 0x18]
// 005784cc  dec1                 faddp st(1)
// 005784ce  d95e1c               fstp dword ptr [esi + 0x1c]
// 005784d1  dee9                 fsubp st(1)
// 005784d3  d95e20               fstp dword ptr [esi + 0x20]
// 005784d6  5e                   pop esi
// 005784d7  83c418               add esp, 0x18
// 005784da  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ??0Matrix3@G3D@@QAE@ABVQuat@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
