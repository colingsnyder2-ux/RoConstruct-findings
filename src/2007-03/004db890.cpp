// roc 2007-03 004db890  unit: seg_004d0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004db890
//
// 004db890  51                   push ecx
// 004db891  56                   push esi
// 004db892  8bf1                 mov esi, ecx
// 004db894  d94604               fld dword ptr [esi + 4]
// 004db897  d906                 fld dword ptr [esi]
// 004db899  d94608               fld dword ptr [esi + 8]
// 004db89c  d9c1                 fld st(1)
// 004db89e  deca                 fmulp st(2)
// 004db8a0  d9c2                 fld st(2)
// 004db8a2  decb                 fmulp st(3)
// 004db8a4  d9c9                 fxch st(1)
// 004db8a6  dec2                 faddp st(2)
// 004db8a8  dcc8                 fmul st(0), st(0)
// 004db8aa  dec1                 faddp st(1)
// 004db8ac  d95c2404             fstp dword ptr [esp + 4]
// 004db8b0  d9442404             fld dword ptr [esp + 4]
// 004db8b4  e8f3391400           call 0x61f2ac
// 004db8b9  d95c2404             fstp dword ptr [esp + 4]
// 004db8bd  d9442404             fld dword ptr [esp + 4]
// 004db8c1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004db8c5  d9e8                 fld1 
// 004db8c7  def1                 fdivrp st(1)
// 004db8c9  d95c2404             fstp dword ptr [esp + 4]
// 004db8cd  d906                 fld dword ptr [esi]
// 004db8cf  d9442404             fld dword ptr [esp + 4]
// 004db8d3  d9c0                 fld st(0)
// 004db8d5  deca                 fmulp st(2)
// 004db8d7  d9c9                 fxch st(1)
// 004db8d9  d918                 fstp dword ptr [eax]
// 004db8db  d9c0                 fld st(0)
// 004db8dd  d84e04               fmul dword ptr [esi + 4]
// 004db8e0  d95804               fstp dword ptr [eax + 4]
// 004db8e3  d84e08               fmul dword ptr [esi + 8]
// 004db8e6  5e                   pop esi
// 004db8e7  d95808               fstp dword ptr [eax + 8]
// 004db8ea  59                   pop ecx
// 004db8eb  c20400               ret 4
// library rbxgs/script\LuaAtomicClasses.cpp (function ?direction@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
