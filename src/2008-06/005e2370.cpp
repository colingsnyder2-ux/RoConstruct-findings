// roc 2008-06 005e2370  unit: RBX::Lighting  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2370
//
// 005e2370  51                   push ecx
// 005e2371  56                   push esi
// 005e2372  8bf1                 mov esi, ecx
// 005e2374  d9867c020000         fld dword ptr [esi + 0x27c]
// 005e237a  d944240c             fld dword ptr [esp + 0xc]
// 005e237e  dde1                 fucom st(1)
// 005e2380  dfe0                 fnstsw ax
// 005e2382  ddd9                 fstp st(1)
// 005e2384  d9442414             fld dword ptr [esp + 0x14]
// 005e2388  d9442410             fld dword ptr [esp + 0x10]
// 005e238c  f6c444               test ah, 0x44
// 005e238f  7a1e                 jp 0x5e23af
// 005e2391  d98680020000         fld dword ptr [esi + 0x280]
// 005e2397  dde9                 fucomp st(1)
// 005e2399  dfe0                 fnstsw ax
// 005e239b  f6c444               test ah, 0x44
// 005e239e  7a0f                 jp 0x5e23af
// 005e23a0  d98684020000         fld dword ptr [esi + 0x284]
// 005e23a6  ddea                 fucomp st(2)
// 005e23a8  dfe0                 fnstsw ax
// 005e23aa  f6c444               test ah, 0x44
// 005e23ad  7b62                 jnp 0x5e2411
// 005e23af  d9ca                 fxch st(2)
// 005e23b1  689ca99700           push 0x97a99c
// 005e23b6  d99e7c020000         fstp dword ptr [esi + 0x27c]
// 005e23bc  d9c9                 fxch st(1)
// 005e23be  d99e80020000         fstp dword ptr [esi + 0x280]
// 005e23c4  d99e84020000         fstp dword ptr [esi + 0x284]
// 005e23ca  e831b7e2ff           call 0x40db00
// 005e23cf  85f6                 test esi, esi
// 005e23d1  7405                 je 0x5e23d8
// 005e23d3  8d4614               lea eax, [esi + 0x14]
// 005e23d6  eb02                 jmp 0x5e23da
// 005e23d8  33c0                 xor eax, eax
// 005e23da  50                   push eax
// 005e23db  b98ca89700           mov ecx, 0x97a88c
// 005e23e0  e83b92f8ff           call 0x56b620
// 005e23e5  85c0                 test eax, eax
// 005e23e7  740f                 je 0x5e23f8
// 005e23e9  6a00                 push 0
// 005e23eb  8d4c240b             lea ecx, [esp + 0xb]
// 005e23ef  51                   push ecx
// 005e23f0  8d4810               lea ecx, [eax + 0x10]
// 005e23f3  e808fbffff           call 0x5e1f00
// 005e23f8  56                   push esi
// 005e23f9  e8c22de8ff           call 0x4651c0
// 005e23fe  83c404               add esp, 4
// 005e2401  85c0                 test eax, eax
// 005e2403  7412                 je 0x5e2417
// 005e2405  8bc8                 mov ecx, eax
// 005e2407  e8442ff7ff           call 0x555350
// 005e240c  5e                   pop esi
// 005e240d  59                   pop ecx
// 005e240e  c20c00               ret 0xc
// 005e2411  ddda                 fstp st(2)
// 005e2413  ddd8                 fstp st(0)
// 005e2415  ddd8                 fstp st(0)
// 005e2417  5e                   pop esi
// 005e2418  59                   pop ecx
// 005e2419  c20c00               ret 0xc
// library rbxgs/roc_unit_00fd3441d97d4838.cpp (function ?setAmbientBottom@Lighting@RBX@@QAEXVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_00fd3441d97d4838.cpp
