// from server: 100% by auto
// roc 2010-06 00522a00  unit: CSHA1  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00522a00
//
// 00522a00  8b542408             mov edx, dword ptr [esp + 8]
// 00522a04  f30f106908           movss xmm5, dword ptr [ecx + 8]
// 00522a09  f30f105904           movss xmm3, dword ptr [ecx + 4]
// 00522a0e  f30f105208           movss xmm2, dword ptr [edx + 8]
// 00522a13  f30f106204           movss xmm4, dword ptr [edx + 4]
// 00522a18  8b442404             mov eax, dword ptr [esp + 4]
// 00522a1c  0f28cd               movaps xmm1, xmm5
// 00522a1f  f30f59cc             mulss xmm1, xmm4
// 00522a23  0f28c3               movaps xmm0, xmm3
// 00522a26  f30f59c2             mulss xmm0, xmm2
// 00522a2a  f30f5cc1             subss xmm0, xmm1
// 00522a2e  f30f100a             movss xmm1, dword ptr [edx]
// 00522a32  f30f1100             movss dword ptr [eax], xmm0
// 00522a36  f30f1001             movss xmm0, dword ptr [ecx]
// 00522a3a  0f28f1               movaps xmm6, xmm1
// 00522a3d  f30f59f5             mulss xmm6, xmm5
// 00522a41  0f28e8               movaps xmm5, xmm0
// 00522a44  f30f59ea             mulss xmm5, xmm2
// 00522a48  f30f59c4             mulss xmm0, xmm4
// 00522a4c  f30f59cb             mulss xmm1, xmm3
// 00522a50  f30f5cf5             subss xmm6, xmm5
// 00522a54  f30f5cc1             subss xmm0, xmm1
// 00522a58  f30f117004           movss dword ptr [eax + 4], xmm6
// 00522a5d  f30f114008           movss dword ptr [eax + 8], xmm0
// 00522a62  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ?cross@Vector3@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
