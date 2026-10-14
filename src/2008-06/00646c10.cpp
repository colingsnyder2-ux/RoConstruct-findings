// roc 2008-06 00646c10  unit: RBX::MultiJoint  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00646c10
//
// 00646c10  d981e4000000         fld dword ptr [ecx + 0xe4]
// 00646c16  83ec08               sub esp, 8
// 00646c19  d8a1c0000000         fsub dword ptr [ecx + 0xc0]
// 00646c1f  d981e8000000         fld dword ptr [ecx + 0xe8]
// 00646c25  d8a1c4000000         fsub dword ptr [ecx + 0xc4]
// 00646c2b  d981ec000000         fld dword ptr [ecx + 0xec]
// 00646c31  d8a1c8000000         fsub dword ptr [ecx + 0xc8]
// 00646c37  d981cc000000         fld dword ptr [ecx + 0xcc]
// 00646c3d  d8a1c0000000         fsub dword ptr [ecx + 0xc0]
// 00646c43  d981d0000000         fld dword ptr [ecx + 0xd0]
// 00646c49  d8a1c4000000         fsub dword ptr [ecx + 0xc4]
// 00646c4f  d981d4000000         fld dword ptr [ecx + 0xd4]
// 00646c55  d8a1c8000000         fsub dword ptr [ecx + 0xc8]
// 00646c5b  dcc8                 fmul st(0), st(0)
// 00646c5d  d9c2                 fld st(2)
// 00646c5f  decb                 fmulp st(3)
// 00646c61  dec2                 faddp st(2)
// 00646c63  dcc8                 fmul st(0), st(0)
// 00646c65  dec1                 faddp st(1)
// 00646c67  d9fa                 fsqrt 
// 00646c69  d9c1                 fld st(1)
// 00646c6b  deca                 fmulp st(2)
// 00646c6d  d9c3                 fld st(3)
// 00646c6f  decc                 fmulp st(4)
// 00646c71  d9c9                 fxch st(1)
// 00646c73  dec3                 faddp st(3)
// 00646c75  d9c1                 fld st(1)
// 00646c77  deca                 fmulp st(2)
// 00646c79  d9ca                 fxch st(2)
// 00646c7b  dec1                 faddp st(1)
// 00646c7d  d9fa                 fsqrt 
// 00646c7f  d95c2404             fstp dword ptr [esp + 4]
// 00646c83  d91c24               fstp dword ptr [esp]
// 00646c86  e8e5290000           call 0x649670
// 00646c8b  83c404               add esp, 4
// 00646c8e  d91c24               fstp dword ptr [esp]
// 00646c91  e81a950100           call 0x6601b0
// 00646c96  83c404               add esp, 4
// 00646c99  c3                   ret 
// library rbxgs-dll/v8world\GlueJoint.cpp (function ?getMaxForce@GlueJoint@RBX@@AAEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8world/GlueJoint.cpp
