// from server: 100% by auto
// roc 2011-06 006a8080  unit: RBX::Network::P8Player::?$GetSetImpl  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a8080
//
// 006a8080  0f57c0               xorps xmm0, xmm0
// 006a8083  8b442404             mov eax, dword ptr [esp + 4]
// 006a8087  f30f104c2410         movss xmm1, dword ptr [esp + 0x10]
// 006a808d  f30f1100             movss dword ptr [eax], xmm0
// 006a8091  f30f114004           movss dword ptr [eax + 4], xmm0
// 006a8096  f30f114008           movss dword ptr [eax + 8], xmm0
// 006a809b  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 006a80a0  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 006a80a6  0f2fc1               comiss xmm0, xmm1
// 006a80a9  8d4c2410             lea ecx, [esp + 0x10]
// 006a80ad  7704                 ja 0x6a80b3
// 006a80af  8d4c2408             lea ecx, [esp + 8]
// 006a80b3  d901                 fld dword ptr [ecx]
// 006a80b5  f30f1054240c         movss xmm2, dword ptr [esp + 0xc]
// 006a80bb  f30f105c2414         movss xmm3, dword ptr [esp + 0x14]
// 006a80c1  d918                 fstp dword ptr [eax]
// 006a80c3  0f2fd3               comiss xmm2, xmm3
// 006a80c6  8d4c2414             lea ecx, [esp + 0x14]
// 006a80ca  7704                 ja 0x6a80d0
// 006a80cc  8d4c240c             lea ecx, [esp + 0xc]
// 006a80d0  0f2fc8               comiss xmm1, xmm0
// 006a80d3  d901                 fld dword ptr [ecx]
// 006a80d5  d95804               fstp dword ptr [eax + 4]
// 006a80d8  8d4c2410             lea ecx, [esp + 0x10]
// 006a80dc  7704                 ja 0x6a80e2
// 006a80de  8d4c2408             lea ecx, [esp + 8]
// 006a80e2  0f2fda               comiss xmm3, xmm2
// 006a80e5  d901                 fld dword ptr [ecx]
// 006a80e7  d95808               fstp dword ptr [eax + 8]
// 006a80ea  8d4c2414             lea ecx, [esp + 0x14]
// 006a80ee  7704                 ja 0x6a80f4
// 006a80f0  8d4c240c             lea ecx, [esp + 0xc]
// 006a80f4  d901                 fld dword ptr [ecx]
// 006a80f6  d9580c               fstp dword ptr [eax + 0xc]
// 006a80f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?xyxy@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
