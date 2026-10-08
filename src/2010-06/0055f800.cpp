// from server: 100% by auto
// roc 2010-06 0055f800  unit: G3D::Line  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055f800
//
// 0055f800  83ec40               sub esp, 0x40
// 0055f803  56                   push esi
// 0055f804  57                   push edi
// 0055f805  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0055f809  8d442424             lea eax, [esp + 0x24]
// 0055f80d  50                   push eax
// 0055f80e  8bf1                 mov esi, ecx
// 0055f810  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0055f818  e8036dffff           call 0x556520
// 0055f81d  f30f104718           movss xmm0, dword ptr [edi + 0x18]
// 0055f822  f30f104f14           movss xmm1, dword ptr [edi + 0x14]
// 0055f827  f30f105710           movss xmm2, dword ptr [edi + 0x10]
// 0055f82c  f30f105804           movss xmm3, dword ptr [eax + 4]
// 0055f831  f30f106008           movss xmm4, dword ptr [eax + 8]
// 0055f836  f30f59d9             mulss xmm3, xmm1
// 0055f83a  f30f59e0             mulss xmm4, xmm0
// 0055f83e  f30f58dc             addss xmm3, xmm4
// 0055f842  f30f1020             movss xmm4, dword ptr [eax]
// 0055f846  f30f59e2             mulss xmm4, xmm2
// 0055f84a  f30f58dc             addss xmm3, xmm4
// 0055f84e  f30f106010           movss xmm4, dword ptr [eax + 0x10]
// 0055f853  f30f115c240c         movss dword ptr [esp + 0xc], xmm3
// 0055f859  f30f10580c           movss xmm3, dword ptr [eax + 0xc]
// 0055f85e  f30f59da             mulss xmm3, xmm2
// 0055f862  f30f59e1             mulss xmm4, xmm1
// 0055f866  f30f58dc             addss xmm3, xmm4
// 0055f86a  f30f106014           movss xmm4, dword ptr [eax + 0x14]
// 0055f86f  f30f59e0             mulss xmm4, xmm0
// 0055f873  f30f58dc             addss xmm3, xmm4
// 0055f877  f30f10660c           movss xmm4, dword ptr [esi + 0xc]
// 0055f87c  f30f115c2410         movss dword ptr [esp + 0x10], xmm3
// 0055f882  f30f105818           movss xmm3, dword ptr [eax + 0x18]
// 0055f887  f30f59da             mulss xmm3, xmm2
// 0055f88b  f30f10501c           movss xmm2, dword ptr [eax + 0x1c]
// 0055f890  f30f59d1             mulss xmm2, xmm1
// 0055f894  f30f104820           movss xmm1, dword ptr [eax + 0x20]
// 0055f899  f30f58da             addss xmm3, xmm2
// 0055f89d  f30f10570c           movss xmm2, dword ptr [edi + 0xc]
// 0055f8a2  f30f5c562c           subss xmm2, dword ptr [esi + 0x2c]
// 0055f8a7  f30f59c8             mulss xmm1, xmm0
// 0055f8ab  f30f104704           movss xmm0, dword ptr [edi + 4]
// 0055f8b0  f30f5c4624           subss xmm0, dword ptr [esi + 0x24]
// 0055f8b5  f30f58d9             addss xmm3, xmm1
// 0055f8b9  f30f104f08           movss xmm1, dword ptr [edi + 8]
// 0055f8be  f30f5c4e28           subss xmm1, dword ptr [esi + 0x28]
// 0055f8c3  f30f115c2414         movss dword ptr [esp + 0x14], xmm3
// 0055f8c9  f30f105e18           movss xmm3, dword ptr [esi + 0x18]
// 0055f8ce  f30f59da             mulss xmm3, xmm2
// 0055f8d2  f30f59e1             mulss xmm4, xmm1
// 0055f8d6  f30f58dc             addss xmm3, xmm4
// 0055f8da  f30f1026             movss xmm4, dword ptr [esi]
// 0055f8de  f30f59e0             mulss xmm4, xmm0
// 0055f8e2  f30f58dc             addss xmm3, xmm4
// 0055f8e6  f30f106610           movss xmm4, dword ptr [esi + 0x10]
// 0055f8eb  f30f115c2418         movss dword ptr [esp + 0x18], xmm3
// 0055f8f1  f30f105e1c           movss xmm3, dword ptr [esi + 0x1c]
// 0055f8f6  f30f59da             mulss xmm3, xmm2
// 0055f8fa  f30f59e1             mulss xmm4, xmm1
// 0055f8fe  f30f58dc             addss xmm3, xmm4
// 0055f902  f30f106604           movss xmm4, dword ptr [esi + 4]
// 0055f907  f30f59e0             mulss xmm4, xmm0
// 0055f90b  f30f58dc             addss xmm3, xmm4
// 0055f90f  f30f115c241c         movss dword ptr [esp + 0x1c], xmm3
// 0055f915  f30f105e20           movss xmm3, dword ptr [esi + 0x20]
// 0055f91a  f30f59da             mulss xmm3, xmm2
// 0055f91e  f30f105614           movss xmm2, dword ptr [esi + 0x14]
// 0055f923  f30f59d1             mulss xmm2, xmm1
// 0055f927  f30f104e08           movss xmm1, dword ptr [esi + 8]
// 0055f92c  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0055f930  8d4c240c             lea ecx, [esp + 0xc]
// 0055f934  51                   push ecx
// 0055f935  8d54241c             lea edx, [esp + 0x1c]
// 0055f939  52                   push edx
// 0055f93a  f30f58da             addss xmm3, xmm2
// 0055f93e  f30f59c8             mulss xmm1, xmm0
// 0055f942  f30f58d9             addss xmm3, xmm1
// 0055f946  56                   push esi
// 0055f947  f30f115c242c         movss dword ptr [esp + 0x2c], xmm3
// 0055f94d  e81ef5ffff           call 0x55ee70
// 0055f952  83c40c               add esp, 0xc
// 0055f955  8bc6                 mov eax, esi
// 0055f957  5f                   pop edi
// 0055f958  5e                   pop esi
// 0055f959  83c440               add esp, 0x40
// 0055f95c  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
