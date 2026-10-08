// from server: 100% by auto
// roc 2010-06 00560070  unit: G3D::Sphere  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560070
//
// 00560070  0f57c0               xorps xmm0, xmm0
// 00560073  8bc1                 mov eax, ecx
// 00560075  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00560079  f30f1100             movss dword ptr [eax], xmm0
// 0056007d  f30f114004           movss dword ptr [eax + 4], xmm0
// 00560082  f30f114008           movss dword ptr [eax + 8], xmm0
// 00560087  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 0056008c  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 00560091  f30f114014           movss dword ptr [eax + 0x14], xmm0
// 00560096  d901                 fld dword ptr [ecx]
// 00560098  d918                 fstp dword ptr [eax]
// 0056009a  d94104               fld dword ptr [ecx + 4]
// 0056009d  d95804               fstp dword ptr [eax + 4]
// 005600a0  d94108               fld dword ptr [ecx + 8]
// 005600a3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005600a7  d95808               fstp dword ptr [eax + 8]
// 005600aa  d901                 fld dword ptr [ecx]
// 005600ac  d9580c               fstp dword ptr [eax + 0xc]
// 005600af  d94104               fld dword ptr [ecx + 4]
// 005600b2  d95810               fstp dword ptr [eax + 0x10]
// 005600b5  d94108               fld dword ptr [ecx + 8]
// 005600b8  d95814               fstp dword ptr [eax + 0x14]
// 005600bb  c20800               ret 8
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0AABox@G3D@@QAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
