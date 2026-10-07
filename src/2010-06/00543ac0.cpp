// roc 2010-06 00543ac0  unit: RBX::AggregatingSceneManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00543ac0
//
// 00543ac0  0f57c0               xorps xmm0, xmm0
// 00543ac3  8bc1                 mov eax, ecx
// 00543ac5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00543ac9  c700dcf2a100         mov dword ptr [eax], 0xa1f2dc
// 00543acf  f30f114004           movss dword ptr [eax + 4], xmm0
// 00543ad4  f30f114008           movss dword ptr [eax + 8], xmm0
// 00543ad9  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 00543ade  d901                 fld dword ptr [ecx]
// 00543ae0  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 00543ae6  d95804               fstp dword ptr [eax + 4]
// 00543ae9  d94104               fld dword ptr [ecx + 4]
// 00543aec  d95808               fstp dword ptr [eax + 8]
// 00543aef  d94108               fld dword ptr [ecx + 8]
// 00543af2  d9580c               fstp dword ptr [eax + 0xc]
// 00543af5  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 00543afa  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Sphere@G3D@@QAE@ABVVector3@1@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
