// from server: 100% by auto
// roc 2012-06 0062b7d0  unit: G3D::MemoryManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062b7d0
//
// 0062b7d0  0f57c0               xorps xmm0, xmm0
// 0062b7d3  8bc1                 mov eax, ecx
// 0062b7d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b7d9  c7000839b800         mov dword ptr [eax], 0xb83908
// 0062b7df  f30f114004           movss dword ptr [eax + 4], xmm0
// 0062b7e4  f30f114008           movss dword ptr [eax + 8], xmm0
// 0062b7e9  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 0062b7ee  d901                 fld dword ptr [ecx]
// 0062b7f0  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 0062b7f6  d95804               fstp dword ptr [eax + 4]
// 0062b7f9  d94104               fld dword ptr [ecx + 4]
// 0062b7fc  d95808               fstp dword ptr [eax + 8]
// 0062b7ff  d94108               fld dword ptr [ecx + 8]
// 0062b802  d9580c               fstp dword ptr [eax + 0xc]
// 0062b805  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 0062b80a  c20800               ret 8
// library g3d-6.09/G3Dcpp\Capsule.cpp (function ??0Sphere@G3D@@QAE@ABVVector3@1@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Capsule.cpp
