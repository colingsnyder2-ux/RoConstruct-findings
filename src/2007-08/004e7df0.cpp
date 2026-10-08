// from server: 100% by auto
// roc 2007-08 004e7df0  unit: TorsoBuilder  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e7df0
//
// 004e7df0  51                   push ecx
// 004e7df1  56                   push esi
// 004e7df2  8bf1                 mov esi, ecx
// 004e7df4  d94604               fld dword ptr [esi + 4]
// 004e7df7  d906                 fld dword ptr [esi]
// 004e7df9  d94608               fld dword ptr [esi + 8]
// 004e7dfc  d9c1                 fld st(1)
// 004e7dfe  deca                 fmulp st(2)
// 004e7e00  d9c2                 fld st(2)
// 004e7e02  decb                 fmulp st(3)
// 004e7e04  d9c9                 fxch st(1)
// 004e7e06  dec2                 faddp st(2)
// 004e7e08  dcc8                 fmul st(0), st(0)
// 004e7e0a  dec1                 faddp st(1)
// 004e7e0c  d95c2404             fstp dword ptr [esp + 4]
// 004e7e10  d9442404             fld dword ptr [esp + 4]
// 004e7e14  e8f38f1400           call 0x630e0c
// 004e7e19  d95c2404             fstp dword ptr [esp + 4]
// 004e7e1d  d9442404             fld dword ptr [esp + 4]
// 004e7e21  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e7e25  d9e8                 fld1 
// 004e7e27  def1                 fdivrp st(1)
// 004e7e29  d95c2404             fstp dword ptr [esp + 4]
// 004e7e2d  d906                 fld dword ptr [esi]
// 004e7e2f  d9442404             fld dword ptr [esp + 4]
// 004e7e33  d9c0                 fld st(0)
// 004e7e35  deca                 fmulp st(2)
// 004e7e37  d9c9                 fxch st(1)
// 004e7e39  d918                 fstp dword ptr [eax]
// 004e7e3b  d9c0                 fld st(0)
// 004e7e3d  d84e04               fmul dword ptr [esi + 4]
// 004e7e40  d95804               fstp dword ptr [eax + 4]
// 004e7e43  d84e08               fmul dword ptr [esi + 8]
// 004e7e46  5e                   pop esi
// 004e7e47  d95808               fstp dword ptr [eax + 8]
// 004e7e4a  59                   pop ecx
// 004e7e4b  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?direction@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
