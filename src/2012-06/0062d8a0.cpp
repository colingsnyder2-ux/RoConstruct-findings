// from server: 100% by auto
// roc 2012-06 0062d8a0  unit: G3D::Line  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062d8a0
//
// 0062d8a0  51                   push ecx
// 0062d8a1  8b442408             mov eax, dword ptr [esp + 8]
// 0062d8a5  0f57c0               xorps xmm0, xmm0
// 0062d8a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062d8ac  f30f114004           movss dword ptr [eax + 4], xmm0
// 0062d8b1  f30f114008           movss dword ptr [eax + 8], xmm0
// 0062d8b6  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 0062d8bb  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 0062d8c0  f30f114014           movss dword ptr [eax + 0x14], xmm0
// 0062d8c5  f30f114018           movss dword ptr [eax + 0x18], xmm0
// 0062d8ca  d901                 fld dword ptr [ecx]
// 0062d8cc  d95804               fstp dword ptr [eax + 4]
// 0062d8cf  c7042400000000       mov dword ptr [esp], 0
// 0062d8d6  d94104               fld dword ptr [ecx + 4]
// 0062d8d9  c700984bb700         mov dword ptr [eax], 0xb74b98
// 0062d8df  d95808               fstp dword ptr [eax + 8]
// 0062d8e2  d94108               fld dword ptr [ecx + 8]
// 0062d8e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062d8e9  d9580c               fstp dword ptr [eax + 0xc]
// 0062d8ec  d901                 fld dword ptr [ecx]
// 0062d8ee  d95810               fstp dword ptr [eax + 0x10]
// 0062d8f1  d94104               fld dword ptr [ecx + 4]
// 0062d8f4  d95814               fstp dword ptr [eax + 0x14]
// 0062d8f7  d94108               fld dword ptr [ecx + 8]
// 0062d8fa  d95818               fstp dword ptr [eax + 0x18]
// 0062d8fd  59                   pop ecx
// 0062d8fe  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromOriginAndDirection@Ray@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
