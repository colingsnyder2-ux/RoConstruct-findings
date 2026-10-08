// roc 2007-03 00503a40  unit: seg_00500000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503a40
//
// 00503a40  51                   push ecx
// 00503a41  56                   push esi
// 00503a42  8bf1                 mov esi, ecx
// 00503a44  d94604               fld dword ptr [esi + 4]
// 00503a47  d906                 fld dword ptr [esi]
// 00503a49  d94608               fld dword ptr [esi + 8]
// 00503a4c  d9c1                 fld st(1)
// 00503a4e  deca                 fmulp st(2)
// 00503a50  d9c2                 fld st(2)
// 00503a52  decb                 fmulp st(3)
// 00503a54  d9c9                 fxch st(1)
// 00503a56  dec2                 faddp st(2)
// 00503a58  dcc8                 fmul st(0), st(0)
// 00503a5a  dec1                 faddp st(1)
// 00503a5c  d95c2404             fstp dword ptr [esp + 4]
// 00503a60  d9442404             fld dword ptr [esp + 4]
// 00503a64  e843b81100           call 0x61f2ac
// 00503a69  d95c2404             fstp dword ptr [esp + 4]
// 00503a6d  d9442404             fld dword ptr [esp + 4]
// 00503a71  d95c2404             fstp dword ptr [esp + 4]
// 00503a75  d9442404             fld dword ptr [esp + 4]
// 00503a79  d944240c             fld dword ptr [esp + 0xc]
// 00503a7d  d8d9                 fcomp st(1)
// 00503a7f  dfe0                 fnstsw ax
// 00503a81  f6c405               test ah, 5
// 00503a84  7a2b                 jp 0x503ab1
// 00503a86  d9c0                 fld st(0)
// 00503a88  d9e8                 fld1 
// 00503a8a  def1                 fdivrp st(1)
// 00503a8c  d95c240c             fstp dword ptr [esp + 0xc]
// 00503a90  d906                 fld dword ptr [esi]
// 00503a92  d944240c             fld dword ptr [esp + 0xc]
// 00503a96  d9c0                 fld st(0)
// 00503a98  deca                 fmulp st(2)
// 00503a9a  d9c9                 fxch st(1)
// 00503a9c  d91e                 fstp dword ptr [esi]
// 00503a9e  d9c0                 fld st(0)
// 00503aa0  d84e04               fmul dword ptr [esi + 4]
// 00503aa3  d95e04               fstp dword ptr [esi + 4]
// 00503aa6  d84e08               fmul dword ptr [esi + 8]
// 00503aa9  d95e08               fstp dword ptr [esi + 8]
// 00503aac  5e                   pop esi
// 00503aad  59                   pop ecx
// 00503aae  c20400               ret 4
// 00503ab1  ddd8                 fstp st(0)
// 00503ab3  5e                   pop esi
// 00503ab4  d9ee                 fldz 
// 00503ab6  d91c24               fstp dword ptr [esp]
// 00503ab9  d90424               fld dword ptr [esp]
// 00503abc  59                   pop ecx
// 00503abd  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Color3.cpp (function ?unitize@Color3@G3D@@QAEMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color3.cpp
