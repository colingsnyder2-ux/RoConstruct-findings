// roc 2007-03 00503c20  unit: seg_00500000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503c20
//
// 00503c20  d9ee                 fldz 
// 00503c22  83ec14               sub esp, 0x14
// 00503c25  56                   push esi
// 00503c26  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00503c2a  d916                 fst dword ptr [esi]
// 00503c2c  57                   push edi
// 00503c2d  8b3d18e97700         mov edi, dword ptr [0x77e918]
// 00503c33  d95604               fst dword ptr [esi + 4]
// 00503c36  d95e08               fstp dword ptr [esi + 8]
// 00503c39  8da42400000000       lea esp, [esp]
// 00503c40  ffd7                 call edi
// 00503c42  89442420             mov dword ptr [esp + 0x20], eax
// 00503c46  db442420             fild dword ptr [esp + 0x20]
// 00503c4a  dcc0                 fadd st(0), st(0)
// 00503c4c  dc3508e97900         fdiv qword ptr [0x79e908]
// 00503c52  dc25a81f7900         fsub qword ptr [0x791fa8]
// 00503c58  d95c240c             fstp dword ptr [esp + 0xc]
// 00503c5c  ffd7                 call edi
// 00503c5e  89442420             mov dword ptr [esp + 0x20], eax
// 00503c62  db442420             fild dword ptr [esp + 0x20]
// 00503c66  dcc0                 fadd st(0), st(0)
// 00503c68  dc3508e97900         fdiv qword ptr [0x79e908]
// 00503c6e  dc25a81f7900         fsub qword ptr [0x791fa8]
// 00503c74  d95c2408             fstp dword ptr [esp + 8]
// 00503c78  ffd7                 call edi
// 00503c7a  89442420             mov dword ptr [esp + 0x20], eax
// 00503c7e  db442420             fild dword ptr [esp + 0x20]
// 00503c82  dcc0                 fadd st(0), st(0)
// 00503c84  dc3508e97900         fdiv qword ptr [0x79e908]
// 00503c8a  dc25a81f7900         fsub qword ptr [0x791fa8]
// 00503c90  d95c2410             fstp dword ptr [esp + 0x10]
// 00503c94  d9442410             fld dword ptr [esp + 0x10]
// 00503c98  d916                 fst dword ptr [esi]
// 00503c9a  d9442408             fld dword ptr [esp + 8]
// 00503c9e  d95604               fst dword ptr [esi + 4]
// 00503ca1  d944240c             fld dword ptr [esp + 0xc]
// 00503ca5  d95608               fst dword ptr [esi + 8]
// 00503ca8  d9c2                 fld st(2)
// 00503caa  decb                 fmulp st(3)
// 00503cac  d9c1                 fld st(1)
// 00503cae  deca                 fmulp st(2)
// 00503cb0  d9ca                 fxch st(2)
// 00503cb2  dec1                 faddp st(1)
// 00503cb4  d9c1                 fld st(1)
// 00503cb6  deca                 fmulp st(2)
// 00503cb8  dec1                 faddp st(1)
// 00503cba  d95c2420             fstp dword ptr [esp + 0x20]
// 00503cbe  d9442420             fld dword ptr [esp + 0x20]
// 00503cc2  d81dbc247900         fcomp dword ptr [0x7924bc]
// 00503cc8  dfe0                 fnstsw ax
// 00503cca  f6c401               test ah, 1
// 00503ccd  0f846dffffff         je 0x503c40
// 00503cd3  d90560f47900         fld dword ptr [0x79f460]
// 00503cd9  51                   push ecx
// 00503cda  8bce                 mov ecx, esi
// 00503cdc  d91c24               fstp dword ptr [esp]
// 00503cdf  e85cfdffff           call 0x503a40
// 00503ce4  ddd8                 fstp st(0)
// 00503ce6  5f                   pop edi
// 00503ce7  8bc6                 mov eax, esi
// 00503ce9  5e                   pop esi
// 00503cea  83c414               add esp, 0x14
// 00503ced  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ?random@Vector3@G3D@@SA?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
