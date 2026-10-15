// roc 2008-06 005cc560  unit: RBX::VCamera::?$FactoryProduct  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc560
//
// 005cc560  83ec14               sub esp, 0x14
// 005cc563  56                   push esi
// 005cc564  8bf1                 mov esi, ecx
// 005cc566  d98698010000         fld dword ptr [esi + 0x198]
// 005cc56c  83ec08               sub esp, 8
// 005cc56f  d8a6c8010000         fsub dword ptr [esi + 0x1c8]
// 005cc575  d9542414             fst dword ptr [esp + 0x14]
// 005cc579  d9869c010000         fld dword ptr [esi + 0x19c]
// 005cc57f  d8a6cc010000         fsub dword ptr [esi + 0x1cc]
// 005cc585  d9542418             fst dword ptr [esp + 0x18]
// 005cc589  d986a0010000         fld dword ptr [esi + 0x1a0]
// 005cc58f  d8a6d0010000         fsub dword ptr [esi + 0x1d0]
// 005cc595  d954241c             fst dword ptr [esp + 0x1c]
// 005cc599  dcc8                 fmul st(0), st(0)
// 005cc59b  d9c2                 fld st(2)
// 005cc59d  decb                 fmulp st(3)
// 005cc59f  dec2                 faddp st(2)
// 005cc5a1  dcc8                 fmul st(0), st(0)
// 005cc5a3  dec1                 faddp st(1)
// 005cc5a5  d9fa                 fsqrt 
// 005cc5a7  d9542410             fst dword ptr [esp + 0x10]
// 005cc5ab  d9051ca38300         fld dword ptr [0x83a31c]
// 005cc5b1  d95c240c             fstp dword ptr [esp + 0xc]
// 005cc5b5  d9442424             fld dword ptr [esp + 0x24]
// 005cc5b9  d95c2404             fstp dword ptr [esp + 4]
// 005cc5bd  d91c24               fstp dword ptr [esp]
// 005cc5c0  e87bfcffff           call 0x5cc240
// 005cc5c5  d9542424             fst dword ptr [esp + 0x24]
// 005cc5c9  83c408               add esp, 8
// 005cc5cc  d81d1ca38300         fcomp dword ptr [0x83a31c]
// 005cc5d2  dfe0                 fnstsw ax
// 005cc5d4  f6c441               test ah, 0x41
// 005cc5d7  8d442404             lea eax, [esp + 4]
// 005cc5db  7404                 je 0x5cc5e1
// 005cc5dd  8d44241c             lea eax, [esp + 0x1c]
// 005cc5e1  d900                 fld dword ptr [eax]
// 005cc5e3  d954241c             fst dword ptr [esp + 0x1c]
// 005cc5e7  d9442408             fld dword ptr [esp + 8]
// 005cc5eb  dae9                 fucompp 
// 005cc5ed  dfe0                 fnstsw ax
// 005cc5ef  f6c444               test ah, 0x44
// 005cc5f2  7a09                 jp 0x5cc5fd
// 005cc5f4  32c0                 xor al, al
// 005cc5f6  5e                   pop esi
// 005cc5f7  83c414               add esp, 0x14
// 005cc5fa  c20400               ret 4
// 005cc5fd  d9ee                 fldz 
// 005cc5ff  51                   push ecx
// 005cc600  d95c2414             fstp dword ptr [esp + 0x14]
// 005cc604  8d4c2410             lea ecx, [esp + 0x10]
// 005cc608  d905706e8200         fld dword ptr [0x826e70]
// 005cc60e  d91c24               fstp dword ptr [esp]
// 005cc611  e85abef4ff           call 0x518470
// 005cc616  ddd8                 fstp st(0)
// 005cc618  d944241c             fld dword ptr [esp + 0x1c]
// 005cc61c  b001                 mov al, 1
// 005cc61e  d90500798300         fld dword ptr [0x837900]
// 005cc624  d8c9                 fmul st(1)
// 005cc626  d9442414             fld dword ptr [esp + 0x14]
// 005cc62a  d9c0                 fld st(0)
// 005cc62c  d8c9                 fmul st(1)
// 005cc62e  d944240c             fld dword ptr [esp + 0xc]
// 005cc632  d9c0                 fld st(0)
// 005cc634  d8c9                 fmul st(1)
// 005cc636  dec2                 faddp st(2)
// 005cc638  d9c3                 fld st(3)
// 005cc63a  d8cc                 fmul st(4)
// 005cc63c  dec2                 faddp st(2)
// 005cc63e  d9c9                 fxch st(1)
// 005cc640  d9fa                 fsqrt 
// 005cc642  d9e8                 fld1 
// 005cc644  def1                 fdivrp st(1)
// 005cc646  d9c0                 fld st(0)
// 005cc648  deca                 fmulp st(2)
// 005cc64a  d9c0                 fld st(0)
// 005cc64c  decc                 fmulp st(4)
// 005cc64e  deca                 fmulp st(2)
// 005cc650  d8cb                 fmul st(3)
// 005cc652  d9ca                 fxch st(2)
// 005cc654  d8cb                 fmul st(3)
// 005cc656  d9c9                 fxch st(1)
// 005cc658  decb                 fmulp st(3)
// 005cc65a  d986c8010000         fld dword ptr [esi + 0x1c8]
// 005cc660  dec2                 faddp st(2)
// 005cc662  d886cc010000         fadd dword ptr [esi + 0x1cc]
// 005cc668  d986d0010000         fld dword ptr [esi + 0x1d0]
// 005cc66e  dec3                 faddp st(3)
// 005cc670  d9c9                 fxch st(1)
// 005cc672  d99e98010000         fstp dword ptr [esi + 0x198]
// 005cc678  d99e9c010000         fstp dword ptr [esi + 0x19c]
// 005cc67e  d99ea0010000         fstp dword ptr [esi + 0x1a0]
// 005cc684  5e                   pop esi
// 005cc685  83c414               add esp, 0x14
// 005cc688  c20400               ret 4
// library rbxgs/roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp (function ?characterZoom@Camera@RBX@@AAE_NM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp
