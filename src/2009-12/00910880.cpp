// roc 2009-12 00910880  unit: RBX::RenderNew::RenderScene  size: 563 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00910880
//
// 00910880  83ec4c               sub esp, 0x4c
// 00910883  8b442468             mov eax, dword ptr [esp + 0x68]
// 00910887  0f57c0               xorps xmm0, xmm0
// 0091088a  f30f1008             movss xmm1, dword ptr [eax]
// 0091088e  0f2fc1               comiss xmm0, xmm1
// 00910891  f30f105004           movss xmm2, dword ptr [eax + 4]
// 00910896  f30f110424           movss dword ptr [esp], xmm0
// 0091089b  f30f11442408         movss dword ptr [esp + 8], xmm0
// 009108a1  f30f114c2468         movss dword ptr [esp + 0x68], xmm1
// 009108a7  f30f11542404         movss dword ptr [esp + 4], xmm2
// 009108ad  8d442468             lea eax, [esp + 0x68]
// 009108b1  7703                 ja 0x9108b6
// 009108b3  8d0424               lea eax, [esp]
// 009108b6  0f2fc2               comiss xmm0, xmm2
// 009108b9  f30f1018             movss xmm3, dword ptr [eax]
// 009108bd  f30f115c240c         movss dword ptr [esp + 0xc], xmm3
// 009108c3  8d442404             lea eax, [esp + 4]
// 009108c7  7704                 ja 0x9108cd
// 009108c9  8d442408             lea eax, [esp + 8]
// 009108cd  0f2fc8               comiss xmm1, xmm0
// 009108d0  f30f1018             movss xmm3, dword ptr [eax]
// 009108d4  f30f115c2410         movss dword ptr [esp + 0x10], xmm3
// 009108da  8d442468             lea eax, [esp + 0x68]
// 009108de  7703                 ja 0x9108e3
// 009108e0  8d0424               lea eax, [esp]
// 009108e3  0f2fd0               comiss xmm2, xmm0
// 009108e6  f30f1008             movss xmm1, dword ptr [eax]
// 009108ea  f30f114c2414         movss dword ptr [esp + 0x14], xmm1
// 009108f0  8d442404             lea eax, [esp + 4]
// 009108f4  7704                 ja 0x9108fa
// 009108f6  8d442408             lea eax, [esp + 8]
// 009108fa  f30f1008             movss xmm1, dword ptr [eax]
// 009108fe  8b442464             mov eax, dword ptr [esp + 0x64]
// 00910902  f30f105004           movss xmm2, dword ptr [eax + 4]
// 00910907  f30f114c2418         movss dword ptr [esp + 0x18], xmm1
// 0091090d  f30f1008             movss xmm1, dword ptr [eax]
// 00910911  0f2fc1               comiss xmm0, xmm1
// 00910914  f30f11442408         movss dword ptr [esp + 8], xmm0
// 0091091a  f30f11442404         movss dword ptr [esp + 4], xmm0
// 00910920  f30f114c2468         movss dword ptr [esp + 0x68], xmm1
// 00910926  f30f11542464         movss dword ptr [esp + 0x64], xmm2
// 0091092c  8d442468             lea eax, [esp + 0x68]
// 00910930  7704                 ja 0x910936
// 00910932  8d442408             lea eax, [esp + 8]
// 00910936  0f2fc2               comiss xmm0, xmm2
// 00910939  f30f1018             movss xmm3, dword ptr [eax]
// 0091093d  f30f115c241c         movss dword ptr [esp + 0x1c], xmm3
// 00910943  8d442464             lea eax, [esp + 0x64]
// 00910947  7704                 ja 0x91094d
// 00910949  8d442404             lea eax, [esp + 4]
// 0091094d  0f2fc8               comiss xmm1, xmm0
// 00910950  f30f1018             movss xmm3, dword ptr [eax]
// 00910954  f30f115c2420         movss dword ptr [esp + 0x20], xmm3
// 0091095a  8d442468             lea eax, [esp + 0x68]
// 0091095e  7704                 ja 0x910964
// 00910960  8d442408             lea eax, [esp + 8]
// 00910964  0f2fd0               comiss xmm2, xmm0
// 00910967  f30f1008             movss xmm1, dword ptr [eax]
// 0091096b  f30f114c2424         movss dword ptr [esp + 0x24], xmm1
// 00910971  8d442464             lea eax, [esp + 0x64]
// 00910975  7704                 ja 0x91097b
// 00910977  8d442404             lea eax, [esp + 4]
// 0091097b  f30f1008             movss xmm1, dword ptr [eax]
// 0091097f  8b442460             mov eax, dword ptr [esp + 0x60]
// 00910983  f30f105004           movss xmm2, dword ptr [eax + 4]
// 00910988  f30f114c2428         movss dword ptr [esp + 0x28], xmm1
// 0091098e  f30f1008             movss xmm1, dword ptr [eax]
// 00910992  0f2fc1               comiss xmm0, xmm1
// 00910995  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 0091099b  f30f11442408         movss dword ptr [esp + 8], xmm0
// 009109a1  f30f114c2468         movss dword ptr [esp + 0x68], xmm1
// 009109a7  f30f11542460         movss dword ptr [esp + 0x60], xmm2
// 009109ad  8d442468             lea eax, [esp + 0x68]
// 009109b1  7704                 ja 0x9109b7
// 009109b3  8d442464             lea eax, [esp + 0x64]
// 009109b7  0f2fc2               comiss xmm0, xmm2
// 009109ba  f30f1018             movss xmm3, dword ptr [eax]
// 009109be  f30f115c242c         movss dword ptr [esp + 0x2c], xmm3
// 009109c4  8d442460             lea eax, [esp + 0x60]
// 009109c8  7704                 ja 0x9109ce
// 009109ca  8d442408             lea eax, [esp + 8]
// 009109ce  0f2fc8               comiss xmm1, xmm0
// 009109d1  f30f1018             movss xmm3, dword ptr [eax]
// 009109d5  f30f115c2430         movss dword ptr [esp + 0x30], xmm3
// 009109db  8d442468             lea eax, [esp + 0x68]
// 009109df  7704                 ja 0x9109e5
// 009109e1  8d442464             lea eax, [esp + 0x64]
// 009109e5  0f2fd0               comiss xmm2, xmm0
// 009109e8  f30f1008             movss xmm1, dword ptr [eax]
// 009109ec  f30f114c2434         movss dword ptr [esp + 0x34], xmm1
// 009109f2  8d442460             lea eax, [esp + 0x60]
// 009109f6  7704                 ja 0x9109fc
// 009109f8  8d442408             lea eax, [esp + 8]
// 009109fc  f30f1008             movss xmm1, dword ptr [eax]
// 00910a00  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00910a04  f30f105004           movss xmm2, dword ptr [eax + 4]
// 00910a09  f30f114c2438         movss dword ptr [esp + 0x38], xmm1
// 00910a0f  f30f1008             movss xmm1, dword ptr [eax]
// 00910a13  0f2fc1               comiss xmm0, xmm1
// 00910a16  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 00910a1c  f30f11442408         movss dword ptr [esp + 8], xmm0
// 00910a22  f30f114c2468         movss dword ptr [esp + 0x68], xmm1
// 00910a28  f30f11542460         movss dword ptr [esp + 0x60], xmm2
// 00910a2e  8d442468             lea eax, [esp + 0x68]
// 00910a32  7704                 ja 0x910a38
// 00910a34  8d442464             lea eax, [esp + 0x64]
// 00910a38  0f2fc2               comiss xmm0, xmm2
// 00910a3b  f30f1018             movss xmm3, dword ptr [eax]
// 00910a3f  f30f115c243c         movss dword ptr [esp + 0x3c], xmm3
// 00910a45  8d442460             lea eax, [esp + 0x60]
// 00910a49  7704                 ja 0x910a4f
// 00910a4b  8d442408             lea eax, [esp + 8]
// 00910a4f  0f2fc8               comiss xmm1, xmm0
// 00910a52  f30f1018             movss xmm3, dword ptr [eax]
// 00910a56  f30f115c2440         movss dword ptr [esp + 0x40], xmm3
// 00910a5c  8d442468             lea eax, [esp + 0x68]
// 00910a60  7704                 ja 0x910a66
// 00910a62  8d442464             lea eax, [esp + 0x64]
// 00910a66  0f2fd0               comiss xmm2, xmm0
// 00910a69  f30f1008             movss xmm1, dword ptr [eax]
// 00910a6d  f30f114c2444         movss dword ptr [esp + 0x44], xmm1
// 00910a73  8d442460             lea eax, [esp + 0x60]
// 00910a77  7704                 ja 0x910a7d
// 00910a79  8d442408             lea eax, [esp + 8]
// 00910a7d  f30f1000             movss xmm0, dword ptr [eax]
// 00910a81  8d44240c             lea eax, [esp + 0xc]
// 00910a85  50                   push eax
// 00910a86  8d4c2420             lea ecx, [esp + 0x20]
// 00910a8a  51                   push ecx
// 00910a8b  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00910a8f  8d542434             lea edx, [esp + 0x34]
// 00910a93  52                   push edx
// 00910a94  8b542460             mov edx, dword ptr [esp + 0x60]
// 00910a98  8d442448             lea eax, [esp + 0x48]
// 00910a9c  50                   push eax
// 00910a9d  8b442460             mov eax, dword ptr [esp + 0x60]
// 00910aa1  51                   push ecx
// 00910aa2  52                   push edx
// 00910aa3  50                   push eax
// 00910aa4  f30f11442464         movss dword ptr [esp + 0x64], xmm0
// 00910aaa  e8e1f7ffff           call 0x910290
// 00910aaf  83c468               add esp, 0x68
// 00910ab2  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?rect2D@Draw@G3D@@SAXABVRect2D@2@PAVRenderDevice@2@ABVColor4@2@ABVVector2@2@333@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
