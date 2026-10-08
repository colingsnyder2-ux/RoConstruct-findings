// roc 2007-03 004fe8b0  unit: seg_004f0000  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fe8b0
//
// 004fe8b0  83ec0c               sub esp, 0xc
// 004fe8b3  56                   push esi
// 004fe8b4  8bf1                 mov esi, ecx
// 004fe8b6  d94604               fld dword ptr [esi + 4]
// 004fe8b9  d906                 fld dword ptr [esi]
// 004fe8bb  d94608               fld dword ptr [esi + 8]
// 004fe8be  d9460c               fld dword ptr [esi + 0xc]
// 004fe8c1  d9c2                 fld st(2)
// 004fe8c3  decb                 fmulp st(3)
// 004fe8c5  d9c3                 fld st(3)
// 004fe8c7  decc                 fmulp st(4)
// 004fe8c9  d9ca                 fxch st(2)
// 004fe8cb  dec3                 faddp st(3)
// 004fe8cd  dcc8                 fmul st(0), st(0)
// 004fe8cf  dec2                 faddp st(2)
// 004fe8d1  dcc8                 fmul st(0), st(0)
// 004fe8d3  dec1                 faddp st(1)
// 004fe8d5  d95c2404             fstp dword ptr [esp + 4]
// 004fe8d9  d9442404             fld dword ptr [esp + 4]
// 004fe8dd  d9e8                 fld1 
// 004fe8df  d9c0                 fld st(0)
// 004fe8e1  ddea                 fucomp st(2)
// 004fe8e3  dfe0                 fnstsw ax
// 004fe8e5  f6c444               test ah, 0x44
// 004fe8e8  7b6b                 jnp 0x4fe955
// 004fe8ea  d9c1                 fld st(1)
// 004fe8ec  83ec10               sub esp, 0x10
// 004fe8ef  d8e1                 fsub st(1)
// 004fe8f1  d9e1                 fabs 
// 004fe8f3  dd5c2418             fstp qword ptr [esp + 0x18]
// 004fe8f7  dd5c2408             fstp qword ptr [esp + 8]
// 004fe8fb  dd1c24               fstp qword ptr [esp]
// 004fe8fe  e80dffffff           call 0x4fe810
// 004fe903  dc5c2418             fcomp qword ptr [esp + 0x18]
// 004fe907  83c410               add esp, 0x10
// 004fe90a  dfe0                 fnstsw ax
// 004fe90c  f6c401               test ah, 1
// 004fe90f  7448                 je 0x4fe959
// 004fe911  d9442404             fld dword ptr [esp + 4]
// 004fe915  e892091200           call 0x61f2ac
// 004fe91a  d95c2404             fstp dword ptr [esp + 4]
// 004fe91e  d9442404             fld dword ptr [esp + 4]
// 004fe922  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fe926  d95c2404             fstp dword ptr [esp + 4]
// 004fe92a  d906                 fld dword ptr [esi]
// 004fe92c  d9442404             fld dword ptr [esp + 4]
// 004fe930  d9c0                 fld st(0)
// 004fe932  defa                 fdivp st(2)
// 004fe934  d9c9                 fxch st(1)
// 004fe936  d918                 fstp dword ptr [eax]
// 004fe938  d94604               fld dword ptr [esi + 4]
// 004fe93b  d8f1                 fdiv st(1)
// 004fe93d  d95804               fstp dword ptr [eax + 4]
// 004fe940  d94608               fld dword ptr [esi + 8]
// 004fe943  d8f1                 fdiv st(1)
// 004fe945  d95808               fstp dword ptr [eax + 8]
// 004fe948  d87e0c               fdivr dword ptr [esi + 0xc]
// 004fe94b  5e                   pop esi
// 004fe94c  d9580c               fstp dword ptr [eax + 0xc]
// 004fe94f  83c40c               add esp, 0xc
// 004fe952  c20400               ret 4
// 004fe955  ddd9                 fstp st(1)
// 004fe957  ddd8                 fstp st(0)
// 004fe959  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fe95d  8b0e                 mov ecx, dword ptr [esi]
// 004fe95f  8b5604               mov edx, dword ptr [esi + 4]
// 004fe962  8908                 mov dword ptr [eax], ecx
// 004fe964  8b4e08               mov ecx, dword ptr [esi + 8]
// 004fe967  895004               mov dword ptr [eax + 4], edx
// 004fe96a  8b560c               mov edx, dword ptr [esi + 0xc]
// 004fe96d  894808               mov dword ptr [eax + 8], ecx
// 004fe970  89500c               mov dword ptr [eax + 0xc], edx
// 004fe973  5e                   pop esi
// 004fe974  83c40c               add esp, 0xc
// 004fe977  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Matrix3.cpp (function ?unitize@Quat@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix3.cpp
