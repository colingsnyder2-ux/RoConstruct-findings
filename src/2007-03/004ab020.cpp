// roc 2007-03 004ab020  unit: seg_004a0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ab020
//
// 004ab020  51                   push ecx
// 004ab021  d94104               fld dword ptr [ecx + 4]
// 004ab024  d901                 fld dword ptr [ecx]
// 004ab026  d94108               fld dword ptr [ecx + 8]
// 004ab029  d9c1                 fld st(1)
// 004ab02b  deca                 fmulp st(2)
// 004ab02d  d9c2                 fld st(2)
// 004ab02f  decb                 fmulp st(3)
// 004ab031  d9c9                 fxch st(1)
// 004ab033  dec2                 faddp st(2)
// 004ab035  dcc8                 fmul st(0), st(0)
// 004ab037  dec1                 faddp st(1)
// 004ab039  d91c24               fstp dword ptr [esp]
// 004ab03c  d90424               fld dword ptr [esp]
// 004ab03f  59                   pop ecx
// 004ab040  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?squaredMagnitude@Vector3@G3D@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
