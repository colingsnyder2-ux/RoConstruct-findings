// roc 2007-03 00503e50  unit: seg_00500000  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503e50
//
// 00503e50  83ec0c               sub esp, 0xc
// 00503e53  56                   push esi
// 00503e54  8bf1                 mov esi, ecx
// 00503e56  d94604               fld dword ptr [esi + 4]
// 00503e59  d906                 fld dword ptr [esi]
// 00503e5b  d94608               fld dword ptr [esi + 8]
// 00503e5e  d9c1                 fld st(1)
// 00503e60  deca                 fmulp st(2)
// 00503e62  d9c2                 fld st(2)
// 00503e64  decb                 fmulp st(3)
// 00503e66  d9c9                 fxch st(1)
// 00503e68  dec2                 faddp st(2)
// 00503e6a  dcc8                 fmul st(0), st(0)
// 00503e6c  dec1                 faddp st(1)
// 00503e6e  d95c2404             fstp dword ptr [esp + 4]
// 00503e72  d9442404             fld dword ptr [esp + 4]
// 00503e76  e831b41100           call 0x61f2ac
// 00503e7b  d95c2404             fstp dword ptr [esp + 4]
// 00503e7f  d9442404             fld dword ptr [esp + 4]
// 00503e83  d95c2404             fstp dword ptr [esp + 4]
// 00503e87  d9442404             fld dword ptr [esp + 4]
// 00503e8b  d9ee                 fldz 
// 00503e8d  d9c0                 fld st(0)
// 00503e8f  ddea                 fucomp st(2)
// 00503e91  dfe0                 fnstsw ax
// 00503e93  f6c444               test ah, 0x44
// 00503e96  7b5e                 jnp 0x503ef6
// 00503e98  d9c1                 fld st(1)
// 00503e9a  83ec10               sub esp, 0x10
// 00503e9d  d8e1                 fsub st(1)
// 00503e9f  d9e1                 fabs 
// 00503ea1  dd5c2418             fstp qword ptr [esp + 0x18]
// 00503ea5  dd5c2408             fstp qword ptr [esp + 8]
// 00503ea9  dd1c24               fstp qword ptr [esp]
// 00503eac  e85fa9ffff           call 0x4fe810
// 00503eb1  dc5c2418             fcomp qword ptr [esp + 0x18]
// 00503eb5  83c410               add esp, 0x10
// 00503eb8  dfe0                 fnstsw ax
// 00503eba  f6c401               test ah, 1
// 00503ebd  743b                 je 0x503efa
// 00503ebf  d9e8                 fld1 
// 00503ec1  83ec10               sub esp, 0x10
// 00503ec4  dd5c2408             fstp qword ptr [esp + 8]
// 00503ec8  d9442414             fld dword ptr [esp + 0x14]
// 00503ecc  dd1c24               fstp qword ptr [esp]
// 00503ecf  e88ca9ffff           call 0x4fe860
// 00503ed4  83c410               add esp, 0x10
// 00503ed7  84c0                 test al, al
// 00503ed9  8b442414             mov eax, dword ptr [esp + 0x14]
// 00503edd  7467                 je 0x503f46
// 00503edf  d906                 fld dword ptr [esi]
// 00503ee1  d918                 fstp dword ptr [eax]
// 00503ee3  d94604               fld dword ptr [esi + 4]
// 00503ee6  d95804               fstp dword ptr [eax + 4]
// 00503ee9  d94608               fld dword ptr [esi + 8]
// 00503eec  5e                   pop esi
// 00503eed  d95808               fstp dword ptr [eax + 8]
// 00503ef0  83c40c               add esp, 0xc
// 00503ef3  c20400               ret 4
// 00503ef6  ddd9                 fstp st(1)
// 00503ef8  ddd8                 fstp st(0)
// 00503efa  b801000000           mov eax, 1
// 00503eff  840500788b00         test byte ptr [0x8b7800], al
// 00503f05  751a                 jne 0x503f21
// 00503f07  d9ee                 fldz 
// 00503f09  090500788b00         or dword ptr [0x8b7800], eax
// 00503f0f  d915f4778b00         fst dword ptr [0x8b77f4]
// 00503f15  d915f8778b00         fst dword ptr [0x8b77f8]
// 00503f1b  d91dfc778b00         fstp dword ptr [0x8b77fc]
// 00503f21  8b442414             mov eax, dword ptr [esp + 0x14]
// 00503f25  d905f4778b00         fld dword ptr [0x8b77f4]
// 00503f2b  d918                 fstp dword ptr [eax]
// 00503f2d  5e                   pop esi
// 00503f2e  d905f8778b00         fld dword ptr [0x8b77f8]
// 00503f34  d95804               fstp dword ptr [eax + 4]
// 00503f37  d905fc778b00         fld dword ptr [0x8b77fc]
// 00503f3d  d95808               fstp dword ptr [eax + 8]
// 00503f40  83c40c               add esp, 0xc
// 00503f43  c20400               ret 4
// 00503f46  d9442404             fld dword ptr [esp + 4]
// 00503f4a  d9e8                 fld1 
// 00503f4c  def1                 fdivrp st(1)
// 00503f4e  d95c2404             fstp dword ptr [esp + 4]
// 00503f52  d906                 fld dword ptr [esi]
// 00503f54  d9442404             fld dword ptr [esp + 4]
// 00503f58  d9c0                 fld st(0)
// 00503f5a  deca                 fmulp st(2)
// 00503f5c  d9c9                 fxch st(1)
// 00503f5e  d918                 fstp dword ptr [eax]
// 00503f60  d9c0                 fld st(0)
// 00503f62  d84e04               fmul dword ptr [esi + 4]
// 00503f65  d95804               fstp dword ptr [eax + 4]
// 00503f68  d84e08               fmul dword ptr [esi + 8]
// 00503f6b  5e                   pop esi
// 00503f6c  d95808               fstp dword ptr [eax + 8]
// 00503f6f  83c40c               add esp, 0xc
// 00503f72  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\MeshAlg.cpp (function ?directionOrZero@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlg.cpp
