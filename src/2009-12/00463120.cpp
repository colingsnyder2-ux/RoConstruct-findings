// roc 2009-12 00463120  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00463120
//
// 00463120  83ec08               sub esp, 8
// 00463123  f30f105c2410         movss xmm3, dword ptr [esp + 0x10]
// 00463129  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046312d  f30f10642414         movss xmm4, dword ptr [esp + 0x14]
// 00463133  0f57c9               xorps xmm1, xmm1
// 00463136  0f28c3               movaps xmm0, xmm3
// 00463139  f30f58442418         addss xmm0, dword ptr [esp + 0x18]
// 0046313f  0f2fd8               comiss xmm3, xmm0
// 00463142  0f28d4               movaps xmm2, xmm4
// 00463145  f30f5854241c         addss xmm2, dword ptr [esp + 0x1c]
// 0046314b  f30f1108             movss dword ptr [eax], xmm1
// 0046314f  f30f114804           movss dword ptr [eax + 4], xmm1
// 00463154  f30f111c24           movss dword ptr [esp], xmm3
// 00463159  f30f11642404         movss dword ptr [esp + 4], xmm4
// 0046315f  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 00463165  f30f11542414         movss dword ptr [esp + 0x14], xmm2
// 0046316b  f30f114808           movss dword ptr [eax + 8], xmm1
// 00463170  f30f11480c           movss dword ptr [eax + 0xc], xmm1
// 00463175  8d4c2410             lea ecx, [esp + 0x10]
// 00463179  7703                 ja 0x46317e
// 0046317b  8d0c24               lea ecx, [esp]
// 0046317e  0f2fe2               comiss xmm4, xmm2
// 00463181  d901                 fld dword ptr [ecx]
// 00463183  d918                 fstp dword ptr [eax]
// 00463185  8d4c2414             lea ecx, [esp + 0x14]
// 00463189  7704                 ja 0x46318f
// 0046318b  8d4c2404             lea ecx, [esp + 4]
// 0046318f  0f2fc3               comiss xmm0, xmm3
// 00463192  d901                 fld dword ptr [ecx]
// 00463194  d95804               fstp dword ptr [eax + 4]
// 00463197  8d4c2410             lea ecx, [esp + 0x10]
// 0046319b  7703                 ja 0x4631a0
// 0046319d  8d0c24               lea ecx, [esp]
// 004631a0  0f2fd4               comiss xmm2, xmm4
// 004631a3  d901                 fld dword ptr [ecx]
// 004631a5  d95808               fstp dword ptr [eax + 8]
// 004631a8  8d4c2414             lea ecx, [esp + 0x14]
// 004631ac  7704                 ja 0x4631b2
// 004631ae  8d4c2404             lea ecx, [esp + 4]
// 004631b2  d901                 fld dword ptr [ecx]
// 004631b4  d9580c               fstp dword ptr [eax + 0xc]
// 004631b7  83c408               add esp, 8
// 004631ba  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?xywh@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
