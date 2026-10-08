// roc 2007-03 004fe860  unit: seg_004f0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe860
//
// 004fe860  dd44240c             fld qword ptr [esp + 0xc]
// 004fe864  d9c0                 fld st(0)
// 004fe866  dd442404             fld qword ptr [esp + 4]
// 004fe86a  dde1                 fucom st(1)
// 004fe86c  dfe0                 fnstsw ax
// 004fe86e  ddd9                 fstp st(1)
// 004fe870  f6c444               test ah, 0x44
// 004fe873  7b2c                 jnp 0x4fe8a1
// 004fe875  d9c0                 fld st(0)
// 004fe877  83ec10               sub esp, 0x10
// 004fe87a  d8e2                 fsub st(2)
// 004fe87c  d9e1                 fabs 
// 004fe87e  dd5c241c             fstp qword ptr [esp + 0x1c]
// 004fe882  d9c9                 fxch st(1)
// 004fe884  dd5c2408             fstp qword ptr [esp + 8]
// 004fe888  dd1c24               fstp qword ptr [esp]
// 004fe88b  e880ffffff           call 0x4fe810
// 004fe890  dc5c241c             fcomp qword ptr [esp + 0x1c]
// 004fe894  83c410               add esp, 0x10
// 004fe897  dfe0                 fnstsw ax
// 004fe899  f6c401               test ah, 1
// 004fe89c  7407                 je 0x4fe8a5
// 004fe89e  33c0                 xor eax, eax
// 004fe8a0  c3                   ret 
// 004fe8a1  ddd9                 fstp st(1)
// 004fe8a3  ddd8                 fstp st(0)
// 004fe8a5  b801000000           mov eax, 1
// 004fe8aa  c3                   ret 
// library rbxgs/v8world\ContactManager.cpp (function ?fuzzyEq@G3D@@YA_NNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
