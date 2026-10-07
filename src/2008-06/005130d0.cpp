// roc 2008-06 005130d0  unit: G3D::GCamera  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005130d0
//
// 005130d0  dd44240c             fld qword ptr [esp + 0xc]
// 005130d4  d9c0                 fld st(0)
// 005130d6  dd442404             fld qword ptr [esp + 4]
// 005130da  dde1                 fucom st(1)
// 005130dc  dfe0                 fnstsw ax
// 005130de  ddd9                 fstp st(1)
// 005130e0  f6c444               test ah, 0x44
// 005130e3  7b2c                 jnp 0x513111
// 005130e5  d9c0                 fld st(0)
// 005130e7  83ec10               sub esp, 0x10
// 005130ea  d8e2                 fsub st(2)
// 005130ec  d9e1                 fabs 
// 005130ee  dd5c241c             fstp qword ptr [esp + 0x1c]
// 005130f2  d9c9                 fxch st(1)
// 005130f4  dd5c2408             fstp qword ptr [esp + 8]
// 005130f8  dd1c24               fstp qword ptr [esp]
// 005130fb  e880ffffff           call 0x513080
// 00513100  dc5c241c             fcomp qword ptr [esp + 0x1c]
// 00513104  83c410               add esp, 0x10
// 00513107  dfe0                 fnstsw ax
// 00513109  f6c401               test ah, 1
// 0051310c  7407                 je 0x513115
// 0051310e  33c0                 xor eax, eax
// 00513110  c3                   ret 
// 00513111  ddd9                 fstp st(1)
// 00513113  ddd8                 fstp st(0)
// 00513115  b801000000           mov eax, 1
// 0051311a  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fuzzyEq@G3D@@YA_NNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
