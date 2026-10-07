// roc 2010-06 0057bd70  unit: seg_00570000  size: 470 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057bd70
//
// 0057bd70  8b442408             mov eax, dword ptr [esp + 8]
// 0057bd74  f30f105004           movss xmm2, dword ptr [eax + 4]
// 0057bd79  f30f105808           movss xmm3, dword ptr [eax + 8]
// 0057bd7e  f30f1008             movss xmm1, dword ptr [eax]
// 0057bd82  83ec18               sub esp, 0x18
// 0057bd85  56                   push esi
// 0057bd86  8bf1                 mov esi, ecx
// 0057bd88  f30f5c5608           subss xmm2, dword ptr [esi + 8]
// 0057bd8d  f30f5c5e0c           subss xmm3, dword ptr [esi + 0xc]
// 0057bd92  f30f104618           movss xmm0, dword ptr [esi + 0x18]
// 0057bd97  f30f106614           movss xmm4, dword ptr [esi + 0x14]
// 0057bd9c  f30f5c4e04           subss xmm1, dword ptr [esi + 4]
// 0057bda1  f30f59e2             mulss xmm4, xmm2
// 0057bda5  f30f59c3             mulss xmm0, xmm3
// 0057bda9  f30f58c4             addss xmm0, xmm4
// 0057bdad  f30f106610           movss xmm4, dword ptr [esi + 0x10]
// 0057bdb2  f30f59e1             mulss xmm4, xmm1
// 0057bdb6  f30f58c4             addss xmm0, xmm4
// 0057bdba  0f2f052878a000       comiss xmm0, dword ptr [0xa07828]
// 0057bdc1  0f82d9000000         jb 0x57bea0
// 0057bdc7  f30f107610           movss xmm6, dword ptr [esi + 0x10]
// 0057bdcc  f30f106e14           movss xmm5, dword ptr [esi + 0x14]
// 0057bdd1  f30f106618           movss xmm4, dword ptr [esi + 0x18]
// 0057bdd6  0f28fe               movaps xmm7, xmm6
// 0057bdd9  f30f59fe             mulss xmm7, xmm6
// 0057bddd  0f28f5               movaps xmm6, xmm5
// 0057bde0  f30f59f5             mulss xmm6, xmm5
// 0057bde4  0f28ec               movaps xmm5, xmm4
// 0057bde7  f30f58fe             addss xmm7, xmm6
// 0057bdeb  f30f59ec             mulss xmm5, xmm4
// 0057bdef  f30f58fd             addss xmm7, xmm5
// 0057bdf3  0f2ff8               comiss xmm7, xmm0
// 0057bdf6  0f82a4000000         jb 0x57bea0
// 0057bdfc  f30f105e10           movss xmm3, dword ptr [esi + 0x10]
// 0057be01  f30f105614           movss xmm2, dword ptr [esi + 0x14]
// 0057be06  0f28cc               movaps xmm1, xmm4
// 0057be09  f30f59e1             mulss xmm4, xmm1
// 0057be0d  0f28cb               movaps xmm1, xmm3
// 0057be10  f30f59cb             mulss xmm1, xmm3
// 0057be14  f30f58e1             addss xmm4, xmm1
// 0057be18  0f28ca               movaps xmm1, xmm2
// 0057be1b  f30f59ca             mulss xmm1, xmm2
// 0057be1f  f30f58e1             addss xmm4, xmm1
// 0057be23  0f28cb               movaps xmm1, xmm3
// 0057be26  f30f59c8             mulss xmm1, xmm0
// 0057be2a  f30f114c2404         movss dword ptr [esp + 4], xmm1
// 0057be30  f30f11642424         movss dword ptr [esp + 0x24], xmm4
// 0057be36  d9442424             fld dword ptr [esp + 0x24]
// 0057be3a  51                   push ecx
// 0057be3b  0f28ca               movaps xmm1, xmm2
// 0057be3e  d91c24               fstp dword ptr [esp]
// 0057be41  f30f59c8             mulss xmm1, xmm0
// 0057be45  f30f114c240c         movss dword ptr [esp + 0xc], xmm1
// 0057be4b  f30f104e18           movss xmm1, dword ptr [esi + 0x18]
// 0057be50  8d442414             lea eax, [esp + 0x14]
// 0057be54  f30f59c8             mulss xmm1, xmm0
// 0057be58  50                   push eax
// 0057be59  8d4c240c             lea ecx, [esp + 0xc]
// 0057be5d  f30f114c2414         movss dword ptr [esp + 0x14], xmm1
// 0057be63  e8482cfeff           call 0x55eab0
// 0057be68  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057be6c  f30f1000             movss xmm0, dword ptr [eax]
// 0057be70  f30f584604           addss xmm0, dword ptr [esi + 4]
// 0057be75  f30f1101             movss dword ptr [ecx], xmm0
// 0057be79  f30f104004           movss xmm0, dword ptr [eax + 4]
// 0057be7e  f30f584608           addss xmm0, dword ptr [esi + 8]
// 0057be83  f30f114104           movss dword ptr [ecx + 4], xmm0
// 0057be88  f30f104008           movss xmm0, dword ptr [eax + 8]
// 0057be8d  f30f58460c           addss xmm0, dword ptr [esi + 0xc]
// 0057be92  f30f114108           movss dword ptr [ecx + 8], xmm0
// 0057be97  8bc1                 mov eax, ecx
// 0057be99  5e                   pop esi
// 0057be9a  83c418               add esp, 0x18
// 0057be9d  c20800               ret 8
// 0057bea0  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057bea4  0f28e2               movaps xmm4, xmm2
// 0057bea7  f30f5c6614           subss xmm4, dword ptr [esi + 0x14]
// 0057beac  0f28f3               movaps xmm6, xmm3
// 0057beaf  f30f59f3             mulss xmm6, xmm3
// 0057beb3  0f28eb               movaps xmm5, xmm3
// 0057beb6  f30f5c6e18           subss xmm5, dword ptr [esi + 0x18]
// 0057bebb  0f28da               movaps xmm3, xmm2
// 0057bebe  f30f59da             mulss xmm3, xmm2
// 0057bec2  0f28d1               movaps xmm2, xmm1
// 0057bec5  f30f59d1             mulss xmm2, xmm1
// 0057bec9  0f28c1               movaps xmm0, xmm1
// 0057becc  f30f5c4610           subss xmm0, dword ptr [esi + 0x10]
// 0057bed1  f30f58f3             addss xmm6, xmm3
// 0057bed5  f30f58f2             addss xmm6, xmm2
// 0057bed9  0f28cd               movaps xmm1, xmm5
// 0057bedc  f30f59cd             mulss xmm1, xmm5
// 0057bee0  0f28d4               movaps xmm2, xmm4
// 0057bee3  f30f59d4             mulss xmm2, xmm4
// 0057bee7  f30f58ca             addss xmm1, xmm2
// 0057beeb  0f28d0               movaps xmm2, xmm0
// 0057beee  f30f59d0             mulss xmm2, xmm0
// 0057bef2  f30f58ca             addss xmm1, xmm2
// 0057bef6  0f2fce               comiss xmm1, xmm6
// 0057bef9  7618                 jbe 0x57bf13
// 0057befb  d94604               fld dword ptr [esi + 4]
// 0057befe  d918                 fstp dword ptr [eax]
// 0057bf00  d94608               fld dword ptr [esi + 8]
// 0057bf03  d95804               fstp dword ptr [eax + 4]
// 0057bf06  d9460c               fld dword ptr [esi + 0xc]
// 0057bf09  5e                   pop esi
// 0057bf0a  d95808               fstp dword ptr [eax + 8]
// 0057bf0d  83c418               add esp, 0x18
// 0057bf10  c20800               ret 8
// 0057bf13  f30f104610           movss xmm0, dword ptr [esi + 0x10]
// 0057bf18  f30f584604           addss xmm0, dword ptr [esi + 4]
// 0057bf1d  f30f1100             movss dword ptr [eax], xmm0
// 0057bf21  f30f104614           movss xmm0, dword ptr [esi + 0x14]
// 0057bf26  f30f584608           addss xmm0, dword ptr [esi + 8]
// 0057bf2b  f30f114004           movss dword ptr [eax + 4], xmm0
// 0057bf30  f30f104618           movss xmm0, dword ptr [esi + 0x18]
// 0057bf35  f30f58460c           addss xmm0, dword ptr [esi + 0xc]
// 0057bf3a  f30f114008           movss dword ptr [eax + 8], xmm0
// 0057bf3f  5e                   pop esi
// 0057bf40  83c418               add esp, 0x18
// 0057bf43  c20800               ret 8
// library g3d-6.09/G3Dcpp\LineSegment.cpp (function ?closestPoint@LineSegment@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/LineSegment.cpp
