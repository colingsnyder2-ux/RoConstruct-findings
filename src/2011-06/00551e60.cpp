// from server: 100% by auto
// roc 2011-06 00551e60  unit: G3D::Sphere  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00551e60
//
// 00551e60  0f57c0               xorps xmm0, xmm0
// 00551e63  8bc1                 mov eax, ecx
// 00551e65  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00551e69  f30f1100             movss dword ptr [eax], xmm0
// 00551e6d  f30f114004           movss dword ptr [eax + 4], xmm0
// 00551e72  f30f114008           movss dword ptr [eax + 8], xmm0
// 00551e77  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 00551e7c  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 00551e81  f30f114014           movss dword ptr [eax + 0x14], xmm0
// 00551e86  d901                 fld dword ptr [ecx]
// 00551e88  d918                 fstp dword ptr [eax]
// 00551e8a  d94104               fld dword ptr [ecx + 4]
// 00551e8d  d95804               fstp dword ptr [eax + 4]
// 00551e90  d94108               fld dword ptr [ecx + 8]
// 00551e93  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00551e97  d95808               fstp dword ptr [eax + 8]
// 00551e9a  d901                 fld dword ptr [ecx]
// 00551e9c  d9580c               fstp dword ptr [eax + 0xc]
// 00551e9f  d94104               fld dword ptr [ecx + 4]
// 00551ea2  d95810               fstp dword ptr [eax + 0x10]
// 00551ea5  d94108               fld dword ptr [ecx + 8]
// 00551ea8  d95814               fstp dword ptr [eax + 0x14]
// 00551eab  c20800               ret 8
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0AABox@G3D@@QAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
