// roc 2012-06 004c3210  unit: RBX::VRbxTextureProxy::?$sp_counted_impl_p  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004c3210
//
// 004c3210  83ec08               sub esp, 8
// 004c3213  f30f105c2410         movss xmm3, dword ptr [esp + 0x10]
// 004c3219  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c321d  f30f10642414         movss xmm4, dword ptr [esp + 0x14]
// 004c3223  0f57c9               xorps xmm1, xmm1
// 004c3226  0f28c3               movaps xmm0, xmm3
// 004c3229  f30f58442418         addss xmm0, dword ptr [esp + 0x18]
// 004c322f  0f2fd8               comiss xmm3, xmm0
// 004c3232  0f28d4               movaps xmm2, xmm4
// 004c3235  f30f5854241c         addss xmm2, dword ptr [esp + 0x1c]
// 004c323b  f30f1108             movss dword ptr [eax], xmm1
// 004c323f  f30f114804           movss dword ptr [eax + 4], xmm1
// 004c3244  f30f111c24           movss dword ptr [esp], xmm3
// 004c3249  f30f11642404         movss dword ptr [esp + 4], xmm4
// 004c324f  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 004c3255  f30f11542414         movss dword ptr [esp + 0x14], xmm2
// 004c325b  f30f114808           movss dword ptr [eax + 8], xmm1
// 004c3260  f30f11480c           movss dword ptr [eax + 0xc], xmm1
// 004c3265  8d4c2410             lea ecx, [esp + 0x10]
// 004c3269  7703                 ja 0x4c326e
// 004c326b  8d0c24               lea ecx, [esp]
// 004c326e  0f2fe2               comiss xmm4, xmm2
// 004c3271  d901                 fld dword ptr [ecx]
// 004c3273  d918                 fstp dword ptr [eax]
// 004c3275  8d4c2414             lea ecx, [esp + 0x14]
// 004c3279  7704                 ja 0x4c327f
// 004c327b  8d4c2404             lea ecx, [esp + 4]
// 004c327f  0f2fc3               comiss xmm0, xmm3
// 004c3282  d901                 fld dword ptr [ecx]
// 004c3284  d95804               fstp dword ptr [eax + 4]
// 004c3287  8d4c2410             lea ecx, [esp + 0x10]
// 004c328b  7703                 ja 0x4c3290
// 004c328d  8d0c24               lea ecx, [esp]
// 004c3290  0f2fd4               comiss xmm2, xmm4
// 004c3293  d901                 fld dword ptr [ecx]
// 004c3295  d95808               fstp dword ptr [eax + 8]
// 004c3298  8d4c2414             lea ecx, [esp + 0x14]
// 004c329c  7704                 ja 0x4c32a2
// 004c329e  8d4c2404             lea ecx, [esp + 4]
// 004c32a2  d901                 fld dword ptr [ecx]
// 004c32a4  d9580c               fstp dword ptr [eax + 0xc]
// 004c32a7  83c408               add esp, 8
// 004c32aa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?xywh@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
