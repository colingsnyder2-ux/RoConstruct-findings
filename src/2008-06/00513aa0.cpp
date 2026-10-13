// roc 2008-06 00513aa0  unit: G3D::GCamera  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513aa0
//
// 00513aa0  83ec18               sub esp, 0x18
// 00513aa3  56                   push esi
// 00513aa4  8d44240c             lea eax, [esp + 0xc]
// 00513aa8  8bf1                 mov esi, ecx
// 00513aaa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00513aae  50                   push eax
// 00513aaf  e8acf6ffff           call 0x513160
// 00513ab4  d944240c             fld dword ptr [esp + 0xc]
// 00513ab8  d9c0                 fld st(0)
// 00513aba  8bc6                 mov eax, esi
// 00513abc  d8c9                 fmul st(1)
// 00513abe  d90534c48100         fld dword ptr [0x81c434]
// 00513ac4  dcc9                 fmul st(1), st(0)
// 00513ac6  d9c9                 fxch st(1)
// 00513ac8  d95c2404             fstp dword ptr [esp + 4]
// 00513acc  d9442410             fld dword ptr [esp + 0x10]
// 00513ad0  d9c0                 fld st(0)
// 00513ad2  d8cb                 fmul st(3)
// 00513ad4  d8ca                 fmul st(2)
// 00513ad6  d9442414             fld dword ptr [esp + 0x14]
// 00513ada  d9c0                 fld st(0)
// 00513adc  d8cd                 fmul st(5)
// 00513ade  d8cc                 fmul st(4)
// 00513ae0  d9442418             fld dword ptr [esp + 0x18]
// 00513ae4  d9c0                 fld st(0)
// 00513ae6  decf                 fmulp st(7)
// 00513ae8  d9ce                 fxch st(6)
// 00513aea  d8cd                 fmul st(5)
// 00513aec  d9c4                 fld st(4)
// 00513aee  d8cd                 fmul st(5)
// 00513af0  d8ce                 fmul st(6)
// 00513af2  d95c2420             fstp dword ptr [esp + 0x20]
// 00513af6  d9c2                 fld st(2)
// 00513af8  d8cd                 fmul st(5)
// 00513afa  d8ce                 fmul st(6)
// 00513afc  d95c2408             fstp dword ptr [esp + 8]
// 00513b00  d9c6                 fld st(6)
// 00513b02  decd                 fmulp st(5)
// 00513b04  d9cc                 fxch st(4)
// 00513b06  d8cd                 fmul st(5)
// 00513b08  d9c2                 fld st(2)
// 00513b0a  d8cb                 fmul st(3)
// 00513b0c  d8ce                 fmul st(6)
// 00513b0e  d9cf                 fxch st(7)
// 00513b10  decb                 fmulp st(3)
// 00513b12  d9ca                 fxch st(2)
// 00513b14  decd                 fmulp st(5)
// 00513b16  d9e8                 fld1 
// 00513b18  d9442420             fld dword ptr [esp + 0x20]
// 00513b1c  dce9                 fsub st(1), st(0)
// 00513b1e  d9c9                 fxch st(1)
// 00513b20  d8e7                 fsub st(7)
// 00513b22  d91e                 fstp dword ptr [esi]
// 00513b24  d9c3                 fld st(3)
// 00513b26  d8e6                 fsub st(6)
// 00513b28  d95e04               fstp dword ptr [esi + 4]
// 00513b2b  d9c2                 fld st(2)
// 00513b2d  d8c2                 fadd st(2)
// 00513b2f  d95e08               fstp dword ptr [esi + 8]
// 00513b32  d9cd                 fxch st(5)
// 00513b34  dec3                 faddp st(3)
// 00513b36  d9ca                 fxch st(2)
// 00513b38  d95e0c               fstp dword ptr [esi + 0xc]
// 00513b3b  d9e8                 fld1 
// 00513b3d  d8642404             fsub dword ptr [esp + 4]
// 00513b41  d9c0                 fld st(0)
// 00513b43  dee6                 fsubrp st(6)
// 00513b45  d9cd                 fxch st(5)
// 00513b47  d95e10               fstp dword ptr [esi + 0x10]
// 00513b4a  d9442408             fld dword ptr [esp + 8]
// 00513b4e  d9c0                 fld st(0)
// 00513b50  d8e4                 fsub st(4)
// 00513b52  d95e14               fstp dword ptr [esi + 0x14]
// 00513b55  d9ca                 fxch st(2)
// 00513b57  dee1                 fsubrp st(1)
// 00513b59  d95e18               fstp dword ptr [esi + 0x18]
// 00513b5c  dec1                 faddp st(1)
// 00513b5e  d95e1c               fstp dword ptr [esi + 0x1c]
// 00513b61  dee9                 fsubp st(1)
// 00513b63  d95e20               fstp dword ptr [esi + 0x20]
// 00513b66  5e                   pop esi
// 00513b67  83c418               add esp, 0x18
// 00513b6a  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ??0Matrix3@G3D@@QAE@ABVQuat@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
