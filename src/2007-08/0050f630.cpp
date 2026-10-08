// from server: 100% by auto
// roc 2007-08 0050f630  unit: G3D::TextInput::WrongSymbol  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f630
//
// 0050f630  d9ee                 fldz 
// 0050f632  83ec0c               sub esp, 0xc
// 0050f635  d9442414             fld dword ptr [esp + 0x14]
// 0050f639  dde1                 fucom st(1)
// 0050f63b  dfe0                 fnstsw ax
// 0050f63d  ddd9                 fstp st(1)
// 0050f63f  f6c444               test ah, 0x44
// 0050f642  7b44                 jnp 0x50f688
// 0050f644  d9e8                 fld1 
// 0050f646  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050f64a  def1                 fdivrp st(1)
// 0050f64c  d95c2414             fstp dword ptr [esp + 0x14]
// 0050f650  d901                 fld dword ptr [ecx]
// 0050f652  d9442414             fld dword ptr [esp + 0x14]
// 0050f656  d9c0                 fld st(0)
// 0050f658  deca                 fmulp st(2)
// 0050f65a  d9c9                 fxch st(1)
// 0050f65c  d91c24               fstp dword ptr [esp]
// 0050f65f  d94104               fld dword ptr [ecx + 4]
// 0050f662  d8c9                 fmul st(1)
// 0050f664  d95c2404             fstp dword ptr [esp + 4]
// 0050f668  d84908               fmul dword ptr [ecx + 8]
// 0050f66b  d95c2408             fstp dword ptr [esp + 8]
// 0050f66f  d90424               fld dword ptr [esp]
// 0050f672  d918                 fstp dword ptr [eax]
// 0050f674  d9442404             fld dword ptr [esp + 4]
// 0050f678  d95804               fstp dword ptr [eax + 4]
// 0050f67b  d9442408             fld dword ptr [esp + 8]
// 0050f67f  d95808               fstp dword ptr [eax + 8]
// 0050f682  83c40c               add esp, 0xc
// 0050f685  c20800               ret 8
// 0050f688  ddd8                 fstp st(0)
// 0050f68a  e85149feff           call 0x4f3fe0
// 0050f68f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050f693  d900                 fld dword ptr [eax]
// 0050f695  d919                 fstp dword ptr [ecx]
// 0050f697  d94004               fld dword ptr [eax + 4]
// 0050f69a  d95904               fstp dword ptr [ecx + 4]
// 0050f69d  d94008               fld dword ptr [eax + 8]
// 0050f6a0  8bc1                 mov eax, ecx
// 0050f6a2  d95908               fstp dword ptr [ecx + 8]
// 0050f6a5  83c40c               add esp, 0xc
// 0050f6a8  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??KVector3@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
