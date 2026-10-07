// roc 2010-06 00485060  unit: G3D::GImage::Error  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00485060
//
// 00485060  0f57c0               xorps xmm0, xmm0
// 00485063  8b442404             mov eax, dword ptr [esp + 4]
// 00485067  f30f104c2410         movss xmm1, dword ptr [esp + 0x10]
// 0048506d  f30f1100             movss dword ptr [eax], xmm0
// 00485071  f30f114004           movss dword ptr [eax + 4], xmm0
// 00485076  f30f114008           movss dword ptr [eax + 8], xmm0
// 0048507b  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 00485080  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 00485086  0f2fc1               comiss xmm0, xmm1
// 00485089  8d4c2410             lea ecx, [esp + 0x10]
// 0048508d  7704                 ja 0x485093
// 0048508f  8d4c2408             lea ecx, [esp + 8]
// 00485093  d901                 fld dword ptr [ecx]
// 00485095  f30f1054240c         movss xmm2, dword ptr [esp + 0xc]
// 0048509b  f30f105c2414         movss xmm3, dword ptr [esp + 0x14]
// 004850a1  d918                 fstp dword ptr [eax]
// 004850a3  0f2fd3               comiss xmm2, xmm3
// 004850a6  8d4c2414             lea ecx, [esp + 0x14]
// 004850aa  7704                 ja 0x4850b0
// 004850ac  8d4c240c             lea ecx, [esp + 0xc]
// 004850b0  0f2fc8               comiss xmm1, xmm0
// 004850b3  d901                 fld dword ptr [ecx]
// 004850b5  d95804               fstp dword ptr [eax + 4]
// 004850b8  8d4c2410             lea ecx, [esp + 0x10]
// 004850bc  7704                 ja 0x4850c2
// 004850be  8d4c2408             lea ecx, [esp + 8]
// 004850c2  0f2fda               comiss xmm3, xmm2
// 004850c5  d901                 fld dword ptr [ecx]
// 004850c7  d95808               fstp dword ptr [eax + 8]
// 004850ca  8d4c2414             lea ecx, [esp + 0x14]
// 004850ce  7704                 ja 0x4850d4
// 004850d0  8d4c240c             lea ecx, [esp + 0xc]
// 004850d4  d901                 fld dword ptr [ecx]
// 004850d6  d9580c               fstp dword ptr [eax + 0xc]
// 004850d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?xyxy@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
