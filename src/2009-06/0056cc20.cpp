// roc 2009-06 0056cc20  unit: G3D::Shader  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056cc20
//
// 0056cc20  d9ee                 fldz 
// 0056cc22  d9442408             fld dword ptr [esp + 8]
// 0056cc26  dde1                 fucom st(1)
// 0056cc28  dfe0                 fnstsw ax
// 0056cc2a  ddd9                 fstp st(1)
// 0056cc2c  f6c444               test ah, 0x44
// 0056cc2f  7b19                 jnp 0x56cc4a
// 0056cc31  d9e8                 fld1 
// 0056cc33  8b442404             mov eax, dword ptr [esp + 4]
// 0056cc37  def1                 fdivrp st(1)
// 0056cc39  d901                 fld dword ptr [ecx]
// 0056cc3b  d8c9                 fmul st(1)
// 0056cc3d  d94104               fld dword ptr [ecx + 4]
// 0056cc40  deca                 fmulp st(2)
// 0056cc42  d918                 fstp dword ptr [eax]
// 0056cc44  d95804               fstp dword ptr [eax + 4]
// 0056cc47  c20800               ret 8
// 0056cc4a  ddd8                 fstp st(0)
// 0056cc4c  e86fffffff           call 0x56cbc0
// 0056cc51  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056cc55  d900                 fld dword ptr [eax]
// 0056cc57  d919                 fstp dword ptr [ecx]
// 0056cc59  d94004               fld dword ptr [eax + 4]
// 0056cc5c  8bc1                 mov eax, ecx
// 0056cc5e  d95904               fstp dword ptr [ecx + 4]
// 0056cc61  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Vector2.cpp (function ??KVector2@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector2.cpp
