// roc 2007-08 0050f3a0  unit: G3D::TextInput::WrongSymbol  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f3a0
//
// 0050f3a0  51                   push ecx
// 0050f3a1  56                   push esi
// 0050f3a2  8bf1                 mov esi, ecx
// 0050f3a4  d94604               fld dword ptr [esi + 4]
// 0050f3a7  d906                 fld dword ptr [esi]
// 0050f3a9  d94608               fld dword ptr [esi + 8]
// 0050f3ac  d9c1                 fld st(1)
// 0050f3ae  deca                 fmulp st(2)
// 0050f3b0  d9c2                 fld st(2)
// 0050f3b2  decb                 fmulp st(3)
// 0050f3b4  d9c9                 fxch st(1)
// 0050f3b6  dec2                 faddp st(2)
// 0050f3b8  dcc8                 fmul st(0), st(0)
// 0050f3ba  dec1                 faddp st(1)
// 0050f3bc  d95c2404             fstp dword ptr [esp + 4]
// 0050f3c0  d9442404             fld dword ptr [esp + 4]
// 0050f3c4  e8431a1200           call 0x630e0c
// 0050f3c9  d95c2404             fstp dword ptr [esp + 4]
// 0050f3cd  d9442404             fld dword ptr [esp + 4]
// 0050f3d1  d95c2404             fstp dword ptr [esp + 4]
// 0050f3d5  d9442404             fld dword ptr [esp + 4]
// 0050f3d9  d944240c             fld dword ptr [esp + 0xc]
// 0050f3dd  d8d9                 fcomp st(1)
// 0050f3df  dfe0                 fnstsw ax
// 0050f3e1  f6c405               test ah, 5
// 0050f3e4  7a2b                 jp 0x50f411
// 0050f3e6  d9c0                 fld st(0)
// 0050f3e8  d9e8                 fld1 
// 0050f3ea  def1                 fdivrp st(1)
// 0050f3ec  d95c240c             fstp dword ptr [esp + 0xc]
// 0050f3f0  d906                 fld dword ptr [esi]
// 0050f3f2  d944240c             fld dword ptr [esp + 0xc]
// 0050f3f6  d9c0                 fld st(0)
// 0050f3f8  deca                 fmulp st(2)
// 0050f3fa  d9c9                 fxch st(1)
// 0050f3fc  d91e                 fstp dword ptr [esi]
// 0050f3fe  d9c0                 fld st(0)
// 0050f400  d84e04               fmul dword ptr [esi + 4]
// 0050f403  d95e04               fstp dword ptr [esi + 4]
// 0050f406  d84e08               fmul dword ptr [esi + 8]
// 0050f409  d95e08               fstp dword ptr [esi + 8]
// 0050f40c  5e                   pop esi
// 0050f40d  59                   pop ecx
// 0050f40e  c20400               ret 4
// 0050f411  ddd8                 fstp st(0)
// 0050f413  5e                   pop esi
// 0050f414  d9ee                 fldz 
// 0050f416  d91c24               fstp dword ptr [esp]
// 0050f419  d90424               fld dword ptr [esp]
// 0050f41c  59                   pop ecx
// 0050f41d  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?unitize@Vector3@G3D@@QAEMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
