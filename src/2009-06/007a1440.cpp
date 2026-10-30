// roc 2009-06 007a1440  unit: XTPPaintThemes::CXTPDefaultTheme  size: 797 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a1440
//
// 007a1440  837c242400           cmp dword ptr [esp + 0x24], 0
// 007a1445  53                   push ebx
// 007a1446  55                   push ebp
// 007a1447  56                   push esi
// 007a1448  57                   push edi
// 007a1449  8bf1                 mov esi, ecx
// 007a144b  0f85e9000000         jne 0x7a153a
// 007a1451  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 007a1458  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007a145c  7574                 jne 0x7a14d2
// 007a145e  8bcf                 mov ecx, edi
// 007a1460  e84b0bf9ff           call 0x731fb0
// 007a1465  85c0                 test eax, eax
// 007a1467  7569                 jne 0x7a14d2
// 007a1469  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007a146d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007a1471  6a14                 push 0x14
// 007a1473  8bce                 mov ecx, esi
// 007a1475  43                   inc ebx
// 007a1476  45                   inc ebp
// 007a1477  e80413f8ff           call 0x722780
// 007a147c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a1480  50                   push eax
// 007a1481  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a1485  50                   push eax
// 007a1486  51                   push ecx
// 007a1487  8bcf                 mov ecx, edi
// 007a1489  e8320bf9ff           call 0x731fc0
// 007a148e  50                   push eax
// 007a148f  55                   push ebp
// 007a1490  53                   push ebx
// 007a1491  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007a1495  53                   push ebx
// 007a1496  8bcf                 mov ecx, edi
// 007a1498  e89389f9ff           call 0x739e30
// 007a149d  6a10                 push 0x10
// 007a149f  8bce                 mov ecx, esi
// 007a14a1  e8da12f8ff           call 0x722780
// 007a14a6  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a14aa  50                   push eax
// 007a14ab  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a14af  52                   push edx
// 007a14b0  50                   push eax
// 007a14b1  8bcf                 mov ecx, edi
// 007a14b3  e8080bf9ff           call 0x731fc0
// 007a14b8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a14bc  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a14c0  50                   push eax
// 007a14c1  51                   push ecx
// 007a14c2  52                   push edx
// 007a14c3  53                   push ebx
// 007a14c4  8bcf                 mov ecx, edi
// 007a14c6  e86589f9ff           call 0x739e30
// 007a14cb  5f                   pop edi
// 007a14cc  5e                   pop esi
// 007a14cd  5d                   pop ebp
// 007a14ce  5b                   pop ebx
// 007a14cf  c23000               ret 0x30
// 007a14d2  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 007a14d9  742e                 je 0x7a1509
// 007a14db  8bcf                 mov ecx, edi
// 007a14dd  e82e26f9ff           call 0x733b10
// 007a14e2  85c0                 test eax, eax
// 007a14e4  7523                 jne 0x7a1509
// 007a14e6  8b4640               mov eax, dword ptr [esi + 0x40]
// 007a14e9  83f8ff               cmp eax, -1
// 007a14ec  7505                 jne 0x7a14f3
// 007a14ee  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007a14f1  eb02                 jmp 0x7a14f5
// 007a14f3  8bc8                 mov ecx, eax
// 007a14f5  8b4634               mov eax, dword ptr [esi + 0x34]
// 007a14f8  83f8ff               cmp eax, -1
// 007a14fb  7503                 jne 0x7a1500
// 007a14fd  8b4630               mov eax, dword ptr [esi + 0x30]
// 007a1500  51                   push ecx
// 007a1501  50                   push eax
// 007a1502  8bcf                 mov ecx, edi
// 007a1504  e8875ff9ff           call 0x737490
// 007a1509  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a150d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a1511  50                   push eax
// 007a1512  51                   push ecx
// 007a1513  6a01                 push 1
// 007a1515  8bcf                 mov ecx, edi
// 007a1517  e8947bf9ff           call 0x7390b0
// 007a151c  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a1520  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a1524  50                   push eax
// 007a1525  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a1529  52                   push edx
// 007a152a  50                   push eax
// 007a152b  51                   push ecx
// 007a152c  8bcf                 mov ecx, edi
// 007a152e  e88d88f9ff           call 0x739dc0
// 007a1533  5f                   pop edi
// 007a1534  5e                   pop esi
// 007a1535  5d                   pop ebp
// 007a1536  5b                   pop ebx
// 007a1537  c23000               ret 0x30
// 007a153a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a153e  8b442430             mov eax, dword ptr [esp + 0x30]
// 007a1542  83f902               cmp ecx, 2
// 007a1545  0f85b8000000         jne 0x7a1603
// 007a154b  85c0                 test eax, eax
// 007a154d  0f85b0000000         jne 0x7a1603
// 007a1553  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007a1557  8bcf                 mov ecx, edi
// 007a1559  e8520af9ff           call 0x731fb0
// 007a155e  85c0                 test eax, eax
// 007a1560  7539                 jne 0x7a159b
// 007a1562  6a10                 push 0x10
// 007a1564  8bce                 mov ecx, esi
// 007a1566  e81512f8ff           call 0x722780
// 007a156b  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a156f  50                   push eax
// 007a1570  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a1574  52                   push edx
// 007a1575  50                   push eax
// 007a1576  8bcf                 mov ecx, edi
// 007a1578  e85325f9ff           call 0x733ad0
// 007a157d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007a1581  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a1585  50                   push eax
// 007a1586  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a158a  51                   push ecx
// 007a158b  52                   push edx
// 007a158c  50                   push eax
// 007a158d  8bcf                 mov ecx, edi
// 007a158f  e89c88f9ff           call 0x739e30
// 007a1594  5f                   pop edi
// 007a1595  5e                   pop esi
// 007a1596  5d                   pop ebp
// 007a1597  5b                   pop ebx
// 007a1598  c23000               ret 0x30
// 007a159b  83be5401000000       cmp dword ptr [esi + 0x154], 0
// 007a15a2  742e                 je 0x7a15d2
// 007a15a4  8bcf                 mov ecx, edi
// 007a15a6  e86525f9ff           call 0x733b10
// 007a15ab  85c0                 test eax, eax
// 007a15ad  7523                 jne 0x7a15d2
// 007a15af  8b4640               mov eax, dword ptr [esi + 0x40]
// 007a15b2  83f8ff               cmp eax, -1
// 007a15b5  7505                 jne 0x7a15bc
// 007a15b7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007a15ba  eb02                 jmp 0x7a15be
// 007a15bc  8bc8                 mov ecx, eax
// 007a15be  8b4634               mov eax, dword ptr [esi + 0x34]
// 007a15c1  83f8ff               cmp eax, -1
// 007a15c4  7503                 jne 0x7a15c9
// 007a15c6  8b4630               mov eax, dword ptr [esi + 0x30]
// 007a15c9  51                   push ecx
// 007a15ca  50                   push eax
// 007a15cb  8bcf                 mov ecx, edi
// 007a15cd  e8be5ef9ff           call 0x737490
// 007a15d2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a15d6  8b542420             mov edx, dword ptr [esp + 0x20]
// 007a15da  51                   push ecx
// 007a15db  52                   push edx
// 007a15dc  6a01                 push 1
// 007a15de  8bcf                 mov ecx, edi
// 007a15e0  e8cb7af9ff           call 0x7390b0
// 007a15e5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a15e9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a15ed  50                   push eax
// 007a15ee  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a15f2  50                   push eax
// 007a15f3  51                   push ecx
// 007a15f4  8bcf                 mov ecx, edi
// 007a15f6  52                   push edx
// 007a15f7  e8c487f9ff           call 0x739dc0
// 007a15fc  5f                   pop edi
// 007a15fd  5e                   pop esi
// 007a15fe  5d                   pop ebp
// 007a15ff  5b                   pop ebx
// 007a1600  c23000               ret 0x30
// 007a1603  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 007a1608  0f850b010000         jne 0x7a1719
// 007a160e  85c9                 test ecx, ecx
// 007a1610  0f8507010000         jne 0x7a171d
// 007a1616  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 007a161a  7520                 jne 0x7a163c
// 007a161c  85c0                 test eax, eax
// 007a161e  7525                 jne 0x7a1645
// 007a1620  398648010000         cmp dword ptr [esi + 0x148], eax
// 007a1626  8b742428             mov esi, dword ptr [esp + 0x28]
// 007a162a  8bce                 mov ecx, esi
// 007a162c  0f84fe000000         je 0x7a1730
// 007a1632  e8297af9ff           call 0x739060
// 007a1637  e9f9000000           jmp 0x7a1735
// 007a163c  85c0                 test eax, eax
// 007a163e  740e                 je 0x7a164e
// 007a1640  e99f000000           jmp 0x7a16e4
// 007a1645  83f801               cmp eax, 1
// 007a1648  0f8589000000         jne 0x7a16d7
// 007a164e  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 007a1655  8b742428             mov esi, dword ptr [esp + 0x28]
// 007a1659  7469                 je 0x7a16c4
// 007a165b  8bce                 mov ecx, esi
// 007a165d  e82e7af9ff           call 0x739090
// 007a1662  8bc8                 mov ecx, eax
// 007a1664  e89721f9ff           call 0x733800
// 007a1669  85c0                 test eax, eax
// 007a166b  7557                 jne 0x7a16c4
// 007a166d  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a1671  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a1675  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007a1679  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007a167d  50                   push eax
// 007a167e  51                   push ecx
// 007a167f  8bce                 mov ecx, esi
// 007a1681  47                   inc edi
// 007a1682  43                   inc ebx
// 007a1683  e8087af9ff           call 0x739090
// 007a1688  50                   push eax
// 007a1689  53                   push ebx
// 007a168a  57                   push edi
// 007a168b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007a168f  57                   push edi
// 007a1690  8bce                 mov ecx, esi
// 007a1692  e82987f9ff           call 0x739dc0
// 007a1697  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a169b  8b442420             mov eax, dword ptr [esp + 0x20]
// 007a169f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007a16a3  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 007a16a7  52                   push edx
// 007a16a8  50                   push eax
// 007a16a9  8bce                 mov ecx, esi
// 007a16ab  4b                   dec ebx
// 007a16ac  4d                   dec ebp
// 007a16ad  e8fe23f9ff           call 0x733ab0
// 007a16b2  50                   push eax
// 007a16b3  55                   push ebp
// 007a16b4  53                   push ebx
// 007a16b5  57                   push edi
// 007a16b6  8bce                 mov ecx, esi
// 007a16b8  e80387f9ff           call 0x739dc0
// 007a16bd  5f                   pop edi
// 007a16be  5e                   pop esi
// 007a16bf  5d                   pop ebp
// 007a16c0  5b                   pop ebx
// 007a16c1  c23000               ret 0x30
// 007a16c4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a16c8  8b542420             mov edx, dword ptr [esp + 0x20]
// 007a16cc  51                   push ecx
// 007a16cd  52                   push edx
// 007a16ce  8bce                 mov ecx, esi
// 007a16d0  e8db23f9ff           call 0x733ab0
// 007a16d5  eb68                 jmp 0x7a173f
// 007a16d7  50                   push eax
// 007a16d8  e863ddf7ff           call 0x71f440
// 007a16dd  83c404               add esp, 4
// 007a16e0  85c0                 test eax, eax
// 007a16e2  7472                 je 0x7a1756
// 007a16e4  8b442424             mov eax, dword ptr [esp + 0x24]
// 007a16e8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a16ec  8b742418             mov esi, dword ptr [esp + 0x18]
// 007a16f0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007a16f4  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007a16f8  50                   push eax
// 007a16f9  51                   push ecx
// 007a16fa  8bcb                 mov ecx, ebx
// 007a16fc  46                   inc esi
// 007a16fd  47                   inc edi
// 007a16fe  e8ed23f9ff           call 0x733af0
// 007a1703  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a1707  50                   push eax
// 007a1708  57                   push edi
// 007a1709  56                   push esi
// 007a170a  8bcb                 mov ecx, ebx
// 007a170c  52                   push edx
// 007a170d  e8ae86f9ff           call 0x739dc0
// 007a1712  5f                   pop edi
// 007a1713  5e                   pop esi
// 007a1714  5d                   pop ebp
// 007a1715  5b                   pop ebx
// 007a1716  c23000               ret 0x30
// 007a1719  85c9                 test ecx, ecx
// 007a171b  740d                 je 0x7a172a
// 007a171d  8b742428             mov esi, dword ptr [esp + 0x28]
// 007a1721  8bce                 mov ecx, esi
// 007a1723  e8a823f9ff           call 0x733ad0
// 007a1728  eb0b                 jmp 0x7a1735
// 007a172a  8b742428             mov esi, dword ptr [esp + 0x28]
// 007a172e  8bce                 mov ecx, esi
// 007a1730  e88b08f9ff           call 0x731fc0
// 007a1735  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a1739  8b542420             mov edx, dword ptr [esp + 0x20]
// 007a173d  51                   push ecx
// 007a173e  52                   push edx
// 007a173f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a1743  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a1747  50                   push eax
// 007a1748  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a174c  50                   push eax
// 007a174d  51                   push ecx
// 007a174e  8bce                 mov ecx, esi
// 007a1750  52                   push edx
// 007a1751  e86a86f9ff           call 0x739dc0
// 007a1756  5f                   pop edi
// 007a1757  5e                   pop esi
// 007a1758  5d                   pop ebp
// 007a1759  5b                   pop ebx
// 007a175a  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawImage@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCPoint@@VCSize@@PAVCXTPImageManagerIcon@@HHHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
