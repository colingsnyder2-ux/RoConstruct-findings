// roc 2010-06 0090df90  unit: G3D::TextureManager::TextureArgs  size: 563 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090df90
//
// 0090df90  83ec4c               sub esp, 0x4c
// 0090df93  8b442468             mov eax, dword ptr [esp + 0x68]
// 0090df97  0f57c0               xorps xmm0, xmm0
// 0090df9a  f30f1008             movss xmm1, dword ptr [eax]
// 0090df9e  0f2fc1               comiss xmm0, xmm1
// 0090dfa1  f30f105004           movss xmm2, dword ptr [eax + 4]
// 0090dfa6  f30f110424           movss dword ptr [esp], xmm0
// 0090dfab  f30f11442408         movss dword ptr [esp + 8], xmm0
// 0090dfb1  f30f114c2468         movss dword ptr [esp + 0x68], xmm1
// 0090dfb7  f30f11542404         movss dword ptr [esp + 4], xmm2
// 0090dfbd  8d442468             lea eax, [esp + 0x68]
// 0090dfc1  7703                 ja 0x90dfc6
// 0090dfc3  8d0424               lea eax, [esp]
// 0090dfc6  0f2fc2               comiss xmm0, xmm2
// 0090dfc9  f30f1018             movss xmm3, dword ptr [eax]
// 0090dfcd  f30f115c240c         movss dword ptr [esp + 0xc], xmm3
// 0090dfd3  8d442404             lea eax, [esp + 4]
// 0090dfd7  7704                 ja 0x90dfdd
// 0090dfd9  8d442408             lea eax, [esp + 8]
// 0090dfdd  0f2fc8               comiss xmm1, xmm0
// 0090dfe0  f30f1018             movss xmm3, dword ptr [eax]
// 0090dfe4  f30f115c2410         movss dword ptr [esp + 0x10], xmm3
// 0090dfea  8d442468             lea eax, [esp + 0x68]
// 0090dfee  7703                 ja 0x90dff3
// 0090dff0  8d0424               lea eax, [esp]
// 0090dff3  0f2fd0               comiss xmm2, xmm0
// 0090dff6  f30f1008             movss xmm1, dword ptr [eax]
// 0090dffa  f30f114c2414         movss dword ptr [esp + 0x14], xmm1
// 0090e000  8d442404             lea eax, [esp + 4]
// 0090e004  7704                 ja 0x90e00a
// 0090e006  8d442408             lea eax, [esp + 8]
// 0090e00a  f30f1008             movss xmm1, dword ptr [eax]
// 0090e00e  8b442464             mov eax, dword ptr [esp + 0x64]
// 0090e012  f30f105004           movss xmm2, dword ptr [eax + 4]
// 0090e017  f30f114c2418         movss dword ptr [esp + 0x18], xmm1
// 0090e01d  f30f1008             movss xmm1, dword ptr [eax]
// 0090e021  0f2fc1               comiss xmm0, xmm1
// 0090e024  f30f11442408         movss dword ptr [esp + 8], xmm0
// 0090e02a  f30f11442404         movss dword ptr [esp + 4], xmm0
// 0090e030  f30f114c2468         movss dword ptr [esp + 0x68], xmm1
// 0090e036  f30f11542464         movss dword ptr [esp + 0x64], xmm2
// 0090e03c  8d442468             lea eax, [esp + 0x68]
// 0090e040  7704                 ja 0x90e046
// 0090e042  8d442408             lea eax, [esp + 8]
// 0090e046  0f2fc2               comiss xmm0, xmm2
// 0090e049  f30f1018             movss xmm3, dword ptr [eax]
// 0090e04d  f30f115c241c         movss dword ptr [esp + 0x1c], xmm3
// 0090e053  8d442464             lea eax, [esp + 0x64]
// 0090e057  7704                 ja 0x90e05d
// 0090e059  8d442404             lea eax, [esp + 4]
// 0090e05d  0f2fc8               comiss xmm1, xmm0
// 0090e060  f30f1018             movss xmm3, dword ptr [eax]
// 0090e064  f30f115c2420         movss dword ptr [esp + 0x20], xmm3
// 0090e06a  8d442468             lea eax, [esp + 0x68]
// 0090e06e  7704                 ja 0x90e074
// 0090e070  8d442408             lea eax, [esp + 8]
// 0090e074  0f2fd0               comiss xmm2, xmm0
// 0090e077  f30f1008             movss xmm1, dword ptr [eax]
// 0090e07b  f30f114c2424         movss dword ptr [esp + 0x24], xmm1
// 0090e081  8d442464             lea eax, [esp + 0x64]
// 0090e085  7704                 ja 0x90e08b
// 0090e087  8d442404             lea eax, [esp + 4]
// 0090e08b  f30f1008             movss xmm1, dword ptr [eax]
// 0090e08f  8b442460             mov eax, dword ptr [esp + 0x60]
// 0090e093  f30f105004           movss xmm2, dword ptr [eax + 4]
// 0090e098  f30f114c2428         movss dword ptr [esp + 0x28], xmm1
// 0090e09e  f30f1008             movss xmm1, dword ptr [eax]
// 0090e0a2  0f2fc1               comiss xmm0, xmm1
// 0090e0a5  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 0090e0ab  f30f11442408         movss dword ptr [esp + 8], xmm0
// 0090e0b1  f30f114c2468         movss dword ptr [esp + 0x68], xmm1
// 0090e0b7  f30f11542460         movss dword ptr [esp + 0x60], xmm2
// 0090e0bd  8d442468             lea eax, [esp + 0x68]
// 0090e0c1  7704                 ja 0x90e0c7
// 0090e0c3  8d442464             lea eax, [esp + 0x64]
// 0090e0c7  0f2fc2               comiss xmm0, xmm2
// 0090e0ca  f30f1018             movss xmm3, dword ptr [eax]
// 0090e0ce  f30f115c242c         movss dword ptr [esp + 0x2c], xmm3
// 0090e0d4  8d442460             lea eax, [esp + 0x60]
// 0090e0d8  7704                 ja 0x90e0de
// 0090e0da  8d442408             lea eax, [esp + 8]
// 0090e0de  0f2fc8               comiss xmm1, xmm0
// 0090e0e1  f30f1018             movss xmm3, dword ptr [eax]
// 0090e0e5  f30f115c2430         movss dword ptr [esp + 0x30], xmm3
// 0090e0eb  8d442468             lea eax, [esp + 0x68]
// 0090e0ef  7704                 ja 0x90e0f5
// 0090e0f1  8d442464             lea eax, [esp + 0x64]
// 0090e0f5  0f2fd0               comiss xmm2, xmm0
// 0090e0f8  f30f1008             movss xmm1, dword ptr [eax]
// 0090e0fc  f30f114c2434         movss dword ptr [esp + 0x34], xmm1
// 0090e102  8d442460             lea eax, [esp + 0x60]
// 0090e106  7704                 ja 0x90e10c
// 0090e108  8d442408             lea eax, [esp + 8]
// 0090e10c  f30f1008             movss xmm1, dword ptr [eax]
// 0090e110  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0090e114  f30f105004           movss xmm2, dword ptr [eax + 4]
// 0090e119  f30f114c2438         movss dword ptr [esp + 0x38], xmm1
// 0090e11f  f30f1008             movss xmm1, dword ptr [eax]
// 0090e123  0f2fc1               comiss xmm0, xmm1
// 0090e126  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 0090e12c  f30f11442408         movss dword ptr [esp + 8], xmm0
// 0090e132  f30f114c2468         movss dword ptr [esp + 0x68], xmm1
// 0090e138  f30f11542460         movss dword ptr [esp + 0x60], xmm2
// 0090e13e  8d442468             lea eax, [esp + 0x68]
// 0090e142  7704                 ja 0x90e148
// 0090e144  8d442464             lea eax, [esp + 0x64]
// 0090e148  0f2fc2               comiss xmm0, xmm2
// 0090e14b  f30f1018             movss xmm3, dword ptr [eax]
// 0090e14f  f30f115c243c         movss dword ptr [esp + 0x3c], xmm3
// 0090e155  8d442460             lea eax, [esp + 0x60]
// 0090e159  7704                 ja 0x90e15f
// 0090e15b  8d442408             lea eax, [esp + 8]
// 0090e15f  0f2fc8               comiss xmm1, xmm0
// 0090e162  f30f1018             movss xmm3, dword ptr [eax]
// 0090e166  f30f115c2440         movss dword ptr [esp + 0x40], xmm3
// 0090e16c  8d442468             lea eax, [esp + 0x68]
// 0090e170  7704                 ja 0x90e176
// 0090e172  8d442464             lea eax, [esp + 0x64]
// 0090e176  0f2fd0               comiss xmm2, xmm0
// 0090e179  f30f1008             movss xmm1, dword ptr [eax]
// 0090e17d  f30f114c2444         movss dword ptr [esp + 0x44], xmm1
// 0090e183  8d442460             lea eax, [esp + 0x60]
// 0090e187  7704                 ja 0x90e18d
// 0090e189  8d442408             lea eax, [esp + 8]
// 0090e18d  f30f1000             movss xmm0, dword ptr [eax]
// 0090e191  8d44240c             lea eax, [esp + 0xc]
// 0090e195  50                   push eax
// 0090e196  8d4c2420             lea ecx, [esp + 0x20]
// 0090e19a  51                   push ecx
// 0090e19b  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0090e19f  8d542434             lea edx, [esp + 0x34]
// 0090e1a3  52                   push edx
// 0090e1a4  8b542460             mov edx, dword ptr [esp + 0x60]
// 0090e1a8  8d442448             lea eax, [esp + 0x48]
// 0090e1ac  50                   push eax
// 0090e1ad  8b442460             mov eax, dword ptr [esp + 0x60]
// 0090e1b1  51                   push ecx
// 0090e1b2  52                   push edx
// 0090e1b3  50                   push eax
// 0090e1b4  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 0090e1ba  e8e1f7ffff           call 0x90d9a0
// 0090e1bf  83c468               add esp, 0x68
// 0090e1c2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?rect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@ABVVector2@2@333@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
