// roc 2009-06 00575610  unit: G3D::BinaryInput  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575610
//
// 00575610  d9ee                 fldz 
// 00575612  83ec08               sub esp, 8
// 00575615  56                   push esi
// 00575616  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057561a  d916                 fst dword ptr [esi]
// 0057561c  57                   push edi
// 0057561d  8b3ddce88900         mov edi, dword ptr [0x89e8dc]
// 00575623  d95604               fst dword ptr [esi + 4]
// 00575626  d95e08               fstp dword ptr [esi + 8]
// 00575629  eb0d                 jmp 0x575638
// 0057562b  eb03                 jmp 0x575630
// 0057562d  8d4900               lea ecx, [ecx]
// 00575630  ddd8                 fstp st(0)
// 00575632  ddd8                 fstp st(0)
// 00575634  ddd8                 fstp st(0)
// 00575636  ddd8                 fstp st(0)
// 00575638  ffd7                 call edi
// 0057563a  89442414             mov dword ptr [esp + 0x14], eax
// 0057563e  db442414             fild dword ptr [esp + 0x14]
// 00575642  d80d48b88c00         fmul dword ptr [0x8cb848]
// 00575648  d82500a58b00         fsub dword ptr [0x8ba500]
// 0057564e  d95c240c             fstp dword ptr [esp + 0xc]
// 00575652  ffd7                 call edi
// 00575654  89442414             mov dword ptr [esp + 0x14], eax
// 00575658  db442414             fild dword ptr [esp + 0x14]
// 0057565c  d80d48b88c00         fmul dword ptr [0x8cb848]
// 00575662  d82500a58b00         fsub dword ptr [0x8ba500]
// 00575668  d95c2408             fstp dword ptr [esp + 8]
// 0057566c  ffd7                 call edi
// 0057566e  89442414             mov dword ptr [esp + 0x14], eax
// 00575672  db442414             fild dword ptr [esp + 0x14]
// 00575676  d80d48b88c00         fmul dword ptr [0x8cb848]
// 0057567c  d9e8                 fld1 
// 0057567e  dce9                 fsub st(1), st(0)
// 00575680  d9c9                 fxch st(1)
// 00575682  d916                 fst dword ptr [esi]
// 00575684  d9442408             fld dword ptr [esp + 8]
// 00575688  d95604               fst dword ptr [esi + 4]
// 0057568b  d944240c             fld dword ptr [esp + 0xc]
// 0057568f  d95608               fst dword ptr [esi + 8]
// 00575692  d9c2                 fld st(2)
// 00575694  d8cb                 fmul st(3)
// 00575696  d9c2                 fld st(2)
// 00575698  d8cb                 fmul st(3)
// 0057569a  dec1                 faddp st(1)
// 0057569c  d9c1                 fld st(1)
// 0057569e  d8ca                 fmul st(2)
// 005756a0  dec1                 faddp st(1)
// 005756a2  d8dc                 fcomp st(4)
// 005756a4  dfe0                 fnstsw ax
// 005756a6  f6c401               test ah, 1
// 005756a9  7485                 je 0x575630
// 005756ab  d9c2                 fld st(2)
// 005756ad  d8cb                 fmul st(3)
// 005756af  d9c2                 fld st(2)
// 005756b1  d8cb                 fmul st(3)
// 005756b3  dec1                 faddp st(1)
// 005756b5  d9c1                 fld st(1)
// 005756b7  d8ca                 fmul st(2)
// 005756b9  dec1                 faddp st(1)
// 005756bb  d9fa                 fsqrt 
// 005756bd  d90574a48c00         fld dword ptr [0x8ca474]
// 005756c3  d8d9                 fcomp st(1)
// 005756c5  dfe0                 fnstsw ax
// 005756c7  f6c405               test ah, 5
// 005756ca  8bc6                 mov eax, esi
// 005756cc  7a18                 jp 0x5756e6
// 005756ce  defc                 fdivp st(4)
// 005756d0  5f                   pop edi
// 005756d1  d9ca                 fxch st(2)
// 005756d3  d8cb                 fmul st(3)
// 005756d5  d91e                 fstp dword ptr [esi]
// 005756d7  d8ca                 fmul st(2)
// 005756d9  d95e04               fstp dword ptr [esi + 4]
// 005756dc  dec9                 fmulp st(1)
// 005756de  d95e08               fstp dword ptr [esi + 8]
// 005756e1  5e                   pop esi
// 005756e2  83c408               add esp, 8
// 005756e5  c3                   ret 
// 005756e6  ddd8                 fstp st(0)
// 005756e8  5f                   pop edi
// 005756e9  ddd8                 fstp st(0)
// 005756eb  5e                   pop esi
// 005756ec  ddd8                 fstp st(0)
// 005756ee  ddd8                 fstp st(0)
// 005756f0  ddd8                 fstp st(0)
// 005756f2  83c408               add esp, 8
// 005756f5  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ?random@Vector3@G3D@@SA?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
