// roc 2007-08 00474a00  unit: G3D::VARArea  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474a00
//
// 00474a00  51                   push ecx
// 00474a01  dd442408             fld qword ptr [esp + 8]
// 00474a05  56                   push esi
// 00474a06  8bf1                 mov esi, ecx
// 00474a08  dc9650040000         fcom qword ptr [esi + 0x450]
// 00474a0e  b901000000           mov ecx, 1
// 00474a13  014e78               add dword ptr [esi + 0x78], ecx
// 00474a16  dfe0                 fnstsw ax
// 00474a18  f6c444               test ah, 0x44
// 00474a1b  0f8baf000000         jnp 0x474ad0
// 00474a21  d9ee                 fldz 
// 00474a23  014e70               add dword ptr [esi + 0x70], ecx
// 00474a26  dae9                 fucompp 
// 00474a28  57                   push edi
// 00474a29  dfe0                 fnstsw ax
// 00474a2b  f6c444               test ah, 0x44
// 00474a2e  7b75                 jnp 0x474aa5
// 00474a30  8b3d54eb7700         mov edi, dword ptr [0x77eb54]
// 00474a36  6837800000           push 0x8037
// 00474a3b  ffd7                 call edi
// 00474a3d  68022a0000           push 0x2a02
// 00474a42  ffd7                 call edi
// 00474a44  68012a0000           push 0x2a01
// 00474a49  ffd7                 call edi
// 00474a4b  d9ee                 fldz 
// 00474a4d  dd442410             fld qword ptr [esp + 0x10]
// 00474a51  d8d1                 fcom st(1)
// 00474a53  dfe0                 fnstsw ax
// 00474a55  f6c441               test ah, 0x41
// 00474a58  7506                 jne 0x474a60
// 00474a5a  ddd9                 fstp st(1)
// 00474a5c  d9e8                 fld1 
// 00474a5e  eb15                 jmp 0x474a75
// 00474a60  d8d1                 fcom st(1)
// 00474a62  dfe0                 fnstsw ax
// 00474a64  f6c405               test ah, 5
// 00474a67  7a0a                 jp 0x474a73
// 00474a69  ddd9                 fstp st(1)
// 00474a6b  dd0590657900         fld qword ptr [0x796590]
// 00474a71  eb02                 jmp 0x474a75
// 00474a73  d9c9                 fxch st(1)
// 00474a75  d95c2408             fstp dword ptr [esp + 8]
// 00474a79  83ec08               sub esp, 8
// 00474a7c  d9442410             fld dword ptr [esp + 0x10]
// 00474a80  d95c2404             fstp dword ptr [esp + 4]
// 00474a84  d95c2410             fstp dword ptr [esp + 0x10]
// 00474a88  d9442410             fld dword ptr [esp + 0x10]
// 00474a8c  d91c24               fstp dword ptr [esp]
// 00474a8f  ff15b4ea7700         call dword ptr [0x77eab4]
// 00474a95  dd442410             fld qword ptr [esp + 0x10]
// 00474a99  5f                   pop edi
// 00474a9a  dd9e50040000         fstp qword ptr [esi + 0x450]
// 00474aa0  5e                   pop esi
// 00474aa1  59                   pop ecx
// 00474aa2  c20800               ret 8
// 00474aa5  8b3d4ceb7700         mov edi, dword ptr [0x77eb4c]
// 00474aab  68012a0000           push 0x2a01
// 00474ab0  ffd7                 call edi
// 00474ab2  6837800000           push 0x8037
// 00474ab7  ffd7                 call edi
// 00474ab9  68022a0000           push 0x2a02
// 00474abe  ffd7                 call edi
// 00474ac0  dd442410             fld qword ptr [esp + 0x10]
// 00474ac4  5f                   pop edi
// 00474ac5  dd9e50040000         fstp qword ptr [esi + 0x450]
// 00474acb  5e                   pop esi
// 00474acc  59                   pop ecx
// 00474acd  c20800               ret 8
// 00474ad0  ddd8                 fstp st(0)
// 00474ad2  5e                   pop esi
// 00474ad3  59                   pop ecx
// 00474ad4  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setPolygonOffset@RenderDevice@G3D@@QAEXN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
