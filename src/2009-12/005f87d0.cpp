// roc 2009-12 005f87d0  unit: G3D::LineSegment  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f87d0
//
// 005f87d0  83ec1c               sub esp, 0x1c
// 005f87d3  56                   push esi
// 005f87d4  8b442428             mov eax, dword ptr [esp + 0x28]
// 005f87d8  f30f104814           movss xmm1, dword ptr [eax + 0x14]
// 005f87dd  f30f105010           movss xmm2, dword ptr [eax + 0x10]
// 005f87e2  f30f104018           movss xmm0, dword ptr [eax + 0x18]
// 005f87e7  0f28d9               movaps xmm3, xmm1
// 005f87ea  f30f595904           mulss xmm3, dword ptr [ecx + 4]
// 005f87ef  0f28e2               movaps xmm4, xmm2
// 005f87f2  f30f5921             mulss xmm4, dword ptr [ecx]
// 005f87f6  f30f58dc             addss xmm3, xmm4
// 005f87fa  f30f106108           movss xmm4, dword ptr [ecx + 8]
// 005f87ff  f30f59e0             mulss xmm4, xmm0
// 005f8803  f30f58dc             addss xmm3, xmm4
// 005f8807  f30f115c2408         movss dword ptr [esp + 8], xmm3
// 005f880d  0f28da               movaps xmm3, xmm2
// 005f8810  f30f59590c           mulss xmm3, dword ptr [ecx + 0xc]
// 005f8815  0f28e1               movaps xmm4, xmm1
// 005f8818  f30f596110           mulss xmm4, dword ptr [ecx + 0x10]
// 005f881d  f30f58dc             addss xmm3, xmm4
// 005f8821  0f28e0               movaps xmm4, xmm0
// 005f8824  f30f596114           mulss xmm4, dword ptr [ecx + 0x14]
// 005f8829  f30f58dc             addss xmm3, xmm4
// 005f882d  f30f115c240c         movss dword ptr [esp + 0xc], xmm3
// 005f8833  f30f105918           movss xmm3, dword ptr [ecx + 0x18]
// 005f8838  f30f59da             mulss xmm3, xmm2
// 005f883c  f30f10511c           movss xmm2, dword ptr [ecx + 0x1c]
// 005f8841  f30f59d1             mulss xmm2, xmm1
// 005f8845  f30f104920           movss xmm1, dword ptr [ecx + 0x20]
// 005f884a  f30f58da             addss xmm3, xmm2
// 005f884e  f30f105004           movss xmm2, dword ptr [eax + 4]
// 005f8853  f30f59c8             mulss xmm1, xmm0
// 005f8857  f30f10400c           movss xmm0, dword ptr [eax + 0xc]
// 005f885c  f30f58d9             addss xmm3, xmm1
// 005f8860  f30f104808           movss xmm1, dword ptr [eax + 8]
// 005f8865  f30f115c2410         movss dword ptr [esp + 0x10], xmm3
// 005f886b  0f28d9               movaps xmm3, xmm1
// 005f886e  f30f595904           mulss xmm3, dword ptr [ecx + 4]
// 005f8873  0f28e2               movaps xmm4, xmm2
// 005f8876  f30f5921             mulss xmm4, dword ptr [ecx]
// 005f887a  f30f58dc             addss xmm3, xmm4
// 005f887e  f30f106108           movss xmm4, dword ptr [ecx + 8]
// 005f8883  f30f59e0             mulss xmm4, xmm0
// 005f8887  f30f58dc             addss xmm3, xmm4
// 005f888b  f30f585924           addss xmm3, dword ptr [ecx + 0x24]
// 005f8890  f30f115c2414         movss dword ptr [esp + 0x14], xmm3
// 005f8896  0f28da               movaps xmm3, xmm2
// 005f8899  f30f59590c           mulss xmm3, dword ptr [ecx + 0xc]
// 005f889e  0f28e1               movaps xmm4, xmm1
// 005f88a1  f30f596110           mulss xmm4, dword ptr [ecx + 0x10]
// 005f88a6  f30f58dc             addss xmm3, xmm4
// 005f88aa  0f28e0               movaps xmm4, xmm0
// 005f88ad  f30f596114           mulss xmm4, dword ptr [ecx + 0x14]
// 005f88b2  f30f58dc             addss xmm3, xmm4
// 005f88b6  f30f585928           addss xmm3, dword ptr [ecx + 0x28]
// 005f88bb  f30f115c2418         movss dword ptr [esp + 0x18], xmm3
// 005f88c1  f30f105918           movss xmm3, dword ptr [ecx + 0x18]
// 005f88c6  f30f59da             mulss xmm3, xmm2
// 005f88ca  f30f10511c           movss xmm2, dword ptr [ecx + 0x1c]
// 005f88cf  f30f59d1             mulss xmm2, xmm1
// 005f88d3  f30f104920           movss xmm1, dword ptr [ecx + 0x20]
// 005f88d8  8b742424             mov esi, dword ptr [esp + 0x24]
// 005f88dc  f30f58da             addss xmm3, xmm2
// 005f88e0  f30f59c8             mulss xmm1, xmm0
// 005f88e4  f30f58d9             addss xmm3, xmm1
// 005f88e8  f30f58592c           addss xmm3, dword ptr [ecx + 0x2c]
// 005f88ed  8d442408             lea eax, [esp + 8]
// 005f88f1  50                   push eax
// 005f88f2  8d4c2418             lea ecx, [esp + 0x18]
// 005f88f6  51                   push ecx
// 005f88f7  56                   push esi
// 005f88f8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f8900  f30f115c2428         movss dword ptr [esp + 0x28], xmm3
// 005f8906  e825eaffff           call 0x5f7330
// 005f890b  83c40c               add esp, 0xc
// 005f890e  8bc6                 mov eax, esi
// 005f8910  5e                   pop esi
// 005f8911  83c41c               add esp, 0x1c
// 005f8914  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toWorldSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
