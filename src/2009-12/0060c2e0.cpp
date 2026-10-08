// roc 2009-12 0060c2e0  unit: seg_00600000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060c2e0
//
// 0060c2e0  8b442408             mov eax, dword ptr [esp + 8]
// 0060c2e4  83e800               sub eax, 0
// 0060c2e7  7438                 je 0x60c321
// 0060c2e9  83e801               sub eax, 1
// 0060c2ec  8b442404             mov eax, dword ptr [esp + 4]
// 0060c2f0  7533                 jne 0x60c325
// 0060c2f2  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 0060c2f7  f30f584110           addss xmm0, dword ptr [ecx + 0x10]
// 0060c2fc  f30f1100             movss dword ptr [eax], xmm0
// 0060c300  f30f104114           movss xmm0, dword ptr [ecx + 0x14]
// 0060c305  f30f584108           addss xmm0, dword ptr [ecx + 8]
// 0060c30a  f30f114004           movss dword ptr [eax + 4], xmm0
// 0060c30f  f30f104118           movss xmm0, dword ptr [ecx + 0x18]
// 0060c314  f30f58410c           addss xmm0, dword ptr [ecx + 0xc]
// 0060c319  f30f114008           movss dword ptr [eax + 8], xmm0
// 0060c31e  c20800               ret 8
// 0060c321  8b442404             mov eax, dword ptr [esp + 4]
// 0060c325  d94104               fld dword ptr [ecx + 4]
// 0060c328  d918                 fstp dword ptr [eax]
// 0060c32a  d94108               fld dword ptr [ecx + 8]
// 0060c32d  d95804               fstp dword ptr [eax + 4]
// 0060c330  d9410c               fld dword ptr [ecx + 0xc]
// 0060c333  d95808               fstp dword ptr [eax + 8]
// 0060c336  c20800               ret 8
// library g3d-6.09/G3Dcpp\LineSegment.cpp (function ?endPoint@LineSegment@G3D@@QBE?AVVector3@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/LineSegment.cpp
