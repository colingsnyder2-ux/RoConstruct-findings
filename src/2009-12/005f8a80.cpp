// roc 2009-12 005f8a80  unit: G3D::LineSegment  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f8a80
//
// 005f8a80  f30f1044240c         movss xmm0, dword ptr [esp + 0xc]
// 005f8a86  83ec60               sub esp, 0x60
// 005f8a89  0f2e0518ea9a00       ucomiss xmm0, dword ptr [0x9aea18]
// 005f8a90  9f                   lahf 
// 005f8a91  56                   push esi
// 005f8a92  57                   push edi
// 005f8a93  8bf1                 mov esi, ecx
// 005f8a95  f6c444               test ah, 0x44
// 005f8a98  7a2c                 jp 0x5f8ac6
// 005f8a9a  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 005f8a9e  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005f8aa2  57                   push edi
// 005f8aa3  8bce                 mov ecx, esi
// 005f8aa5  e856aeffff           call 0x5f3900
// 005f8aaa  d94724               fld dword ptr [edi + 0x24]
// 005f8aad  d95e24               fstp dword ptr [esi + 0x24]
// 005f8ab0  8bc6                 mov eax, esi
// 005f8ab2  d94728               fld dword ptr [edi + 0x28]
// 005f8ab5  d95e28               fstp dword ptr [esi + 0x28]
// 005f8ab8  d9472c               fld dword ptr [edi + 0x2c]
// 005f8abb  5f                   pop edi
// 005f8abc  d95e2c               fstp dword ptr [esi + 0x2c]
// 005f8abf  5e                   pop esi
// 005f8ac0  83c460               add esp, 0x60
// 005f8ac3  c20c00               ret 0xc
// 005f8ac6  0f2e05886a9a00       ucomiss xmm0, dword ptr [0x9a6a88]
// 005f8acd  9f                   lahf 
// 005f8ace  56                   push esi
// 005f8acf  f6c444               test ah, 0x44
// 005f8ad2  7a27                 jp 0x5f8afb
// 005f8ad4  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 005f8ad8  8bcf                 mov ecx, edi
// 005f8ada  e821aeffff           call 0x5f3900
// 005f8adf  d94624               fld dword ptr [esi + 0x24]
// 005f8ae2  d95f24               fstp dword ptr [edi + 0x24]
// 005f8ae5  8bc7                 mov eax, edi
// 005f8ae7  d94628               fld dword ptr [esi + 0x28]
// 005f8aea  d95f28               fstp dword ptr [edi + 0x28]
// 005f8aed  d9462c               fld dword ptr [esi + 0x2c]
// 005f8af0  d95f2c               fstp dword ptr [edi + 0x2c]
// 005f8af3  5f                   pop edi
// 005f8af4  5e                   pop esi
// 005f8af5  83c460               add esp, 0x60
// 005f8af8  c20c00               ret 0xc
// 005f8afb  8d4c2428             lea ecx, [esp + 0x28]
// 005f8aff  e83c380100           call 0x60c340
// 005f8b04  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 005f8b08  57                   push edi
// 005f8b09  8d4c2418             lea ecx, [esp + 0x18]
// 005f8b0d  e82e380100           call 0x60c340
// 005f8b12  d90520169b00         fld dword ptr [0x9b1620]
// 005f8b18  f30f10442474         movss xmm0, dword ptr [esp + 0x74]
// 005f8b1e  f30f105f24           movss xmm3, dword ptr [edi + 0x24]
// 005f8b23  f30f106728           movss xmm4, dword ptr [edi + 0x28]
// 005f8b28  f30f106f2c           movss xmm5, dword ptr [edi + 0x2c]
// 005f8b2d  f30f103518ea9a00     movss xmm6, dword ptr [0x9aea18]
// 005f8b35  f30f104e28           movss xmm1, dword ptr [esi + 0x28]
// 005f8b3a  f30f10562c           movss xmm2, dword ptr [esi + 0x2c]
// 005f8b3f  8d442444             lea eax, [esp + 0x44]
// 005f8b43  50                   push eax
// 005f8b44  83ec08               sub esp, 8
// 005f8b47  d95c2404             fstp dword ptr [esp + 4]
// 005f8b4b  f30f5cf0             subss xmm6, xmm0
// 005f8b4f  d9842480000000       fld dword ptr [esp + 0x80]
// 005f8b56  f30f59e0             mulss xmm4, xmm0
// 005f8b5a  f30f59e8             mulss xmm5, xmm0
// 005f8b5e  d91c24               fstp dword ptr [esp]
// 005f8b61  f30f59d8             mulss xmm3, xmm0
// 005f8b65  f30f104624           movss xmm0, dword ptr [esi + 0x24]
// 005f8b6a  8d4c2420             lea ecx, [esp + 0x20]
// 005f8b6e  51                   push ecx
// 005f8b6f  8d542444             lea edx, [esp + 0x44]
// 005f8b73  f30f59c6             mulss xmm0, xmm6
// 005f8b77  f30f59ce             mulss xmm1, xmm6
// 005f8b7b  f30f59d6             mulss xmm2, xmm6
// 005f8b7f  f30f58c3             addss xmm0, xmm3
// 005f8b83  f30f58cc             addss xmm1, xmm4
// 005f8b87  f30f58d5             addss xmm2, xmm5
// 005f8b8b  52                   push edx
// 005f8b8c  8d4c2438             lea ecx, [esp + 0x38]
// 005f8b90  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 005f8b96  f30f114c2420         movss dword ptr [esp + 0x20], xmm1
// 005f8b9c  f30f11542424         movss dword ptr [esp + 0x24], xmm2
// 005f8ba2  e8593a0100           call 0x60c600
// 005f8ba7  8bc8                 mov ecx, eax
// 005f8ba9  e8123a0100           call 0x60c5c0
// 005f8bae  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 005f8bb2  50                   push eax
// 005f8bb3  8bce                 mov ecx, esi
// 005f8bb5  e846adffff           call 0x5f3900
// 005f8bba  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 005f8bc0  f30f114624           movss dword ptr [esi + 0x24], xmm0
// 005f8bc5  f30f1044240c         movss xmm0, dword ptr [esp + 0xc]
// 005f8bcb  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 005f8bd0  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 005f8bd6  5f                   pop edi
// 005f8bd7  f30f11462c           movss dword ptr [esi + 0x2c], xmm0
// 005f8bdc  8bc6                 mov eax, esi
// 005f8bde  5e                   pop esi
// 005f8bdf  83c460               add esp, 0x60
// 005f8be2  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lerp@CoordinateFrame@G3D@@QBE?AV12@ABV12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
