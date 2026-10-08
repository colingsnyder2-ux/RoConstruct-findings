// from server: 100% by auto
// roc 2010-06 004850e0  unit: G3D::GImage::Error  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004850e0
//
// 004850e0  83ec08               sub esp, 8
// 004850e3  f30f105c2410         movss xmm3, dword ptr [esp + 0x10]
// 004850e9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004850ed  f30f10642414         movss xmm4, dword ptr [esp + 0x14]
// 004850f3  0f57c9               xorps xmm1, xmm1
// 004850f6  0f28c3               movaps xmm0, xmm3
// 004850f9  f30f58442418         addss xmm0, dword ptr [esp + 0x18]
// 004850ff  0f2fd8               comiss xmm3, xmm0
// 00485102  0f28d4               movaps xmm2, xmm4
// 00485105  f30f5854241c         addss xmm2, dword ptr [esp + 0x1c]
// 0048510b  f30f1108             movss dword ptr [eax], xmm1
// 0048510f  f30f114804           movss dword ptr [eax + 4], xmm1
// 00485114  f30f111c24           movss dword ptr [esp], xmm3
// 00485119  f30f11642404         movss dword ptr [esp + 4], xmm4
// 0048511f  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 00485125  f30f11542414         movss dword ptr [esp + 0x14], xmm2
// 0048512b  f30f114808           movss dword ptr [eax + 8], xmm1
// 00485130  f30f11480c           movss dword ptr [eax + 0xc], xmm1
// 00485135  8d4c2410             lea ecx, [esp + 0x10]
// 00485139  7703                 ja 0x48513e
// 0048513b  8d0c24               lea ecx, [esp]
// 0048513e  0f2fe2               comiss xmm4, xmm2
// 00485141  d901                 fld dword ptr [ecx]
// 00485143  d918                 fstp dword ptr [eax]
// 00485145  8d4c2414             lea ecx, [esp + 0x14]
// 00485149  7704                 ja 0x48514f
// 0048514b  8d4c2404             lea ecx, [esp + 4]
// 0048514f  0f2fc3               comiss xmm0, xmm3
// 00485152  d901                 fld dword ptr [ecx]
// 00485154  d95804               fstp dword ptr [eax + 4]
// 00485157  8d4c2410             lea ecx, [esp + 0x10]
// 0048515b  7703                 ja 0x485160
// 0048515d  8d0c24               lea ecx, [esp]
// 00485160  0f2fd4               comiss xmm2, xmm4
// 00485163  d901                 fld dword ptr [ecx]
// 00485165  d95808               fstp dword ptr [eax + 8]
// 00485168  8d4c2414             lea ecx, [esp + 0x14]
// 0048516c  7704                 ja 0x485172
// 0048516e  8d4c2404             lea ecx, [esp + 4]
// 00485172  d901                 fld dword ptr [ecx]
// 00485174  d9580c               fstp dword ptr [eax + 0xc]
// 00485177  83c408               add esp, 8
// 0048517a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?xywh@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
