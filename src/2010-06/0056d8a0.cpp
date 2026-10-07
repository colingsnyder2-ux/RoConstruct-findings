// roc 2010-06 0056d8a0  unit: seg_00560000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056d8a0
//
// 0056d8a0  d94104               fld dword ptr [ecx + 4]
// 0056d8a3  8b442404             mov eax, dword ptr [esp + 4]
// 0056d8a7  d918                 fstp dword ptr [eax]
// 0056d8a9  d94108               fld dword ptr [ecx + 8]
// 0056d8ac  d95804               fstp dword ptr [eax + 4]
// 0056d8af  d9410c               fld dword ptr [ecx + 0xc]
// 0056d8b2  d95808               fstp dword ptr [eax + 8]
// 0056d8b5  f30f104110           movss xmm0, dword ptr [ecx + 0x10]
// 0056d8ba  8b442408             mov eax, dword ptr [esp + 8]
// 0056d8be  0f5705c027a100       xorps xmm0, xmmword ptr [0xa127c0]
// 0056d8c5  f30f1100             movss dword ptr [eax], xmm0
// 0056d8c9  c20800               ret 8
// library g3d-6.09/G3Dcpp\Plane.cpp (function ?getEquation@Plane@G3D@@QBEXAAVVector3@2@AAM@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Plane.cpp
