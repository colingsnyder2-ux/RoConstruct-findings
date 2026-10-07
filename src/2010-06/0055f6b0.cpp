// roc 2010-06 0055f6b0  unit: G3D::Line  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055f6b0
//
// 0055f6b0  83ec1c               sub esp, 0x1c
// 0055f6b3  56                   push esi
// 0055f6b4  8b442428             mov eax, dword ptr [esp + 0x28]
// 0055f6b8  f30f104814           movss xmm1, dword ptr [eax + 0x14]
// 0055f6bd  f30f105010           movss xmm2, dword ptr [eax + 0x10]
// 0055f6c2  f30f104018           movss xmm0, dword ptr [eax + 0x18]
// 0055f6c7  0f28d9               movaps xmm3, xmm1
// 0055f6ca  f30f595904           mulss xmm3, dword ptr [ecx + 4]
// 0055f6cf  0f28e2               movaps xmm4, xmm2
// 0055f6d2  f30f5921             mulss xmm4, dword ptr [ecx]
// 0055f6d6  f30f58dc             addss xmm3, xmm4
// 0055f6da  f30f106108           movss xmm4, dword ptr [ecx + 8]
// 0055f6df  f30f59e0             mulss xmm4, xmm0
// 0055f6e3  f30f58dc             addss xmm3, xmm4
// 0055f6e7  f30f115c2408         movss dword ptr [esp + 8], xmm3
// 0055f6ed  0f28da               movaps xmm3, xmm2
// 0055f6f0  f30f59590c           mulss xmm3, dword ptr [ecx + 0xc]
// 0055f6f5  0f28e1               movaps xmm4, xmm1
// 0055f6f8  f30f596110           mulss xmm4, dword ptr [ecx + 0x10]
// 0055f6fd  f30f58dc             addss xmm3, xmm4
// 0055f701  0f28e0               movaps xmm4, xmm0
// 0055f704  f30f596114           mulss xmm4, dword ptr [ecx + 0x14]
// 0055f709  f30f58dc             addss xmm3, xmm4
// 0055f70d  f30f115c240c         movss dword ptr [esp + 0xc], xmm3
// 0055f713  f30f105918           movss xmm3, dword ptr [ecx + 0x18]
// 0055f718  f30f59da             mulss xmm3, xmm2
// 0055f71c  f30f10511c           movss xmm2, dword ptr [ecx + 0x1c]
// 0055f721  f30f59d1             mulss xmm2, xmm1
// 0055f725  f30f104920           movss xmm1, dword ptr [ecx + 0x20]
// 0055f72a  f30f58da             addss xmm3, xmm2
// 0055f72e  f30f105004           movss xmm2, dword ptr [eax + 4]
// 0055f733  f30f59c8             mulss xmm1, xmm0
// 0055f737  f30f10400c           movss xmm0, dword ptr [eax + 0xc]
// 0055f73c  f30f58d9             addss xmm3, xmm1
// 0055f740  f30f104808           movss xmm1, dword ptr [eax + 8]
// 0055f745  f30f115c2410         movss dword ptr [esp + 0x10], xmm3
// 0055f74b  0f28d9               movaps xmm3, xmm1
// 0055f74e  f30f595904           mulss xmm3, dword ptr [ecx + 4]
// 0055f753  0f28e2               movaps xmm4, xmm2
// 0055f756  f30f5921             mulss xmm4, dword ptr [ecx]
// 0055f75a  f30f58dc             addss xmm3, xmm4
// 0055f75e  f30f106108           movss xmm4, dword ptr [ecx + 8]
// 0055f763  f30f59e0             mulss xmm4, xmm0
// 0055f767  f30f58dc             addss xmm3, xmm4
// 0055f76b  f30f585924           addss xmm3, dword ptr [ecx + 0x24]
// 0055f770  f30f115c2414         movss dword ptr [esp + 0x14], xmm3
// 0055f776  0f28da               movaps xmm3, xmm2
// 0055f779  f30f59590c           mulss xmm3, dword ptr [ecx + 0xc]
// 0055f77e  0f28e1               movaps xmm4, xmm1
// 0055f781  f30f596110           mulss xmm4, dword ptr [ecx + 0x10]
// 0055f786  f30f58dc             addss xmm3, xmm4
// 0055f78a  0f28e0               movaps xmm4, xmm0
// 0055f78d  f30f596114           mulss xmm4, dword ptr [ecx + 0x14]
// 0055f792  f30f58dc             addss xmm3, xmm4
// 0055f796  f30f585928           addss xmm3, dword ptr [ecx + 0x28]
// 0055f79b  f30f115c2418         movss dword ptr [esp + 0x18], xmm3
// 0055f7a1  f30f105918           movss xmm3, dword ptr [ecx + 0x18]
// 0055f7a6  f30f59da             mulss xmm3, xmm2
// 0055f7aa  f30f10511c           movss xmm2, dword ptr [ecx + 0x1c]
// 0055f7af  f30f59d1             mulss xmm2, xmm1
// 0055f7b3  f30f104920           movss xmm1, dword ptr [ecx + 0x20]
// 0055f7b8  8b742424             mov esi, dword ptr [esp + 0x24]
// 0055f7bc  f30f58da             addss xmm3, xmm2
// 0055f7c0  f30f59c8             mulss xmm1, xmm0
// 0055f7c4  f30f58d9             addss xmm3, xmm1
// 0055f7c8  f30f58592c           addss xmm3, dword ptr [ecx + 0x2c]
// 0055f7cd  8d442408             lea eax, [esp + 8]
// 0055f7d1  50                   push eax
// 0055f7d2  8d4c2418             lea ecx, [esp + 0x18]
// 0055f7d6  51                   push ecx
// 0055f7d7  56                   push esi
// 0055f7d8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055f7e0  f30f115c2428         movss dword ptr [esp + 0x28], xmm3
// 0055f7e6  e885f6ffff           call 0x55ee70
// 0055f7eb  83c40c               add esp, 0xc
// 0055f7ee  8bc6                 mov eax, esi
// 0055f7f0  5e                   pop esi
// 0055f7f1  83c41c               add esp, 0x1c
// 0055f7f4  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toWorldSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
