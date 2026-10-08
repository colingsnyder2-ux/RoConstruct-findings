// from server: 100% by auto
// roc 2011-06 00552630  unit: G3D::Sphere  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00552630
//
// 00552630  d94104               fld dword ptr [ecx + 4]
// 00552633  8b442404             mov eax, dword ptr [esp + 4]
// 00552637  f30f1005dc5ca700     movss xmm0, dword ptr [0xa75cdc]
// 0055263f  d918                 fstp dword ptr [eax]
// 00552641  d94108               fld dword ptr [ecx + 8]
// 00552644  d95804               fstp dword ptr [eax + 4]
// 00552647  d9410c               fld dword ptr [ecx + 0xc]
// 0055264a  d95808               fstp dword ptr [eax + 8]
// 0055264d  8b442408             mov eax, dword ptr [esp + 8]
// 00552651  f30f5c4110           subss xmm0, dword ptr [ecx + 0x10]
// 00552656  f30f1100             movss dword ptr [eax], xmm0
// 0055265a  c20800               ret 8
// library g3d-6.09/G3Dcpp\Plane.cpp (function ?getEquation@Plane@G3D@@QBEXAAVVector3@2@AAM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Plane.cpp
