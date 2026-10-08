// from server: 100% by auto
// roc 2007-08 005094b0  unit: G3D::GCamera  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005094b0
//
// 005094b0  dd44240c             fld qword ptr [esp + 0xc]
// 005094b4  d9c0                 fld st(0)
// 005094b6  dd442404             fld qword ptr [esp + 4]
// 005094ba  dde1                 fucom st(1)
// 005094bc  dfe0                 fnstsw ax
// 005094be  ddd9                 fstp st(1)
// 005094c0  f6c444               test ah, 0x44
// 005094c3  7b2c                 jnp 0x5094f1
// 005094c5  d9c0                 fld st(0)
// 005094c7  83ec10               sub esp, 0x10
// 005094ca  d8e2                 fsub st(2)
// 005094cc  d9e1                 fabs 
// 005094ce  dd5c241c             fstp qword ptr [esp + 0x1c]
// 005094d2  d9c9                 fxch st(1)
// 005094d4  dd5c2408             fstp qword ptr [esp + 8]
// 005094d8  dd1c24               fstp qword ptr [esp]
// 005094db  e880ffffff           call 0x509460
// 005094e0  dc5c241c             fcomp qword ptr [esp + 0x1c]
// 005094e4  83c410               add esp, 0x10
// 005094e7  dfe0                 fnstsw ax
// 005094e9  f6c401               test ah, 1
// 005094ec  7407                 je 0x5094f5
// 005094ee  33c0                 xor eax, eax
// 005094f0  c3                   ret 
// 005094f1  ddd9                 fstp st(1)
// 005094f3  ddd8                 fstp st(0)
// 005094f5  b801000000           mov eax, 1
// 005094fa  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fuzzyEq@G3D@@YA_NNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
