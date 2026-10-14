// roc 2009-06 00577af0  unit: G3D::LineSegment  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577af0
//
// 00577af0  83ec0c               sub esp, 0xc
// 00577af3  56                   push esi
// 00577af4  8bf1                 mov esi, ecx
// 00577af6  d9460c               fld dword ptr [esi + 0xc]
// 00577af9  d94608               fld dword ptr [esi + 8]
// 00577afc  d94604               fld dword ptr [esi + 4]
// 00577aff  d906                 fld dword ptr [esi]
// 00577b01  dcc8                 fmul st(0), st(0)
// 00577b03  d9c1                 fld st(1)
// 00577b05  deca                 fmulp st(2)
// 00577b07  dec1                 faddp st(1)
// 00577b09  d9c1                 fld st(1)
// 00577b0b  deca                 fmulp st(2)
// 00577b0d  dec1                 faddp st(1)
// 00577b0f  d9c1                 fld st(1)
// 00577b11  deca                 fmulp st(2)
// 00577b13  dec1                 faddp st(1)
// 00577b15  d9542404             fst dword ptr [esp + 4]
// 00577b19  d9e8                 fld1 
// 00577b1b  d9c0                 fld st(0)
// 00577b1d  ddea                 fucomp st(2)
// 00577b1f  dfe0                 fnstsw ax
// 00577b21  f6c444               test ah, 0x44
// 00577b24  7b58                 jnp 0x577b7e
// 00577b26  d9c1                 fld st(1)
// 00577b28  83ec10               sub esp, 0x10
// 00577b2b  d8e1                 fsub st(1)
// 00577b2d  d9e1                 fabs 
// 00577b2f  dd5c2418             fstp qword ptr [esp + 0x18]
// 00577b33  dd5c2408             fstp qword ptr [esp + 8]
// 00577b37  dd1c24               fstp qword ptr [esp]
// 00577b3a  e8f1e7ffff           call 0x576330
// 00577b3f  dc5c2418             fcomp qword ptr [esp + 0x18]
// 00577b43  83c410               add esp, 0x10
// 00577b46  dfe0                 fnstsw ax
// 00577b48  f6c401               test ah, 1
// 00577b4b  7435                 je 0x577b82
// 00577b4d  d9442404             fld dword ptr [esp + 4]
// 00577b51  8b442414             mov eax, dword ptr [esp + 0x14]
// 00577b55  d9fa                 fsqrt 
// 00577b57  d9e8                 fld1 
// 00577b59  def1                 fdivrp st(1)
// 00577b5b  d9c0                 fld st(0)
// 00577b5d  d80e                 fmul dword ptr [esi]
// 00577b5f  d918                 fstp dword ptr [eax]
// 00577b61  d94604               fld dword ptr [esi + 4]
// 00577b64  d8c9                 fmul st(1)
// 00577b66  d95804               fstp dword ptr [eax + 4]
// 00577b69  d94608               fld dword ptr [esi + 8]
// 00577b6c  d8c9                 fmul st(1)
// 00577b6e  d95808               fstp dword ptr [eax + 8]
// 00577b71  d84e0c               fmul dword ptr [esi + 0xc]
// 00577b74  5e                   pop esi
// 00577b75  d9580c               fstp dword ptr [eax + 0xc]
// 00577b78  83c40c               add esp, 0xc
// 00577b7b  c20400               ret 4
// 00577b7e  ddd9                 fstp st(1)
// 00577b80  ddd8                 fstp st(0)
// 00577b82  8b442414             mov eax, dword ptr [esp + 0x14]
// 00577b86  8b0e                 mov ecx, dword ptr [esi]
// 00577b88  8b5604               mov edx, dword ptr [esi + 4]
// 00577b8b  8908                 mov dword ptr [eax], ecx
// 00577b8d  8b4e08               mov ecx, dword ptr [esi + 8]
// 00577b90  895004               mov dword ptr [eax + 4], edx
// 00577b93  8b560c               mov edx, dword ptr [esi + 0xc]
// 00577b96  894808               mov dword ptr [eax + 8], ecx
// 00577b99  89500c               mov dword ptr [eax + 0xc], edx
// 00577b9c  5e                   pop esi
// 00577b9d  83c40c               add esp, 0xc
// 00577ba0  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ?unitize@Quat@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
