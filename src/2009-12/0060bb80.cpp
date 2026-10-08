// roc 2009-12 0060bb80  unit: seg_00600000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bb80
//
// 0060bb80  d94104               fld dword ptr [ecx + 4]
// 0060bb83  8b442404             mov eax, dword ptr [esp + 4]
// 0060bb87  d918                 fstp dword ptr [eax]
// 0060bb89  d94108               fld dword ptr [ecx + 8]
// 0060bb8c  d95804               fstp dword ptr [eax + 4]
// 0060bb8f  d9410c               fld dword ptr [ecx + 0xc]
// 0060bb92  d95808               fstp dword ptr [eax + 8]
// 0060bb95  f30f104110           movss xmm0, dword ptr [ecx + 0x10]
// 0060bb9a  8b442408             mov eax, dword ptr [esp + 8]
// 0060bb9e  0f570510169b00       xorps xmm0, xmmword ptr [0x9b1610]
// 0060bba5  f30f1100             movss dword ptr [eax], xmm0
// 0060bba9  c20800               ret 8
// library g3d-6.09/G3Dcpp\Plane.cpp (function ?getEquation@Plane@G3D@@QBEXAAVVector3@2@AAM@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Plane.cpp
