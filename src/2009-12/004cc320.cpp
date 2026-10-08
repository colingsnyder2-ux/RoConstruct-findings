// roc 2009-12 004cc320  unit: G3D::VARArea  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cc320
//
// 004cc320  83ec0c               sub esp, 0xc
// 004cc323  56                   push esi
// 004cc324  8bf1                 mov esi, ecx
// 004cc326  e865ac1200           call 0x5f6f90
// 004cc32b  f30f10442414         movss xmm0, dword ptr [esp + 0x14]
// 004cc331  f30f1008             movss xmm1, dword ptr [eax]
// 004cc335  f30f59c8             mulss xmm1, xmm0
// 004cc339  f30f114c2404         movss dword ptr [esp + 4], xmm1
// 004cc33f  f30f104804           movss xmm1, dword ptr [eax + 4]
// 004cc344  f30f59c8             mulss xmm1, xmm0
// 004cc348  f30f114c2408         movss dword ptr [esp + 8], xmm1
// 004cc34e  f30f104808           movss xmm1, dword ptr [eax + 8]
// 004cc353  8d442404             lea eax, [esp + 4]
// 004cc357  f30f59c8             mulss xmm1, xmm0
// 004cc35b  50                   push eax
// 004cc35c  8bce                 mov ecx, esi
// 004cc35e  f30f114c2410         movss dword ptr [esp + 0x10], xmm1
// 004cc364  e877e3ffff           call 0x4ca6e0
// 004cc369  5e                   pop esi
// 004cc36a  83c40c               add esp, 0xc
// 004cc36d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setSpecularCoefficient@RenderDevice@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
