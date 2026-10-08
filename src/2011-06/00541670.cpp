// from server: 100% by auto
// roc 2011-06 00541670  unit: G3D::Sphere  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00541670
//
// 00541670  51                   push ecx
// 00541671  8b442408             mov eax, dword ptr [esp + 8]
// 00541675  0f57c0               xorps xmm0, xmm0
// 00541678  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054167c  f30f114004           movss dword ptr [eax + 4], xmm0
// 00541681  f30f114008           movss dword ptr [eax + 8], xmm0
// 00541686  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 0054168b  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 00541690  f30f114014           movss dword ptr [eax + 0x14], xmm0
// 00541695  f30f114018           movss dword ptr [eax + 0x18], xmm0
// 0054169a  d901                 fld dword ptr [ecx]
// 0054169c  d95804               fstp dword ptr [eax + 4]
// 0054169f  c7042400000000       mov dword ptr [esp], 0
// 005416a6  d94104               fld dword ptr [ecx + 4]
// 005416a9  c70018afa700         mov dword ptr [eax], 0xa7af18
// 005416af  d95808               fstp dword ptr [eax + 8]
// 005416b2  d94108               fld dword ptr [ecx + 8]
// 005416b5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005416b9  d9580c               fstp dword ptr [eax + 0xc]
// 005416bc  d901                 fld dword ptr [ecx]
// 005416be  d95810               fstp dword ptr [eax + 0x10]
// 005416c1  d94104               fld dword ptr [ecx + 4]
// 005416c4  d95814               fstp dword ptr [eax + 0x14]
// 005416c7  d94108               fld dword ptr [ecx + 8]
// 005416ca  d95818               fstp dword ptr [eax + 0x18]
// 005416cd  59                   pop ecx
// 005416ce  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromOriginAndDirection@Ray@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
