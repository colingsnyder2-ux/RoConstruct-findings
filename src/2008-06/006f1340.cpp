// roc 2008-06 006f1340  unit: CXTPPopupBar  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1340
//
// 006f1340  8b442404             mov eax, dword ptr [esp + 4]
// 006f1344  83ec08               sub esp, 8
// 006f1347  56                   push esi
// 006f1348  8bf1                 mov esi, ecx
// 006f134a  898680010000         mov dword ptr [esi + 0x180], eax
// 006f1350  e89bd4ffff           call 0x6ee7f0
// 006f1355  85c0                 test eax, eax
// 006f1357  0f84d5000000         je 0x6f1432
// 006f135d  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 006f1363  85c9                 test ecx, ecx
// 006f1365  7405                 je 0x6f136c
// 006f1367  e8e4a80100           call 0x70bc50
// 006f136c  ff8660010000         inc dword ptr [esi + 0x160]
// 006f1372  8bce                 mov ecx, esi
// 006f1374  e8a766fcff           call 0x6b7a20
// 006f1379  85c0                 test eax, eax
// 006f137b  7412                 je 0x6f138f
// 006f137d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006f1380  56                   push esi
// 006f1381  6a00                 push 0
// 006f1383  685b280000           push 0x285b
// 006f1388  51                   push ecx
// 006f1389  ff15142e8000         call dword ptr [0x802e14]
// 006f138f  8bce                 mov ecx, esi
// 006f1391  c786d801000000000000 mov dword ptr [esi + 0x1d8], 0
// 006f139b  c786a401000000000000 mov dword ptr [esi + 0x1a4], 0
// 006f13a5  e8963afcff           call 0x6b4e40
// 006f13aa  85c0                 test eax, eax
// 006f13ac  7522                 jne 0x6f13d0
// 006f13ae  6810306a00           push 0x6a3010
// 006f13b3  b99ced9700           mov ecx, 0x97ed9c
// 006f13b8  e81dac0c00           call 0x7bbfda
// 006f13bd  85c0                 test eax, eax
// 006f13bf  7505                 jne 0x6f13c6
// 006f13c1  e87ef5faff           call 0x6a0944
// 006f13c6  83782800             cmp dword ptr [eax + 0x28], 0
// 006f13ca  7504                 jne 0x6f13d0
// 006f13cc  33c0                 xor eax, eax
// 006f13ce  eb05                 jmp 0x6f13d5
// 006f13d0  b801000000           mov eax, 1
// 006f13d5  8b16                 mov edx, dword ptr [esi]
// 006f13d7  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 006f13dd  8b8208020000         mov eax, dword ptr [edx + 0x208]
// 006f13e3  8bce                 mov ecx, esi
// 006f13e5  ffd0                 call eax
// 006f13e7  8b16                 mov edx, dword ptr [esi]
// 006f13e9  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 006f13ef  6a00                 push 0
// 006f13f1  6a00                 push 0
// 006f13f3  8d44240c             lea eax, [esp + 0xc]
// 006f13f7  50                   push eax
// 006f13f8  8bce                 mov ecx, esi
// 006f13fa  ffd2                 call edx
// 006f13fc  8b4804               mov ecx, dword ptr [eax + 4]
// 006f13ff  8b10                 mov edx, dword ptr [eax]
// 006f1401  51                   push ecx
// 006f1402  52                   push edx
// 006f1403  8bce                 mov ecx, esi
// 006f1405  e816dfffff           call 0x6ef320
// 006f140a  837e2000             cmp dword ptr [esi + 0x20], 0
// 006f140e  752b                 jne 0x6f143b
// 006f1410  838660010000ff       add dword ptr [esi + 0x160], -1
// 006f1417  7519                 jne 0x6f1432
// 006f1419  f686e800000002       test byte ptr [esi + 0xe8], 2
// 006f1420  7410                 je 0x6f1432
// 006f1422  8b06                 mov eax, dword ptr [esi]
// 006f1424  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 006f142a  6a01                 push 1
// 006f142c  6a00                 push 0
// 006f142e  8bce                 mov ecx, esi
// 006f1430  ffd2                 call edx
// 006f1432  33c0                 xor eax, eax
// 006f1434  5e                   pop esi
// 006f1435  83c408               add esp, 8
// 006f1438  c20800               ret 8
// 006f143b  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 006f1441  85c0                 test eax, eax
// 006f1443  7429                 je 0x6f146e
// 006f1445  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 006f144b  85c0                 test eax, eax
// 006f144d  7406                 je 0x6f1455
// 006f144f  83782000             cmp dword ptr [eax + 0x20], 0
// 006f1453  7519                 jne 0x6f146e
// 006f1455  8bce                 mov ecx, esi
// 006f1457  e8c4ccffff           call 0x6ee120
// 006f145c  8b06                 mov eax, dword ptr [esi]
// 006f145e  8b5068               mov edx, dword ptr [eax + 0x68]
// 006f1461  8bce                 mov ecx, esi
// 006f1463  ffd2                 call edx
// 006f1465  33c0                 xor eax, eax
// 006f1467  5e                   pop esi
// 006f1468  83c408               add esp, 8
// 006f146b  c20800               ret 8
// 006f146e  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f1472  8b16                 mov edx, dword ptr [esi]
// 006f1474  50                   push eax
// 006f1475  50                   push eax
// 006f1476  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 006f147c  6a01                 push 1
// 006f147e  8bce                 mov ecx, esi
// 006f1480  ffd0                 call eax
// 006f1482  8b16                 mov edx, dword ptr [esi]
// 006f1484  8b82f4010000         mov eax, dword ptr [edx + 0x1f4]
// 006f148a  83a6e8000000fe       and dword ptr [esi + 0xe8], 0xfffffffe
// 006f1491  6a00                 push 0
// 006f1493  6a01                 push 1
// 006f1495  8bce                 mov ecx, esi
// 006f1497  ffd0                 call eax
// 006f1499  837e2000             cmp dword ptr [esi + 0x20], 0
// 006f149d  752b                 jne 0x6f14ca
// 006f149f  838660010000ff       add dword ptr [esi + 0x160], -1
// 006f14a6  7519                 jne 0x6f14c1
// 006f14a8  f686e800000002       test byte ptr [esi + 0xe8], 2
// 006f14af  7410                 je 0x6f14c1
// 006f14b1  8b16                 mov edx, dword ptr [esi]
// 006f14b3  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 006f14b9  6a01                 push 1
// 006f14bb  6a00                 push 0
// 006f14bd  8bce                 mov ecx, esi
// 006f14bf  ffd0                 call eax
// 006f14c1  33c0                 xor eax, eax
// 006f14c3  5e                   pop esi
// 006f14c4  83c408               add esp, 8
// 006f14c7  c20800               ret 8
// 006f14ca  8bce                 mov ecx, esi
// 006f14cc  e87fe6ffff           call 0x6efb50
// 006f14d1  6a02                 push 2
// 006f14d3  e8f8630300           call 0x7278d0
// 006f14d8  8bc8                 mov ecx, eax
// 006f14da  e8e1640300           call 0x7279c0
// 006f14df  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 006f14e6  752a                 jne 0x6f1512
// 006f14e8  83befc01000000       cmp dword ptr [esi + 0x1fc], 0
// 006f14ef  7421                 je 0x6f1512
// 006f14f1  56                   push esi
// 006f14f2  e8e9bd0700           call 0x76d2e0
// 006f14f7  8bc8                 mov ecx, eax
// 006f14f9  e892bd0700           call 0x76d290
// 006f14fe  8d8e8c010000         lea ecx, [esi + 0x18c]
// 006f1504  51                   push ecx
// 006f1505  56                   push esi
// 006f1506  e8d5bd0700           call 0x76d2e0
// 006f150b  8bc8                 mov ecx, eax
// 006f150d  e8cec70700           call 0x76dce0
// 006f1512  838ee800000001       or dword ptr [esi + 0xe8], 1
// 006f1519  838660010000ff       add dword ptr [esi + 0x160], -1
// 006f1520  8b86e8000000         mov eax, dword ptr [esi + 0xe8]
// 006f1526  7514                 jne 0x6f153c
// 006f1528  a802                 test al, 2
// 006f152a  7410                 je 0x6f153c
// 006f152c  8b16                 mov edx, dword ptr [esi]
// 006f152e  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 006f1534  6a01                 push 1
// 006f1536  6a00                 push 0
// 006f1538  8bce                 mov ecx, esi
// 006f153a  ffd0                 call eax
// 006f153c  b801000000           mov eax, 1
// 006f1541  5e                   pop esi
// 006f1542  83c408               add esp, 8
// 006f1545  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?Popup@CXTPPopupBar@@UAEHPAVCXTPControlPopup@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
