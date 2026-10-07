// roc 2010-06 004c1410  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c1410
//
// 004c1410  83ec0c               sub esp, 0xc
// 004c1413  56                   push esi
// 004c1414  8bf1                 mov esi, ecx
// 004c1416  8b4604               mov eax, dword ptr [esi + 4]
// 004c1419  3b4608               cmp eax, dword ptr [esi + 8]
// 004c141c  8b0e                 mov ecx, dword ptr [esi]
// 004c141e  7d28                 jge 0x4c1448
// 004c1420  8d0440               lea eax, [eax + eax*2]
// 004c1423  8d0481               lea eax, [ecx + eax*4]
// 004c1426  85c0                 test eax, eax
// 004c1428  7414                 je 0x4c143e
// 004c142a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c142e  d901                 fld dword ptr [ecx]
// 004c1430  d918                 fstp dword ptr [eax]
// 004c1432  d94104               fld dword ptr [ecx + 4]
// 004c1435  d95804               fstp dword ptr [eax + 4]
// 004c1438  d94108               fld dword ptr [ecx + 8]
// 004c143b  d95808               fstp dword ptr [eax + 8]
// 004c143e  ff4604               inc dword ptr [esi + 4]
// 004c1441  5e                   pop esi
// 004c1442  83c40c               add esp, 0xc
// 004c1445  c20400               ret 4
// 004c1448  57                   push edi
// 004c1449  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004c144d  3bf9                 cmp edi, ecx
// 004c144f  723e                 jb 0x4c148f
// 004c1451  8d1440               lea edx, [eax + eax*2]
// 004c1454  8d0c91               lea ecx, [ecx + edx*4]
// 004c1457  3bf9                 cmp edi, ecx
// 004c1459  7334                 jae 0x4c148f
// 004c145b  f30f1007             movss xmm0, dword ptr [edi]
// 004c145f  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004c1465  f30f104704           movss xmm0, dword ptr [edi + 4]
// 004c146a  8d542408             lea edx, [esp + 8]
// 004c146e  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 004c1474  f30f104708           movss xmm0, dword ptr [edi + 8]
// 004c1479  52                   push edx
// 004c147a  8bce                 mov ecx, esi
// 004c147c  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 004c1482  e889ffffff           call 0x4c1410
// 004c1487  5f                   pop edi
// 004c1488  5e                   pop esi
// 004c1489  83c40c               add esp, 0xc
// 004c148c  c20400               ret 4
// 004c148f  6a00                 push 0
// 004c1491  40                   inc eax
// 004c1492  50                   push eax
// 004c1493  8bce                 mov ecx, esi
// 004c1495  e8c6f7ffff           call 0x4c0c60
// 004c149a  d907                 fld dword ptr [edi]
// 004c149c  8b4604               mov eax, dword ptr [esi + 4]
// 004c149f  8b0e                 mov ecx, dword ptr [esi]
// 004c14a1  8d0440               lea eax, [eax + eax*2]
// 004c14a4  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 004c14a8  d918                 fstp dword ptr [eax]
// 004c14aa  d94704               fld dword ptr [edi + 4]
// 004c14ad  d95804               fstp dword ptr [eax + 4]
// 004c14b0  d94708               fld dword ptr [edi + 8]
// 004c14b3  5f                   pop edi
// 004c14b4  d95808               fstp dword ptr [eax + 8]
// 004c14b7  5e                   pop esi
// 004c14b8  83c40c               add esp, 0xc
// 004c14bb  c20400               ret 4
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?append@?$Array@VVector3@G3D@@@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
