// roc 2008-06 005e22c0  unit: RBX::Lighting  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e22c0
//
// 005e22c0  51                   push ecx
// 005e22c1  56                   push esi
// 005e22c2  8bf1                 mov esi, ecx
// 005e22c4  d98670020000         fld dword ptr [esi + 0x270]
// 005e22ca  d944240c             fld dword ptr [esp + 0xc]
// 005e22ce  dde1                 fucom st(1)
// 005e22d0  dfe0                 fnstsw ax
// 005e22d2  ddd9                 fstp st(1)
// 005e22d4  d9442414             fld dword ptr [esp + 0x14]
// 005e22d8  d9442410             fld dword ptr [esp + 0x10]
// 005e22dc  f6c444               test ah, 0x44
// 005e22df  7a1e                 jp 0x5e22ff
// 005e22e1  d98674020000         fld dword ptr [esi + 0x274]
// 005e22e7  dde9                 fucomp st(1)
// 005e22e9  dfe0                 fnstsw ax
// 005e22eb  f6c444               test ah, 0x44
// 005e22ee  7a0f                 jp 0x5e22ff
// 005e22f0  d98678020000         fld dword ptr [esi + 0x278]
// 005e22f6  ddea                 fucomp st(2)
// 005e22f8  dfe0                 fnstsw ax
// 005e22fa  f6c444               test ah, 0x44
// 005e22fd  7b62                 jnp 0x5e2361
// 005e22ff  d9ca                 fxch st(2)
// 005e2301  6800a99700           push 0x97a900
// 005e2306  d99e70020000         fstp dword ptr [esi + 0x270]
// 005e230c  d9c9                 fxch st(1)
// 005e230e  d99e74020000         fstp dword ptr [esi + 0x274]
// 005e2314  d99e78020000         fstp dword ptr [esi + 0x278]
// 005e231a  e8e1b7e2ff           call 0x40db00
// 005e231f  85f6                 test esi, esi
// 005e2321  7405                 je 0x5e2328
// 005e2323  8d4614               lea eax, [esi + 0x14]
// 005e2326  eb02                 jmp 0x5e232a
// 005e2328  33c0                 xor eax, eax
// 005e232a  50                   push eax
// 005e232b  b98ca89700           mov ecx, 0x97a88c
// 005e2330  e8eb92f8ff           call 0x56b620
// 005e2335  85c0                 test eax, eax
// 005e2337  740f                 je 0x5e2348
// 005e2339  6a00                 push 0
// 005e233b  8d4c240b             lea ecx, [esp + 0xb]
// 005e233f  51                   push ecx
// 005e2340  8d4810               lea ecx, [eax + 0x10]
// 005e2343  e8b8fbffff           call 0x5e1f00
// 005e2348  56                   push esi
// 005e2349  e8722ee8ff           call 0x4651c0
// 005e234e  83c404               add esp, 4
// 005e2351  85c0                 test eax, eax
// 005e2353  7412                 je 0x5e2367
// 005e2355  8bc8                 mov ecx, eax
// 005e2357  e8f42ff7ff           call 0x555350
// 005e235c  5e                   pop esi
// 005e235d  59                   pop ecx
// 005e235e  c20c00               ret 0xc
// 005e2361  ddda                 fstp st(2)
// 005e2363  ddd8                 fstp st(0)
// 005e2365  ddd8                 fstp st(0)
// 005e2367  5e                   pop esi
// 005e2368  59                   pop ecx
// 005e2369  c20c00               ret 0xc
// library rbxgs/roc_unit_00fd3441d97d4838.cpp (function ?setAmbientTop@Lighting@RBX@@QAEXVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_00fd3441d97d4838.cpp
