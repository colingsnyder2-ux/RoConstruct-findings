// roc 2009-12 004630a0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$sp_counted_impl_p  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004630a0
//
// 004630a0  0f57c0               xorps xmm0, xmm0
// 004630a3  8b442404             mov eax, dword ptr [esp + 4]
// 004630a7  f30f104c2410         movss xmm1, dword ptr [esp + 0x10]
// 004630ad  f30f1100             movss dword ptr [eax], xmm0
// 004630b1  f30f114004           movss dword ptr [eax + 4], xmm0
// 004630b6  f30f114008           movss dword ptr [eax + 8], xmm0
// 004630bb  f30f11400c           movss dword ptr [eax + 0xc], xmm0
// 004630c0  f30f10442408         movss xmm0, dword ptr [esp + 8]
// 004630c6  0f2fc1               comiss xmm0, xmm1
// 004630c9  8d4c2410             lea ecx, [esp + 0x10]
// 004630cd  7704                 ja 0x4630d3
// 004630cf  8d4c2408             lea ecx, [esp + 8]
// 004630d3  d901                 fld dword ptr [ecx]
// 004630d5  f30f1054240c         movss xmm2, dword ptr [esp + 0xc]
// 004630db  f30f105c2414         movss xmm3, dword ptr [esp + 0x14]
// 004630e1  d918                 fstp dword ptr [eax]
// 004630e3  0f2fd3               comiss xmm2, xmm3
// 004630e6  8d4c2414             lea ecx, [esp + 0x14]
// 004630ea  7704                 ja 0x4630f0
// 004630ec  8d4c240c             lea ecx, [esp + 0xc]
// 004630f0  0f2fc8               comiss xmm1, xmm0
// 004630f3  d901                 fld dword ptr [ecx]
// 004630f5  d95804               fstp dword ptr [eax + 4]
// 004630f8  8d4c2410             lea ecx, [esp + 0x10]
// 004630fc  7704                 ja 0x463102
// 004630fe  8d4c2408             lea ecx, [esp + 8]
// 00463102  0f2fda               comiss xmm3, xmm2
// 00463105  d901                 fld dword ptr [ecx]
// 00463107  d95808               fstp dword ptr [eax + 8]
// 0046310a  8d4c2414             lea ecx, [esp + 0x14]
// 0046310e  7704                 ja 0x463114
// 00463110  8d4c240c             lea ecx, [esp + 0xc]
// 00463114  d901                 fld dword ptr [ecx]
// 00463116  d9580c               fstp dword ptr [eax + 0xc]
// 00463119  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ?xyxy@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
