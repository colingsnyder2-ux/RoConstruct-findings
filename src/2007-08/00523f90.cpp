// roc 2007-08 00523f90  unit: G3D::Line  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00523f90
//
// 00523f90  8b442404             mov eax, dword ptr [esp + 4]
// 00523f94  d9410c               fld dword ptr [ecx + 0xc]
// 00523f97  d918                 fstp dword ptr [eax]
// 00523f99  d94110               fld dword ptr [ecx + 0x10]
// 00523f9c  d95804               fstp dword ptr [eax + 4]
// 00523f9f  d94114               fld dword ptr [ecx + 0x14]
// 00523fa2  d95808               fstp dword ptr [eax + 8]
// 00523fa5  c20400               ret 4
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?getPoint2@Capsule@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
