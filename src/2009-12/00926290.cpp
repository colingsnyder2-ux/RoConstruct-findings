// roc 2009-12 00926290  unit: seg_00920000  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00926290
//
// 00926290  83ec0c               sub esp, 0xc
// 00926293  56                   push esi
// 00926294  8bf1                 mov esi, ecx
// 00926296  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0092629a  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 0092629f  f30f11442404         movss dword ptr [esp + 4], xmm0
// 009262a5  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 009262aa  8d442418             lea eax, [esp + 0x18]
// 009262ae  50                   push eax
// 009262af  8d542408             lea edx, [esp + 8]
// 009262b3  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 009262b9  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 009262be  52                   push edx
// 009262bf  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 009262c5  e8b658ceff           call 0x60bb80
// 009262ca  f30f104e18           movss xmm1, dword ptr [esi + 0x18]
// 009262cf  f30f1054240c         movss xmm2, dword ptr [esp + 0xc]
// 009262d5  f30f104614           movss xmm0, dword ptr [esi + 0x14]
// 009262da  f30f105c2408         movss xmm3, dword ptr [esp + 8]
// 009262e0  f30f10642404         movss xmm4, dword ptr [esp + 4]
// 009262e6  f30f59c3             mulss xmm0, xmm3
// 009262ea  f30f59ca             mulss xmm1, xmm2
// 009262ee  f30f58c8             addss xmm1, xmm0
// 009262f2  f30f104610           movss xmm0, dword ptr [esi + 0x10]
// 009262f7  f30f59c4             mulss xmm0, xmm4
// 009262fb  f30f58c8             addss xmm1, xmm0
// 009262ff  0f2f0d886a9a00       comiss xmm1, dword ptr [0x9a6a88]
// 00926306  7222                 jb 0x92632a
// 00926308  e863eaccff           call 0x5f4d70
// 0092630d  d900                 fld dword ptr [eax]
// 0092630f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00926313  d919                 fstp dword ptr [ecx]
// 00926315  5e                   pop esi
// 00926316  d94004               fld dword ptr [eax + 4]
// 00926319  d95904               fstp dword ptr [ecx + 4]
// 0092631c  d94008               fld dword ptr [eax + 8]
// 0092631f  8bc1                 mov eax, ecx
// 00926321  d95908               fstp dword ptr [ecx + 8]
// 00926324  83c40c               add esp, 0xc
// 00926327  c20800               ret 8
// 0092632a  f30f10460c           movss xmm0, dword ptr [esi + 0xc]
// 0092632f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00926333  f30f59c2             mulss xmm0, xmm2
// 00926337  f30f105608           movss xmm2, dword ptr [esi + 8]
// 0092633c  f30f59d3             mulss xmm2, xmm3
// 00926340  f30f105e18           movss xmm3, dword ptr [esi + 0x18]
// 00926345  f30f58c2             addss xmm0, xmm2
// 00926349  f30f105604           movss xmm2, dword ptr [esi + 4]
// 0092634e  f30f59d4             mulss xmm2, xmm4
// 00926352  f30f58c2             addss xmm0, xmm2
// 00926356  f30f58442418         addss xmm0, dword ptr [esp + 0x18]
// 0092635c  f30f105614           movss xmm2, dword ptr [esi + 0x14]
// 00926361  f30f5ec1             divss xmm0, xmm1
// 00926365  0f570510169b00       xorps xmm0, xmmword ptr [0x9b1610]
// 0092636c  f30f104e10           movss xmm1, dword ptr [esi + 0x10]
// 00926371  f30f59c8             mulss xmm1, xmm0
// 00926375  f30f59d0             mulss xmm2, xmm0
// 00926379  f30f59d8             mulss xmm3, xmm0
// 0092637d  f30f104604           movss xmm0, dword ptr [esi + 4]
// 00926382  f30f58c1             addss xmm0, xmm1
// 00926386  f30f1100             movss dword ptr [eax], xmm0
// 0092638a  f30f104608           movss xmm0, dword ptr [esi + 8]
// 0092638f  f30f58c2             addss xmm0, xmm2
// 00926393  f30f114004           movss dword ptr [eax + 4], xmm0
// 00926398  f30f10460c           movss xmm0, dword ptr [esi + 0xc]
// 0092639d  f30f58c3             addss xmm0, xmm3
// 009263a1  f30f114008           movss dword ptr [eax + 8], xmm0
// 009263a6  5e                   pop esi
// 009263a7  83c40c               add esp, 0xc
// 009263aa  c20800               ret 8
// library g3d-6.09/G3Dcpp\Ray.cpp (function ?intersection@Ray@G3D@@QBE?AVVector3@2@ABVPlane@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Ray.cpp
