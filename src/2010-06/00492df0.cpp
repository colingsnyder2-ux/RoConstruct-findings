// from server: 100% by auto
// roc 2010-06 00492df0  unit: seg_00490000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00492df0
//
// 00492df0  83ec0c               sub esp, 0xc
// 00492df3  56                   push esi
// 00492df4  8bf1                 mov esi, ecx
// 00492df6  e815700c00           call 0x559e10
// 00492dfb  f30f10442414         movss xmm0, dword ptr [esp + 0x14]
// 00492e01  f30f1008             movss xmm1, dword ptr [eax]
// 00492e05  f30f59c8             mulss xmm1, xmm0
// 00492e09  f30f114c2404         movss dword ptr [esp + 4], xmm1
// 00492e0f  f30f104804           movss xmm1, dword ptr [eax + 4]
// 00492e14  f30f59c8             mulss xmm1, xmm0
// 00492e18  f30f114c2408         movss dword ptr [esp + 8], xmm1
// 00492e1e  f30f104808           movss xmm1, dword ptr [eax + 8]
// 00492e23  8d442404             lea eax, [esp + 4]
// 00492e27  f30f59c8             mulss xmm1, xmm0
// 00492e2b  50                   push eax
// 00492e2c  8bce                 mov ecx, esi
// 00492e2e  f30f114c2410         movss dword ptr [esp + 0x10], xmm1
// 00492e34  e847e1ffff           call 0x490f80
// 00492e39  5e                   pop esi
// 00492e3a  83c40c               add esp, 0xc
// 00492e3d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setSpecularCoefficient@RenderDevice@G3D@@QAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
