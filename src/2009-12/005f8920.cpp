// roc 2009-12 005f8920  unit: G3D::LineSegment  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f8920
//
// 005f8920  83ec40               sub esp, 0x40
// 005f8923  56                   push esi
// 005f8924  57                   push edi
// 005f8925  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 005f8929  8d442424             lea eax, [esp + 0x24]
// 005f892d  50                   push eax
// 005f892e  8bf1                 mov esi, ecx
// 005f8930  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005f8938  e873b4ffff           call 0x5f3db0
// 005f893d  f30f104718           movss xmm0, dword ptr [edi + 0x18]
// 005f8942  f30f104f14           movss xmm1, dword ptr [edi + 0x14]
// 005f8947  f30f105710           movss xmm2, dword ptr [edi + 0x10]
// 005f894c  f30f105804           movss xmm3, dword ptr [eax + 4]
// 005f8951  f30f106008           movss xmm4, dword ptr [eax + 8]
// 005f8956  f30f59d9             mulss xmm3, xmm1
// 005f895a  f30f59e0             mulss xmm4, xmm0
// 005f895e  f30f58dc             addss xmm3, xmm4
// 005f8962  f30f1020             movss xmm4, dword ptr [eax]
// 005f8966  f30f59e2             mulss xmm4, xmm2
// 005f896a  f30f58dc             addss xmm3, xmm4
// 005f896e  f30f106010           movss xmm4, dword ptr [eax + 0x10]
// 005f8973  f30f115c240c         movss dword ptr [esp + 0xc], xmm3
// 005f8979  f30f10580c           movss xmm3, dword ptr [eax + 0xc]
// 005f897e  f30f59da             mulss xmm3, xmm2
// 005f8982  f30f59e1             mulss xmm4, xmm1
// 005f8986  f30f58dc             addss xmm3, xmm4
// 005f898a  f30f106014           movss xmm4, dword ptr [eax + 0x14]
// 005f898f  f30f59e0             mulss xmm4, xmm0
// 005f8993  f30f58dc             addss xmm3, xmm4
// 005f8997  f30f10660c           movss xmm4, dword ptr [esi + 0xc]
// 005f899c  f30f115c2410         movss dword ptr [esp + 0x10], xmm3
// 005f89a2  f30f105818           movss xmm3, dword ptr [eax + 0x18]
// 005f89a7  f30f59da             mulss xmm3, xmm2
// 005f89ab  f30f10501c           movss xmm2, dword ptr [eax + 0x1c]
// 005f89b0  f30f59d1             mulss xmm2, xmm1
// 005f89b4  f30f104820           movss xmm1, dword ptr [eax + 0x20]
// 005f89b9  f30f58da             addss xmm3, xmm2
// 005f89bd  f30f10570c           movss xmm2, dword ptr [edi + 0xc]
// 005f89c2  f30f5c562c           subss xmm2, dword ptr [esi + 0x2c]
// 005f89c7  f30f59c8             mulss xmm1, xmm0
// 005f89cb  f30f104704           movss xmm0, dword ptr [edi + 4]
// 005f89d0  f30f5c4624           subss xmm0, dword ptr [esi + 0x24]
// 005f89d5  f30f58d9             addss xmm3, xmm1
// 005f89d9  f30f104f08           movss xmm1, dword ptr [edi + 8]
// 005f89de  f30f5c4e28           subss xmm1, dword ptr [esi + 0x28]
// 005f89e3  f30f115c2414         movss dword ptr [esp + 0x14], xmm3
// 005f89e9  f30f105e18           movss xmm3, dword ptr [esi + 0x18]
// 005f89ee  f30f59da             mulss xmm3, xmm2
// 005f89f2  f30f59e1             mulss xmm4, xmm1
// 005f89f6  f30f58dc             addss xmm3, xmm4
// 005f89fa  f30f1026             movss xmm4, dword ptr [esi]
// 005f89fe  f30f59e0             mulss xmm4, xmm0
// 005f8a02  f30f58dc             addss xmm3, xmm4
// 005f8a06  f30f106610           movss xmm4, dword ptr [esi + 0x10]
// 005f8a0b  f30f115c2418         movss dword ptr [esp + 0x18], xmm3
// 005f8a11  f30f105e1c           movss xmm3, dword ptr [esi + 0x1c]
// 005f8a16  f30f59da             mulss xmm3, xmm2
// 005f8a1a  f30f59e1             mulss xmm4, xmm1
// 005f8a1e  f30f58dc             addss xmm3, xmm4
// 005f8a22  f30f106604           movss xmm4, dword ptr [esi + 4]
// 005f8a27  f30f59e0             mulss xmm4, xmm0
// 005f8a2b  f30f58dc             addss xmm3, xmm4
// 005f8a2f  f30f115c241c         movss dword ptr [esp + 0x1c], xmm3
// 005f8a35  f30f105e20           movss xmm3, dword ptr [esi + 0x20]
// 005f8a3a  f30f59da             mulss xmm3, xmm2
// 005f8a3e  f30f105614           movss xmm2, dword ptr [esi + 0x14]
// 005f8a43  f30f59d1             mulss xmm2, xmm1
// 005f8a47  f30f104e08           movss xmm1, dword ptr [esi + 8]
// 005f8a4c  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 005f8a50  8d4c240c             lea ecx, [esp + 0xc]
// 005f8a54  51                   push ecx
// 005f8a55  8d54241c             lea edx, [esp + 0x1c]
// 005f8a59  52                   push edx
// 005f8a5a  f30f58da             addss xmm3, xmm2
// 005f8a5e  f30f59c8             mulss xmm1, xmm0
// 005f8a62  f30f58d9             addss xmm3, xmm1
// 005f8a66  56                   push esi
// 005f8a67  f30f115c242c         movss dword ptr [esp + 0x2c], xmm3
// 005f8a6d  e8bee8ffff           call 0x5f7330
// 005f8a72  83c40c               add esp, 0xc
// 005f8a75  8bc6                 mov eax, esi
// 005f8a77  5f                   pop edi
// 005f8a78  5e                   pop esi
// 005f8a79  83c440               add esp, 0x40
// 005f8a7c  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVRay@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
