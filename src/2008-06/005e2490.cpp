// roc 2008-06 005e2490  unit: RBX::Lighting  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2490
//
// 005e2490  51                   push ecx
// 005e2491  56                   push esi
// 005e2492  8bf1                 mov esi, ecx
// 005e2494  d9868c020000         fld dword ptr [esi + 0x28c]
// 005e249a  d944240c             fld dword ptr [esp + 0xc]
// 005e249e  dde1                 fucom st(1)
// 005e24a0  dfe0                 fnstsw ax
// 005e24a2  ddd9                 fstp st(1)
// 005e24a4  d9442414             fld dword ptr [esp + 0x14]
// 005e24a8  d9442410             fld dword ptr [esp + 0x10]
// 005e24ac  f6c444               test ah, 0x44
// 005e24af  7a1e                 jp 0x5e24cf
// 005e24b1  d98690020000         fld dword ptr [esi + 0x290]
// 005e24b7  dde9                 fucomp st(1)
// 005e24b9  dfe0                 fnstsw ax
// 005e24bb  f6c444               test ah, 0x44
// 005e24be  7a0f                 jp 0x5e24cf
// 005e24c0  d98694020000         fld dword ptr [esi + 0x294]
// 005e24c6  ddea                 fucomp st(2)
// 005e24c8  dfe0                 fnstsw ax
// 005e24ca  f6c444               test ah, 0x44
// 005e24cd  7b62                 jnp 0x5e2531
// 005e24cf  d9ca                 fxch st(2)
// 005e24d1  6874aa9700           push 0x97aa74
// 005e24d6  d99e8c020000         fstp dword ptr [esi + 0x28c]
// 005e24dc  d9c9                 fxch st(1)
// 005e24de  d99e90020000         fstp dword ptr [esi + 0x290]
// 005e24e4  d99e94020000         fstp dword ptr [esi + 0x294]
// 005e24ea  e811b6e2ff           call 0x40db00
// 005e24ef  85f6                 test esi, esi
// 005e24f1  7405                 je 0x5e24f8
// 005e24f3  8d4614               lea eax, [esi + 0x14]
// 005e24f6  eb02                 jmp 0x5e24fa
// 005e24f8  33c0                 xor eax, eax
// 005e24fa  50                   push eax
// 005e24fb  b98ca89700           mov ecx, 0x97a88c
// 005e2500  e81b91f8ff           call 0x56b620
// 005e2505  85c0                 test eax, eax
// 005e2507  740f                 je 0x5e2518
// 005e2509  6a00                 push 0
// 005e250b  8d4c240b             lea ecx, [esp + 0xb]
// 005e250f  51                   push ecx
// 005e2510  8d4810               lea ecx, [eax + 0x10]
// 005e2513  e8e8f9ffff           call 0x5e1f00
// 005e2518  56                   push esi
// 005e2519  e8a22ce8ff           call 0x4651c0
// 005e251e  83c404               add esp, 4
// 005e2521  85c0                 test eax, eax
// 005e2523  7412                 je 0x5e2537
// 005e2525  8bc8                 mov ecx, eax
// 005e2527  e8242ef7ff           call 0x555350
// 005e252c  5e                   pop esi
// 005e252d  59                   pop ecx
// 005e252e  c20c00               ret 0xc
// 005e2531  ddda                 fstp st(2)
// 005e2533  ddd8                 fstp st(0)
// 005e2535  ddd8                 fstp st(0)
// 005e2537  5e                   pop esi
// 005e2538  59                   pop ecx
// 005e2539  c20c00               ret 0xc
// library rbxgs/roc_unit_00fd3441d97d4838.cpp (function ?setLightColor@Lighting@RBX@@QAEXVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_00fd3441d97d4838.cpp
