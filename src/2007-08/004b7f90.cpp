// from server: 100% by auto
// roc 2007-08 004b7f90  unit: Exposer  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7f90
//
// 004b7f90  51                   push ecx
// 004b7f91  d94104               fld dword ptr [ecx + 4]
// 004b7f94  d901                 fld dword ptr [ecx]
// 004b7f96  d94108               fld dword ptr [ecx + 8]
// 004b7f99  d9c1                 fld st(1)
// 004b7f9b  deca                 fmulp st(2)
// 004b7f9d  d9c2                 fld st(2)
// 004b7f9f  decb                 fmulp st(3)
// 004b7fa1  d9c9                 fxch st(1)
// 004b7fa3  dec2                 faddp st(2)
// 004b7fa5  dcc8                 fmul st(0), st(0)
// 004b7fa7  dec1                 faddp st(1)
// 004b7fa9  d91c24               fstp dword ptr [esp]
// 004b7fac  d90424               fld dword ptr [esp]
// 004b7faf  59                   pop ecx
// 004b7fb0  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?squaredMagnitude@Vector3@G3D@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
