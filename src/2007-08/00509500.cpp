// from server: 100% by auto
// roc 2007-08 00509500  unit: G3D::GCamera  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00509500
//
// 00509500  83ec0c               sub esp, 0xc
// 00509503  56                   push esi
// 00509504  8bf1                 mov esi, ecx
// 00509506  d94604               fld dword ptr [esi + 4]
// 00509509  d906                 fld dword ptr [esi]
// 0050950b  d94608               fld dword ptr [esi + 8]
// 0050950e  d9460c               fld dword ptr [esi + 0xc]
// 00509511  d9c2                 fld st(2)
// 00509513  decb                 fmulp st(3)
// 00509515  d9c3                 fld st(3)
// 00509517  decc                 fmulp st(4)
// 00509519  d9ca                 fxch st(2)
// 0050951b  dec3                 faddp st(3)
// 0050951d  dcc8                 fmul st(0), st(0)
// 0050951f  dec2                 faddp st(2)
// 00509521  dcc8                 fmul st(0), st(0)
// 00509523  dec1                 faddp st(1)
// 00509525  d95c2404             fstp dword ptr [esp + 4]
// 00509529  d9442404             fld dword ptr [esp + 4]
// 0050952d  d9e8                 fld1 
// 0050952f  d9c0                 fld st(0)
// 00509531  ddea                 fucomp st(2)
// 00509533  dfe0                 fnstsw ax
// 00509535  f6c444               test ah, 0x44
// 00509538  7b6b                 jnp 0x5095a5
// 0050953a  d9c1                 fld st(1)
// 0050953c  83ec10               sub esp, 0x10
// 0050953f  d8e1                 fsub st(1)
// 00509541  d9e1                 fabs 
// 00509543  dd5c2418             fstp qword ptr [esp + 0x18]
// 00509547  dd5c2408             fstp qword ptr [esp + 8]
// 0050954b  dd1c24               fstp qword ptr [esp]
// 0050954e  e80dffffff           call 0x509460
// 00509553  dc5c2418             fcomp qword ptr [esp + 0x18]
// 00509557  83c410               add esp, 0x10
// 0050955a  dfe0                 fnstsw ax
// 0050955c  f6c401               test ah, 1
// 0050955f  7448                 je 0x5095a9
// 00509561  d9442404             fld dword ptr [esp + 4]
// 00509565  e8a2781200           call 0x630e0c
// 0050956a  d95c2404             fstp dword ptr [esp + 4]
// 0050956e  d9442404             fld dword ptr [esp + 4]
// 00509572  8b442414             mov eax, dword ptr [esp + 0x14]
// 00509576  d95c2404             fstp dword ptr [esp + 4]
// 0050957a  d906                 fld dword ptr [esi]
// 0050957c  d9442404             fld dword ptr [esp + 4]
// 00509580  d9c0                 fld st(0)
// 00509582  defa                 fdivp st(2)
// 00509584  d9c9                 fxch st(1)
// 00509586  d918                 fstp dword ptr [eax]
// 00509588  d94604               fld dword ptr [esi + 4]
// 0050958b  d8f1                 fdiv st(1)
// 0050958d  d95804               fstp dword ptr [eax + 4]
// 00509590  d94608               fld dword ptr [esi + 8]
// 00509593  d8f1                 fdiv st(1)
// 00509595  d95808               fstp dword ptr [eax + 8]
// 00509598  d87e0c               fdivr dword ptr [esi + 0xc]
// 0050959b  5e                   pop esi
// 0050959c  d9580c               fstp dword ptr [eax + 0xc]
// 0050959f  83c40c               add esp, 0xc
// 005095a2  c20400               ret 4
// 005095a5  ddd9                 fstp st(1)
// 005095a7  ddd8                 fstp st(0)
// 005095a9  8b442414             mov eax, dword ptr [esp + 0x14]
// 005095ad  8b0e                 mov ecx, dword ptr [esi]
// 005095af  8b5604               mov edx, dword ptr [esi + 4]
// 005095b2  8908                 mov dword ptr [eax], ecx
// 005095b4  8b4e08               mov ecx, dword ptr [esi + 8]
// 005095b7  895004               mov dword ptr [eax + 4], edx
// 005095ba  8b560c               mov edx, dword ptr [esi + 0xc]
// 005095bd  894808               mov dword ptr [eax + 8], ecx
// 005095c0  89500c               mov dword ptr [eax + 0xc], edx
// 005095c3  5e                   pop esi
// 005095c4  83c40c               add esp, 0xc
// 005095c7  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?unitize@Quat@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
