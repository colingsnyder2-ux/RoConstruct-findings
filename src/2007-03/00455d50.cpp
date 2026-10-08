// roc 2007-03 00455d50  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00455d50
//
// 00455d50  51                   push ecx
// 00455d51  d94104               fld dword ptr [ecx + 4]
// 00455d54  d901                 fld dword ptr [ecx]
// 00455d56  d94108               fld dword ptr [ecx + 8]
// 00455d59  d9c1                 fld st(1)
// 00455d5b  deca                 fmulp st(2)
// 00455d5d  d9c2                 fld st(2)
// 00455d5f  decb                 fmulp st(3)
// 00455d61  d9c9                 fxch st(1)
// 00455d63  dec2                 faddp st(2)
// 00455d65  dcc8                 fmul st(0), st(0)
// 00455d67  dec1                 faddp st(1)
// 00455d69  d91c24               fstp dword ptr [esp]
// 00455d6c  d90424               fld dword ptr [esp]
// 00455d6f  e838951c00           call 0x61f2ac
// 00455d74  d91c24               fstp dword ptr [esp]
// 00455d77  d90424               fld dword ptr [esp]
// 00455d7a  59                   pop ecx
// 00455d7b  c3                   ret 
// library rbxgs/script\LuaAtomicClasses.cpp (function ?magnitude@Vector3@G3D@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
