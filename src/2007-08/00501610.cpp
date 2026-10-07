// roc 2007-08 00501610  unit: G3D::Shader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00501610
//
// 00501610  d9ee                 fldz 
// 00501612  83ec08               sub esp, 8
// 00501615  d9442410             fld dword ptr [esp + 0x10]
// 00501619  dde1                 fucom st(1)
// 0050161b  dfe0                 fnstsw ax
// 0050161d  ddd9                 fstp st(1)
// 0050161f  f6c444               test ah, 0x44
// 00501622  7b34                 jnp 0x501658
// 00501624  d9e8                 fld1 
// 00501626  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050162a  def1                 fdivrp st(1)
// 0050162c  d95c2410             fstp dword ptr [esp + 0x10]
// 00501630  d901                 fld dword ptr [ecx]
// 00501632  d9442410             fld dword ptr [esp + 0x10]
// 00501636  d9c0                 fld st(0)
// 00501638  deca                 fmulp st(2)
// 0050163a  d9c9                 fxch st(1)
// 0050163c  d91c24               fstp dword ptr [esp]
// 0050163f  d84904               fmul dword ptr [ecx + 4]
// 00501642  d95c2404             fstp dword ptr [esp + 4]
// 00501646  d90424               fld dword ptr [esp]
// 00501649  d918                 fstp dword ptr [eax]
// 0050164b  d9442404             fld dword ptr [esp + 4]
// 0050164f  d95804               fstp dword ptr [eax + 4]
// 00501652  83c408               add esp, 8
// 00501655  c20800               ret 8
// 00501658  ddd8                 fstp st(0)
// 0050165a  e841ffffff           call 0x5015a0
// 0050165f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00501663  d900                 fld dword ptr [eax]
// 00501665  d919                 fstp dword ptr [ecx]
// 00501667  d94004               fld dword ptr [eax + 4]
// 0050166a  8bc1                 mov eax, ecx
// 0050166c  d95904               fstp dword ptr [ecx + 4]
// 0050166f  83c408               add esp, 8
// 00501672  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ??KVector2@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
