// roc 2009-12 005f4530  unit: seg_005f0000  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f4530
//
// 005f4530  83ec18               sub esp, 0x18
// 005f4533  56                   push esi
// 005f4534  8d44240c             lea eax, [esp + 0xc]
// 005f4538  8bf1                 mov esi, ecx
// 005f453a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f453e  50                   push eax
// 005f453f  e8fcf1ffff           call 0x5f3740
// 005f4544  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 005f454c  f30f1074240c         movss xmm6, dword ptr [esp + 0xc]
// 005f4552  f30f107c2410         movss xmm7, dword ptr [esp + 0x10]
// 005f4558  f30f10642418         movss xmm4, dword ptr [esp + 0x18]
// 005f455e  f30f10542414         movss xmm2, dword ptr [esp + 0x14]
// 005f4564  0f28ce               movaps xmm1, xmm6
// 005f4567  f30f59ce             mulss xmm1, xmm6
// 005f456b  f30f59c8             mulss xmm1, xmm0
// 005f456f  f30f114c2408         movss dword ptr [esp + 8], xmm1
// 005f4575  0f28ca               movaps xmm1, xmm2
// 005f4578  f30f59ce             mulss xmm1, xmm6
// 005f457c  0f28ec               movaps xmm5, xmm4
// 005f457f  f30f59ee             mulss xmm5, xmm6
// 005f4583  0f28df               movaps xmm3, xmm7
// 005f4586  f30f59de             mulss xmm3, xmm6
// 005f458a  f30f59d8             mulss xmm3, xmm0
// 005f458e  0f28f7               movaps xmm6, xmm7
// 005f4591  f30f59f7             mulss xmm6, xmm7
// 005f4595  f30f59f0             mulss xmm6, xmm0
// 005f4599  f30f11742404         movss dword ptr [esp + 4], xmm6
// 005f459f  f30f59e8             mulss xmm5, xmm0
// 005f45a3  f30f59c8             mulss xmm1, xmm0
// 005f45a7  0f28f4               movaps xmm6, xmm4
// 005f45aa  f30f59f7             mulss xmm6, xmm7
// 005f45ae  f30f59f0             mulss xmm6, xmm0
// 005f45b2  f30f59d7             mulss xmm2, xmm7
// 005f45b6  f30f107c2414         movss xmm7, dword ptr [esp + 0x14]
// 005f45bc  f30f59d0             mulss xmm2, xmm0
// 005f45c0  f30f11742420         movss dword ptr [esp + 0x20], xmm6
// 005f45c6  0f28f7               movaps xmm6, xmm7
// 005f45c9  f30f59e7             mulss xmm4, xmm7
// 005f45cd  f30f59e0             mulss xmm4, xmm0
// 005f45d1  f30f59f7             mulss xmm6, xmm7
// 005f45d5  f30f107c2404         movss xmm7, dword ptr [esp + 4]
// 005f45db  f30f59f0             mulss xmm6, xmm0
// 005f45df  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005f45e7  f30f5cc7             subss xmm0, xmm7
// 005f45eb  f30f5cc6             subss xmm0, xmm6
// 005f45ef  f30f1106             movss dword ptr [esi], xmm0
// 005f45f3  0f28c3               movaps xmm0, xmm3
// 005f45f6  f30f5cc4             subss xmm0, xmm4
// 005f45fa  f30f114604           movss dword ptr [esi + 4], xmm0
// 005f45ff  f30f10442420         movss xmm0, dword ptr [esp + 0x20]
// 005f4605  f30f58c1             addss xmm0, xmm1
// 005f4609  f30f5c4c2420         subss xmm1, dword ptr [esp + 0x20]
// 005f460f  f30f114608           movss dword ptr [esi + 8], xmm0
// 005f4614  f30f100518ea9a00     movss xmm0, dword ptr [0x9aea18]
// 005f461c  f30f5c442408         subss xmm0, dword ptr [esp + 8]
// 005f4622  f30f58e3             addss xmm4, xmm3
// 005f4626  0f28d8               movaps xmm3, xmm0
// 005f4629  f30f5cde             subss xmm3, xmm6
// 005f462d  f30f115e10           movss dword ptr [esi + 0x10], xmm3
// 005f4632  0f28da               movaps xmm3, xmm2
// 005f4635  f30f5cdd             subss xmm3, xmm5
// 005f4639  f30f58d5             addss xmm2, xmm5
// 005f463d  f30f5cc7             subss xmm0, xmm7
// 005f4641  f30f11660c           movss dword ptr [esi + 0xc], xmm4
// 005f4646  f30f115e14           movss dword ptr [esi + 0x14], xmm3
// 005f464b  f30f114e18           movss dword ptr [esi + 0x18], xmm1
// 005f4650  f30f11561c           movss dword ptr [esi + 0x1c], xmm2
// 005f4655  f30f114620           movss dword ptr [esi + 0x20], xmm0
// 005f465a  8bc6                 mov eax, esi
// 005f465c  5e                   pop esi
// 005f465d  83c418               add esp, 0x18
// 005f4660  c20400               ret 4
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??0Matrix3@G3D@@QAE@ABVQuat@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
