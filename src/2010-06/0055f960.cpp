// from server: 100% by auto
// roc 2010-06 0055f960  unit: G3D::Line  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055f960
//
// 0055f960  f30f1044240c         movss xmm0, dword ptr [esp + 0xc]
// 0055f966  83ec60               sub esp, 0x60
// 0055f969  0f2e0524f6a100       ucomiss xmm0, dword ptr [0xa1f624]
// 0055f970  9f                   lahf 
// 0055f971  56                   push esi
// 0055f972  57                   push edi
// 0055f973  8bf1                 mov esi, ecx
// 0055f975  f6c444               test ah, 0x44
// 0055f978  7a2c                 jp 0x55f9a6
// 0055f97a  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0055f97e  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0055f982  57                   push edi
// 0055f983  8bce                 mov ecx, esi
// 0055f985  e8e666ffff           call 0x556070
// 0055f98a  d94724               fld dword ptr [edi + 0x24]
// 0055f98d  d95e24               fstp dword ptr [esi + 0x24]
// 0055f990  8bc6                 mov eax, esi
// 0055f992  d94728               fld dword ptr [edi + 0x28]
// 0055f995  d95e28               fstp dword ptr [esi + 0x28]
// 0055f998  d9472c               fld dword ptr [edi + 0x2c]
// 0055f99b  5f                   pop edi
// 0055f99c  d95e2c               fstp dword ptr [esi + 0x2c]
// 0055f99f  5e                   pop esi
// 0055f9a0  83c460               add esp, 0x60
// 0055f9a3  c20c00               ret 0xc
// 0055f9a6  0f2e052878a000       ucomiss xmm0, dword ptr [0xa07828]
// 0055f9ad  9f                   lahf 
// 0055f9ae  56                   push esi
// 0055f9af  f6c444               test ah, 0x44
// 0055f9b2  7a27                 jp 0x55f9db
// 0055f9b4  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0055f9b8  8bcf                 mov ecx, edi
// 0055f9ba  e8b166ffff           call 0x556070
// 0055f9bf  d94624               fld dword ptr [esi + 0x24]
// 0055f9c2  d95f24               fstp dword ptr [edi + 0x24]
// 0055f9c5  8bc7                 mov eax, edi
// 0055f9c7  d94628               fld dword ptr [esi + 0x28]
// 0055f9ca  d95f28               fstp dword ptr [edi + 0x28]
// 0055f9cd  d9462c               fld dword ptr [esi + 0x2c]
// 0055f9d0  d95f2c               fstp dword ptr [edi + 0x2c]
// 0055f9d3  5f                   pop edi
// 0055f9d4  5e                   pop esi
// 0055f9d5  83c460               add esp, 0x60
// 0055f9d8  c20c00               ret 0xc
// 0055f9db  8d4c2428             lea ecx, [esp + 0x28]
// 0055f9df  e87ce20000           call 0x56dc60
// 0055f9e4  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 0055f9e8  57                   push edi
// 0055f9e9  8d4c2418             lea ecx, [esp + 0x18]
// 0055f9ed  e86ee20000           call 0x56dc60
// 0055f9f2  d905d027a100         fld dword ptr [0xa127d0]
// 0055f9f8  f30f10442474         movss xmm0, dword ptr [esp + 0x74]
// 0055f9fe  f30f105f24           movss xmm3, dword ptr [edi + 0x24]
// 0055fa03  f30f106728           movss xmm4, dword ptr [edi + 0x28]
// 0055fa08  f30f106f2c           movss xmm5, dword ptr [edi + 0x2c]
// 0055fa0d  f30f103524f6a100     movss xmm6, dword ptr [0xa1f624]
// 0055fa15  f30f104e28           movss xmm1, dword ptr [esi + 0x28]
// 0055fa1a  f30f10562c           movss xmm2, dword ptr [esi + 0x2c]
// 0055fa1f  8d442444             lea eax, [esp + 0x44]
// 0055fa23  50                   push eax
// 0055fa24  83ec08               sub esp, 8
// 0055fa27  d95c2404             fstp dword ptr [esp + 4]
// 0055fa2b  f30f5cf0             subss xmm6, xmm0
// 0055fa2f  d9842480000000       fld dword ptr [esp + 0x80]
// 0055fa36  f30f59e0             mulss xmm4, xmm0
// 0055fa3a  f30f59e8             mulss xmm5, xmm0
// 0055fa3e  d91c24               fstp dword ptr [esp]
// 0055fa41  f30f59d8             mulss xmm3, xmm0
// 0055fa45  f30f104624           movss xmm0, dword ptr [esi + 0x24]
// 0055fa4a  8d4c2420             lea ecx, [esp + 0x20]
// 0055fa4e  51                   push ecx
// 0055fa4f  8d542444             lea edx, [esp + 0x44]
// 0055fa53  f30f59c6             mulss xmm0, xmm6
// 0055fa57  f30f59ce             mulss xmm1, xmm6
// 0055fa5b  f30f59d6             mulss xmm2, xmm6
// 0055fa5f  f30f58c3             addss xmm0, xmm3
// 0055fa63  f30f58cc             addss xmm1, xmm4
// 0055fa67  f30f58d5             addss xmm2, xmm5
// 0055fa6b  52                   push edx
// 0055fa6c  8d4c2438             lea ecx, [esp + 0x38]
// 0055fa70  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 0055fa76  f30f114c2420         movss dword ptr [esp + 0x20], xmm1
// 0055fa7c  f30f11542424         movss dword ptr [esp + 0x24], xmm2
// 0055fa82  e899e40000           call 0x56df20
// 0055fa87  8bc8                 mov ecx, eax
// 0055fa89  e852e40000           call 0x56dee0
// 0055fa8e  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0055fa92  50                   push eax
// 0055fa93  8bce                 mov ecx, esi
// 0055fa95  e8d665ffff           call 0x556070
// 0055fa9a  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 0055faa0  f30f114624           movss dword ptr [esi + 0x24], xmm0
// 0055faa5  f30f1044240c         movss xmm0, dword ptr [esp + 0xc]
// 0055faab  f30f114628           movss dword ptr [esi + 0x28], xmm0
// 0055fab0  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 0055fab6  5f                   pop edi
// 0055fab7  f30f11462c           movss dword ptr [esi + 0x2c], xmm0
// 0055fabc  8bc6                 mov eax, esi
// 0055fabe  5e                   pop esi
// 0055fabf  83c460               add esp, 0x60
// 0055fac2  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lerp@CoordinateFrame@G3D@@QBE?AV12@ABV12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
