// roc 2009-12 005f3ac0  unit: seg_005f0000  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3ac0
//
// 005f3ac0  83ec18               sub esp, 0x18
// 005f3ac3  8b442420             mov eax, dword ptr [esp + 0x20]
// 005f3ac7  f30f1000             movss xmm0, dword ptr [eax]
// 005f3acb  f30f105818           movss xmm3, dword ptr [eax + 0x18]
// 005f3ad0  f30f10600c           movss xmm4, dword ptr [eax + 0xc]
// 005f3ad5  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 005f3adb  f30f10401c           movss xmm0, dword ptr [eax + 0x1c]
// 005f3ae0  f30f11442404         movss dword ptr [esp + 4], xmm0
// 005f3ae6  f30f104010           movss xmm0, dword ptr [eax + 0x10]
// 005f3aeb  f30f11442408         movss dword ptr [esp + 8], xmm0
// 005f3af1  f30f104004           movss xmm0, dword ptr [eax + 4]
// 005f3af6  f30f110424           movss dword ptr [esp], xmm0
// 005f3afb  f30f104020           movss xmm0, dword ptr [eax + 0x20]
// 005f3b00  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 005f3b06  f30f104014           movss xmm0, dword ptr [eax + 0x14]
// 005f3b0b  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 005f3b11  f30f104008           movss xmm0, dword ptr [eax + 8]
// 005f3b16  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f3b1a  56                   push esi
// 005f3b1b  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 005f3b21  83c104               add ecx, 4
// 005f3b24  8d5008               lea edx, [eax + 8]
// 005f3b27  be03000000           mov esi, 3
// 005f3b2c  8d642400             lea esp, [esp]
// 005f3b30  f30f104904           movss xmm1, dword ptr [ecx + 4]
// 005f3b35  f30f1041fc           movss xmm0, dword ptr [ecx - 4]
// 005f3b3a  f30f1011             movss xmm2, dword ptr [ecx]
// 005f3b3e  0f28e8               movaps xmm5, xmm0
// 005f3b41  f30f596c2424         mulss xmm5, dword ptr [esp + 0x24]
// 005f3b47  0f28f1               movaps xmm6, xmm1
// 005f3b4a  f30f59f3             mulss xmm6, xmm3
// 005f3b4e  f30f58ee             addss xmm5, xmm6
// 005f3b52  0f28f2               movaps xmm6, xmm2
// 005f3b55  f30f59f4             mulss xmm6, xmm4
// 005f3b59  f30f58ee             addss xmm5, xmm6
// 005f3b5d  f30f116af8           movss dword ptr [edx - 8], xmm5
// 005f3b62  0f28e8               movaps xmm5, xmm0
// 005f3b65  f30f596c2404         mulss xmm5, dword ptr [esp + 4]
// 005f3b6b  f30f59442410         mulss xmm0, dword ptr [esp + 0x10]
// 005f3b71  0f28f1               movaps xmm6, xmm1
// 005f3b74  f30f59742408         mulss xmm6, dword ptr [esp + 8]
// 005f3b7a  f30f594c2414         mulss xmm1, dword ptr [esp + 0x14]
// 005f3b80  f30f58ee             addss xmm5, xmm6
// 005f3b84  0f28f2               movaps xmm6, xmm2
// 005f3b87  f30f5974240c         mulss xmm6, dword ptr [esp + 0xc]
// 005f3b8d  f30f59542418         mulss xmm2, dword ptr [esp + 0x18]
// 005f3b93  f30f58c1             addss xmm0, xmm1
// 005f3b97  f30f58ee             addss xmm5, xmm6
// 005f3b9b  f30f58c2             addss xmm0, xmm2
// 005f3b9f  f30f116afc           movss dword ptr [edx - 4], xmm5
// 005f3ba4  f30f1102             movss dword ptr [edx], xmm0
// 005f3ba8  83c10c               add ecx, 0xc
// 005f3bab  83c20c               add edx, 0xc
// 005f3bae  83ee01               sub esi, 1
// 005f3bb1  0f8579ffffff         jne 0x5f3b30
// 005f3bb7  5e                   pop esi
// 005f3bb8  83c418               add esp, 0x18
// 005f3bbb  c20800               ret 8
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ??DMatrix3@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
