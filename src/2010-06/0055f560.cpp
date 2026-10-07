// roc 2010-06 0055f560  unit: G3D::Line  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055f560
//
// 0055f560  83ec1c               sub esp, 0x1c
// 0055f563  56                   push esi
// 0055f564  8b442428             mov eax, dword ptr [esp + 0x28]
// 0055f568  f30f104814           movss xmm1, dword ptr [eax + 0x14]
// 0055f56d  f30f105010           movss xmm2, dword ptr [eax + 0x10]
// 0055f572  f30f104018           movss xmm0, dword ptr [eax + 0x18]
// 0055f577  0f28d9               movaps xmm3, xmm1
// 0055f57a  f30f595904           mulss xmm3, dword ptr [ecx + 4]
// 0055f57f  0f28e2               movaps xmm4, xmm2
// 0055f582  f30f5921             mulss xmm4, dword ptr [ecx]
// 0055f586  f30f58dc             addss xmm3, xmm4
// 0055f58a  f30f106108           movss xmm4, dword ptr [ecx + 8]
// 0055f58f  f30f59e0             mulss xmm4, xmm0
// 0055f593  f30f58dc             addss xmm3, xmm4
// 0055f597  f30f115c2408         movss dword ptr [esp + 8], xmm3
// 0055f59d  0f28da               movaps xmm3, xmm2
// 0055f5a0  f30f59590c           mulss xmm3, dword ptr [ecx + 0xc]
// 0055f5a5  0f28e1               movaps xmm4, xmm1
// 0055f5a8  f30f596110           mulss xmm4, dword ptr [ecx + 0x10]
// 0055f5ad  f30f58dc             addss xmm3, xmm4
// 0055f5b1  0f28e0               movaps xmm4, xmm0
// 0055f5b4  f30f596114           mulss xmm4, dword ptr [ecx + 0x14]
// 0055f5b9  f30f58dc             addss xmm3, xmm4
// 0055f5bd  f30f115c240c         movss dword ptr [esp + 0xc], xmm3
// 0055f5c3  f30f105918           movss xmm3, dword ptr [ecx + 0x18]
// 0055f5c8  f30f59da             mulss xmm3, xmm2
// 0055f5cc  f30f10511c           movss xmm2, dword ptr [ecx + 0x1c]
// 0055f5d1  f30f59d1             mulss xmm2, xmm1
// 0055f5d5  f30f104920           movss xmm1, dword ptr [ecx + 0x20]
// 0055f5da  f30f58da             addss xmm3, xmm2
// 0055f5de  f30f105004           movss xmm2, dword ptr [eax + 4]
// 0055f5e3  f30f59c8             mulss xmm1, xmm0
// 0055f5e7  f30f10400c           movss xmm0, dword ptr [eax + 0xc]
// 0055f5ec  f30f58d9             addss xmm3, xmm1
// 0055f5f0  f30f104808           movss xmm1, dword ptr [eax + 8]
// 0055f5f5  f30f115c2410         movss dword ptr [esp + 0x10], xmm3
// 0055f5fb  0f28d9               movaps xmm3, xmm1
// 0055f5fe  f30f595904           mulss xmm3, dword ptr [ecx + 4]
// 0055f603  0f28e2               movaps xmm4, xmm2
// 0055f606  f30f5921             mulss xmm4, dword ptr [ecx]
// 0055f60a  f30f58dc             addss xmm3, xmm4
// 0055f60e  f30f106108           movss xmm4, dword ptr [ecx + 8]
// 0055f613  f30f59e0             mulss xmm4, xmm0
// 0055f617  f30f58dc             addss xmm3, xmm4
// 0055f61b  f30f585924           addss xmm3, dword ptr [ecx + 0x24]
// 0055f620  f30f115c2414         movss dword ptr [esp + 0x14], xmm3
// 0055f626  0f28da               movaps xmm3, xmm2
// 0055f629  f30f59590c           mulss xmm3, dword ptr [ecx + 0xc]
// 0055f62e  0f28e1               movaps xmm4, xmm1
// 0055f631  f30f596110           mulss xmm4, dword ptr [ecx + 0x10]
// 0055f636  f30f58dc             addss xmm3, xmm4
// 0055f63a  0f28e0               movaps xmm4, xmm0
// 0055f63d  f30f596114           mulss xmm4, dword ptr [ecx + 0x14]
// 0055f642  f30f58dc             addss xmm3, xmm4
// 0055f646  f30f585928           addss xmm3, dword ptr [ecx + 0x28]
// 0055f64b  f30f115c2418         movss dword ptr [esp + 0x18], xmm3
// 0055f651  f30f105918           movss xmm3, dword ptr [ecx + 0x18]
// 0055f656  f30f59da             mulss xmm3, xmm2
// 0055f65a  f30f10511c           movss xmm2, dword ptr [ecx + 0x1c]
// 0055f65f  f30f59d1             mulss xmm2, xmm1
// 0055f663  f30f104920           movss xmm1, dword ptr [ecx + 0x20]
// 0055f668  8b742424             mov esi, dword ptr [esp + 0x24]
// 0055f66c  f30f58da             addss xmm3, xmm2
// 0055f670  f30f59c8             mulss xmm1, xmm0
// 0055f674  f30f58d9             addss xmm3, xmm1
// 0055f678  f30f58592c           addss xmm3, dword ptr [ecx + 0x2c]
// 0055f67d  8d442408             lea eax, [esp + 8]
// 0055f681  50                   push eax
// 0055f682  8d4c2418             lea ecx, [esp + 0x18]
// 0055f686  51                   push ecx
// 0055f687  56                   push esi
// 0055f688  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055f690  f30f115c2428         movss dword ptr [esp + 0x28], xmm3
// 0055f696  e825f7ffff           call 0x55edc0
// 0055f69b  83c40c               add esp, 0xc
// 0055f69e  8bc6                 mov eax, esi
// 0055f6a0  5e                   pop esi
// 0055f6a1  83c41c               add esp, 0x1c
// 0055f6a4  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toWorldSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
