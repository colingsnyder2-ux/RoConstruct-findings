// roc 2010-06 00911ec0  unit: G3D::GFont  size: 335 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00911ec0
//
// 00911ec0  0f57db               xorps xmm3, xmm3
// 00911ec3  83ec10               sub esp, 0x10
// 00911ec6  83792400             cmp dword ptr [ecx + 0x24], 0
// 00911eca  56                   push esi
// 00911ecb  7439                 je 0x911f06
// 00911ecd  f30f1044241c         movss xmm0, dword ptr [esp + 0x1c]
// 00911ed3  8b742418             mov esi, dword ptr [esp + 0x18]
// 00911ed7  f30f11442404         movss dword ptr [esp + 4], xmm0
// 00911edd  f30f10442420         movss xmm0, dword ptr [esp + 0x20]
// 00911ee3  8d442404             lea eax, [esp + 4]
// 00911ee7  f30f11442408         movss dword ptr [esp + 8], xmm0
// 00911eed  f30f10442424         movss xmm0, dword ptr [esp + 0x24]
// 00911ef3  50                   push eax
// 00911ef4  8bce                 mov ecx, esi
// 00911ef6  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 00911efc  e82f04b8ff           call 0x492330
// 00911f01  e9c9000000           jmp 0x911fcf
// 00911f06  803dbb38c00000       cmp byte ptr [0xc038bb], 0
// 00911f0d  f30f10542428         movss xmm2, dword ptr [esp + 0x28]
// 00911f13  0f8592000000         jne 0x911fab
// 00911f19  f30f100550daa200     movss xmm0, dword ptr [0xa2da50]
// 00911f21  f30f102524f6a100     movss xmm4, dword ptr [0xa1f624]
// 00911f29  0f2ed3               ucomiss xmm2, xmm3
// 00911f2c  9f                   lahf 
// 00911f2d  f6c444               test ah, 0x44
// 00911f30  7a18                 jp 0x911f4a
// 00911f32  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00911f35  f30f2a4a64           cvtsi2ss xmm1, dword ptr [edx + 0x64]
// 00911f3a  0f28e8               movaps xmm5, xmm0
// 00911f3d  f30f5ee9             divss xmm5, xmm1
// 00911f41  f30f58ea             addss xmm5, xmm2
// 00911f45  0f28d5               movaps xmm2, xmm5
// 00911f48  eb22                 jmp 0x911f6c
// 00911f4a  0f2ed4               ucomiss xmm2, xmm4
// 00911f4d  9f                   lahf 
// 00911f4e  f6c444               test ah, 0x44
// 00911f51  7a19                 jp 0x911f6c
// 00911f53  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00911f56  f30f2a4864           cvtsi2ss xmm1, dword ptr [eax + 0x64]
// 00911f5b  0f28e8               movaps xmm5, xmm0
// 00911f5e  f30f5ee9             divss xmm5, xmm1
// 00911f62  0f28ca               movaps xmm1, xmm2
// 00911f65  f30f5ccd             subss xmm1, xmm5
// 00911f69  0f28d1               movaps xmm2, xmm1
// 00911f6c  f30f104c242c         movss xmm1, dword ptr [esp + 0x2c]
// 00911f72  0f2ecb               ucomiss xmm1, xmm3
// 00911f75  9f                   lahf 
// 00911f76  f6c444               test ah, 0x44
// 00911f79  7a15                 jp 0x911f90
// 00911f7b  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00911f7e  f30f2a5968           cvtsi2ss xmm3, dword ptr [ecx + 0x68]
// 00911f83  f30f5ec3             divss xmm0, xmm3
// 00911f87  f30f58c1             addss xmm0, xmm1
// 00911f8b  0f28c8               movaps xmm1, xmm0
// 00911f8e  eb21                 jmp 0x911fb1
// 00911f90  0f2ecc               ucomiss xmm1, xmm4
// 00911f93  9f                   lahf 
// 00911f94  f6c444               test ah, 0x44
// 00911f97  7a18                 jp 0x911fb1
// 00911f99  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00911f9c  f30f2a5a68           cvtsi2ss xmm3, dword ptr [edx + 0x68]
// 00911fa1  f30f5ec3             divss xmm0, xmm3
// 00911fa5  f30f5cc8             subss xmm1, xmm0
// 00911fa9  eb06                 jmp 0x911fb1
// 00911fab  f30f104c242c         movss xmm1, dword ptr [esp + 0x2c]
// 00911fb1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00911fb5  8d442404             lea eax, [esp + 4]
// 00911fb9  50                   push eax
// 00911fba  6a00                 push 0
// 00911fbc  8bce                 mov ecx, esi
// 00911fbe  f30f1154240c         movss dword ptr [esp + 0xc], xmm2
// 00911fc4  f30f114c2410         movss dword ptr [esp + 0x10], xmm1
// 00911fca  e81104b8ff           call 0x4923e0
// 00911fcf  f30f1044241c         movss xmm0, dword ptr [esp + 0x1c]
// 00911fd5  f30f11442404         movss dword ptr [esp + 4], xmm0
// 00911fdb  f30f10442420         movss xmm0, dword ptr [esp + 0x20]
// 00911fe1  f30f11442408         movss dword ptr [esp + 8], xmm0
// 00911fe7  f30f10442424         movss xmm0, dword ptr [esp + 0x24]
// 00911fed  8d4c2404             lea ecx, [esp + 4]
// 00911ff1  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 00911ff7  0f57c0               xorps xmm0, xmm0
// 00911ffa  51                   push ecx
// 00911ffb  8bce                 mov ecx, esi
// 00911ffd  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00912003  e85804b8ff           call 0x492460
// 00912008  5e                   pop esi
// 00912009  83c410               add esp, 0x10
// 0091200c  c21800               ret 0x18
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?vertex@Sky@G3D@@ABEXPAVRenderDevice@2@MMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
