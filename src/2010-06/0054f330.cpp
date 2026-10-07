// roc 2010-06 0054f330  unit: G3D::Shader  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f330
//
// 0054f330  f30f104c2408         movss xmm1, dword ptr [esp + 8]
// 0054f336  0f2e0d2878a000       ucomiss xmm1, dword ptr [0xa07828]
// 0054f33d  9f                   lahf 
// 0054f33e  f6c444               test ah, 0x44
// 0054f341  7b2d                 jnp 0x54f370
// 0054f343  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 0054f34b  8b442404             mov eax, dword ptr [esp + 4]
// 0054f34f  f30f105104           movss xmm2, dword ptr [ecx + 4]
// 0054f354  f30f5ec1             divss xmm0, xmm1
// 0054f358  f30f1009             movss xmm1, dword ptr [ecx]
// 0054f35c  f30f59c8             mulss xmm1, xmm0
// 0054f360  f30f59d0             mulss xmm2, xmm0
// 0054f364  f30f1108             movss dword ptr [eax], xmm1
// 0054f368  f30f115004           movss dword ptr [eax + 4], xmm2
// 0054f36d  c20800               ret 8
// 0054f370  e85bffffff           call 0x54f2d0
// 0054f375  d900                 fld dword ptr [eax]
// 0054f377  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054f37b  d919                 fstp dword ptr [ecx]
// 0054f37d  d94004               fld dword ptr [eax + 4]
// 0054f380  8bc1                 mov eax, ecx
// 0054f382  d95904               fstp dword ptr [ecx + 4]
// 0054f385  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector2.cpp (function ??KVector2@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Vector2.cpp
