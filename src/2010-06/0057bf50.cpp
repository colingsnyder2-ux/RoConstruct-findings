// from server: 100% by auto
// roc 2010-06 0057bf50  unit: seg_00570000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057bf50
//
// 0057bf50  8b442408             mov eax, dword ptr [esp + 8]
// 0057bf54  83e800               sub eax, 0
// 0057bf57  7438                 je 0x57bf91
// 0057bf59  83e801               sub eax, 1
// 0057bf5c  8b442404             mov eax, dword ptr [esp + 4]
// 0057bf60  7533                 jne 0x57bf95
// 0057bf62  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 0057bf67  f30f584110           addss xmm0, dword ptr [ecx + 0x10]
// 0057bf6c  f30f1100             movss dword ptr [eax], xmm0
// 0057bf70  f30f104114           movss xmm0, dword ptr [ecx + 0x14]
// 0057bf75  f30f584108           addss xmm0, dword ptr [ecx + 8]
// 0057bf7a  f30f114004           movss dword ptr [eax + 4], xmm0
// 0057bf7f  f30f104118           movss xmm0, dword ptr [ecx + 0x18]
// 0057bf84  f30f58410c           addss xmm0, dword ptr [ecx + 0xc]
// 0057bf89  f30f114008           movss dword ptr [eax + 8], xmm0
// 0057bf8e  c20800               ret 8
// 0057bf91  8b442404             mov eax, dword ptr [esp + 4]
// 0057bf95  d94104               fld dword ptr [ecx + 4]
// 0057bf98  d918                 fstp dword ptr [eax]
// 0057bf9a  d94108               fld dword ptr [ecx + 8]
// 0057bf9d  d95804               fstp dword ptr [eax + 4]
// 0057bfa0  d9410c               fld dword ptr [ecx + 0xc]
// 0057bfa3  d95808               fstp dword ptr [eax + 8]
// 0057bfa6  c20800               ret 8
// library g3d-6.09/G3Dcpp\LineSegment.cpp (function ?endPoint@LineSegment@G3D@@QBE?AVVector3@2@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/LineSegment.cpp
