// roc 2008-06 005e2030  unit: RBX::Lighting  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2030
//
// 005e2030  51                   push ecx
// 005e2031  56                   push esi
// 005e2032  8bf1                 mov esi, ecx
// 005e2034  d98654020000         fld dword ptr [esi + 0x254]
// 005e203a  d944240c             fld dword ptr [esp + 0xc]
// 005e203e  dde1                 fucom st(1)
// 005e2040  dfe0                 fnstsw ax
// 005e2042  ddd9                 fstp st(1)
// 005e2044  d9442418             fld dword ptr [esp + 0x18]
// 005e2048  d9442414             fld dword ptr [esp + 0x14]
// 005e204c  d9442410             fld dword ptr [esp + 0x10]
// 005e2050  f6c444               test ah, 0x44
// 005e2053  7a2d                 jp 0x5e2082
// 005e2055  d98658020000         fld dword ptr [esi + 0x258]
// 005e205b  dde9                 fucomp st(1)
// 005e205d  dfe0                 fnstsw ax
// 005e205f  f6c444               test ah, 0x44
// 005e2062  7a1e                 jp 0x5e2082
// 005e2064  d9865c020000         fld dword ptr [esi + 0x25c]
// 005e206a  ddea                 fucomp st(2)
// 005e206c  dfe0                 fnstsw ax
// 005e206e  f6c444               test ah, 0x44
// 005e2071  7a0f                 jp 0x5e2082
// 005e2073  d98660020000         fld dword ptr [esi + 0x260]
// 005e2079  ddeb                 fucomp st(3)
// 005e207b  dfe0                 fnstsw ax
// 005e207d  f6c444               test ah, 0x44
// 005e2080  7b6a                 jnp 0x5e20ec
// 005e2082  d9cb                 fxch st(3)
// 005e2084  6858aa9700           push 0x97aa58
// 005e2089  d99e54020000         fstp dword ptr [esi + 0x254]
// 005e208f  d9ca                 fxch st(2)
// 005e2091  d99e58020000         fstp dword ptr [esi + 0x258]
// 005e2097  d9c9                 fxch st(1)
// 005e2099  d99e5c020000         fstp dword ptr [esi + 0x25c]
// 005e209f  d99e60020000         fstp dword ptr [esi + 0x260]
// 005e20a5  e856bae2ff           call 0x40db00
// 005e20aa  85f6                 test esi, esi
// 005e20ac  7405                 je 0x5e20b3
// 005e20ae  8d4614               lea eax, [esi + 0x14]
// 005e20b1  eb02                 jmp 0x5e20b5
// 005e20b3  33c0                 xor eax, eax
// 005e20b5  50                   push eax
// 005e20b6  b98ca89700           mov ecx, 0x97a88c
// 005e20bb  e86095f8ff           call 0x56b620
// 005e20c0  85c0                 test eax, eax
// 005e20c2  740f                 je 0x5e20d3
// 005e20c4  6a00                 push 0
// 005e20c6  8d4c240b             lea ecx, [esp + 0xb]
// 005e20ca  51                   push ecx
// 005e20cb  8d4810               lea ecx, [eax + 0x10]
// 005e20ce  e82dfeffff           call 0x5e1f00
// 005e20d3  56                   push esi
// 005e20d4  e8e730e8ff           call 0x4651c0
// 005e20d9  83c404               add esp, 4
// 005e20dc  85c0                 test eax, eax
// 005e20de  7414                 je 0x5e20f4
// 005e20e0  8bc8                 mov ecx, eax
// 005e20e2  e86932f7ff           call 0x555350
// 005e20e7  5e                   pop esi
// 005e20e8  59                   pop ecx
// 005e20e9  c21000               ret 0x10
// 005e20ec  dddb                 fstp st(3)
// 005e20ee  ddd9                 fstp st(1)
// 005e20f0  ddd8                 fstp st(0)
// 005e20f2  ddd8                 fstp st(0)
// 005e20f4  5e                   pop esi
// 005e20f5  59                   pop ecx
// 005e20f6  c21000               ret 0x10
// library rbxgs/roc_unit_00fd3441d97d4838.cpp (function ?setClearColor@Lighting@RBX@@QAEXVColor4@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_unit_00fd3441d97d4838.cpp
