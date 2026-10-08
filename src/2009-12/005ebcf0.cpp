// roc 2009-12 005ebcf0  unit: G3D::Shader  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ebcf0
//
// 005ebcf0  f30f104c2408         movss xmm1, dword ptr [esp + 8]
// 005ebcf6  0f2e0d886a9a00       ucomiss xmm1, dword ptr [0x9a6a88]
// 005ebcfd  9f                   lahf 
// 005ebcfe  f6c444               test ah, 0x44
// 005ebd01  7b2d                 jnp 0x5ebd30
// 005ebd03  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005ebd0b  8b442404             mov eax, dword ptr [esp + 4]
// 005ebd0f  f30f105104           movss xmm2, dword ptr [ecx + 4]
// 005ebd14  f30f5ec1             divss xmm0, xmm1
// 005ebd18  f30f1009             movss xmm1, dword ptr [ecx]
// 005ebd1c  f30f59c8             mulss xmm1, xmm0
// 005ebd20  f30f59d0             mulss xmm2, xmm0
// 005ebd24  f30f1108             movss dword ptr [eax], xmm1
// 005ebd28  f30f115004           movss dword ptr [eax + 4], xmm2
// 005ebd2d  c20800               ret 8
// 005ebd30  e85bffffff           call 0x5ebc90
// 005ebd35  d900                 fld dword ptr [eax]
// 005ebd37  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ebd3b  d919                 fstp dword ptr [ecx]
// 005ebd3d  d94004               fld dword ptr [eax + 4]
// 005ebd40  8bc1                 mov eax, ecx
// 005ebd42  d95904               fstp dword ptr [ecx + 4]
// 005ebd45  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ??KVector2@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
