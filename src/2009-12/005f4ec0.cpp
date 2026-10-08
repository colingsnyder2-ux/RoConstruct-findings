// roc 2009-12 005f4ec0  unit: seg_005f0000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f4ec0
//
// 005f4ec0  f30f104c2408         movss xmm1, dword ptr [esp + 8]
// 005f4ec6  0f2e0d886a9a00       ucomiss xmm1, dword ptr [0x9a6a88]
// 005f4ecd  9f                   lahf 
// 005f4ece  f6c444               test ah, 0x44
// 005f4ed1  7b3b                 jnp 0x5f4f0e
// 005f4ed3  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005f4edb  8b442404             mov eax, dword ptr [esp + 4]
// 005f4edf  f30f105104           movss xmm2, dword ptr [ecx + 4]
// 005f4ee4  f30f105908           movss xmm3, dword ptr [ecx + 8]
// 005f4ee9  f30f5ec1             divss xmm0, xmm1
// 005f4eed  f30f1009             movss xmm1, dword ptr [ecx]
// 005f4ef1  f30f59c8             mulss xmm1, xmm0
// 005f4ef5  f30f59d0             mulss xmm2, xmm0
// 005f4ef9  f30f59d8             mulss xmm3, xmm0
// 005f4efd  f30f1108             movss dword ptr [eax], xmm1
// 005f4f01  f30f115004           movss dword ptr [eax + 4], xmm2
// 005f4f06  f30f115808           movss dword ptr [eax + 8], xmm3
// 005f4f0b  c20800               ret 8
// 005f4f0e  e85dfeffff           call 0x5f4d70
// 005f4f13  d900                 fld dword ptr [eax]
// 005f4f15  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f4f19  d919                 fstp dword ptr [ecx]
// 005f4f1b  d94004               fld dword ptr [eax + 4]
// 005f4f1e  d95904               fstp dword ptr [ecx + 4]
// 005f4f21  d94008               fld dword ptr [eax + 8]
// 005f4f24  8bc1                 mov eax, ecx
// 005f4f26  d95908               fstp dword ptr [ecx + 8]
// 005f4f29  c20800               ret 8
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ??KVector3@G3D@@QBE?AV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
