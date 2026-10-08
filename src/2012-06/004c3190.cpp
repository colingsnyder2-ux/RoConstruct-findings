// from server: 100% by auto
// roc 2012-06 004c3190  unit: RBX::VRbxTextureProxy::?$sp_counted_impl_p  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004c3190
//
// 004c3190  0f57c0               xorps xmm0, xmm0
// 004c3193  8b442404             mov eax, dword ptr [esp + 4]
// 004c3197  f30f104c2410         movss xmm1, dword ptr [esp + 0x10]
// 004c319d  f30f1100             movss dword ptr [eax], xmm0
// 004c31a1  f30f114004           movss dword ptr [eax + 4], xmm0
// 004c31a6  f30f114008           movss dword ptr [eax + 8], xmm0
// 004c31ab  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 004c31b0  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 004c31b6  0f2fc1               comiss xmm0, xmm1
// 004c31b9  8d4c2410             lea ecx, [esp + 0x10]
// 004c31bd  7704                 ja 0x4c31c3
// 004c31bf  8d4c2408             lea ecx, [esp + 8]
// 004c31c3  d901                 fld dword ptr [ecx]
// 004c31c5  f30f1054240c         movss xmm2, dword ptr [esp + 0xc]
// 004c31cb  f30f105c2414         movss xmm3, dword ptr [esp + 0x14]
// 004c31d1  d918                 fstp dword ptr [eax]
// 004c31d3  0f2fd3               comiss xmm2, xmm3
// 004c31d6  8d4c2414             lea ecx, [esp + 0x14]
// 004c31da  7704                 ja 0x4c31e0
// 004c31dc  8d4c240c             lea ecx, [esp + 0xc]
// 004c31e0  0f2fc8               comiss xmm1, xmm0
// 004c31e3  d901                 fld dword ptr [ecx]
// 004c31e5  d95804               fstp dword ptr [eax + 4]
// 004c31e8  8d4c2410             lea ecx, [esp + 0x10]
// 004c31ec  7704                 ja 0x4c31f2
// 004c31ee  8d4c2408             lea ecx, [esp + 8]
// 004c31f2  0f2fda               comiss xmm3, xmm2
// 004c31f5  d901                 fld dword ptr [ecx]
// 004c31f7  d95808               fstp dword ptr [eax + 8]
// 004c31fa  8d4c2414             lea ecx, [esp + 0x14]
// 004c31fe  7704                 ja 0x4c3204
// 004c3200  8d4c240c             lea ecx, [esp + 0xc]
// 004c3204  d901                 fld dword ptr [ecx]
// 004c3206  d9580c               fstp dword ptr [eax + 0xc]
// 004c3209  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?xyxy@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
