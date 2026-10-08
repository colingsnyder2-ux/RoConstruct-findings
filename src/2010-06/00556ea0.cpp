// from server: 100% by auto
// roc 2010-06 00556ea0  unit: seg_00550000  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00556ea0
//
// 00556ea0  83ec18               sub esp, 0x18
// 00556ea3  56                   push esi
// 00556ea4  8d44240c             lea eax, [esp + 0xc]
// 00556ea8  8bf1                 mov esi, ecx
// 00556eaa  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00556eae  50                   push eax
// 00556eaf  e8fcefffff           call 0x555eb0
// 00556eb4  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00556ebc  f30f1074240c         movss xmm6, dword ptr [esp + 0xc]
// 00556ec2  f30f107c2410         movss xmm7, dword ptr [esp + 0x10]
// 00556ec8  f30f10642418         movss xmm4, dword ptr [esp + 0x18]
// 00556ece  f30f10542414         movss xmm2, dword ptr [esp + 0x14]
// 00556ed4  0f28ce               movaps xmm1, xmm6
// 00556ed7  f30f59ce             mulss xmm1, xmm6
// 00556edb  f30f59c8             mulss xmm1, xmm0
// 00556edf  f30f114c2408         movss dword ptr [esp + 8], xmm1
// 00556ee5  0f28ca               movaps xmm1, xmm2
// 00556ee8  f30f59ce             mulss xmm1, xmm6
// 00556eec  0f28ec               movaps xmm5, xmm4
// 00556eef  f30f59ee             mulss xmm5, xmm6
// 00556ef3  0f28df               movaps xmm3, xmm7
// 00556ef6  f30f59de             mulss xmm3, xmm6
// 00556efa  f30f59d8             mulss xmm3, xmm0
// 00556efe  0f28f7               movaps xmm6, xmm7
// 00556f01  f30f59f7             mulss xmm6, xmm7
// 00556f05  f30f59f0             mulss xmm6, xmm0
// 00556f09  f30f11742404         movss dword ptr [esp + 4], xmm6
// 00556f0f  f30f59e8             mulss xmm5, xmm0
// 00556f13  f30f59c8             mulss xmm1, xmm0
// 00556f17  0f28f4               movaps xmm6, xmm4
// 00556f1a  f30f59f7             mulss xmm6, xmm7
// 00556f1e  f30f59f0             mulss xmm6, xmm0
// 00556f22  f30f59d7             mulss xmm2, xmm7
// 00556f26  f30f107c2414         movss xmm7, dword ptr [esp + 0x14]
// 00556f2c  f30f59d0             mulss xmm2, xmm0
// 00556f30  f30f11742420         movss dword ptr [esp + 0x20], xmm6
// 00556f36  0f28f7               movaps xmm6, xmm7
// 00556f39  f30f59e7             mulss xmm4, xmm7
// 00556f3d  f30f59e0             mulss xmm4, xmm0
// 00556f41  f30f59f7             mulss xmm6, xmm7
// 00556f45  f30f107c2404         movss xmm7, dword ptr [esp + 4]
// 00556f4b  f30f59f0             mulss xmm6, xmm0
// 00556f4f  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 00556f57  f30f5cc7             subss xmm0, xmm7
// 00556f5b  f30f5cc6             subss xmm0, xmm6
// 00556f5f  f30f1106             movss dword ptr [esi], xmm0
// 00556f63  0f28c3               movaps xmm0, xmm3
// 00556f66  f30f5cc4             subss xmm0, xmm4
// 00556f6a  f30f114604           movss dword ptr [esi + 4], xmm0
// 00556f6f  f30f10442420         movss xmm0, dword ptr [esp + 0x20]
// 00556f75  f30f58c1             addss xmm0, xmm1
// 00556f79  f30f5c4c2420         subss xmm1, dword ptr [esp + 0x20]
// 00556f7f  f30f114608           movss dword ptr [esi + 8], xmm0
// 00556f84  f30f100524f6a100     movss xmm0, dword ptr [0xa1f624]
// 00556f8c  f30f5c442408         subss xmm0, dword ptr [esp + 8]
// 00556f92  f30f58e3             addss xmm4, xmm3
// 00556f96  0f28d8               movaps xmm3, xmm0
// 00556f99  f30f5cde             subss xmm3, xmm6
// 00556f9d  f30f115e10           movss dword ptr [esi + 0x10], xmm3
// 00556fa2  0f28da               movaps xmm3, xmm2
// 00556fa5  f30f5cdd             subss xmm3, xmm5
// 00556fa9  f30f58d5             addss xmm2, xmm5
// 00556fad  f30f5cc7             subss xmm0, xmm7
// 00556fb1  f30f11660c           movss dword ptr [esi + 0xc], xmm4
// 00556fb6  f30f115e14           movss dword ptr [esi + 0x14], xmm3
// 00556fbb  f30f114e18           movss dword ptr [esi + 0x18], xmm1
// 00556fc0  f30f11561c           movss dword ptr [esi + 0x1c], xmm2
// 00556fc5  f30f114620           movss dword ptr [esi + 0x20], xmm0
// 00556fca  8bc6                 mov eax, esi
// 00556fcc  5e                   pop esi
// 00556fcd  83c418               add esp, 0x18
// 00556fd0  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??0Matrix3@G3D@@QAE@ABVQuat@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
