// roc 2009-12 0060bfd0  unit: seg_00600000  size: 289 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bfd0
//
// 0060bfd0  83ec0c               sub esp, 0xc
// 0060bfd3  56                   push esi
// 0060bfd4  8bf1                 mov esi, ecx
// 0060bfd6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060bfda  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 0060bfdf  f30f11442404         movss dword ptr [esp + 4], xmm0
// 0060bfe5  f30f104108           movss xmm0, dword ptr [ecx + 8]
// 0060bfea  8d442418             lea eax, [esp + 0x18]
// 0060bfee  50                   push eax
// 0060bfef  8d542408             lea edx, [esp + 8]
// 0060bff3  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 0060bff9  f30f10410c           movss xmm0, dword ptr [ecx + 0xc]
// 0060bffe  52                   push edx
// 0060bfff  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 0060c005  e876fbffff           call 0x60bb80
// 0060c00a  f30f104e18           movss xmm1, dword ptr [esi + 0x18]
// 0060c00f  f30f1054240c         movss xmm2, dword ptr [esp + 0xc]
// 0060c015  f30f104614           movss xmm0, dword ptr [esi + 0x14]
// 0060c01a  f30f105c2408         movss xmm3, dword ptr [esp + 8]
// 0060c020  f30f10642404         movss xmm4, dword ptr [esp + 4]
// 0060c026  f30f59c3             mulss xmm0, xmm3
// 0060c02a  f30f59ca             mulss xmm1, xmm2
// 0060c02e  f30f58c8             addss xmm1, xmm0
// 0060c032  f30f104610           movss xmm0, dword ptr [esi + 0x10]
// 0060c037  f30f59c4             mulss xmm0, xmm4
// 0060c03b  f30f58c8             addss xmm1, xmm0
// 0060c03f  0f2e0d886a9a00       ucomiss xmm1, dword ptr [0x9a6a88]
// 0060c046  9f                   lahf 
// 0060c047  f6c444               test ah, 0x44
// 0060c04a  7a22                 jp 0x60c06e
// 0060c04c  e81f8dfeff           call 0x5f4d70
// 0060c051  d900                 fld dword ptr [eax]
// 0060c053  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060c057  d919                 fstp dword ptr [ecx]
// 0060c059  5e                   pop esi
// 0060c05a  d94004               fld dword ptr [eax + 4]
// 0060c05d  d95904               fstp dword ptr [ecx + 4]
// 0060c060  d94008               fld dword ptr [eax + 8]
// 0060c063  8bc1                 mov eax, ecx
// 0060c065  d95908               fstp dword ptr [ecx + 8]
// 0060c068  83c40c               add esp, 0xc
// 0060c06b  c20800               ret 8
// 0060c06e  f30f10460c           movss xmm0, dword ptr [esi + 0xc]
// 0060c073  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060c077  f30f59c2             mulss xmm0, xmm2
// 0060c07b  f30f105608           movss xmm2, dword ptr [esi + 8]
// 0060c080  f30f59d3             mulss xmm2, xmm3
// 0060c084  f30f105e18           movss xmm3, dword ptr [esi + 0x18]
// 0060c089  f30f58c2             addss xmm0, xmm2
// 0060c08d  f30f105604           movss xmm2, dword ptr [esi + 4]
// 0060c092  f30f59d4             mulss xmm2, xmm4
// 0060c096  f30f58c2             addss xmm0, xmm2
// 0060c09a  f30f58442418         addss xmm0, dword ptr [esp + 0x18]
// 0060c0a0  f30f105614           movss xmm2, dword ptr [esi + 0x14]
// 0060c0a5  f30f5ec1             divss xmm0, xmm1
// 0060c0a9  0f570510169b00       xorps xmm0, xmmword ptr [0x9b1610]
// 0060c0b0  f30f104e10           movss xmm1, dword ptr [esi + 0x10]
// 0060c0b5  f30f59c8             mulss xmm1, xmm0
// 0060c0b9  f30f59d0             mulss xmm2, xmm0
// 0060c0bd  f30f59d8             mulss xmm3, xmm0
// 0060c0c1  f30f104604           movss xmm0, dword ptr [esi + 4]
// 0060c0c6  f30f58c1             addss xmm0, xmm1
// 0060c0ca  f30f1100             movss dword ptr [eax], xmm0
// 0060c0ce  f30f104608           movss xmm0, dword ptr [esi + 8]
// 0060c0d3  f30f58c2             addss xmm0, xmm2
// 0060c0d7  f30f114004           movss dword ptr [eax + 4], xmm0
// 0060c0dc  f30f10460c           movss xmm0, dword ptr [esi + 0xc]
// 0060c0e1  f30f58c3             addss xmm0, xmm3
// 0060c0e5  f30f114008           movss dword ptr [eax + 8], xmm0
// 0060c0ea  5e                   pop esi
// 0060c0eb  83c40c               add esp, 0xc
// 0060c0ee  c20800               ret 8
// library g3d-6.09/G3Dcpp\Line.cpp (function ?intersection@Line@G3D@@QBE?AVVector3@2@ABVPlane@2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/Line.cpp
