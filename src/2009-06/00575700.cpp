// roc 2009-06 00575700  unit: G3D::BinaryInput  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575700
//
// 00575700  d9ee                 fldz 
// 00575702  d9442408             fld dword ptr [esp + 8]
// 00575706  dde1                 fucom st(1)
// 00575708  dfe0                 fnstsw ax
// 0057570a  ddd9                 fstp st(1)
// 0057570c  f6c444               test ah, 0x44
// 0057570f  7b23                 jnp 0x575734
// 00575711  d9e8                 fld1 
// 00575713  8b442404             mov eax, dword ptr [esp + 4]
// 00575717  def1                 fdivrp st(1)
// 00575719  d901                 fld dword ptr [ecx]
// 0057571b  d8c9                 fmul st(1)
// 0057571d  d94104               fld dword ptr [ecx + 4]
// 00575720  d8ca                 fmul st(2)
// 00575722  d94108               fld dword ptr [ecx + 8]
// 00575725  decb                 fmulp st(3)
// 00575727  d9c9                 fxch st(1)
// 00575729  d918                 fstp dword ptr [eax]
// 0057572b  d95804               fstp dword ptr [eax + 4]
// 0057572e  d95808               fstp dword ptr [eax + 8]
// 00575731  c20800               ret 8
// 00575734  ddd8                 fstp st(0)
// 00575736  e825d9ffff           call 0x573060
// 0057573b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057573f  d900                 fld dword ptr [eax]
// 00575741  d919                 fstp dword ptr [ecx]
// 00575743  d94004               fld dword ptr [eax + 4]
// 00575746  d95904               fstp dword ptr [ecx + 4]
// 00575749  d94008               fld dword ptr [eax + 8]
// 0057574c  8bc1                 mov eax, ecx
// 0057574e  d95908               fstp dword ptr [ecx + 8]
// 00575751  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Vector3.cpp (function ??KVector3@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Vector3.cpp
