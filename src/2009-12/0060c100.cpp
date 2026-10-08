// roc 2009-12 0060c100  unit: seg_00600000  size: 470 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060c100
//
// 0060c100  8b442408             mov eax, dword ptr [esp + 8]
// 0060c104  f30f105004           movss xmm2, dword ptr [eax + 4]
// 0060c109  f30f105808           movss xmm3, dword ptr [eax + 8]
// 0060c10e  f30f1008             movss xmm1, dword ptr [eax]
// 0060c112  83ec18               sub esp, 0x18
// 0060c115  56                   push esi
// 0060c116  8bf1                 mov esi, ecx
// 0060c118  f30f5c5608           subss xmm2, dword ptr [esi + 8]
// 0060c11d  f30f5c5e0c           subss xmm3, dword ptr [esi + 0xc]
// 0060c122  f30f104618           movss xmm0, dword ptr [esi + 0x18]
// 0060c127  f30f106614           movss xmm4, dword ptr [esi + 0x14]
// 0060c12c  f30f5c4e04           subss xmm1, dword ptr [esi + 4]
// 0060c131  f30f59e2             mulss xmm4, xmm2
// 0060c135  f30f59c3             mulss xmm0, xmm3
// 0060c139  f30f58c4             addss xmm0, xmm4
// 0060c13d  f30f106610           movss xmm4, dword ptr [esi + 0x10]
// 0060c142  f30f59e1             mulss xmm4, xmm1
// 0060c146  f30f58c4             addss xmm0, xmm4
// 0060c14a  0f2f05886a9a00       comiss xmm0, dword ptr [0x9a6a88]
// 0060c151  0f82d9000000         jb 0x60c230
// 0060c157  f30f107610           movss xmm6, dword ptr [esi + 0x10]
// 0060c15c  f30f106e14           movss xmm5, dword ptr [esi + 0x14]
// 0060c161  f30f106618           movss xmm4, dword ptr [esi + 0x18]
// 0060c166  0f28fe               movaps xmm7, xmm6
// 0060c169  f30f59fe             mulss xmm7, xmm6
// 0060c16d  0f28f5               movaps xmm6, xmm5
// 0060c170  f30f59f5             mulss xmm6, xmm5
// 0060c174  0f28ec               movaps xmm5, xmm4
// 0060c177  f30f58fe             addss xmm7, xmm6
// 0060c17b  f30f59ec             mulss xmm5, xmm4
// 0060c17f  f30f58fd             addss xmm7, xmm5
// 0060c183  0f2ff8               comiss xmm7, xmm0
// 0060c186  0f82a4000000         jb 0x60c230
// 0060c18c  f30f105e10           movss xmm3, dword ptr [esi + 0x10]
// 0060c191  f30f105614           movss xmm2, dword ptr [esi + 0x14]
// 0060c196  0f28cc               movaps xmm1, xmm4
// 0060c199  f30f59e1             mulss xmm4, xmm1
// 0060c19d  0f28cb               movaps xmm1, xmm3
// 0060c1a0  f30f59cb             mulss xmm1, xmm3
// 0060c1a4  f30f58e1             addss xmm4, xmm1
// 0060c1a8  0f28ca               movaps xmm1, xmm2
// 0060c1ab  f30f59ca             mulss xmm1, xmm2
// 0060c1af  f30f58e1             addss xmm4, xmm1
// 0060c1b3  0f28cb               movaps xmm1, xmm3
// 0060c1b6  f30f59c8             mulss xmm1, xmm0
// 0060c1ba  f30f114c2404         movss dword ptr [esp + 4], xmm1
// 0060c1c0  f30f11642424         movss dword ptr [esp + 0x24], xmm4
// 0060c1c6  d9442424             fld dword ptr [esp + 0x24]
// 0060c1ca  51                   push ecx
// 0060c1cb  0f28ca               movaps xmm1, xmm2
// 0060c1ce  d91c24               fstp dword ptr [esp]
// 0060c1d1  f30f59c8             mulss xmm1, xmm0
// 0060c1d5  f30f114c240c         movss dword ptr [esp + 0xc], xmm1
// 0060c1db  f30f104e18           movss xmm1, dword ptr [esi + 0x18]
// 0060c1e0  8d442414             lea eax, [esp + 0x14]
// 0060c1e4  f30f59c8             mulss xmm1, xmm0
// 0060c1e8  50                   push eax
// 0060c1e9  8d4c240c             lea ecx, [esp + 0xc]
// 0060c1ed  f30f114c2414         movss dword ptr [esp + 0x14], xmm1
// 0060c1f3  e8c88cfeff           call 0x5f4ec0
// 0060c1f8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060c1fc  f30f1000             movss xmm0, dword ptr [eax]
// 0060c200  f30f584604           addss xmm0, dword ptr [esi + 4]
// 0060c205  f30f1101             movss dword ptr [ecx], xmm0
// 0060c209  f30f104004           movss xmm0, dword ptr [eax + 4]
// 0060c20e  f30f584608           addss xmm0, dword ptr [esi + 8]
// 0060c213  f30f114104           movss dword ptr [ecx + 4], xmm0
// 0060c218  f30f104008           movss xmm0, dword ptr [eax + 8]
// 0060c21d  f30f58460c           addss xmm0, dword ptr [esi + 0xc]
// 0060c222  f30f114108           movss dword ptr [ecx + 8], xmm0
// 0060c227  8bc1                 mov eax, ecx
// 0060c229  5e                   pop esi
// 0060c22a  83c418               add esp, 0x18
// 0060c22d  c20800               ret 8
// 0060c230  8b442420             mov eax, dword ptr [esp + 0x20]
// 0060c234  0f28e2               movaps xmm4, xmm2
// 0060c237  f30f5c6614           subss xmm4, dword ptr [esi + 0x14]
// 0060c23c  0f28f3               movaps xmm6, xmm3
// 0060c23f  f30f59f3             mulss xmm6, xmm3
// 0060c243  0f28eb               movaps xmm5, xmm3
// 0060c246  f30f5c6e18           subss xmm5, dword ptr [esi + 0x18]
// 0060c24b  0f28da               movaps xmm3, xmm2
// 0060c24e  f30f59da             mulss xmm3, xmm2
// 0060c252  0f28d1               movaps xmm2, xmm1
// 0060c255  f30f59d1             mulss xmm2, xmm1
// 0060c259  0f28c1               movaps xmm0, xmm1
// 0060c25c  f30f5c4610           subss xmm0, dword ptr [esi + 0x10]
// 0060c261  f30f58f3             addss xmm6, xmm3
// 0060c265  f30f58f2             addss xmm6, xmm2
// 0060c269  0f28cd               movaps xmm1, xmm5
// 0060c26c  f30f59cd             mulss xmm1, xmm5
// 0060c270  0f28d4               movaps xmm2, xmm4
// 0060c273  f30f59d4             mulss xmm2, xmm4
// 0060c277  f30f58ca             addss xmm1, xmm2
// 0060c27b  0f28d0               movaps xmm2, xmm0
// 0060c27e  f30f59d0             mulss xmm2, xmm0
// 0060c282  f30f58ca             addss xmm1, xmm2
// 0060c286  0f2fce               comiss xmm1, xmm6
// 0060c289  7618                 jbe 0x60c2a3
// 0060c28b  d94604               fld dword ptr [esi + 4]
// 0060c28e  d918                 fstp dword ptr [eax]
// 0060c290  d94608               fld dword ptr [esi + 8]
// 0060c293  d95804               fstp dword ptr [eax + 4]
// 0060c296  d9460c               fld dword ptr [esi + 0xc]
// 0060c299  5e                   pop esi
// 0060c29a  d95808               fstp dword ptr [eax + 8]
// 0060c29d  83c418               add esp, 0x18
// 0060c2a0  c20800               ret 8
// 0060c2a3  f30f104610           movss xmm0, dword ptr [esi + 0x10]
// 0060c2a8  f30f584604           addss xmm0, dword ptr [esi + 4]
// 0060c2ad  f30f1100             movss dword ptr [eax], xmm0
// 0060c2b1  f30f104614           movss xmm0, dword ptr [esi + 0x14]
// 0060c2b6  f30f584608           addss xmm0, dword ptr [esi + 8]
// 0060c2bb  f30f114004           movss dword ptr [eax + 4], xmm0
// 0060c2c0  f30f104618           movss xmm0, dword ptr [esi + 0x18]
// 0060c2c5  f30f58460c           addss xmm0, dword ptr [esi + 0xc]
// 0060c2ca  f30f114008           movss dword ptr [eax + 8], xmm0
// 0060c2cf  5e                   pop esi
// 0060c2d0  83c418               add esp, 0x18
// 0060c2d3  c20800               ret 8
// library g3d-6.09/G3Dcpp\LineSegment.cpp (function ?closestPoint@LineSegment@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/LineSegment.cpp
