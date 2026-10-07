// roc 2012-06 0063f530  unit: G3D::Sphere  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063f530
//
// 0063f530  d94104               fld dword ptr [ecx + 4]
// 0063f533  8b442404             mov eax, dword ptr [esp + 4]
// 0063f537  d918                 fstp dword ptr [eax]
// 0063f539  d94108               fld dword ptr [ecx + 8]
// 0063f53c  d95804               fstp dword ptr [eax + 4]
// 0063f53f  d9410c               fld dword ptr [ecx + 0xc]
// 0063f542  d95808               fstp dword ptr [eax + 8]
// 0063f545  f30f104110           movss xmm0, dword ptr [ecx + 0x10]
// 0063f54a  8b442408             mov eax, dword ptr [esp + 8]
// 0063f54e  0f57059031b600       xorps xmm0, xmmword ptr [0xb63190]
// 0063f555  f30f1100             movss dword ptr [eax], xmm0
// 0063f559  c20800               ret 8
// library g3d-6.09/G3Dcpp\Plane.cpp (function ?getEquation@Plane@G3D@@QBEXAAVVector3@2@AAM@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Plane.cpp
