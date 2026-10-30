// roc 2009-06 007f13f0  unit: CXTPPropertyGridPaintManager  size: 1645 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f13f0
//
// 007f13f0  6aff                 push -1
// 007f13f2  683e0b8800           push 0x880b3e
// 007f13f7  64a100000000         mov eax, dword ptr fs:[0]
// 007f13fd  50                   push eax
// 007f13fe  81ecb8000000         sub esp, 0xb8
// 007f1404  53                   push ebx
// 007f1405  55                   push ebp
// 007f1406  56                   push esi
// 007f1407  57                   push edi
// 007f1408  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007f140d  33c4                 xor eax, esp
// 007f140f  50                   push eax
// 007f1410  8d8424cc000000       lea eax, [esp + 0xcc]
// 007f1417  64a300000000         mov dword ptr fs:[0], eax
// 007f141d  8bf1                 mov esi, ecx
// 007f141f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007f1422  e82919f8ff           call 0x772d50
// 007f1427  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 007f142e  8b7d2c               mov edi, dword ptr [ebp + 0x2c]
// 007f1431  50                   push eax
// 007f1432  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 007f1439  8944241c             mov dword ptr [esp + 0x1c], eax
// 007f143d  e82ef0f7ff           call 0x770470
// 007f1442  8d451c               lea eax, [ebp + 0x1c]
// 007f1445  50                   push eax
// 007f1446  8d4c2420             lea ecx, [esp + 0x20]
// 007f144a  51                   push ecx
// 007f144b  ff1500ee8900         call dword ptr [0x89ee00]
// 007f1451  8b4518               mov eax, dword ptr [ebp + 0x18]
// 007f1454  8d54241c             lea edx, [esp + 0x1c]
// 007f1458  52                   push edx
// 007f1459  50                   push eax
// 007f145a  8d4c245c             lea ecx, [esp + 0x5c]
// 007f145e  e8cdf0f7ff           call 0x770530
// 007f1463  8b16                 mov edx, dword ptr [esi]
// 007f1465  8b420c               mov eax, dword ptr [edx + 0xc]
// 007f1468  6a01                 push 1
// 007f146a  57                   push edi
// 007f146b  8bce                 mov ecx, esi
// 007f146d  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 007f1478  ffd0                 call eax
// 007f147a  50                   push eax
// 007f147b  8d4c2458             lea ecx, [esp + 0x58]
// 007f147f  51                   push ecx
// 007f1480  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 007f1487  e8d4f3f7ff           call 0x770860
// 007f148c  8b16                 mov edx, dword ptr [esi]
// 007f148e  8b4208               mov eax, dword ptr [edx + 8]
// 007f1491  6a00                 push 0
// 007f1493  57                   push edi
// 007f1494  8bce                 mov ecx, esi
// 007f1496  c68424dc00000001     mov byte ptr [esp + 0xdc], 1
// 007f149e  ffd0                 call eax
// 007f14a0  50                   push eax
// 007f14a1  8d4c2420             lea ecx, [esp + 0x20]
// 007f14a5  51                   push ecx
// 007f14a6  8d4c245c             lea ecx, [esp + 0x5c]
// 007f14aa  e82183f2ff           call 0x7197d0
// 007f14af  6a01                 push 1
// 007f14b1  8d4c2458             lea ecx, [esp + 0x58]
// 007f14b5  e84caa0500           call 0x84bf06
// 007f14ba  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f14be  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007f14c2  e889c2f9ff           call 0x78d750
// 007f14c7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007f14cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f14cf  03c2                 add eax, edx
// 007f14d1  895c2438             mov dword ptr [esp + 0x38], ebx
// 007f14d5  8b1e                 mov ebx, dword ptr [esi]
// 007f14d7  89442414             mov dword ptr [esp + 0x14], eax
// 007f14db  8954242c             mov dword ptr [esp + 0x2c], edx
// 007f14df  894c2430             mov dword ptr [esp + 0x30], ecx
// 007f14e3  89442434             mov dword ptr [esp + 0x34], eax
// 007f14e7  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 007f14ed  83ec10               sub esp, 0x10
// 007f14f0  85c0                 test eax, eax
// 007f14f2  0f8481010000         je 0x7f1679
// 007f14f8  8bc4                 mov eax, esp
// 007f14fa  8910                 mov dword ptr [eax], edx
// 007f14fc  8b542434             mov edx, dword ptr [esp + 0x34]
// 007f1500  894804               mov dword ptr [eax + 4], ecx
// 007f1503  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007f1507  895008               mov dword ptr [eax + 8], edx
// 007f150a  89480c               mov dword ptr [eax + 0xc], ecx
// 007f150d  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 007f1510  8d542464             lea edx, [esp + 0x64]
// 007f1514  52                   push edx
// 007f1515  8bce                 mov ecx, esi
// 007f1517  ffd0                 call eax
// 007f1519  8b16                 mov edx, dword ptr [esi]
// 007f151b  8b420c               mov eax, dword ptr [edx + 0xc]
// 007f151e  6a00                 push 0
// 007f1520  57                   push edi
// 007f1521  8bce                 mov ecx, esi
// 007f1523  ffd0                 call eax
// 007f1525  50                   push eax
// 007f1526  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007f152d  e8bedef7ff           call 0x76f3f0
// 007f1532  8b16                 mov edx, dword ptr [esi]
// 007f1534  8b4204               mov eax, dword ptr [edx + 4]
// 007f1537  6a00                 push 0
// 007f1539  57                   push edi
// 007f153a  8bce                 mov ecx, esi
// 007f153c  ffd0                 call eax
// 007f153e  50                   push eax
// 007f153f  8d4c2458             lea ecx, [esp + 0x58]
// 007f1543  e8a8aa0500           call 0x84bff0
// 007f1548  8d4c2444             lea ecx, [esp + 0x44]
// 007f154c  e8dfeef7ff           call 0x770430
// 007f1551  8d4c2414             lea ecx, [esp + 0x14]
// 007f1555  51                   push ecx
// 007f1556  8bcf                 mov ecx, edi
// 007f1558  e8b300c4ff           call 0x431610
// 007f155d  8be8                 mov ebp, eax
// 007f155f  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 007f1563  68240c0000           push 0xc24
// 007f1568  8d542448             lea edx, [esp + 0x48]
// 007f156c  52                   push edx
// 007f156d  8bcd                 mov ecx, ebp
// 007f156f  c68424dc00000002     mov byte ptr [esp + 0xdc], 2
// 007f1577  83c370               add ebx, 0x70
// 007f157a  ff1554fb8900         call dword ptr [0x89fb54]
// 007f1580  50                   push eax
// 007f1581  8bcd                 mov ecx, ebp
// 007f1583  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f1589  50                   push eax
// 007f158a  8b03                 mov eax, dword ptr [ebx]
// 007f158c  8d4c2464             lea ecx, [esp + 0x64]
// 007f1590  ffd0                 call eax
// 007f1592  8d4c2414             lea ecx, [esp + 0x14]
// 007f1596  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 007f159e  ff1510fd8900         call dword ptr [0x89fd10]
// 007f15a4  8b9784000000         mov edx, dword ptr [edi + 0x84]
// 007f15aa  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007f15ae  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007f15b2  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f15b6  2b4c2444             sub ecx, dword ptr [esp + 0x44]
// 007f15ba  8d1cd500000000       lea ebx, [edx*8]
// 007f15c1  2bda                 sub ebx, edx
// 007f15c3  2bc5                 sub eax, ebp
// 007f15c5  8d541b0d             lea edx, [ebx + ebx + 0xd]
// 007f15c9  8d4c0a04             lea ecx, [edx + ecx + 4]
// 007f15cd  45                   inc ebp
// 007f15ce  89942488000000       mov dword ptr [esp + 0x88], edx
// 007f15d5  8d5428fd             lea edx, [eax + ebp - 3]
// 007f15d9  8d442414             lea eax, [esp + 0x14]
// 007f15dd  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 007f15e4  50                   push eax
// 007f15e5  8bcf                 mov ecx, edi
// 007f15e7  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 007f15ee  89942498000000       mov dword ptr [esp + 0x98], edx
// 007f15f5  e81600c4ff           call 0x431610
// 007f15fa  8bd8                 mov ebx, eax
// 007f15fc  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 007f1600  c68424d400000003     mov byte ptr [esp + 0xd4], 3
// 007f1608  83c570               add ebp, 0x70
// 007f160b  6826080000           push 0x826
// 007f1610  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007f1617  51                   push ecx
// 007f1618  8bcb                 mov ecx, ebx
// 007f161a  ff1554fb8900         call dword ptr [0x89fb54]
// 007f1620  50                   push eax
// 007f1621  8bcb                 mov ecx, ebx
// 007f1623  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f1629  8b5500               mov edx, dword ptr [ebp]
// 007f162c  50                   push eax
// 007f162d  8d4c2464             lea ecx, [esp + 0x64]
// 007f1631  ffd2                 call edx
// 007f1633  8d4c2414             lea ecx, [esp + 0x14]
// 007f1637  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 007f163f  ff1510fd8900         call dword ptr [0x89fd10]
// 007f1645  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 007f164c  f6451010             test byte ptr [ebp + 0x10], 0x10
// 007f1650  0f84c4020000         je 0x7f191a
// 007f1656  6a00                 push 0
// 007f1658  8d4c2458             lea ecx, [esp + 0x58]
// 007f165c  e88fa90500           call 0x84bff0
// 007f1661  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007f1665  8d842488000000       lea eax, [esp + 0x88]
// 007f166c  50                   push eax
// 007f166d  51                   push ecx
// 007f166e  ff15e0ee8900         call dword ptr [0x89eee0]
// 007f1674  e9a1020000           jmp 0x7f191a
// 007f1679  8b442434             mov eax, dword ptr [esp + 0x34]
// 007f167d  8b542438             mov edx, dword ptr [esp + 0x38]
// 007f1681  894c2458             mov dword ptr [esp + 0x58], ecx
// 007f1685  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007f1689  8944245c             mov dword ptr [esp + 0x5c], eax
// 007f168d  8bc4                 mov eax, esp
// 007f168f  8908                 mov dword ptr [eax], ecx
// 007f1691  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007f1695  894804               mov dword ptr [eax + 4], ecx
// 007f1698  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f169c  4a                   dec edx
// 007f169d  894808               mov dword ptr [eax + 8], ecx
// 007f16a0  89500c               mov dword ptr [eax + 0xc], edx
// 007f16a3  8b4340               mov eax, dword ptr [ebx + 0x40]
// 007f16a6  8954244c             mov dword ptr [esp + 0x4c], edx
// 007f16aa  57                   push edi
// 007f16ab  8d542468             lea edx, [esp + 0x68]
// 007f16af  52                   push edx
// 007f16b0  8bce                 mov ecx, esi
// 007f16b2  ffd0                 call eax
// 007f16b4  8b16                 mov edx, dword ptr [esi]
// 007f16b6  8b4204               mov eax, dword ptr [edx + 4]
// 007f16b9  6a00                 push 0
// 007f16bb  57                   push edi
// 007f16bc  8bce                 mov ecx, esi
// 007f16be  ffd0                 call eax
// 007f16c0  50                   push eax
// 007f16c1  8d4c2458             lea ecx, [esp + 0x58]
// 007f16c5  e826a90500           call 0x84bff0
// 007f16ca  8b16                 mov edx, dword ptr [esi]
// 007f16cc  8b420c               mov eax, dword ptr [edx + 0xc]
// 007f16cf  6a00                 push 0
// 007f16d1  57                   push edi
// 007f16d2  8bce                 mov ecx, esi
// 007f16d4  ffd0                 call eax
// 007f16d6  50                   push eax
// 007f16d7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007f16de  e80dddf7ff           call 0x76f3f0
// 007f16e3  8b4510               mov eax, dword ptr [ebp + 0x10]
// 007f16e6  83e001               and eax, 1
// 007f16e9  89842484000000       mov dword ptr [esp + 0x84], eax
// 007f16f0  0f84a8000000         je 0x7f179e
// 007f16f6  8b1d78ee8900         mov ebx, dword ptr [0x89ee78]
// 007f16fc  ffd3                 call ebx
// 007f16fe  50                   push eax
// 007f16ff  e8fe75f2ff           call 0x718d02
// 007f1704  85c0                 test eax, eax
// 007f1706  7469                 je 0x7f1771
// 007f1708  ffd3                 call ebx
// 007f170a  50                   push eax
// 007f170b  e8f275f2ff           call 0x718d02
// 007f1710  3b442418             cmp eax, dword ptr [esp + 0x18]
// 007f1714  7433                 je 0x7f1749
// 007f1716  ffd3                 call ebx
// 007f1718  50                   push eax
// 007f1719  e8e475f2ff           call 0x718d02
// 007f171e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007f1721  51                   push ecx
// 007f1722  ff1598ee8900         call dword ptr [0x89ee98]
// 007f1728  50                   push eax
// 007f1729  e8d475f2ff           call 0x718d02
// 007f172e  3b442418             cmp eax, dword ptr [esp + 0x18]
// 007f1732  7415                 je 0x7f1749
// 007f1734  ffd3                 call ebx
// 007f1736  50                   push eax
// 007f1737  e8c675f2ff           call 0x718d02
// 007f173c  8bc8                 mov ecx, eax
// 007f173e  e83ddaf3ff           call 0x72f180
// 007f1743  3b442418             cmp eax, dword ptr [esp + 0x18]
// 007f1747  7528                 jne 0x7f1771
// 007f1749  8b465c               mov eax, dword ptr [esi + 0x5c]
// 007f174c  83f8ff               cmp eax, -1
// 007f174f  7503                 jne 0x7f1754
// 007f1751  8b4658               mov eax, dword ptr [esi + 0x58]
// 007f1754  50                   push eax
// 007f1755  8d4c2458             lea ecx, [esp + 0x58]
// 007f1759  e892a80500           call 0x84bff0
// 007f175e  8b4650               mov eax, dword ptr [esi + 0x50]
// 007f1761  83f8ff               cmp eax, -1
// 007f1764  7503                 jne 0x7f1769
// 007f1766  8b464c               mov eax, dword ptr [esi + 0x4c]
// 007f1769  50                   push eax
// 007f176a  8d542430             lea edx, [esp + 0x30]
// 007f176e  52                   push edx
// 007f176f  eb24                 jmp 0x7f1795
// 007f1771  8b4660               mov eax, dword ptr [esi + 0x60]
// 007f1774  83785c00             cmp dword ptr [eax + 0x5c], 0
// 007f1778  7524                 jne 0x7f179e
// 007f177a  8b4674               mov eax, dword ptr [esi + 0x74]
// 007f177d  8b4854               mov ecx, dword ptr [eax + 0x54]
// 007f1780  83c04c               add eax, 0x4c
// 007f1783  83f9ff               cmp ecx, -1
// 007f1786  7505                 jne 0x7f178d
// 007f1788  8b4004               mov eax, dword ptr [eax + 4]
// 007f178b  eb02                 jmp 0x7f178f
// 007f178d  8bc1                 mov eax, ecx
// 007f178f  50                   push eax
// 007f1790  8d4c2430             lea ecx, [esp + 0x30]
// 007f1794  51                   push ecx
// 007f1795  8d4c245c             lea ecx, [esp + 0x5c]
// 007f1799  e83280f2ff           call 0x7197d0
// 007f179e  8b9fb8000000         mov ebx, dword ptr [edi + 0xb8]
// 007f17a4  85db                 test ebx, ebx
// 007f17a6  745f                 je 0x7f1807
// 007f17a8  eb06                 jmp 0x7f17b0
// 007f17aa  8d9b00000000         lea ebx, [ebx]
// 007f17b0  83bb9800000000       cmp dword ptr [ebx + 0x98], 0
// 007f17b7  7444                 je 0x7f17fd
// 007f17b9  8b4674               mov eax, dword ptr [esi + 0x74]
// 007f17bc  8b4854               mov ecx, dword ptr [eax + 0x54]
// 007f17bf  83c04c               add eax, 0x4c
// 007f17c2  83f9ff               cmp ecx, -1
// 007f17c5  7505                 jne 0x7f17cc
// 007f17c7  8b4004               mov eax, dword ptr [eax + 4]
// 007f17ca  eb02                 jmp 0x7f17ce
// 007f17cc  8bc1                 mov eax, ecx
// 007f17ce  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f17d2  8b8b84000000         mov ecx, dword ptr [ebx + 0x84]
// 007f17d8  50                   push eax
// 007f17d9  8b442424             mov eax, dword ptr [esp + 0x24]
// 007f17dd  2bd0                 sub edx, eax
// 007f17df  52                   push edx
// 007f17e0  6a0e                 push 0xe
// 007f17e2  50                   push eax
// 007f17e3  8d04cd00000000       lea eax, [ecx*8]
// 007f17ea  2bc1                 sub eax, ecx
// 007f17ec  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f17f0  8d1441               lea edx, [ecx + eax*2]
// 007f17f3  52                   push edx
// 007f17f4  8d4c2468             lea ecx, [esp + 0x68]
// 007f17f8  e833a70500           call 0x84bf30
// 007f17fd  8b9bb8000000         mov ebx, dword ptr [ebx + 0xb8]
// 007f1803  85db                 test ebx, ebx
// 007f1805  75a9                 jne 0x7f17b0
// 007f1807  8b4674               mov eax, dword ptr [esi + 0x74]
// 007f180a  8b4854               mov ecx, dword ptr [eax + 0x54]
// 007f180d  83c04c               add eax, 0x4c
// 007f1810  83f9ff               cmp ecx, -1
// 007f1813  7505                 jne 0x7f181a
// 007f1815  8b4004               mov eax, dword ptr [eax + 4]
// 007f1818  eb02                 jmp 0x7f181c
// 007f181a  8bc1                 mov eax, ecx
// 007f181c  50                   push eax
// 007f181d  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007f1821  50                   push eax
// 007f1822  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 007f1829  e8d2f0f7ff           call 0x770900
// 007f182e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007f1832  49                   dec ecx
// 007f1833  51                   push ecx
// 007f1834  6a00                 push 0
// 007f1836  8d942490000000       lea edx, [esp + 0x90]
// 007f183d  52                   push edx
// 007f183e  8d4c2460             lea ecx, [esp + 0x60]
// 007f1842  c68424e000000004     mov byte ptr [esp + 0xe0], 4
// 007f184a  e8bf80f2ff           call 0x71990e
// 007f184f  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f1853  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007f1857  48                   dec eax
// 007f1858  50                   push eax
// 007f1859  51                   push ecx
// 007f185a  8d4c245c             lea ecx, [esp + 0x5c]
// 007f185e  e8a580f2ff           call 0x719908
// 007f1863  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f1867  8b442434             mov eax, dword ptr [esp + 0x34]
// 007f186b  52                   push edx
// 007f186c  50                   push eax
// 007f186d  8d8c2490000000       lea ecx, [esp + 0x90]
// 007f1874  51                   push ecx
// 007f1875  8d4c2460             lea ecx, [esp + 0x60]
// 007f1879  e89080f2ff           call 0x71990e
// 007f187e  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f1882  8b442434             mov eax, dword ptr [esp + 0x34]
// 007f1886  4a                   dec edx
// 007f1887  52                   push edx
// 007f1888  50                   push eax
// 007f1889  8d4c245c             lea ecx, [esp + 0x5c]
// 007f188d  e87680f2ff           call 0x719908
// 007f1892  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f1896  8b16                 mov edx, dword ptr [esi]
// 007f1898  8b5244               mov edx, dword ptr [edx + 0x44]
// 007f189b  83ec10               sub esp, 0x10
// 007f189e  8bc4                 mov eax, esp
// 007f18a0  8908                 mov dword ptr [eax], ecx
// 007f18a2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007f18a6  894804               mov dword ptr [eax + 4], ecx
// 007f18a9  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007f18ad  894808               mov dword ptr [eax + 8], ecx
// 007f18b0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007f18b4  89480c               mov dword ptr [eax + 0xc], ecx
// 007f18b7  57                   push edi
// 007f18b8  8d442468             lea eax, [esp + 0x68]
// 007f18bc  50                   push eax
// 007f18bd  8bce                 mov ecx, esi
// 007f18bf  ffd2                 call edx
// 007f18c1  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 007f18c9  750c                 jne 0x7f18d7
// 007f18cb  8b4660               mov eax, dword ptr [esi + 0x60]
// 007f18ce  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 007f18d5  742f                 je 0x7f1906
// 007f18d7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007f18db  8b16                 mov edx, dword ptr [esi]
// 007f18dd  8b5248               mov edx, dword ptr [edx + 0x48]
// 007f18e0  83ec10               sub esp, 0x10
// 007f18e3  8bc4                 mov eax, esp
// 007f18e5  8908                 mov dword ptr [eax], ecx
// 007f18e7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007f18eb  894804               mov dword ptr [eax + 4], ecx
// 007f18ee  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f18f2  894808               mov dword ptr [eax + 8], ecx
// 007f18f5  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007f18f9  89480c               mov dword ptr [eax + 0xc], ecx
// 007f18fc  57                   push edi
// 007f18fd  8d442468             lea eax, [esp + 0x68]
// 007f1901  50                   push eax
// 007f1902  8bce                 mov ecx, esi
// 007f1904  ffd2                 call edx
// 007f1906  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 007f190d  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 007f1915  e876f0f7ff           call 0x770990
// 007f191a  8b4508               mov eax, dword ptr [ebp + 8]
// 007f191d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f1921  40                   inc eax
// 007f1922  50                   push eax
// 007f1923  e8c8c0f9ff           call 0x78d9f0
// 007f1928  85c0                 test eax, eax
// 007f192a  744a                 je 0x7f1976
// 007f192c  83b89800000000       cmp dword ptr [eax + 0x98], 0
// 007f1933  7441                 je 0x7f1976
// 007f1935  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 007f193c  7438                 je 0x7f1976
// 007f193e  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007f1941  83f9ff               cmp ecx, -1
// 007f1944  7503                 jne 0x7f1949
// 007f1946  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007f1949  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 007f194f  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f1953  51                   push ecx
// 007f1954  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007f1958  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 007f195c  6a01                 push 1
// 007f195e  51                   push ecx
// 007f195f  8d0cc500000000       lea ecx, [eax*8]
// 007f1966  2bc8                 sub ecx, eax
// 007f1968  4a                   dec edx
// 007f1969  03c9                 add ecx, ecx
// 007f196b  52                   push edx
// 007f196c  51                   push ecx
// 007f196d  8d4c2468             lea ecx, [esp + 0x68]
// 007f1971  e8baa50500           call 0x84bf30
// 007f1976  8bcf                 mov ecx, edi
// 007f1978  e88399f9ff           call 0x78b300
// 007f197d  85c0                 test eax, eax
// 007f197f  0f8494000000         je 0x7f1a19
// 007f1985  bb8c2b8f00           mov ebx, 0x8f2b8c
// 007f198a  c744244000000000     mov dword ptr [esp + 0x40], 0
// 007f1992  895c243c             mov dword ptr [esp + 0x3c], ebx
// 007f1996  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 007f199d  c68424d400000005     mov byte ptr [esp + 0xd4], 5
// 007f19a5  7523                 jne 0x7f19ca
// 007f19a7  8d54242c             lea edx, [esp + 0x2c]
// 007f19ab  52                   push edx
// 007f19ac  ff1580e08900         call dword ptr [0x89e080]
// 007f19b2  50                   push eax
// 007f19b3  8d4c2440             lea ecx, [esp + 0x40]
// 007f19b7  e84676f2ff           call 0x719002
// 007f19bc  8d44243c             lea eax, [esp + 0x3c]
// 007f19c0  50                   push eax
// 007f19c1  8d4c2458             lea ecx, [esp + 0x58]
// 007f19c5  e82ea70500           call 0x84c0f8
// 007f19ca  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f19ce  8b16                 mov edx, dword ptr [esi]
// 007f19d0  8b5238               mov edx, dword ptr [edx + 0x38]
// 007f19d3  83ec10               sub esp, 0x10
// 007f19d6  8bc4                 mov eax, esp
// 007f19d8  8908                 mov dword ptr [eax], ecx
// 007f19da  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007f19de  894804               mov dword ptr [eax + 4], ecx
// 007f19e1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007f19e5  894808               mov dword ptr [eax + 8], ecx
// 007f19e8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007f19ec  89480c               mov dword ptr [eax + 0xc], ecx
// 007f19ef  57                   push edi
// 007f19f0  8d442468             lea eax, [esp + 0x68]
// 007f19f4  50                   push eax
// 007f19f5  8bce                 mov ecx, esi
// 007f19f7  ffd2                 call edx
// 007f19f9  6a00                 push 0
// 007f19fb  8d4c2458             lea ecx, [esp + 0x58]
// 007f19ff  e8f4a60500           call 0x84c0f8
// 007f1a04  8d4c243c             lea ecx, [esp + 0x3c]
// 007f1a08  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 007f1a10  895c243c             mov dword ptr [esp + 0x3c], ebx
// 007f1a14  e8b7dac1ff           call 0x40f4d0
// 007f1a19  8d8c2498000000       lea ecx, [esp + 0x98]
// 007f1a20  c68424d400000000     mov byte ptr [esp + 0xd4], 0
// 007f1a28  e8b3eef7ff           call 0x7708e0
// 007f1a2d  8d4c2454             lea ecx, [esp + 0x54]
// 007f1a31  c78424d4000000ffffffff mov dword ptr [esp + 0xd4], 0xffffffff
// 007f1a3c  e8ffecf7ff           call 0x770740
// 007f1a41  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 007f1a48  64890d00000000       mov dword ptr fs:[0], ecx
// 007f1a4f  59                   pop ecx
// 007f1a50  5f                   pop edi
// 007f1a51  5e                   pop esi
// 007f1a52  5d                   pop ebp
// 007f1a53  5b                   pop ebx
// 007f1a54  81c4c4000000         add esp, 0xc4
// 007f1a5a  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPPropertyGridPaintManager@@UAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp