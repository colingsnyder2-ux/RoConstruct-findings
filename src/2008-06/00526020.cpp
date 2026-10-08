// from server: 100% by auto
// roc 2008-06 00526020  unit: G3D::Line  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00526020
//
// 00526020  8b442404             mov eax, dword ptr [esp + 4]
// 00526024  d9410c               fld dword ptr [ecx + 0xc]
// 00526027  d918                 fstp dword ptr [eax]
// 00526029  d94110               fld dword ptr [ecx + 0x10]
// 0052602c  d95804               fstp dword ptr [eax + 4]
// 0052602f  d94114               fld dword ptr [ecx + 0x14]
// 00526032  d95808               fstp dword ptr [eax + 8]
// 00526035  c20400               ret 4
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?getPoint2@Capsule@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
