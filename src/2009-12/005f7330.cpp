// roc 2009-12 005f7330  unit: G3D::BinaryInput  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f7330
//
// 005f7330  51                   push ecx
// 005f7331  8b442408             mov eax, dword ptr [esp + 8]
// 005f7335  0f57c0               xorps xmm0, xmm0
// 005f7338  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f733c  f30f114004           movss dword ptr [eax + 4], xmm0
// 005f7341  f30f114008           movss dword ptr [eax + 8], xmm0
// 005f7346  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 005f734b  f30f114010           movss dword ptr [eax + 0x10], xmm0
// 005f7350  f30f114014           movss dword ptr [eax + 0x14], xmm0
// 005f7355  f30f114018           movss dword ptr [eax + 0x18], xmm0
// 005f735a  d901                 fld dword ptr [ecx]
// 005f735c  d95804               fstp dword ptr [eax + 4]
// 005f735f  c7042400000000       mov dword ptr [esp], 0
// 005f7366  d94104               fld dword ptr [ecx + 4]
// 005f7369  c700b0cd9b00         mov dword ptr [eax], 0x9bcdb0
// 005f736f  d95808               fstp dword ptr [eax + 8]
// 005f7372  d94108               fld dword ptr [ecx + 8]
// 005f7375  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f7379  d9580c               fstp dword ptr [eax + 0xc]
// 005f737c  d901                 fld dword ptr [ecx]
// 005f737e  d95810               fstp dword ptr [eax + 0x10]
// 005f7381  d94104               fld dword ptr [ecx + 4]
// 005f7384  d95814               fstp dword ptr [eax + 0x14]
// 005f7387  d94108               fld dword ptr [ecx + 8]
// 005f738a  d95818               fstp dword ptr [eax + 0x18]
// 005f738d  59                   pop ecx
// 005f738e  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?fromOriginAndDirection@Ray@G3D@@SA?AV12@ABVVector3@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
