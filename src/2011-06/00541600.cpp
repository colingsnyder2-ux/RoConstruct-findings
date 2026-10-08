// from server: 100% by auto
// roc 2011-06 00541600  unit: G3D::Plane  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00541600
//
// 00541600  0f57c0               xorps xmm0, xmm0
// 00541603  8bc1                 mov eax, ecx
// 00541605  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00541609  c700ccfba700         mov dword ptr [eax], 0xa7fbcc
// 0054160f  f30f114004           movss dword ptr [eax + 4], xmm0
// 00541614  f30f114008           movss dword ptr [eax + 8], xmm0
// 00541619  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 0054161e  d901                 fld dword ptr [ecx]
// 00541620  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 00541626  d95804               fstp dword ptr [eax + 4]
// 00541629  d94104               fld dword ptr [ecx + 4]
// 0054162c  d95808               fstp dword ptr [eax + 8]
// 0054162f  d94108               fld dword ptr [ecx + 8]
// 00541632  d9580c               fstp dword ptr [eax + 0xc]
// 00541635  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 0054163a  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Sphere@G3D@@QAE@ABVVector3@1@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
