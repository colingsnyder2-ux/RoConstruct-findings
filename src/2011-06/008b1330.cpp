// roc 2011-06 008b1330  unit: CXTPReportPaintManager  size: 2184 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b1330
//
// 008b1330  83ec50               sub esp, 0x50
// 008b1333  a12058c900           mov eax, dword ptr [0xc95820]
// 008b1338  33c4                 xor eax, esp
// 008b133a  8944244c             mov dword ptr [esp + 0x4c], eax
// 008b133e  53                   push ebx
// 008b133f  55                   push ebp
// 008b1340  56                   push esi
// 008b1341  57                   push edi
// 008b1342  8bf1                 mov esi, ecx
// 008b1344  e8675cf9ff           call 0x846fb0
// 008b1349  e89240f9ff           call 0x8453e0
// 008b134e  6a0f                 push 0xf
// 008b1350  8bc8                 mov ecx, eax
// 008b1352  e85938f9ff           call 0x844bb0
// 008b1357  89861c010000         mov dword ptr [esi + 0x11c], eax
// 008b135d  e87e40f9ff           call 0x8453e0
// 008b1362  6a12                 push 0x12
// 008b1364  8bc8                 mov ecx, eax
// 008b1366  e84538f9ff           call 0x844bb0
// 008b136b  898628010000         mov dword ptr [esi + 0x128], eax
// 008b1371  e86a40f9ff           call 0x8453e0
// 008b1376  6a10                 push 0x10
// 008b1378  8bc8                 mov ecx, eax
// 008b137a  e83138f9ff           call 0x844bb0
// 008b137f  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 008b1385  e85640f9ff           call 0x8453e0
// 008b138a  6a0d                 push 0xd
// 008b138c  8bc8                 mov ecx, eax
// 008b138e  e81d38f9ff           call 0x844bb0
// 008b1393  894644               mov dword ptr [esi + 0x44], eax
// 008b1396  e84540f9ff           call 0x8453e0
// 008b139b  6a0e                 push 0xe
// 008b139d  8bc8                 mov ecx, eax
// 008b139f  e80c38f9ff           call 0x844bb0
// 008b13a4  894668               mov dword ptr [esi + 0x68], eax
// 008b13a7  e83440f9ff           call 0x8453e0
// 008b13ac  6a08                 push 8
// 008b13ae  8bc8                 mov ecx, eax
// 008b13b0  e8fb37f9ff           call 0x844bb0
// 008b13b5  89465c               mov dword ptr [esi + 0x5c], eax
// 008b13b8  e82340f9ff           call 0x8453e0
// 008b13bd  6a14                 push 0x14
// 008b13bf  8bc8                 mov ecx, eax
// 008b13c1  e8ea37f9ff           call 0x844bb0
// 008b13c6  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 008b13cc  e80f40f9ff           call 0x8453e0
// 008b13d1  6a05                 push 5
// 008b13d3  8bc8                 mov ecx, eax
// 008b13d5  e8d637f9ff           call 0x844bb0
// 008b13da  89868c000000         mov dword ptr [esi + 0x8c], eax
// 008b13e0  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008b13e6  83f8ff               cmp eax, -1
// 008b13e9  7506                 jne 0x8b13f1
// 008b13eb  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008b13f1  898604010000         mov dword ptr [esi + 0x104], eax
// 008b13f7  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 008b13fd  83f8ff               cmp eax, -1
// 008b1400  7506                 jne 0x8b1408
// 008b1402  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 008b1408  898680000000         mov dword ptr [esi + 0x80], eax
// 008b140e  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008b1414  83f8ff               cmp eax, -1
// 008b1417  7506                 jne 0x8b141f
// 008b1419  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008b141f  894650               mov dword ptr [esi + 0x50], eax
// 008b1422  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008b1428  83f8ff               cmp eax, -1
// 008b142b  7506                 jne 0x8b1433
// 008b142d  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008b1433  894674               mov dword ptr [esi + 0x74], eax
// 008b1436  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008b143c  83f8ff               cmp eax, -1
// 008b143f  7506                 jne 0x8b1447
// 008b1441  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008b1447  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 008b144d  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008b1453  83f8ff               cmp eax, -1
// 008b1456  7506                 jne 0x8b145e
// 008b1458  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008b145e  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 008b1464  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 008b146a  83f8ff               cmp eax, -1
// 008b146d  7506                 jne 0x8b1475
// 008b146f  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 008b1475  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 008b147b  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008b1481  83f8ff               cmp eax, -1
// 008b1484  7506                 jne 0x8b148c
// 008b1486  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008b148c  898698000000         mov dword ptr [esi + 0x98], eax
// 008b1492  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008b1498  83f8ff               cmp eax, -1
// 008b149b  7506                 jne 0x8b14a3
// 008b149d  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008b14a3  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 008b14a9  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008b14af  83f8ff               cmp eax, -1
// 008b14b2  7506                 jne 0x8b14ba
// 008b14b4  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008b14ba  898640010000         mov dword ptr [esi + 0x140], eax
// 008b14c0  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 008b14c6  83f8ff               cmp eax, -1
// 008b14c9  7506                 jne 0x8b14d1
// 008b14cb  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 008b14d1  89864c010000         mov dword ptr [esi + 0x14c], eax
// 008b14d7  c786f80000000000ff00 mov dword ptr [esi + 0xf8], 0xff0000
// 008b14e1  c78610010000f5f5f500 mov dword ptr [esi + 0x110], 0xf5f5f5
// 008b14eb  c786ec000000ff000000 mov dword ptr [esi + 0xec], 0xff
// 008b14f5  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008b14fb  83f8ff               cmp eax, -1
// 008b14fe  7506                 jne 0x8b1506
// 008b1500  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008b1506  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 008b150c  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008b1512  83f8ff               cmp eax, -1
// 008b1515  7506                 jne 0x8b151d
// 008b1517  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008b151d  68b840ad00           push 0xad40b8
// 008b1522  6a00                 push 0
// 008b1524  8d8ec0020000         lea ecx, [esi + 0x2c0]
// 008b152a  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008b1530  e8dbbefcff           call 0x87d410
// 008b1535  68e419ac00           push 0xac19e4
// 008b153a  6a00                 push 0
// 008b153c  8d8ecc020000         lea ecx, [esi + 0x2cc]
// 008b1542  e8c9befcff           call 0x87d410
// 008b1547  686c18ad00           push 0xad186c
// 008b154c  6a00                 push 0
// 008b154e  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 008b1554  e8b7befcff           call 0x87d410
// 008b1559  e8823ef9ff           call 0x8453e0
// 008b155e  8bc8                 mov ecx, eax
// 008b1560  e82b39f9ff           call 0x844e90
// 008b1565  bbafba9100           mov ebx, 0x91baaf
// 008b156a  bfe5e5eb00           mov edi, 0xebe5e5
// 008b156f  bdbedafb00           mov ebp, 0xfbdabe
// 008b1574  85c0                 test eax, eax
// 008b1576  0f8586000000         jne 0x8b1602
// 008b157c  e85f3ef9ff           call 0x8453e0
// 008b1581  8bc8                 mov ecx, eax
// 008b1583  e8583cf9ff           call 0x8451e0
// 008b1588  48                   dec eax
// 008b1589  83f804               cmp eax, 4
// 008b158c  7774                 ja 0x8b1602
// 008b158e  ff2485901b8b00       jmp dword ptr [eax*4 + 0x8b1b90]
// 008b1595  c786bc0000007ba4e000 mov dword ptr [esi + 0xbc], 0xe0a47b
// 008b159f  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 008b15a5  c786980000003768b900 mov dword ptr [esi + 0x98], 0xb96837
// 008b15af  c74650eae9e100       mov dword ptr [esi + 0x50], 0xe1e9ea
// 008b15b6  eb40                 jmp 0x8b15f8
// 008b15b8  c786bc000000b5c48f00 mov dword ptr [esi + 0xbc], 0x8fc4b5
// 008b15c2  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 008b15c8  c7869800000073895400 mov dword ptr [esi + 0x98], 0x548973
// 008b15d2  c74650eae9e100       mov dword ptr [esi + 0x50], 0xe1e9ea
// 008b15d9  eb1d                 jmp 0x8b15f8
// 008b15db  c786bc000000a5a4bd00 mov dword ptr [esi + 0xbc], 0xbda4a5
// 008b15e5  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 008b15eb  c78698000000706f9100 mov dword ptr [esi + 0x98], 0x916f70
// 008b15f5  897e50               mov dword ptr [esi + 0x50], edi
// 008b15f8  c78604010000fdeec900 mov dword ptr [esi + 0x104], 0xc9eefd
// 008b1602  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 008b1608  83f804               cmp eax, 4
// 008b160b  0f8565030000         jne 0x8b1976
// 008b1611  83befc010000ff       cmp dword ptr [esi + 0x1fc], -1
// 008b1618  0f84d8010000         je 0x8b17f6
// 008b161e  e85dd7faff           call 0x85ed80
// 008b1623  8b86fc010000         mov eax, dword ptr [esi + 0x1fc]
// 008b1629  50                   push eax
// 008b162a  e811a9faff           call 0x85bf40
// 008b162f  8bd8                 mov ebx, eax
// 008b1631  89442418             mov dword ptr [esp + 0x18], eax
// 008b1635  c1eb08               shr ebx, 8
// 008b1638  e843d7faff           call 0x85ed80
// 008b163d  e83ed7faff           call 0x85ed80
// 008b1642  d905685ba700         fld dword ptr [0xa75b68]
// 008b1648  0fb6fb               movzx edi, bl
// 008b164b  d91c24               fstp dword ptr [esp]
// 008b164e  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 008b1653  8bef                 mov ebp, edi
// 008b1655  81cd00ef0000         or ebp, 0xef00
// 008b165b  8bc7                 mov eax, edi
// 008b165d  0d00d40000           or eax, 0xd400
// 008b1662  c1e508               shl ebp, 8
// 008b1665  c1e008               shl eax, 8
// 008b1668  0beb                 or ebp, ebx
// 008b166a  0bc3                 or eax, ebx
// 008b166c  55                   push ebp
// 008b166d  897c2418             mov dword ptr [esp + 0x18], edi
// 008b1671  8944241c             mov dword ptr [esp + 0x1c], eax
// 008b1675  e806abfaff           call 0x85c180
// 008b167a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008b167e  83c404               add esp, 4
// 008b1681  50                   push eax
// 008b1682  51                   push ecx
// 008b1683  e8f8aafaff           call 0x85c180
// 008b1688  83c404               add esp, 4
// 008b168b  50                   push eax
// 008b168c  8d8e94010000         lea ecx, [esi + 0x194]
// 008b1692  e87932f9ff           call 0x844910
// 008b1697  e8e4d6faff           call 0x85ed80
// 008b169c  e8dfd6faff           call 0x85ed80
// 008b16a1  d905685ba700         fld dword ptr [0xa75b68]
// 008b16a7  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b16ab  51                   push ecx
// 008b16ac  d91c24               fstp dword ptr [esp]
// 008b16af  52                   push edx
// 008b16b0  e8cbaafaff           call 0x85c180
// 008b16b5  83c404               add esp, 4
// 008b16b8  50                   push eax
// 008b16b9  55                   push ebp
// 008b16ba  e8c1aafaff           call 0x85c180
// 008b16bf  83c404               add esp, 4
// 008b16c2  50                   push eax
// 008b16c3  8d8e54010000         lea ecx, [esi + 0x154]
// 008b16c9  e84232f9ff           call 0x844910
// 008b16ce  e8add6faff           call 0x85ed80
// 008b16d3  db442410             fild dword ptr [esp + 0x10]
// 008b16d7  d97c2414             fnstcw word ptr [esp + 0x14]
// 008b16db  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 008b16e0  dd542418             fst qword ptr [esp + 0x18]
// 008b16e4  dc0db040ad00         fmul qword ptr [0xad40b0]
// 008b16ea  0d000c0000           or eax, 0xc00
// 008b16ef  89442410             mov dword ptr [esp + 0x10], eax
// 008b16f3  d96c2410             fldcw word ptr [esp + 0x10]
// 008b16f7  db5c2410             fistp dword ptr [esp + 0x10]
// 008b16fb  0fb6442410           movzx eax, byte ptr [esp + 0x10]
// 008b1700  0fb6c8               movzx ecx, al
// 008b1703  d96c2414             fldcw word ptr [esp + 0x14]
// 008b1707  81c900910000         or ecx, 0x9100
// 008b170d  c1e108               shl ecx, 8
// 008b1710  0bcb                 or ecx, ebx
// 008b1712  51                   push ecx
// 008b1713  e868aafaff           call 0x85c180
// 008b1718  8986b8010000         mov dword ptr [esi + 0x1b8], eax
// 008b171e  e85dd6faff           call 0x85ed80
// 008b1723  8bd7                 mov edx, edi
// 008b1725  81ca00c00000         or edx, 0xc000
// 008b172b  c1e208               shl edx, 8
// 008b172e  0bd3                 or edx, ebx
// 008b1730  52                   push edx
// 008b1731  e84aaafaff           call 0x85c180
// 008b1736  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008b173c  e83fd6faff           call 0x85ed80
// 008b1741  81cf00e30000         or edi, 0xe300
// 008b1747  c1e708               shl edi, 8
// 008b174a  0bfb                 or edi, ebx
// 008b174c  57                   push edi
// 008b174d  e82eaafaff           call 0x85c180
// 008b1752  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 008b1758  e823d6faff           call 0x85ed80
// 008b175d  dd442424             fld qword ptr [esp + 0x24]
// 008b1761  dc0d7030aa00         fmul qword ptr [0xaa3070]
// 008b1767  d97c2420             fnstcw word ptr [esp + 0x20]
// 008b176b  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 008b1770  0d000c0000           or eax, 0xc00
// 008b1775  8944241c             mov dword ptr [esp + 0x1c], eax
// 008b1779  d96c241c             fldcw word ptr [esp + 0x1c]
// 008b177d  db5c241c             fistp dword ptr [esp + 0x1c]
// 008b1781  0fb644241c           movzx eax, byte ptr [esp + 0x1c]
// 008b1786  0fb6c8               movzx ecx, al
// 008b1789  d96c2420             fldcw word ptr [esp + 0x20]
// 008b178d  81c9004f0000         or ecx, 0x4f00
// 008b1793  c1e108               shl ecx, 8
// 008b1796  0bcb                 or ecx, ebx
// 008b1798  51                   push ecx
// 008b1799  e8e2a9faff           call 0x85c180
// 008b179e  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 008b17a4  e8d7d5faff           call 0x85ed80
// 008b17a9  dd442428             fld qword ptr [esp + 0x28]
// 008b17ad  dc0da840ad00         fmul qword ptr [0xad40a8]
// 008b17b3  d97c2424             fnstcw word ptr [esp + 0x24]
// 008b17b7  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 008b17bc  0d000c0000           or eax, 0xc00
// 008b17c1  89442420             mov dword ptr [esp + 0x20], eax
// 008b17c5  d96c2420             fldcw word ptr [esp + 0x20]
// 008b17c9  db5c2420             fistp dword ptr [esp + 0x20]
// 008b17cd  8a542420             mov dl, byte ptr [esp + 0x20]
// 008b17d1  0fb6c2               movzx eax, dl
// 008b17d4  0d00d00000           or eax, 0xd000
// 008b17d9  d96c2424             fldcw word ptr [esp + 0x24]
// 008b17dd  c1e008               shl eax, 8
// 008b17e0  0bc3                 or eax, ebx
// 008b17e2  50                   push eax
// 008b17e3  e898a9faff           call 0x85c180
// 008b17e8  83c414               add esp, 0x14
// 008b17eb  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 008b17f1  e93b010000           jmp 0x8b1931
// 008b17f6  e8e53bf9ff           call 0x8453e0
// 008b17fb  8bc8                 mov ecx, eax
// 008b17fd  e8de39f9ff           call 0x8451e0
// 008b1802  d905685ba700         fld dword ptr [0xa75b68]
// 008b1808  83e802               sub eax, 2
// 008b180b  51                   push ecx
// 008b180c  d91c24               fstp dword ptr [esp]
// 008b180f  8d8e94010000         lea ecx, [esi + 0x194]
// 008b1815  0f84ba000000         je 0x8b18d5
// 008b181b  83e801               sub eax, 1
// 008b181e  7461                 je 0x8b1881
// 008b1820  68fcfdff00           push 0xfffdfc
// 008b1825  68c4ddff00           push 0xffddc4
// 008b182a  e8e130f9ff           call 0x844910
// 008b182f  d905685ba700         fld dword ptr [0xa75b68]
// 008b1835  8d8e54010000         lea ecx, [esi + 0x154]
// 008b183b  51                   push ecx
// 008b183c  d91c24               fstp dword ptr [esp]
// 008b183f  68c4ddff00           push 0xffddc4
// 008b1844  68fcfdff00           push 0xfffdfc
// 008b1849  e8c230f9ff           call 0x844910
// 008b184e  c786b80100006593cf00 mov dword ptr [esi + 0x1b8], 0xcf9365
// 008b1858  c786c40100009ac6ff00 mov dword ptr [esi + 0x1c4], 0xffc69a
// 008b1862  c786c8000000e3efff00 mov dword ptr [esi + 0xc8], 0xffefe3
// 008b186c  c786d0010000324b2c00 mov dword ptr [esi + 0x1d0], 0x2c4b32
// 008b1876  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 008b187c  e9b0000000           jmp 0x8b1931
// 008b1881  68fdfdfd00           push 0xfdfdfd
// 008b1886  68dddddd00           push 0xdddddd
// 008b188b  e88030f9ff           call 0x844910
// 008b1890  d905685ba700         fld dword ptr [0xa75b68]
// 008b1896  8d8e54010000         lea ecx, [esi + 0x154]
// 008b189c  51                   push ecx
// 008b189d  d91c24               fstp dword ptr [esp]
// 008b18a0  68dddddd00           push 0xdddddd
// 008b18a5  68fdfdfd00           push 0xfdfdfd
// 008b18aa  e86130f9ff           call 0x844910
// 008b18af  c786b801000093939300 mov dword ptr [esi + 0x1b8], 0x939393
// 008b18b9  c786c4010000c6c6c600 mov dword ptr [esi + 0x1c4], 0xc6c6c6
// 008b18c3  c786c8000000efefef00 mov dword ptr [esi + 0xc8], 0xefefef
// 008b18cd  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 008b18d3  eb52                 jmp 0x8b1927
// 008b18d5  68fdfdfd00           push 0xfdfdfd
// 008b18da  68a5b87200           push 0x72b8a5
// 008b18df  e82c30f9ff           call 0x844910
// 008b18e4  d905685ba700         fld dword ptr [0xa75b68]
// 008b18ea  8d8e54010000         lea ecx, [esi + 0x154]
// 008b18f0  51                   push ecx
// 008b18f1  d91c24               fstp dword ptr [esp]
// 008b18f4  68a5b87200           push 0x72b8a5
// 008b18f9  68fdfdfd00           push 0xfdfdfd
// 008b18fe  e80d30f9ff           call 0x844910
// 008b1903  c786b801000060805800 mov dword ptr [esi + 0x1b8], 0x588060
// 008b190d  c786c401000078b76800 mov dword ptr [esi + 0x1c4], 0x68b778
// 008b1917  c786c8000000d8e1bb00 mov dword ptr [esi + 0xc8], 0xbbe1d8
// 008b1921  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 008b1927  c786d00100004a4a4a00 mov dword ptr [esi + 0x1d0], 0x4a4a4a
// 008b1931  8d8654010000         lea eax, [esi + 0x154]
// 008b1937  50                   push eax
// 008b1938  8d8e74010000         lea ecx, [esi + 0x174]
// 008b193e  e8ed2ff9ff           call 0x844930
// 008b1943  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 008b1949  83f8ff               cmp eax, -1
// 008b194c  7506                 jne 0x8b1954
// 008b194e  8b86d0010000         mov eax, dword ptr [esi + 0x1d0]
// 008b1954  898698000000         mov dword ptr [esi + 0x98], eax
// 008b195a  8b86c8010000         mov eax, dword ptr [esi + 0x1c8]
// 008b1960  83f8ff               cmp eax, -1
// 008b1963  7506                 jne 0x8b196b
// 008b1965  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 008b196b  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 008b1971  e9ac010000           jmp 0x8b1b22
// 008b1976  83f803               cmp eax, 3
// 008b1979  0f85a3010000         jne 0x8b1b22
// 008b197f  e85c3af9ff           call 0x8453e0
// 008b1984  6a0f                 push 0xf
// 008b1986  8bc8                 mov ecx, eax
// 008b1988  e82332f9ff           call 0x844bb0
// 008b198d  8bd8                 mov ebx, eax
// 008b198f  e84c3af9ff           call 0x8453e0
// 008b1994  6a05                 push 5
// 008b1996  8bc8                 mov ecx, eax
// 008b1998  e81332f9ff           call 0x844bb0
// 008b199d  8be8                 mov ebp, eax
// 008b199f  e83c3af9ff           call 0x8453e0
// 008b19a4  6a0f                 push 0xf
// 008b19a6  8bc8                 mov ecx, eax
// 008b19a8  e80332f9ff           call 0x844bb0
// 008b19ad  89442410             mov dword ptr [esp + 0x10], eax
// 008b19b1  e82a3af9ff           call 0x8453e0
// 008b19b6  d905685ba700         fld dword ptr [0xa75b68]
// 008b19bc  51                   push ecx
// 008b19bd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b19c1  d91c24               fstp dword ptr [esp]
// 008b19c4  53                   push ebx
// 008b19c5  68cd000000           push 0xcd
// 008b19ca  55                   push ebp
// 008b19cb  51                   push ecx
// 008b19cc  8bc8                 mov ecx, eax
// 008b19ce  8dbe54010000         lea edi, [esi + 0x154]
// 008b19d4  e82731f9ff           call 0x844b00
// 008b19d9  50                   push eax
// 008b19da  8bcf                 mov ecx, edi
// 008b19dc  e82f2ff9ff           call 0x844910
// 008b19e1  e8fa39f9ff           call 0x8453e0
// 008b19e6  6a1f                 push 0x1f
// 008b19e8  8bc8                 mov ecx, eax
// 008b19ea  8d9e74010000         lea ebx, [esi + 0x174]
// 008b19f0  e8bb31f9ff           call 0x844bb0
// 008b19f5  50                   push eax
// 008b19f6  8bcb                 mov ecx, ebx
// 008b19f8  e83339f9ff           call 0x845330
// 008b19fd  e8de39f9ff           call 0x8453e0
// 008b1a02  6a21                 push 0x21
// 008b1a04  8bc8                 mov ecx, eax
// 008b1a06  8dae94010000         lea ebp, [esi + 0x194]
// 008b1a0c  e89f31f9ff           call 0x844bb0
// 008b1a11  50                   push eax
// 008b1a12  8bcd                 mov ecx, ebp
// 008b1a14  e81739f9ff           call 0x845330
// 008b1a19  e8c239f9ff           call 0x8453e0
// 008b1a1e  6a1e                 push 0x1e
// 008b1a20  8bc8                 mov ecx, eax
// 008b1a22  e88931f9ff           call 0x844bb0
// 008b1a27  8986b8010000         mov dword ptr [esi + 0x1b8], eax
// 008b1a2d  e8ae39f9ff           call 0x8453e0
// 008b1a32  6a27                 push 0x27
// 008b1a34  8bc8                 mov ecx, eax
// 008b1a36  e87531f9ff           call 0x844bb0
// 008b1a3b  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008b1a41  e89a39f9ff           call 0x8453e0
// 008b1a46  8bc8                 mov ecx, eax
// 008b1a48  e89337f9ff           call 0x8451e0
// 008b1a4d  48                   dec eax
// 008b1a4e  83f804               cmp eax, 4
// 008b1a51  0f87cb000000         ja 0x8b1b22
// 008b1a57  ff2485a41b8b00       jmp dword ptr [eax*4 + 0x8b1ba4]
// 008b1a5e  d905685ba700         fld dword ptr [0xa75b68]
// 008b1a64  51                   push ecx
// 008b1a65  d91c24               fstp dword ptr [esp]
// 008b1a68  6881a9e200           push 0xe2a981
// 008b1a6d  68ddecfe00           push 0xfeecdd
// 008b1a72  8bcf                 mov ecx, edi
// 008b1a74  e8972ef9ff           call 0x844910
// 008b1a79  c786b80100003b619c00 mov dword ptr [esi + 0x1b8], 0x9c613b
// 008b1a83  c786c40100006a8ccb00 mov dword ptr [esi + 0x1c4], 0xcb8c6a
// 008b1a8d  eb5d                 jmp 0x8b1aec
// 008b1a8f  d905685ba700         fld dword ptr [0xa75b68]
// 008b1a95  51                   push ecx
// 008b1a96  d91c24               fstp dword ptr [esp]
// 008b1a99  68b7c69100           push 0x91c6b7
// 008b1a9e  68f4f7de00           push 0xdef7f4
// 008b1aa3  8bcf                 mov ecx, edi
// 008b1aa5  e8662ef9ff           call 0x844910
// 008b1aaa  b860805800           mov eax, 0x588060
// 008b1aaf  8986b8010000         mov dword ptr [esi + 0x1b8], eax
// 008b1ab5  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008b1abb  eb2f                 jmp 0x8b1aec
// 008b1abd  d905685ba700         fld dword ptr [0xa75b68]
// 008b1ac3  51                   push ecx
// 008b1ac4  d91c24               fstp dword ptr [esp]
// 008b1ac7  689997b500           push 0xb59799
// 008b1acc  68f3f4fa00           push 0xfaf4f3
// 008b1ad1  8bcf                 mov ecx, edi
// 008b1ad3  e8382ef9ff           call 0x844910
// 008b1ad8  c786b80100007c7c9400 mov dword ptr [esi + 0x1b8], 0x947c7c
// 008b1ae2  c786c40100006e6d8f00 mov dword ptr [esi + 0x1c4], 0x8f6d6e
// 008b1aec  d905685ba700         fld dword ptr [0xa75b68]
// 008b1af2  51                   push ecx
// 008b1af3  d91c24               fstp dword ptr [esp]
// 008b1af6  68ffcf8b00           push 0x8bcfff
// 008b1afb  68fe8e4b00           push 0x4b8efe
// 008b1b00  8bcd                 mov ecx, ebp
// 008b1b02  e8092ef9ff           call 0x844910
// 008b1b07  d905685ba700         fld dword ptr [0xa75b68]
// 008b1b0d  51                   push ecx
// 008b1b0e  d91c24               fstp dword ptr [esp]
// 008b1b11  68ffd49700           push 0x97d4ff
// 008b1b16  68fff2c800           push 0xc8f2ff
// 008b1b1b  8bcb                 mov ecx, ebx
// 008b1b1d  e8ee2df9ff           call 0x844910
// 008b1b22  8d8e8c020000         lea ecx, [esi + 0x28c]
// 008b1b28  e8ef8af5ff           call 0x80a61c
// 008b1b2d  8d8e94020000         lea ecx, [esi + 0x294]
// 008b1b33  e8e48af5ff           call 0x80a61c
// 008b1b38  8d8e9c020000         lea ecx, [esi + 0x29c]
// 008b1b3e  e8d98af5ff           call 0x80a61c
// 008b1b43  b80f000000           mov eax, 0xf
// 008b1b48  8d542420             lea edx, [esp + 0x20]
// 008b1b4c  52                   push edx
// 008b1b4d  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 008b1b53  8986f4010000         mov dword ptr [esi + 0x1f4], eax
// 008b1b59  8b4634               mov eax, dword ptr [esi + 0x34]
// 008b1b5c  6a3c                 push 0x3c
// 008b1b5e  50                   push eax
// 008b1b5f  c786dc0100000000de00 mov dword ptr [esi + 0x1dc], 0xde0000
// 008b1b69  ff157c01a400         call dword ptr [0xa4017c]
// 008b1b6f  8d4c2420             lea ecx, [esp + 0x20]
// 008b1b73  51                   push ecx
// 008b1b74  8bce                 mov ecx, esi
// 008b1b76  e895d2ffff           call 0x8aee10
// 008b1b7b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008b1b7f  5f                   pop edi
// 008b1b80  5e                   pop esi
// 008b1b81  5d                   pop ebp
// 008b1b82  5b                   pop ebx
// 008b1b83  33cc                 xor ecx, esp
// 008b1b85  e86d9df5ff           call 0x80b8f7
// 008b1b8a  83c450               add esp, 0x50
// 008b1b8d  c3                   ret 
// 008b1b8e  8bff                 mov edi, edi
// 008b1b90  95                   xchg ebp, eax
// 008b1b91  158b00b815           adc eax, 0x15b8008b
// 008b1b96  8b00                 mov eax, dword ptr [eax]
// 008b1b98  db158b009515         fist dword ptr [0x1595008b]
// 008b1b9e  8b00                 mov eax, dword ptr [eax]
// 008b1ba0  95                   xchg ebp, eax
// 008b1ba1  158b005e1a           adc eax, 0x1a5e008b
// 008b1ba6  8b00                 mov eax, dword ptr [eax]
// copied from an identical function in another client (function ?RefreshMetrics@CXTPReportPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp