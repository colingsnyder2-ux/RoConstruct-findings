// roc 2010-06 0055ee70  unit: G3D::Line  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055ee70
//
// 0055ee70  51                   push ecx
// 0055ee71  8b442408             mov eax, dword ptr [esp + 8]
// 0055ee75  0f57c0               xorps xmm0, xmm0
// 0055ee78  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055ee7c  f30f114004           movss dword ptr [eax + 4], xmm0
// 0055ee81  f30f114008           movss dword ptr [eax + 8], xmm0
// 0055ee86  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 0055ee8b  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 0055ee90  f30f114014           movss dword ptr [eax + 0x14], xmm0
// 0055ee95  f30f114018           movss dword ptr [eax + 0x18], xmm0
// 0055ee9a  d901                 fld dword ptr [ecx]
// 0055ee9c  d95804               fstp dword ptr [eax + 4]
// 0055ee9f  c7042400000000       mov dword ptr [esp], 0
// 0055eea6  d94104               fld dword ptr [ecx + 4]
// 0055eea9  c70090aca100         mov dword ptr [eax], 0xa1ac90
// 0055eeaf  d95808               fstp dword ptr [eax + 8]
// 0055eeb2  d94108               fld dword ptr [ecx + 8]
// 0055eeb5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055eeb9  d9580c               fstp dword ptr [eax + 0xc]
// 0055eebc  d901                 fld dword ptr [ecx]
// 0055eebe  d95810               fstp dword ptr [eax + 0x10]
// 0055eec1  d94104               fld dword ptr [ecx + 4]
// 0055eec4  d95814               fstp dword ptr [eax + 0x14]
// 0055eec7  d94108               fld dword ptr [ecx + 8]
// 0055eeca  d95818               fstp dword ptr [eax + 0x18]
// 0055eecd  59                   pop ecx
// 0055eece  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromOriginAndDirection@Ray@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
