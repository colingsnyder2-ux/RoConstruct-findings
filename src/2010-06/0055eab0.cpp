// roc 2010-06 0055eab0  unit: G3D::TextInput::WrongSymbol  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055eab0
//
// 0055eab0  f30f104c2408         movss xmm1, dword ptr [esp + 8]
// 0055eab6  0f2e0d2878a000       ucomiss xmm1, dword ptr [0xa07828]
// 0055eabd  9f                   lahf 
// 0055eabe  f6c444               test ah, 0x44
// 0055eac1  7b3b                 jnp 0x55eafe
// 0055eac3  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 0055eacb  8b442404             mov eax, dword ptr [esp + 4]
// 0055eacf  f30f105104           movss xmm2, dword ptr [ecx + 4]
// 0055ead4  f30f105908           movss xmm3, dword ptr [ecx + 8]
// 0055ead9  f30f5ec1             divss xmm0, xmm1
// 0055eadd  f30f1009             movss xmm1, dword ptr [ecx]
// 0055eae1  f30f59c8             mulss xmm1, xmm0
// 0055eae5  f30f59d0             mulss xmm2, xmm0
// 0055eae9  f30f59d8             mulss xmm3, xmm0
// 0055eaed  f30f1108             movss dword ptr [eax], xmm1
// 0055eaf1  f30f115004           movss dword ptr [eax + 4], xmm2
// 0055eaf6  f30f115808           movss dword ptr [eax + 8], xmm3
// 0055eafb  c20800               ret 8
// 0055eafe  e85dfeffff           call 0x55e960
// 0055eb03  d900                 fld dword ptr [eax]
// 0055eb05  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0055eb09  d919                 fstp dword ptr [ecx]
// 0055eb0b  d94004               fld dword ptr [eax + 4]
// 0055eb0e  d95904               fstp dword ptr [ecx + 4]
// 0055eb11  d94008               fld dword ptr [eax + 8]
// 0055eb14  8bc1                 mov eax, ecx
// 0055eb16  d95908               fstp dword ptr [ecx + 8]
// 0055eb19  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??KVector3@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
