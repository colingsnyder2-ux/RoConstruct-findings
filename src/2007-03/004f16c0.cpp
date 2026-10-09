// roc 2007-03 004f16c0  unit: seg_004f0000  size: 2161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f16c0
//
// 004f16c0  55                   push ebp
// 004f16c1  8bec                 mov ebp, esp
// 004f16c3  83e4f8               and esp, 0xfffffff8
// 004f16c6  83ec64               sub esp, 0x64
// 004f16c9  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004f16cc  53                   push ebx
// 004f16cd  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 004f16d0  2bcb                 sub ecx, ebx
// 004f16d2  b867666666           mov eax, 0x66666667
// 004f16d7  f7e9                 imul ecx
// 004f16d9  c1fa05               sar edx, 5
// 004f16dc  8bc2                 mov eax, edx
// 004f16de  c1e81f               shr eax, 0x1f
// 004f16e1  03c2                 add eax, edx
// 004f16e3  99                   cdq 
// 004f16e4  56                   push esi
// 004f16e5  8b7514               mov esi, dword ptr [ebp + 0x14]
// 004f16e8  57                   push edi
// 004f16e9  2bc2                 sub eax, edx
// 004f16eb  d1f8                 sar eax, 1
// 004f16ed  8d3c80               lea edi, [eax + eax*4]
// 004f16f0  8b4510               mov eax, dword ptr [ebp + 0x10]
// 004f16f3  56                   push esi
// 004f16f4  83c0b0               add eax, -0x50
// 004f16f7  c1e704               shl edi, 4
// 004f16fa  50                   push eax
// 004f16fb  03fb                 add edi, ebx
// 004f16fd  57                   push edi
// 004f16fe  53                   push ebx
// 004f16ff  e8fcfdffff           call 0x4f1500
// 004f1704  83c410               add esp, 0x10
// 004f1707  397d0c               cmp dword ptr [ebp + 0xc], edi
// 004f170a  8d5f50               lea ebx, [edi + 0x50]
// 004f170d  895c2414             mov dword ptr [esp + 0x14], ebx
// 004f1711  732a                 jae 0x4f173d
// 004f1713  8d47b0               lea eax, [edi - 0x50]
// 004f1716  57                   push edi
// 004f1717  50                   push eax
// 004f1718  89442424             mov dword ptr [esp + 0x24], eax
// 004f171c  ffd6                 call esi
// 004f171e  83c408               add esp, 8
// 004f1721  84c0                 test al, al
// 004f1723  7518                 jne 0x4f173d
// 004f1725  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f1729  51                   push ecx
// 004f172a  57                   push edi
// 004f172b  ffd6                 call esi
// 004f172d  83c408               add esp, 8
// 004f1730  84c0                 test al, al
// 004f1732  7509                 jne 0x4f173d
// 004f1734  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004f1738  397d0c               cmp dword ptr [ebp + 0xc], edi
// 004f173b  72d6                 jb 0x4f1713
// 004f173d  3b5d10               cmp ebx, dword ptr [ebp + 0x10]
// 004f1740  7322                 jae 0x4f1764
// 004f1742  57                   push edi
// 004f1743  53                   push ebx
// 004f1744  ffd6                 call esi
// 004f1746  83c408               add esp, 8
// 004f1749  84c0                 test al, al
// 004f174b  7513                 jne 0x4f1760
// 004f174d  53                   push ebx
// 004f174e  57                   push edi
// 004f174f  ffd6                 call esi
// 004f1751  83c408               add esp, 8
// 004f1754  84c0                 test al, al
// 004f1756  7508                 jne 0x4f1760
// 004f1758  83c350               add ebx, 0x50
// 004f175b  3b5d10               cmp ebx, dword ptr [ebp + 0x10]
// 004f175e  72e2                 jb 0x4f1742
// 004f1760  895c2414             mov dword ptr [esp + 0x14], ebx
// 004f1764  8bc3                 mov eax, ebx
// 004f1766  89442410             mov dword ptr [esp + 0x10], eax
// 004f176a  897c2418             mov dword ptr [esp + 0x18], edi
// 004f176e  8bff                 mov edi, edi
// 004f1770  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 004f1773  0f833e010000         jae 0x4f18b7
// 004f1779  8d7018               lea esi, [eax + 0x18]
// 004f177c  eb06                 jmp 0x4f1784
// 004f177e  8bff                 mov edi, edi
// 004f1780  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f1784  50                   push eax
// 004f1785  57                   push edi
// 004f1786  ff5514               call dword ptr [ebp + 0x14]
// 004f1789  83c408               add esp, 8
// 004f178c  84c0                 test al, al
// 004f178e  0f8508010000         jne 0x4f189c
// 004f1794  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f1798  57                   push edi
// 004f1799  52                   push edx
// 004f179a  ff5514               call dword ptr [ebp + 0x14]
// 004f179d  83c408               add esp, 8
// 004f17a0  84c0                 test al, al
// 004f17a2  0f850b010000         jne 0x4f18b3
// 004f17a8  8344241450           add dword ptr [esp + 0x14], 0x50
// 004f17ad  53                   push ebx
// 004f17ae  8d4c2424             lea ecx, [esp + 0x24]
// 004f17b2  e8b932f8ff           call 0x474a70
// 004f17b7  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f17bb  d900                 fld dword ptr [eax]
// 004f17bd  d91b                 fstp dword ptr [ebx]
// 004f17bf  d946ec               fld dword ptr [esi - 0x14]
// 004f17c2  d95b04               fstp dword ptr [ebx + 4]
// 004f17c5  d946f0               fld dword ptr [esi - 0x10]
// 004f17c8  d95b08               fstp dword ptr [ebx + 8]
// 004f17cb  d946f4               fld dword ptr [esi - 0xc]
// 004f17ce  d95b0c               fstp dword ptr [ebx + 0xc]
// 004f17d1  d946f8               fld dword ptr [esi - 8]
// 004f17d4  d95b10               fstp dword ptr [ebx + 0x10]
// 004f17d7  d946fc               fld dword ptr [esi - 4]
// 004f17da  d95b14               fstp dword ptr [ebx + 0x14]
// 004f17dd  d906                 fld dword ptr [esi]
// 004f17df  d95b18               fstp dword ptr [ebx + 0x18]
// 004f17e2  dd4608               fld qword ptr [esi + 8]
// 004f17e5  dd5b20               fstp qword ptr [ebx + 0x20]
// 004f17e8  dd4610               fld qword ptr [esi + 0x10]
// 004f17eb  dd5b28               fstp qword ptr [ebx + 0x28]
// 004f17ee  dd4618               fld qword ptr [esi + 0x18]
// 004f17f1  dd5b30               fstp qword ptr [ebx + 0x30]
// 004f17f4  dd4620               fld qword ptr [esi + 0x20]
// 004f17f7  dd5b38               fstp qword ptr [ebx + 0x38]
// 004f17fa  d94628               fld dword ptr [esi + 0x28]
// 004f17fd  d95b40               fstp dword ptr [ebx + 0x40]
// 004f1800  d9462c               fld dword ptr [esi + 0x2c]
// 004f1803  d95b44               fstp dword ptr [ebx + 0x44]
// 004f1806  d94630               fld dword ptr [esi + 0x30]
// 004f1809  d95b48               fstp dword ptr [ebx + 0x48]
// 004f180c  0fb64e34             movzx ecx, byte ptr [esi + 0x34]
// 004f1810  d9442420             fld dword ptr [esp + 0x20]
// 004f1814  884b4c               mov byte ptr [ebx + 0x4c], cl
// 004f1817  0fb65635             movzx edx, byte ptr [esi + 0x35]
// 004f181b  88534d               mov byte ptr [ebx + 0x4d], dl
// 004f181e  0fb64e36             movzx ecx, byte ptr [esi + 0x36]
// 004f1822  884b4e               mov byte ptr [ebx + 0x4e], cl
// 004f1825  0fb654246c           movzx edx, byte ptr [esp + 0x6c]
// 004f182a  d918                 fstp dword ptr [eax]
// 004f182c  d9442424             fld dword ptr [esp + 0x24]
// 004f1830  d95eec               fstp dword ptr [esi - 0x14]
// 004f1833  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004f1838  d9442428             fld dword ptr [esp + 0x28]
// 004f183c  d95ef0               fstp dword ptr [esi - 0x10]
// 004f183f  d944242c             fld dword ptr [esp + 0x2c]
// 004f1843  8a44246d             mov al, byte ptr [esp + 0x6d]
// 004f1847  d95ef4               fstp dword ptr [esi - 0xc]
// 004f184a  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004f184e  d9442430             fld dword ptr [esp + 0x30]
// 004f1852  d95ef8               fstp dword ptr [esi - 8]
// 004f1855  d9442434             fld dword ptr [esp + 0x34]
// 004f1859  d95efc               fstp dword ptr [esi - 4]
// 004f185c  d9442438             fld dword ptr [esp + 0x38]
// 004f1860  d91e                 fstp dword ptr [esi]
// 004f1862  dd442440             fld qword ptr [esp + 0x40]
// 004f1866  dd5e08               fstp qword ptr [esi + 8]
// 004f1869  dd442448             fld qword ptr [esp + 0x48]
// 004f186d  dd5e10               fstp qword ptr [esi + 0x10]
// 004f1870  dd442450             fld qword ptr [esp + 0x50]
// 004f1874  dd5e18               fstp qword ptr [esi + 0x18]
// 004f1877  dd442458             fld qword ptr [esp + 0x58]
// 004f187b  dd5e20               fstp qword ptr [esi + 0x20]
// 004f187e  d9442460             fld dword ptr [esp + 0x60]
// 004f1882  d95e28               fstp dword ptr [esi + 0x28]
// 004f1885  d9442464             fld dword ptr [esp + 0x64]
// 004f1889  d95e2c               fstp dword ptr [esi + 0x2c]
// 004f188c  d9442468             fld dword ptr [esp + 0x68]
// 004f1890  d95e30               fstp dword ptr [esi + 0x30]
// 004f1893  885634               mov byte ptr [esi + 0x34], dl
// 004f1896  884635               mov byte ptr [esi + 0x35], al
// 004f1899  884e36               mov byte ptr [esi + 0x36], cl
// 004f189c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f18a0  83c050               add eax, 0x50
// 004f18a3  83c650               add esi, 0x50
// 004f18a6  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 004f18a9  89442410             mov dword ptr [esp + 0x10], eax
// 004f18ad  0f82cdfeffff         jb 0x4f1780
// 004f18b3  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f18b7  8b742418             mov esi, dword ptr [esp + 0x18]
// 004f18bb  39750c               cmp dword ptr [ebp + 0xc], esi
// 004f18be  0f8341010000         jae 0x4f1a05
// 004f18c4  8d5718               lea edx, [edi + 0x18]
// 004f18c7  8954241c             mov dword ptr [esp + 0x1c], edx
// 004f18cb  83c6c8               add esi, -0x38
// 004f18ce  8bff                 mov edi, edi
// 004f18d0  8d46e8               lea eax, [esi - 0x18]
// 004f18d3  57                   push edi
// 004f18d4  50                   push eax
// 004f18d5  ff5514               call dword ptr [ebp + 0x14]
// 004f18d8  83c408               add esp, 8
// 004f18db  84c0                 test al, al
// 004f18dd  0f8507010000         jne 0x4f19ea
// 004f18e3  8d46e8               lea eax, [esi - 0x18]
// 004f18e6  50                   push eax
// 004f18e7  57                   push edi
// 004f18e8  ff5514               call dword ptr [ebp + 0x14]
// 004f18eb  83c408               add esp, 8
// 004f18ee  84c0                 test al, al
// 004f18f0  0f850b010000         jne 0x4f1a01
// 004f18f6  836c241c50           sub dword ptr [esp + 0x1c], 0x50
// 004f18fb  83ef50               sub edi, 0x50
// 004f18fe  57                   push edi
// 004f18ff  8d4c2424             lea ecx, [esp + 0x24]
// 004f1903  e86831f8ff           call 0x474a70
// 004f1908  d946e8               fld dword ptr [esi - 0x18]
// 004f190b  d91f                 fstp dword ptr [edi]
// 004f190d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f1911  d946ec               fld dword ptr [esi - 0x14]
// 004f1914  d958ec               fstp dword ptr [eax - 0x14]
// 004f1917  d946f0               fld dword ptr [esi - 0x10]
// 004f191a  d958f0               fstp dword ptr [eax - 0x10]
// 004f191d  d946f4               fld dword ptr [esi - 0xc]
// 004f1920  d958f4               fstp dword ptr [eax - 0xc]
// 004f1923  d946f8               fld dword ptr [esi - 8]
// 004f1926  d958f8               fstp dword ptr [eax - 8]
// 004f1929  d946fc               fld dword ptr [esi - 4]
// 004f192c  d958fc               fstp dword ptr [eax - 4]
// 004f192f  d906                 fld dword ptr [esi]
// 004f1931  d918                 fstp dword ptr [eax]
// 004f1933  dd4608               fld qword ptr [esi + 8]
// 004f1936  dd5808               fstp qword ptr [eax + 8]
// 004f1939  dd4610               fld qword ptr [esi + 0x10]
// 004f193c  dd5810               fstp qword ptr [eax + 0x10]
// 004f193f  dd4618               fld qword ptr [esi + 0x18]
// 004f1942  dd5818               fstp qword ptr [eax + 0x18]
// 004f1945  dd4620               fld qword ptr [esi + 0x20]
// 004f1948  dd5820               fstp qword ptr [eax + 0x20]
// 004f194b  d94628               fld dword ptr [esi + 0x28]
// 004f194e  d95828               fstp dword ptr [eax + 0x28]
// 004f1951  d9462c               fld dword ptr [esi + 0x2c]
// 004f1954  d9582c               fstp dword ptr [eax + 0x2c]
// 004f1957  d94630               fld dword ptr [esi + 0x30]
// 004f195a  d95830               fstp dword ptr [eax + 0x30]
// 004f195d  0fb64e34             movzx ecx, byte ptr [esi + 0x34]
// 004f1961  d9442420             fld dword ptr [esp + 0x20]
// 004f1965  884834               mov byte ptr [eax + 0x34], cl
// 004f1968  0fb65635             movzx edx, byte ptr [esi + 0x35]
// 004f196c  885035               mov byte ptr [eax + 0x35], dl
// 004f196f  0fb64e36             movzx ecx, byte ptr [esi + 0x36]
// 004f1973  884836               mov byte ptr [eax + 0x36], cl
// 004f1976  0fb654246c           movzx edx, byte ptr [esp + 0x6c]
// 004f197b  d95ee8               fstp dword ptr [esi - 0x18]
// 004f197e  d9442424             fld dword ptr [esp + 0x24]
// 004f1982  d95eec               fstp dword ptr [esi - 0x14]
// 004f1985  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004f198a  d9442428             fld dword ptr [esp + 0x28]
// 004f198e  d95ef0               fstp dword ptr [esi - 0x10]
// 004f1991  d944242c             fld dword ptr [esp + 0x2c]
// 004f1995  8a44246d             mov al, byte ptr [esp + 0x6d]
// 004f1999  d95ef4               fstp dword ptr [esi - 0xc]
// 004f199c  d9442430             fld dword ptr [esp + 0x30]
// 004f19a0  d95ef8               fstp dword ptr [esi - 8]
// 004f19a3  d9442434             fld dword ptr [esp + 0x34]
// 004f19a7  d95efc               fstp dword ptr [esi - 4]
// 004f19aa  d9442438             fld dword ptr [esp + 0x38]
// 004f19ae  d91e                 fstp dword ptr [esi]
// 004f19b0  dd442440             fld qword ptr [esp + 0x40]
// 004f19b4  dd5e08               fstp qword ptr [esi + 8]
// 004f19b7  dd442448             fld qword ptr [esp + 0x48]
// 004f19bb  dd5e10               fstp qword ptr [esi + 0x10]
// 004f19be  dd442450             fld qword ptr [esp + 0x50]
// 004f19c2  dd5e18               fstp qword ptr [esi + 0x18]
// 004f19c5  dd442458             fld qword ptr [esp + 0x58]
// 004f19c9  dd5e20               fstp qword ptr [esi + 0x20]
// 004f19cc  d9442460             fld dword ptr [esp + 0x60]
// 004f19d0  d95e28               fstp dword ptr [esi + 0x28]
// 004f19d3  d9442464             fld dword ptr [esp + 0x64]
// 004f19d7  d95e2c               fstp dword ptr [esi + 0x2c]
// 004f19da  d9442468             fld dword ptr [esp + 0x68]
// 004f19de  d95e30               fstp dword ptr [esi + 0x30]
// 004f19e1  885634               mov byte ptr [esi + 0x34], dl
// 004f19e4  884635               mov byte ptr [esi + 0x35], al
// 004f19e7  884e36               mov byte ptr [esi + 0x36], cl
// 004f19ea  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f19ee  83e850               sub eax, 0x50
// 004f19f1  83ee50               sub esi, 0x50
// 004f19f4  39450c               cmp dword ptr [ebp + 0xc], eax
// 004f19f7  89442418             mov dword ptr [esp + 0x18], eax
// 004f19fb  0f82cffeffff         jb 0x4f18d0
// 004f1a01  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f1a05  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004f1a09  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 004f1a0c  0f850e020000         jne 0x4f1c20
// 004f1a12  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 004f1a15  0f8407050000         je 0x4f1f22
// 004f1a1b  3bd8                 cmp ebx, eax
// 004f1a1d  0f84ee000000         je 0x4f1b11
// 004f1a23  57                   push edi
// 004f1a24  8d4c2424             lea ecx, [esp + 0x24]
// 004f1a28  e84330f8ff           call 0x474a70
// 004f1a2d  d903                 fld dword ptr [ebx]
// 004f1a2f  d91f                 fstp dword ptr [edi]
// 004f1a31  d94304               fld dword ptr [ebx + 4]
// 004f1a34  d95f04               fstp dword ptr [edi + 4]
// 004f1a37  d94308               fld dword ptr [ebx + 8]
// 004f1a3a  d95f08               fstp dword ptr [edi + 8]
// 004f1a3d  d9430c               fld dword ptr [ebx + 0xc]
// 004f1a40  d95f0c               fstp dword ptr [edi + 0xc]
// 004f1a43  d94310               fld dword ptr [ebx + 0x10]
// 004f1a46  d95f10               fstp dword ptr [edi + 0x10]
// 004f1a49  d94314               fld dword ptr [ebx + 0x14]
// 004f1a4c  d95f14               fstp dword ptr [edi + 0x14]
// 004f1a4f  d94318               fld dword ptr [ebx + 0x18]
// 004f1a52  d95f18               fstp dword ptr [edi + 0x18]
// 004f1a55  dd4320               fld qword ptr [ebx + 0x20]
// 004f1a58  dd5f20               fstp qword ptr [edi + 0x20]
// 004f1a5b  dd4328               fld qword ptr [ebx + 0x28]
// 004f1a5e  dd5f28               fstp qword ptr [edi + 0x28]
// 004f1a61  dd4330               fld qword ptr [ebx + 0x30]
// 004f1a64  dd5f30               fstp qword ptr [edi + 0x30]
// 004f1a67  dd4338               fld qword ptr [ebx + 0x38]
// 004f1a6a  dd5f38               fstp qword ptr [edi + 0x38]
// 004f1a6d  d94340               fld dword ptr [ebx + 0x40]
// 004f1a70  d95f40               fstp dword ptr [edi + 0x40]
// 004f1a73  d94344               fld dword ptr [ebx + 0x44]
// 004f1a76  d95f44               fstp dword ptr [edi + 0x44]
// 004f1a79  d94348               fld dword ptr [ebx + 0x48]
// 004f1a7c  d95f48               fstp dword ptr [edi + 0x48]
// 004f1a7f  0fb6534c             movzx edx, byte ptr [ebx + 0x4c]
// 004f1a83  d9442420             fld dword ptr [esp + 0x20]
// 004f1a87  88574c               mov byte ptr [edi + 0x4c], dl
// 004f1a8a  0fb6434d             movzx eax, byte ptr [ebx + 0x4d]
// 004f1a8e  88474d               mov byte ptr [edi + 0x4d], al
// 004f1a91  0fb64b4e             movzx ecx, byte ptr [ebx + 0x4e]
// 004f1a95  884f4e               mov byte ptr [edi + 0x4e], cl
// 004f1a98  0fb644246d           movzx eax, byte ptr [esp + 0x6d]
// 004f1a9d  d91b                 fstp dword ptr [ebx]
// 004f1a9f  d9442424             fld dword ptr [esp + 0x24]
// 004f1aa3  d95b04               fstp dword ptr [ebx + 4]
// 004f1aa6  0fb654246c           movzx edx, byte ptr [esp + 0x6c]
// 004f1aab  d9442428             fld dword ptr [esp + 0x28]
// 004f1aaf  d95b08               fstp dword ptr [ebx + 8]
// 004f1ab2  d944242c             fld dword ptr [esp + 0x2c]
// 004f1ab6  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004f1abb  d95b0c               fstp dword ptr [ebx + 0xc]
// 004f1abe  d9442430             fld dword ptr [esp + 0x30]
// 004f1ac2  d95b10               fstp dword ptr [ebx + 0x10]
// 004f1ac5  d9442434             fld dword ptr [esp + 0x34]
// 004f1ac9  d95b14               fstp dword ptr [ebx + 0x14]
// 004f1acc  d9442438             fld dword ptr [esp + 0x38]
// 004f1ad0  d95b18               fstp dword ptr [ebx + 0x18]
// 004f1ad3  dd442440             fld qword ptr [esp + 0x40]
// 004f1ad7  dd5b20               fstp qword ptr [ebx + 0x20]
// 004f1ada  dd442448             fld qword ptr [esp + 0x48]
// 004f1ade  dd5b28               fstp qword ptr [ebx + 0x28]
// 004f1ae1  dd442450             fld qword ptr [esp + 0x50]
// 004f1ae5  dd5b30               fstp qword ptr [ebx + 0x30]
// 004f1ae8  dd442458             fld qword ptr [esp + 0x58]
// 004f1aec  dd5b38               fstp qword ptr [ebx + 0x38]
// 004f1aef  d9442460             fld dword ptr [esp + 0x60]
// 004f1af3  d95b40               fstp dword ptr [ebx + 0x40]
// 004f1af6  d9442464             fld dword ptr [esp + 0x64]
// 004f1afa  d95b44               fstp dword ptr [ebx + 0x44]
// 004f1afd  d9442468             fld dword ptr [esp + 0x68]
// 004f1b01  d95b48               fstp dword ptr [ebx + 0x48]
// 004f1b04  88434d               mov byte ptr [ebx + 0x4d], al
// 004f1b07  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f1b0b  88534c               mov byte ptr [ebx + 0x4c], dl
// 004f1b0e  884b4e               mov byte ptr [ebx + 0x4e], cl
// 004f1b11  8bcf                 mov ecx, edi
// 004f1b13  8bf0                 mov esi, eax
// 004f1b15  83c350               add ebx, 0x50
// 004f1b18  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004f1b1c  83c050               add eax, 0x50
// 004f1b1f  51                   push ecx
// 004f1b20  8d4c2424             lea ecx, [esp + 0x24]
// 004f1b24  895c2418             mov dword ptr [esp + 0x18], ebx
// 004f1b28  83c750               add edi, 0x50
// 004f1b2b  89442414             mov dword ptr [esp + 0x14], eax
// 004f1b2f  e83c2ff8ff           call 0x474a70
// 004f1b34  d906                 fld dword ptr [esi]
// 004f1b36  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f1b3a  d918                 fstp dword ptr [eax]
// 004f1b3c  d94604               fld dword ptr [esi + 4]
// 004f1b3f  d95804               fstp dword ptr [eax + 4]
// 004f1b42  d94608               fld dword ptr [esi + 8]
// 004f1b45  d95808               fstp dword ptr [eax + 8]
// 004f1b48  d9460c               fld dword ptr [esi + 0xc]
// 004f1b4b  d9580c               fstp dword ptr [eax + 0xc]
// 004f1b4e  d94610               fld dword ptr [esi + 0x10]
// 004f1b51  d95810               fstp dword ptr [eax + 0x10]
// 004f1b54  d94614               fld dword ptr [esi + 0x14]
// 004f1b57  d95814               fstp dword ptr [eax + 0x14]
// 004f1b5a  d94618               fld dword ptr [esi + 0x18]
// 004f1b5d  d95818               fstp dword ptr [eax + 0x18]
// 004f1b60  dd4620               fld qword ptr [esi + 0x20]
// 004f1b63  dd5820               fstp qword ptr [eax + 0x20]
// 004f1b66  dd4628               fld qword ptr [esi + 0x28]
// 004f1b69  dd5828               fstp qword ptr [eax + 0x28]
// 004f1b6c  dd4630               fld qword ptr [esi + 0x30]
// 004f1b6f  dd5830               fstp qword ptr [eax + 0x30]
// 004f1b72  dd4638               fld qword ptr [esi + 0x38]
// 004f1b75  dd5838               fstp qword ptr [eax + 0x38]
// 004f1b78  d94640               fld dword ptr [esi + 0x40]
// 004f1b7b  d95840               fstp dword ptr [eax + 0x40]
// 004f1b7e  d94644               fld dword ptr [esi + 0x44]
// 004f1b81  d95844               fstp dword ptr [eax + 0x44]
// 004f1b84  d94648               fld dword ptr [esi + 0x48]
// 004f1b87  d95848               fstp dword ptr [eax + 0x48]
// 004f1b8a  0fb6564c             movzx edx, byte ptr [esi + 0x4c]
// 004f1b8e  d9442420             fld dword ptr [esp + 0x20]
// 004f1b92  88504c               mov byte ptr [eax + 0x4c], dl
// 004f1b95  0fb64e4d             movzx ecx, byte ptr [esi + 0x4d]
// 004f1b99  88484d               mov byte ptr [eax + 0x4d], cl
// 004f1b9c  0fb6564e             movzx edx, byte ptr [esi + 0x4e]
// 004f1ba0  88504e               mov byte ptr [eax + 0x4e], dl
// 004f1ba3  8a44246c             mov al, byte ptr [esp + 0x6c]
// 004f1ba7  d91e                 fstp dword ptr [esi]
// 004f1ba9  0fb64c246d           movzx ecx, byte ptr [esp + 0x6d]
// 004f1bae  d9442424             fld dword ptr [esp + 0x24]
// 004f1bb2  d95e04               fstp dword ptr [esi + 4]
// 004f1bb5  d9442428             fld dword ptr [esp + 0x28]
// 004f1bb9  0fb654246e           movzx edx, byte ptr [esp + 0x6e]
// 004f1bbe  d95e08               fstp dword ptr [esi + 8]
// 004f1bc1  d944242c             fld dword ptr [esp + 0x2c]
// 004f1bc5  d95e0c               fstp dword ptr [esi + 0xc]
// 004f1bc8  d9442430             fld dword ptr [esp + 0x30]
// 004f1bcc  d95e10               fstp dword ptr [esi + 0x10]
// 004f1bcf  d9442434             fld dword ptr [esp + 0x34]
// 004f1bd3  d95e14               fstp dword ptr [esi + 0x14]
// 004f1bd6  d9442438             fld dword ptr [esp + 0x38]
// 004f1bda  d95e18               fstp dword ptr [esi + 0x18]
// 004f1bdd  dd442440             fld qword ptr [esp + 0x40]
// 004f1be1  dd5e20               fstp qword ptr [esi + 0x20]
// 004f1be4  dd442448             fld qword ptr [esp + 0x48]
// 004f1be8  dd5e28               fstp qword ptr [esi + 0x28]
// 004f1beb  dd442450             fld qword ptr [esp + 0x50]
// 004f1bef  dd5e30               fstp qword ptr [esi + 0x30]
// 004f1bf2  dd442458             fld qword ptr [esp + 0x58]
// 004f1bf6  dd5e38               fstp qword ptr [esi + 0x38]
// 004f1bf9  d9442460             fld dword ptr [esp + 0x60]
// 004f1bfd  d95e40               fstp dword ptr [esi + 0x40]
// 004f1c00  d9442464             fld dword ptr [esp + 0x64]
// 004f1c04  d95e44               fstp dword ptr [esi + 0x44]
// 004f1c07  d9442468             fld dword ptr [esp + 0x68]
// 004f1c0b  d95e48               fstp dword ptr [esi + 0x48]
// 004f1c0e  88464c               mov byte ptr [esi + 0x4c], al
// 004f1c11  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f1c15  884e4d               mov byte ptr [esi + 0x4d], cl
// 004f1c18  88564e               mov byte ptr [esi + 0x4e], dl
// 004f1c1b  e950fbffff           jmp 0x4f1770
// 004f1c20  83e950               sub ecx, 0x50
// 004f1c23  3b4510               cmp eax, dword ptr [ebp + 0x10]
// 004f1c26  894c2418             mov dword ptr [esp + 0x18], ecx
// 004f1c2a  0f85f2010000         jne 0x4f1e22
// 004f1c30  83ef50               sub edi, 0x50
// 004f1c33  3bcf                 cmp ecx, edi
// 004f1c35  0f84ed000000         je 0x4f1d28
// 004f1c3b  51                   push ecx
// 004f1c3c  8d4c2424             lea ecx, [esp + 0x24]
// 004f1c40  e82b2ef8ff           call 0x474a70
// 004f1c45  d907                 fld dword ptr [edi]
// 004f1c47  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f1c4b  d918                 fstp dword ptr [eax]
// 004f1c4d  d94704               fld dword ptr [edi + 4]
// 004f1c50  d95804               fstp dword ptr [eax + 4]
// 004f1c53  d94708               fld dword ptr [edi + 8]
// 004f1c56  d95808               fstp dword ptr [eax + 8]
// 004f1c59  d9470c               fld dword ptr [edi + 0xc]
// 004f1c5c  d9580c               fstp dword ptr [eax + 0xc]
// 004f1c5f  d94710               fld dword ptr [edi + 0x10]
// 004f1c62  d95810               fstp dword ptr [eax + 0x10]
// 004f1c65  d94714               fld dword ptr [edi + 0x14]
// 004f1c68  d95814               fstp dword ptr [eax + 0x14]
// 004f1c6b  d94718               fld dword ptr [edi + 0x18]
// 004f1c6e  d95818               fstp dword ptr [eax + 0x18]
// 004f1c71  dd4720               fld qword ptr [edi + 0x20]
// 004f1c74  dd5820               fstp qword ptr [eax + 0x20]
// 004f1c77  dd4728               fld qword ptr [edi + 0x28]
// 004f1c7a  dd5828               fstp qword ptr [eax + 0x28]
// 004f1c7d  dd4730               fld qword ptr [edi + 0x30]
// 004f1c80  dd5830               fstp qword ptr [eax + 0x30]
// 004f1c83  dd4738               fld qword ptr [edi + 0x38]
// 004f1c86  dd5838               fstp qword ptr [eax + 0x38]
// 004f1c89  d94740               fld dword ptr [edi + 0x40]
// 004f1c8c  d95840               fstp dword ptr [eax + 0x40]
// 004f1c8f  d94744               fld dword ptr [edi + 0x44]
// 004f1c92  d95844               fstp dword ptr [eax + 0x44]
// 004f1c95  d94748               fld dword ptr [edi + 0x48]
// 004f1c98  d95848               fstp dword ptr [eax + 0x48]
// 004f1c9b  0fb64f4c             movzx ecx, byte ptr [edi + 0x4c]
// 004f1c9f  d9442420             fld dword ptr [esp + 0x20]
// 004f1ca3  88484c               mov byte ptr [eax + 0x4c], cl
// 004f1ca6  0fb6574d             movzx edx, byte ptr [edi + 0x4d]
// 004f1caa  88504d               mov byte ptr [eax + 0x4d], dl
// 004f1cad  0fb64f4e             movzx ecx, byte ptr [edi + 0x4e]
// 004f1cb1  88484e               mov byte ptr [eax + 0x4e], cl
// 004f1cb4  0fb654246c           movzx edx, byte ptr [esp + 0x6c]
// 004f1cb9  d91f                 fstp dword ptr [edi]
// 004f1cbb  d9442424             fld dword ptr [esp + 0x24]
// 004f1cbf  d95f04               fstp dword ptr [edi + 4]
// 004f1cc2  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004f1cc7  d9442428             fld dword ptr [esp + 0x28]
// 004f1ccb  d95f08               fstp dword ptr [edi + 8]
// 004f1cce  d944242c             fld dword ptr [esp + 0x2c]
// 004f1cd2  8a44246d             mov al, byte ptr [esp + 0x6d]
// 004f1cd6  d95f0c               fstp dword ptr [edi + 0xc]
// 004f1cd9  d9442430             fld dword ptr [esp + 0x30]
// 004f1cdd  d95f10               fstp dword ptr [edi + 0x10]
// 004f1ce0  d9442434             fld dword ptr [esp + 0x34]
// 004f1ce4  d95f14               fstp dword ptr [edi + 0x14]
// 004f1ce7  d9442438             fld dword ptr [esp + 0x38]
// 004f1ceb  d95f18               fstp dword ptr [edi + 0x18]
// 004f1cee  dd442440             fld qword ptr [esp + 0x40]
// 004f1cf2  dd5f20               fstp qword ptr [edi + 0x20]
// 004f1cf5  dd442448             fld qword ptr [esp + 0x48]
// 004f1cf9  dd5f28               fstp qword ptr [edi + 0x28]
// 004f1cfc  dd442450             fld qword ptr [esp + 0x50]
// 004f1d00  dd5f30               fstp qword ptr [edi + 0x30]
// 004f1d03  dd442458             fld qword ptr [esp + 0x58]
// 004f1d07  dd5f38               fstp qword ptr [edi + 0x38]
// 004f1d0a  d9442460             fld dword ptr [esp + 0x60]
// 004f1d0e  d95f40               fstp dword ptr [edi + 0x40]
// 004f1d11  d9442464             fld dword ptr [esp + 0x64]
// 004f1d15  d95f44               fstp dword ptr [edi + 0x44]
// 004f1d18  d9442468             fld dword ptr [esp + 0x68]
// 004f1d1c  d95f48               fstp dword ptr [edi + 0x48]
// 004f1d1f  88574c               mov byte ptr [edi + 0x4c], dl
// 004f1d22  88474d               mov byte ptr [edi + 0x4d], al
// 004f1d25  884f4e               mov byte ptr [edi + 0x4e], cl
// 004f1d28  83eb50               sub ebx, 0x50
// 004f1d2b  57                   push edi
// 004f1d2c  8d4c2424             lea ecx, [esp + 0x24]
// 004f1d30  895c2418             mov dword ptr [esp + 0x18], ebx
// 004f1d34  e8372df8ff           call 0x474a70
// 004f1d39  d903                 fld dword ptr [ebx]
// 004f1d3b  d91f                 fstp dword ptr [edi]
// 004f1d3d  d94304               fld dword ptr [ebx + 4]
// 004f1d40  d95f04               fstp dword ptr [edi + 4]
// 004f1d43  d94308               fld dword ptr [ebx + 8]
// 004f1d46  d95f08               fstp dword ptr [edi + 8]
// 004f1d49  d9430c               fld dword ptr [ebx + 0xc]
// 004f1d4c  d95f0c               fstp dword ptr [edi + 0xc]
// 004f1d4f  d94310               fld dword ptr [ebx + 0x10]
// 004f1d52  d95f10               fstp dword ptr [edi + 0x10]
// 004f1d55  d94314               fld dword ptr [ebx + 0x14]
// 004f1d58  d95f14               fstp dword ptr [edi + 0x14]
// 004f1d5b  d94318               fld dword ptr [ebx + 0x18]
// 004f1d5e  d95f18               fstp dword ptr [edi + 0x18]
// 004f1d61  dd4320               fld qword ptr [ebx + 0x20]
// 004f1d64  dd5f20               fstp qword ptr [edi + 0x20]
// 004f1d67  dd4328               fld qword ptr [ebx + 0x28]
// 004f1d6a  dd5f28               fstp qword ptr [edi + 0x28]
// 004f1d6d  dd4330               fld qword ptr [ebx + 0x30]
// 004f1d70  dd5f30               fstp qword ptr [edi + 0x30]
// 004f1d73  dd4338               fld qword ptr [ebx + 0x38]
// 004f1d76  dd5f38               fstp qword ptr [edi + 0x38]
// 004f1d79  d94340               fld dword ptr [ebx + 0x40]
// 004f1d7c  d95f40               fstp dword ptr [edi + 0x40]
// 004f1d7f  d94344               fld dword ptr [ebx + 0x44]
// 004f1d82  d95f44               fstp dword ptr [edi + 0x44]
// 004f1d85  d94348               fld dword ptr [ebx + 0x48]
// 004f1d88  d95f48               fstp dword ptr [edi + 0x48]
// 004f1d8b  0fb6534c             movzx edx, byte ptr [ebx + 0x4c]
// 004f1d8f  d9442420             fld dword ptr [esp + 0x20]
// 004f1d93  88574c               mov byte ptr [edi + 0x4c], dl
// 004f1d96  0fb6434d             movzx eax, byte ptr [ebx + 0x4d]
// 004f1d9a  88474d               mov byte ptr [edi + 0x4d], al
// 004f1d9d  0fb64b4e             movzx ecx, byte ptr [ebx + 0x4e]
// 004f1da1  884f4e               mov byte ptr [edi + 0x4e], cl
// 004f1da4  0fb644246d           movzx eax, byte ptr [esp + 0x6d]
// 004f1da9  d91b                 fstp dword ptr [ebx]
// 004f1dab  d9442424             fld dword ptr [esp + 0x24]
// 004f1daf  d95b04               fstp dword ptr [ebx + 4]
// 004f1db2  0fb654246c           movzx edx, byte ptr [esp + 0x6c]
// 004f1db7  d9442428             fld dword ptr [esp + 0x28]
// 004f1dbb  d95b08               fstp dword ptr [ebx + 8]
// 004f1dbe  d944242c             fld dword ptr [esp + 0x2c]
// 004f1dc2  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004f1dc7  d95b0c               fstp dword ptr [ebx + 0xc]
// 004f1dca  d9442430             fld dword ptr [esp + 0x30]
// 004f1dce  d95b10               fstp dword ptr [ebx + 0x10]
// 004f1dd1  d9442434             fld dword ptr [esp + 0x34]
// 004f1dd5  d95b14               fstp dword ptr [ebx + 0x14]
// 004f1dd8  d9442438             fld dword ptr [esp + 0x38]
// 004f1ddc  d95b18               fstp dword ptr [ebx + 0x18]
// 004f1ddf  dd442440             fld qword ptr [esp + 0x40]
// 004f1de3  dd5b20               fstp qword ptr [ebx + 0x20]
// 004f1de6  dd442448             fld qword ptr [esp + 0x48]
// 004f1dea  dd5b28               fstp qword ptr [ebx + 0x28]
// 004f1ded  dd442450             fld qword ptr [esp + 0x50]
// 004f1df1  dd5b30               fstp qword ptr [ebx + 0x30]
// 004f1df4  dd442458             fld qword ptr [esp + 0x58]
// 004f1df8  dd5b38               fstp qword ptr [ebx + 0x38]
// 004f1dfb  d9442460             fld dword ptr [esp + 0x60]
// 004f1dff  d95b40               fstp dword ptr [ebx + 0x40]
// 004f1e02  d9442464             fld dword ptr [esp + 0x64]
// 004f1e06  d95b44               fstp dword ptr [ebx + 0x44]
// 004f1e09  d9442468             fld dword ptr [esp + 0x68]
// 004f1e0d  d95b48               fstp dword ptr [ebx + 0x48]
// 004f1e10  88434d               mov byte ptr [ebx + 0x4d], al
// 004f1e13  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f1e17  88534c               mov byte ptr [ebx + 0x4c], dl
// 004f1e1a  884b4e               mov byte ptr [ebx + 0x4e], cl
// 004f1e1d  e94ef9ffff           jmp 0x4f1770
// 004f1e22  50                   push eax
// 004f1e23  8d4c2424             lea ecx, [esp + 0x24]
// 004f1e27  e8442cf8ff           call 0x474a70
// 004f1e2c  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f1e30  d900                 fld dword ptr [eax]
// 004f1e32  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f1e36  d91e                 fstp dword ptr [esi]
// 004f1e38  83c650               add esi, 0x50
// 004f1e3b  d94004               fld dword ptr [eax + 4]
// 004f1e3e  89742410             mov dword ptr [esp + 0x10], esi
// 004f1e42  d95eb4               fstp dword ptr [esi - 0x4c]
// 004f1e45  d94008               fld dword ptr [eax + 8]
// 004f1e48  d95eb8               fstp dword ptr [esi - 0x48]
// 004f1e4b  d9400c               fld dword ptr [eax + 0xc]
// 004f1e4e  d95ebc               fstp dword ptr [esi - 0x44]
// 004f1e51  d94010               fld dword ptr [eax + 0x10]
// 004f1e54  d95ec0               fstp dword ptr [esi - 0x40]
// 004f1e57  d94014               fld dword ptr [eax + 0x14]
// 004f1e5a  d95ec4               fstp dword ptr [esi - 0x3c]
// 004f1e5d  d94018               fld dword ptr [eax + 0x18]
// 004f1e60  d95ec8               fstp dword ptr [esi - 0x38]
// 004f1e63  dd4020               fld qword ptr [eax + 0x20]
// 004f1e66  dd5ed0               fstp qword ptr [esi - 0x30]
// 004f1e69  dd4028               fld qword ptr [eax + 0x28]
// 004f1e6c  dd5ed8               fstp qword ptr [esi - 0x28]
// 004f1e6f  dd4030               fld qword ptr [eax + 0x30]
// 004f1e72  dd5ee0               fstp qword ptr [esi - 0x20]
// 004f1e75  dd4038               fld qword ptr [eax + 0x38]
// 004f1e78  dd5ee8               fstp qword ptr [esi - 0x18]
// 004f1e7b  d94040               fld dword ptr [eax + 0x40]
// 004f1e7e  d95ef0               fstp dword ptr [esi - 0x10]
// 004f1e81  d94044               fld dword ptr [eax + 0x44]
// 004f1e84  d95ef4               fstp dword ptr [esi - 0xc]
// 004f1e87  d94048               fld dword ptr [eax + 0x48]
// 004f1e8a  d95ef8               fstp dword ptr [esi - 8]
// 004f1e8d  0fb6504c             movzx edx, byte ptr [eax + 0x4c]
// 004f1e91  d9442420             fld dword ptr [esp + 0x20]
// 004f1e95  8856fc               mov byte ptr [esi - 4], dl
// 004f1e98  0fb6484d             movzx ecx, byte ptr [eax + 0x4d]
// 004f1e9c  884efd               mov byte ptr [esi - 3], cl
// 004f1e9f  0fb6504e             movzx edx, byte ptr [eax + 0x4e]
// 004f1ea3  8856fe               mov byte ptr [esi - 2], dl
// 004f1ea6  0fb64c246c           movzx ecx, byte ptr [esp + 0x6c]
// 004f1eab  d918                 fstp dword ptr [eax]
// 004f1ead  d9442424             fld dword ptr [esp + 0x24]
// 004f1eb1  d95804               fstp dword ptr [eax + 4]
// 004f1eb4  0fb654246d           movzx edx, byte ptr [esp + 0x6d]
// 004f1eb9  d9442428             fld dword ptr [esp + 0x28]
// 004f1ebd  d95808               fstp dword ptr [eax + 8]
// 004f1ec0  d944242c             fld dword ptr [esp + 0x2c]
// 004f1ec4  d9580c               fstp dword ptr [eax + 0xc]
// 004f1ec7  d9442430             fld dword ptr [esp + 0x30]
// 004f1ecb  d95810               fstp dword ptr [eax + 0x10]
// 004f1ece  d9442434             fld dword ptr [esp + 0x34]
// 004f1ed2  d95814               fstp dword ptr [eax + 0x14]
// 004f1ed5  d9442438             fld dword ptr [esp + 0x38]
// 004f1ed9  d95818               fstp dword ptr [eax + 0x18]
// 004f1edc  dd442440             fld qword ptr [esp + 0x40]
// 004f1ee0  dd5820               fstp qword ptr [eax + 0x20]
// 004f1ee3  dd442448             fld qword ptr [esp + 0x48]
// 004f1ee7  dd5828               fstp qword ptr [eax + 0x28]
// 004f1eea  dd442450             fld qword ptr [esp + 0x50]
// 004f1eee  dd5830               fstp qword ptr [eax + 0x30]
// 004f1ef1  dd442458             fld qword ptr [esp + 0x58]
// 004f1ef5  dd5838               fstp qword ptr [eax + 0x38]
// 004f1ef8  d9442460             fld dword ptr [esp + 0x60]
// 004f1efc  d95840               fstp dword ptr [eax + 0x40]
// 004f1eff  d9442464             fld dword ptr [esp + 0x64]
// 004f1f03  d95844               fstp dword ptr [eax + 0x44]
// 004f1f06  d9442468             fld dword ptr [esp + 0x68]
// 004f1f0a  d95848               fstp dword ptr [eax + 0x48]
// 004f1f0d  88484c               mov byte ptr [eax + 0x4c], cl
// 004f1f10  0fb64c246e           movzx ecx, byte ptr [esp + 0x6e]
// 004f1f15  88504d               mov byte ptr [eax + 0x4d], dl
// 004f1f18  88484e               mov byte ptr [eax + 0x4e], cl
// 004f1f1b  8bc6                 mov eax, esi
// 004f1f1d  e94ef8ffff           jmp 0x4f1770
// 004f1f22  8b4508               mov eax, dword ptr [ebp + 8]
// 004f1f25  8938                 mov dword ptr [eax], edi
// 004f1f27  5f                   pop edi
// 004f1f28  5e                   pop esi
// 004f1f29  895804               mov dword ptr [eax + 4], ebx
// 004f1f2c  5b                   pop ebx
// 004f1f2d  8be5                 mov esp, ebp
// 004f1f2f  5d                   pop ebp
// 004f1f30  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Unguarded_partition@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YA?AU?$pair@PAVGLight@G3D@@PAV12@@0@PAVGLight@G3D@@0P6A_NABV23@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
