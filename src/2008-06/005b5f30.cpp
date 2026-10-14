// roc 2008-06 005b5f30  unit: RBX::VHat::?$FactoryProduct  size: 342 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b5f30
//
// 005b5f30  83ec18               sub esp, 0x18
// 005b5f33  d9056c748200         fld dword ptr [0x82746c]
// 005b5f39  53                   push ebx
// 005b5f3a  55                   push ebp
// 005b5f3b  d95c240c             fstp dword ptr [esp + 0xc]
// 005b5f3f  56                   push esi
// 005b5f40  57                   push edi
// 005b5f41  bbc2000000           mov ebx, 0xc2
// 005b5f46  e8d5fcffff           call 0x5b5c20
// 005b5f4b  8b4868               mov ecx, dword ptr [eax + 0x68]
// 005b5f4e  8b39                 mov edi, dword ptr [ecx]
// 005b5f50  8b7050               mov esi, dword ptr [eax + 0x50]
// 005b5f53  83c050               add eax, 0x50
// 005b5f56  897c241c             mov dword ptr [esp + 0x1c], edi
// 005b5f5a  89742418             mov dword ptr [esp + 0x18], esi
// 005b5f5e  e8bdfcffff           call 0x5b5c20
// 005b5f63  8b5068               mov edx, dword ptr [eax + 0x68]
// 005b5f66  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005b5f6c  83c050               add eax, 0x50
// 005b5f6f  8b00                 mov eax, dword ptr [eax]
// 005b5f71  89542424             mov dword ptr [esp + 0x24], edx
// 005b5f75  89442420             mov dword ptr [esp + 0x20], eax
// 005b5f79  8da42400000000       lea esp, [esp]
// 005b5f80  85f6                 test esi, esi
// 005b5f82  7406                 je 0x5b5f8a
// 005b5f84  3b742420             cmp esi, dword ptr [esp + 0x20]
// 005b5f88  7402                 je 0x5b5f8c
// 005b5f8a  ffd5                 call ebp
// 005b5f8c  3b7c2424             cmp edi, dword ptr [esp + 0x24]
// 005b5f90  0f84e2000000         je 0x5b6078
// 005b5f96  85f6                 test esi, esi
// 005b5f98  0f85aa000000         jne 0x5b6048
// 005b5f9e  ffd5                 call ebp
// 005b5fa0  33c0                 xor eax, eax
// 005b5fa2  3b7818               cmp edi, dword ptr [eax + 0x18]
// 005b5fa5  7502                 jne 0x5b5fa9
// 005b5fa7  ffd5                 call ebp
// 005b5fa9  d94710               fld dword ptr [edi + 0x10]
// 005b5fac  d8642430             fsub dword ptr [esp + 0x30]
// 005b5fb0  d9e1                 fabs 
// 005b5fb2  d95c2410             fstp dword ptr [esp + 0x10]
// 005b5fb6  85f6                 test esi, esi
// 005b5fb8  0f8591000000         jne 0x5b604f
// 005b5fbe  ffd5                 call ebp
// 005b5fc0  33c0                 xor eax, eax
// 005b5fc2  3b7818               cmp edi, dword ptr [eax + 0x18]
// 005b5fc5  7502                 jne 0x5b5fc9
// 005b5fc7  ffd5                 call ebp
// 005b5fc9  d94714               fld dword ptr [edi + 0x14]
// 005b5fcc  d8642434             fsub dword ptr [esp + 0x34]
// 005b5fd0  d9e1                 fabs 
// 005b5fd2  d8442410             fadd dword ptr [esp + 0x10]
// 005b5fd6  d95c2410             fstp dword ptr [esp + 0x10]
// 005b5fda  85f6                 test esi, esi
// 005b5fdc  7578                 jne 0x5b6056
// 005b5fde  ffd5                 call ebp
// 005b5fe0  33c0                 xor eax, eax
// 005b5fe2  3b7818               cmp edi, dword ptr [eax + 0x18]
// 005b5fe5  7502                 jne 0x5b5fe9
// 005b5fe7  ffd5                 call ebp
// 005b5fe9  d94718               fld dword ptr [edi + 0x18]
// 005b5fec  d8642438             fsub dword ptr [esp + 0x38]
// 005b5ff0  d9e1                 fabs 
// 005b5ff2  d8442410             fadd dword ptr [esp + 0x10]
// 005b5ff6  d9542410             fst dword ptr [esp + 0x10]
// 005b5ffa  d9442414             fld dword ptr [esp + 0x14]
// 005b5ffe  d8d9                 fcomp st(1)
// 005b6000  dfe0                 fnstsw ax
// 005b6002  f6c441               test ah, 0x41
// 005b6005  7557                 jne 0x5b605e
// 005b6007  85f6                 test esi, esi
// 005b6009  754f                 jne 0x5b605a
// 005b600b  ddd8                 fstp st(0)
// 005b600d  ffd5                 call ebp
// 005b600f  d9442410             fld dword ptr [esp + 0x10]
// 005b6013  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 005b6016  7508                 jne 0x5b6020
// 005b6018  ddd8                 fstp st(0)
// 005b601a  ffd5                 call ebp
// 005b601c  d9442410             fld dword ptr [esp + 0x10]
// 005b6020  d9ee                 fldz 
// 005b6022  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 005b6025  dde9                 fucomp st(1)
// 005b6027  dfe0                 fnstsw ax
// 005b6029  f6c444               test ah, 0x44
// 005b602c  7b48                 jnp 0x5b6076
// 005b602e  8d4c2418             lea ecx, [esp + 0x18]
// 005b6032  d95c2414             fstp dword ptr [esp + 0x14]
// 005b6036  e80512f2ff           call 0x4d7240
// 005b603b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005b603f  8b742418             mov esi, dword ptr [esp + 0x18]
// 005b6043  e938ffffff           jmp 0x5b5f80
// 005b6048  8b06                 mov eax, dword ptr [esi]
// 005b604a  e953ffffff           jmp 0x5b5fa2
// 005b604f  8b06                 mov eax, dword ptr [esi]
// 005b6051  e96cffffff           jmp 0x5b5fc2
// 005b6056  8b06                 mov eax, dword ptr [esi]
// 005b6058  eb88                 jmp 0x5b5fe2
// 005b605a  8b36                 mov esi, dword ptr [esi]
// 005b605c  ebb5                 jmp 0x5b6013
// 005b605e  8d4c2418             lea ecx, [esp + 0x18]
// 005b6062  ddd8                 fstp st(0)
// 005b6064  e8d711f2ff           call 0x4d7240
// 005b6069  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005b606d  8b742418             mov esi, dword ptr [esp + 0x18]
// 005b6071  e90affffff           jmp 0x5b5f80
// 005b6076  ddd8                 fstp st(0)
// 005b6078  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005b607c  5f                   pop edi
// 005b607d  5e                   pop esi
// 005b607e  5d                   pop ebp
// 005b607f  8918                 mov dword ptr [eax], ebx
// 005b6081  5b                   pop ebx
// 005b6082  83c418               add esp, 0x18
// 005b6085  c3                   ret 
// library rbxgs-dll/v8datamodel\BrickColor.cpp (function ?closest@BrickColor@RBX@@SA?AV12@VColor4@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8datamodel/BrickColor.cpp
