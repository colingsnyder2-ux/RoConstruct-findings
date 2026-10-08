// roc 2009-12 005f4d50  unit: seg_005f0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f4d50
//
// 005f4d50  8b442404             mov eax, dword ptr [esp + 4]
// 005f4d54  f30f1001             movss xmm0, dword ptr [ecx]
// 005f4d58  f30f1100             movss dword ptr [eax], xmm0
// 005f4d5c  f30f114004           movss dword ptr [eax + 4], xmm0
// 005f4d61  f30f114008           movss dword ptr [eax + 8], xmm0
// 005f4d66  c20400               ret 4
// library g3d-6.09/G3Dcpp\Quat.cpp (function ?xxx@Quat@G3D@@QBE?AVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
