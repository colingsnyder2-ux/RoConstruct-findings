// roc 2007-03 004f5180  unit: seg_004f0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f5180
//
// 004f5180  d9ee                 fldz 
// 004f5182  83ec08               sub esp, 8
// 004f5185  d9442410             fld dword ptr [esp + 0x10]
// 004f5189  dde1                 fucom st(1)
// 004f518b  dfe0                 fnstsw ax
// 004f518d  ddd9                 fstp st(1)
// 004f518f  f6c444               test ah, 0x44
// 004f5192  7b34                 jnp 0x4f51c8
// 004f5194  d9e8                 fld1 
// 004f5196  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f519a  def1                 fdivrp st(1)
// 004f519c  d95c2410             fstp dword ptr [esp + 0x10]
// 004f51a0  d901                 fld dword ptr [ecx]
// 004f51a2  d9442410             fld dword ptr [esp + 0x10]
// 004f51a6  d9c0                 fld st(0)
// 004f51a8  deca                 fmulp st(2)
// 004f51aa  d9c9                 fxch st(1)
// 004f51ac  d91c24               fstp dword ptr [esp]
// 004f51af  d84904               fmul dword ptr [ecx + 4]
// 004f51b2  d95c2404             fstp dword ptr [esp + 4]
// 004f51b6  d90424               fld dword ptr [esp]
// 004f51b9  d918                 fstp dword ptr [eax]
// 004f51bb  d9442404             fld dword ptr [esp + 4]
// 004f51bf  d95804               fstp dword ptr [eax + 4]
// 004f51c2  83c408               add esp, 8
// 004f51c5  c20800               ret 8
// 004f51c8  ddd8                 fstp st(0)
// 004f51ca  e841ffffff           call 0x4f5110
// 004f51cf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f51d3  d900                 fld dword ptr [eax]
// 004f51d5  d919                 fstp dword ptr [ecx]
// 004f51d7  d94004               fld dword ptr [eax + 4]
// 004f51da  8bc1                 mov eax, ecx
// 004f51dc  d95904               fstp dword ptr [ecx + 4]
// 004f51df  83c408               add esp, 8
// 004f51e2  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\Vector2.cpp (function ??KVector2@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Vector2.cpp
