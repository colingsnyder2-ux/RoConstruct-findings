// from server: 100% by auto
// roc 2011-06 006a8100  unit: RBX::Network::P8Player::?$GetSetImpl  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a8100
//
// 006a8100  83ec08               sub esp, 8
// 006a8103  f30f105c2410         movss xmm3, dword ptr [esp + 0x10]
// 006a8109  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a810d  f30f10642414         movss xmm4, dword ptr [esp + 0x14]
// 006a8113  0f57c9               xorps xmm1, xmm1
// 006a8116  0f28c3               movaps xmm0, xmm3
// 006a8119  f30f58442418         addss xmm0, dword ptr [esp + 0x18]
// 006a811f  0f2fd8               comiss xmm3, xmm0
// 006a8122  0f28d4               movaps xmm2, xmm4
// 006a8125  f30f5854241c         addss xmm2, dword ptr [esp + 0x1c]
// 006a812b  f30f1108             movss dword ptr [eax], xmm1
// 006a812f  f30f114804           movss dword ptr [eax + 4], xmm1
// 006a8134  f30f111c24           movss dword ptr [esp], xmm3
// 006a8139  f30f11642404         movss dword ptr [esp + 4], xmm4
// 006a813f  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 006a8145  f30f11542414         movss dword ptr [esp + 0x14], xmm2
// 006a814b  f30f114808           movss dword ptr [eax + 8], xmm1
// 006a8150  f30f11480c           movss dword ptr [eax + 0xc], xmm1
// 006a8155  8d4c2410             lea ecx, [esp + 0x10]
// 006a8159  7703                 ja 0x6a815e
// 006a815b  8d0c24               lea ecx, [esp]
// 006a815e  0f2fe2               comiss xmm4, xmm2
// 006a8161  d901                 fld dword ptr [ecx]
// 006a8163  d918                 fstp dword ptr [eax]
// 006a8165  8d4c2414             lea ecx, [esp + 0x14]
// 006a8169  7704                 ja 0x6a816f
// 006a816b  8d4c2404             lea ecx, [esp + 4]
// 006a816f  0f2fc3               comiss xmm0, xmm3
// 006a8172  d901                 fld dword ptr [ecx]
// 006a8174  d95804               fstp dword ptr [eax + 4]
// 006a8177  8d4c2410             lea ecx, [esp + 0x10]
// 006a817b  7703                 ja 0x6a8180
// 006a817d  8d0c24               lea ecx, [esp]
// 006a8180  0f2fd4               comiss xmm2, xmm4
// 006a8183  d901                 fld dword ptr [ecx]
// 006a8185  d95808               fstp dword ptr [eax + 8]
// 006a8188  8d4c2414             lea ecx, [esp + 0x14]
// 006a818c  7704                 ja 0x6a8192
// 006a818e  8d4c2404             lea ecx, [esp + 4]
// 006a8192  d901                 fld dword ptr [ecx]
// 006a8194  d9580c               fstp dword ptr [eax + 0xc]
// 006a8197  83c408               add esp, 8
// 006a819a  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?xywh@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
