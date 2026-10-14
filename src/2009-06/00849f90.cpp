// roc 2009-06 00849f90  unit: RBX::RbxG3D::MegaTextureProxy  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00849f90
//
// 00849f90  83ec0c               sub esp, 0xc
// 00849f93  56                   push esi
// 00849f94  8bf1                 mov esi, ecx
// 00849f96  d94608               fld dword ptr [esi + 8]
// 00849f99  d94604               fld dword ptr [esi + 4]
// 00849f9c  d906                 fld dword ptr [esi]
// 00849f9e  dcc8                 fmul st(0), st(0)
// 00849fa0  d9c1                 fld st(1)
// 00849fa2  deca                 fmulp st(2)
// 00849fa4  dec1                 faddp st(1)
// 00849fa6  d9c1                 fld st(1)
// 00849fa8  deca                 fmulp st(2)
// 00849faa  dec1                 faddp st(1)
// 00849fac  d9fa                 fsqrt 
// 00849fae  d9542404             fst dword ptr [esp + 4]
// 00849fb2  d9ee                 fldz 
// 00849fb4  d9c0                 fld st(0)
// 00849fb6  ddea                 fucomp st(2)
// 00849fb8  dfe0                 fnstsw ax
// 00849fba  f6c444               test ah, 0x44
// 00849fbd  7b5c                 jnp 0x84a01b
// 00849fbf  d9c1                 fld st(1)
// 00849fc1  83ec10               sub esp, 0x10
// 00849fc4  d9e1                 fabs 
// 00849fc6  dd5c2418             fstp qword ptr [esp + 0x18]
// 00849fca  dd5c2408             fstp qword ptr [esp + 8]
// 00849fce  dd1c24               fstp qword ptr [esp]
// 00849fd1  e85ac3d2ff           call 0x576330
// 00849fd6  dc5c2418             fcomp qword ptr [esp + 0x18]
// 00849fda  83c410               add esp, 0x10
// 00849fdd  dfe0                 fnstsw ax
// 00849fdf  f6c401               test ah, 1
// 00849fe2  743b                 je 0x84a01f
// 00849fe4  d9e8                 fld1 
// 00849fe6  83ec10               sub esp, 0x10
// 00849fe9  dd5c2408             fstp qword ptr [esp + 8]
// 00849fed  d9442414             fld dword ptr [esp + 0x14]
// 00849ff1  dd1c24               fstp qword ptr [esp]
// 00849ff4  e887c3d2ff           call 0x576380
// 00849ff9  83c410               add esp, 0x10
// 00849ffc  84c0                 test al, al
// 00849ffe  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084a002  7467                 je 0x84a06b
// 0084a004  d906                 fld dword ptr [esi]
// 0084a006  d918                 fstp dword ptr [eax]
// 0084a008  d94604               fld dword ptr [esi + 4]
// 0084a00b  d95804               fstp dword ptr [eax + 4]
// 0084a00e  d94608               fld dword ptr [esi + 8]
// 0084a011  5e                   pop esi
// 0084a012  d95808               fstp dword ptr [eax + 8]
// 0084a015  83c40c               add esp, 0xc
// 0084a018  c20400               ret 4
// 0084a01b  ddd9                 fstp st(1)
// 0084a01d  ddd8                 fstp st(0)
// 0084a01f  b801000000           mov eax, 1
// 0084a024  8405f8c6a300         test byte ptr [0xa3c6f8], al
// 0084a02a  751a                 jne 0x84a046
// 0084a02c  d9ee                 fldz 
// 0084a02e  0905f8c6a300         or dword ptr [0xa3c6f8], eax
// 0084a034  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 0084a03a  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 0084a040  d91df4c6a300         fstp dword ptr [0xa3c6f4]
// 0084a046  8b442414             mov eax, dword ptr [esp + 0x14]
// 0084a04a  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 0084a050  d918                 fstp dword ptr [eax]
// 0084a052  5e                   pop esi
// 0084a053  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 0084a059  d95804               fstp dword ptr [eax + 4]
// 0084a05c  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 0084a062  d95808               fstp dword ptr [eax + 8]
// 0084a065  83c40c               add esp, 0xc
// 0084a068  c20400               ret 4
// 0084a06b  d9e8                 fld1 
// 0084a06d  d8742404             fdiv dword ptr [esp + 4]
// 0084a071  d906                 fld dword ptr [esi]
// 0084a073  d8c9                 fmul st(1)
// 0084a075  d918                 fstp dword ptr [eax]
// 0084a077  d9c0                 fld st(0)
// 0084a079  d84e04               fmul dword ptr [esi + 4]
// 0084a07c  d95804               fstp dword ptr [eax + 4]
// 0084a07f  d84e08               fmul dword ptr [esi + 8]
// 0084a082  5e                   pop esi
// 0084a083  d95808               fstp dword ptr [eax + 8]
// 0084a086  83c40c               add esp, 0xc
// 0084a089  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlg.cpp (function ?directionOrZero@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlg.cpp
