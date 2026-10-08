// from server: 100% by auto
// roc 2012-06 0062d840  unit: G3D::Line  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062d840
//
// 0062d840  0f57c0               xorps xmm0, xmm0
// 0062d843  8bc1                 mov eax, ecx
// 0062d845  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062d849  f30f114004           movss dword ptr [eax + 4], xmm0
// 0062d84e  f30f114008           movss dword ptr [eax + 8], xmm0
// 0062d853  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 0062d858  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 0062d85d  f30f114014           movss dword ptr [eax + 0x14], xmm0
// 0062d862  f30f114018           movss dword ptr [eax + 0x18], xmm0
// 0062d867  d901                 fld dword ptr [ecx]
// 0062d869  d95804               fstp dword ptr [eax + 4]
// 0062d86c  c700984bb700         mov dword ptr [eax], 0xb74b98
// 0062d872  d94104               fld dword ptr [ecx + 4]
// 0062d875  d95808               fstp dword ptr [eax + 8]
// 0062d878  d94108               fld dword ptr [ecx + 8]
// 0062d87b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062d87f  d9580c               fstp dword ptr [eax + 0xc]
// 0062d882  d901                 fld dword ptr [ecx]
// 0062d884  d95810               fstp dword ptr [eax + 0x10]
// 0062d887  d94104               fld dword ptr [ecx + 4]
// 0062d88a  d95814               fstp dword ptr [eax + 0x14]
// 0062d88d  d94108               fld dword ptr [ecx + 8]
// 0062d890  d95818               fstp dword ptr [eax + 0x18]
// 0062d893  c20800               ret 8
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??0Ray@G3D@@AAE@ABVVector3@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
