// roc 2007-03 00503cf0  unit: seg_00500000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503cf0
//
// 00503cf0  d9ee                 fldz 
// 00503cf2  83ec0c               sub esp, 0xc
// 00503cf5  d9442414             fld dword ptr [esp + 0x14]
// 00503cf9  dde1                 fucom st(1)
// 00503cfb  dfe0                 fnstsw ax
// 00503cfd  ddd9                 fstp st(1)
// 00503cff  f6c444               test ah, 0x44
// 00503d02  7b44                 jnp 0x503d48
// 00503d04  d9e8                 fld1 
// 00503d06  8b442410             mov eax, dword ptr [esp + 0x10]
// 00503d0a  def1                 fdivrp st(1)
// 00503d0c  d95c2414             fstp dword ptr [esp + 0x14]
// 00503d10  d901                 fld dword ptr [ecx]
// 00503d12  d9442414             fld dword ptr [esp + 0x14]
// 00503d16  d9c0                 fld st(0)
// 00503d18  deca                 fmulp st(2)
// 00503d1a  d9c9                 fxch st(1)
// 00503d1c  d91c24               fstp dword ptr [esp]
// 00503d1f  d94104               fld dword ptr [ecx + 4]
// 00503d22  d8c9                 fmul st(1)
// 00503d24  d95c2404             fstp dword ptr [esp + 4]
// 00503d28  d84908               fmul dword ptr [ecx + 8]
// 00503d2b  d95c2408             fstp dword ptr [esp + 8]
// 00503d2f  d90424               fld dword ptr [esp]
// 00503d32  d918                 fstp dword ptr [eax]
// 00503d34  d9442404             fld dword ptr [esp + 4]
// 00503d38  d95804               fstp dword ptr [eax + 4]
// 00503d3b  d9442408             fld dword ptr [esp + 8]
// 00503d3f  d95808               fstp dword ptr [eax + 8]
// 00503d42  83c40c               add esp, 0xc
// 00503d45  c20800               ret 8
// 00503d48  ddd8                 fstp st(0)
// 00503d4a  e8813cfeff           call 0x4e79d0
// 00503d4f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00503d53  d900                 fld dword ptr [eax]
// 00503d55  d919                 fstp dword ptr [ecx]
// 00503d57  d94004               fld dword ptr [eax + 4]
// 00503d5a  d95904               fstp dword ptr [ecx + 4]
// 00503d5d  d94008               fld dword ptr [eax + 8]
// 00503d60  8bc1                 mov eax, ecx
// 00503d62  d95908               fstp dword ptr [ecx + 8]
// 00503d65  83c40c               add esp, 0xc
// 00503d68  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Vector3.cpp (function ??KVector3@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Vector3.cpp
