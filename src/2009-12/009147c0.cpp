// roc 2009-12 009147c0  unit: Ogre::RbxMeshLoader  size: 335 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009147c0
//
// 009147c0  0f57db               xorps xmm3, xmm3
// 009147c3  83ec10               sub esp, 0x10
// 009147c6  83792400             cmp dword ptr [ecx + 0x24], 0
// 009147ca  56                   push esi
// 009147cb  7439                 je 0x914806
// 009147cd  f30f1044241c         movss xmm0, dword ptr [esp + 0x1c]
// 009147d3  8b742418             mov esi, dword ptr [esp + 0x18]
// 009147d7  f30f11442404         movss dword ptr [esp + 4], xmm0
// 009147dd  f30f10442420         movss xmm0, dword ptr [esp + 0x20]
// 009147e3  8d442404             lea eax, [esp + 4]
// 009147e7  f30f11442408         movss dword ptr [esp + 8], xmm0
// 009147ed  f30f10442424         movss xmm0, dword ptr [esp + 0x24]
// 009147f3  50                   push eax
// 009147f4  8bce                 mov ecx, esi
// 009147f6  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 009147fc  e88f72bbff           call 0x4cba90
// 00914801  e9c9000000           jmp 0x9148cf
// 00914806  803dbfd0b70000       cmp byte ptr [0xb7d0bf], 0
// 0091480d  f30f10542428         movss xmm2, dword ptr [esp + 0x28]
// 00914813  0f8592000000         jne 0x9148ab
// 00914819  f30f1005f84a9b00     movss xmm0, dword ptr [0x9b4af8]
// 00914821  f30f102518ea9a00     movss xmm4, dword ptr [0x9aea18]
// 00914829  0f2ed3               ucomiss xmm2, xmm3
// 0091482c  9f                   lahf 
// 0091482d  f6c444               test ah, 0x44
// 00914830  7a18                 jp 0x91484a
// 00914832  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00914835  f30f2a4a64           cvtsi2ss xmm1, dword ptr [edx + 0x64]
// 0091483a  0f28e8               movaps xmm5, xmm0
// 0091483d  f30f5ee9             divss xmm5, xmm1
// 00914841  f30f58ea             addss xmm5, xmm2
// 00914845  0f28d5               movaps xmm2, xmm5
// 00914848  eb22                 jmp 0x91486c
// 0091484a  0f2ed4               ucomiss xmm2, xmm4
// 0091484d  9f                   lahf 
// 0091484e  f6c444               test ah, 0x44
// 00914851  7a19                 jp 0x91486c
// 00914853  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00914856  f30f2a4864           cvtsi2ss xmm1, dword ptr [eax + 0x64]
// 0091485b  0f28e8               movaps xmm5, xmm0
// 0091485e  f30f5ee9             divss xmm5, xmm1
// 00914862  0f28ca               movaps xmm1, xmm2
// 00914865  f30f5ccd             subss xmm1, xmm5
// 00914869  0f28d1               movaps xmm2, xmm1
// 0091486c  f30f104c242c         movss xmm1, dword ptr [esp + 0x2c]
// 00914872  0f2ecb               ucomiss xmm1, xmm3
// 00914875  9f                   lahf 
// 00914876  f6c444               test ah, 0x44
// 00914879  7a15                 jp 0x914890
// 0091487b  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0091487e  f30f2a5968           cvtsi2ss xmm3, dword ptr [ecx + 0x68]
// 00914883  f30f5ec3             divss xmm0, xmm3
// 00914887  f30f58c1             addss xmm0, xmm1
// 0091488b  0f28c8               movaps xmm1, xmm0
// 0091488e  eb21                 jmp 0x9148b1
// 00914890  0f2ecc               ucomiss xmm1, xmm4
// 00914893  9f                   lahf 
// 00914894  f6c444               test ah, 0x44
// 00914897  7a18                 jp 0x9148b1
// 00914899  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0091489c  f30f2a5a68           cvtsi2ss xmm3, dword ptr [edx + 0x68]
// 009148a1  f30f5ec3             divss xmm0, xmm3
// 009148a5  f30f5cc8             subss xmm1, xmm0
// 009148a9  eb06                 jmp 0x9148b1
// 009148ab  f30f104c242c         movss xmm1, dword ptr [esp + 0x2c]
// 009148b1  8b742418             mov esi, dword ptr [esp + 0x18]
// 009148b5  8d442404             lea eax, [esp + 4]
// 009148b9  50                   push eax
// 009148ba  6a00                 push 0
// 009148bc  8bce                 mov ecx, esi
// 009148be  f30f1154240c         movss dword ptr [esp + 0xc], xmm2
// 009148c4  f30f114c2410         movss dword ptr [esp + 0x10], xmm1
// 009148ca  e87172bbff           call 0x4cbb40
// 009148cf  f30f1044241c         movss xmm0, dword ptr [esp + 0x1c]
// 009148d5  f30f11442404         movss dword ptr [esp + 4], xmm0
// 009148db  f30f10442420         movss xmm0, dword ptr [esp + 0x20]
// 009148e1  f30f11442408         movss dword ptr [esp + 8], xmm0
// 009148e7  f30f10442424         movss xmm0, dword ptr [esp + 0x24]
// 009148ed  8d4c2404             lea ecx, [esp + 4]
// 009148f1  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 009148f7  0f57c0               xorps xmm0, xmm0
// 009148fa  51                   push ecx
// 009148fb  8bce                 mov ecx, esi
// 009148fd  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 00914903  e8b872bbff           call 0x4cbbc0
// 00914908  5e                   pop esi
// 00914909  83c410               add esp, 0x10
// 0091490c  c21800               ret 0x18
// library g3d-6.09/GLG3Dcpp\Sky.cpp (function ?vertex@Sky@G3D@@ABEXPAVRenderDevice@2@MMMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Sky.cpp
