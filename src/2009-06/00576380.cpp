// roc 2009-06 00576380  unit: G3D::BinaryInput  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576380
//
// 00576380  dd44240c             fld qword ptr [esp + 0xc]
// 00576384  d9c0                 fld st(0)
// 00576386  dd442404             fld qword ptr [esp + 4]
// 0057638a  dde1                 fucom st(1)
// 0057638c  dfe0                 fnstsw ax
// 0057638e  ddd9                 fstp st(1)
// 00576390  f6c444               test ah, 0x44
// 00576393  7b2c                 jnp 0x5763c1
// 00576395  d9c0                 fld st(0)
// 00576397  83ec10               sub esp, 0x10
// 0057639a  d8e2                 fsub st(2)
// 0057639c  d9e1                 fabs 
// 0057639e  dd5c241c             fstp qword ptr [esp + 0x1c]
// 005763a2  d9c9                 fxch st(1)
// 005763a4  dd5c2408             fstp qword ptr [esp + 8]
// 005763a8  dd1c24               fstp qword ptr [esp]
// 005763ab  e880ffffff           call 0x576330
// 005763b0  dc5c241c             fcomp qword ptr [esp + 0x1c]
// 005763b4  83c410               add esp, 0x10
// 005763b7  dfe0                 fnstsw ax
// 005763b9  f6c401               test ah, 1
// 005763bc  7407                 je 0x5763c5
// 005763be  33c0                 xor eax, eax
// 005763c0  c3                   ret 
// 005763c1  ddd9                 fstp st(1)
// 005763c3  ddd8                 fstp st(0)
// 005763c5  b801000000           mov eax, 1
// 005763ca  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fuzzyEq@G3D@@YA_NNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
