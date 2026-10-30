// roc 2012-06 009c1600  unit: CRobloxTreeCtrl  size: 1231 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1600
//
// 009c1600  6aff                 push -1
// 009c1602  6890f2ad00           push 0xadf290
// 009c1607  64a100000000         mov eax, dword ptr fs:[0]
// 009c160d  50                   push eax
// 009c160e  81ec90000000         sub esp, 0x90
// 009c1614  53                   push ebx
// 009c1615  55                   push ebp
// 009c1616  56                   push esi
// 009c1617  57                   push edi
// 009c1618  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c161d  33c4                 xor eax, esp
// 009c161f  50                   push eax
// 009c1620  8d8424a4000000       lea eax, [esp + 0xa4]
// 009c1627  64a300000000         mov dword ptr fs:[0], eax
// 009c162d  8bf1                 mov esi, ecx
// 009c162f  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c1632  8b7820               mov edi, dword ptr [eax + 0x20]
// 009c1635  ff15e83bb200         call dword ptr [0xb23be8]
// 009c163b  3bc7                 cmp eax, edi
// 009c163d  7407                 je 0x9c1646
// 009c163f  57                   push edi
// 009c1640  ff15143cb200         call dword ptr [0xb23c14]
// 009c1646  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1649  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009c164c  52                   push edx
// 009c164d  ff15803ab200         call dword ptr [0xb23a80]
// 009c1653  6a0a                 push 0xa
// 009c1655  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009c165c  e8c3810d00           call 0xa99824
// 009c1661  c78424880000008c1bc100 mov dword ptr [esp + 0x88], 0xc11b8c
// 009c166c  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 009c1673  33ed                 xor ebp, ebp
// 009c1675  83e00c               and eax, 0xc
// 009c1678  89ac24ac000000       mov dword ptr [esp + 0xac], ebp
// 009c167f  89442434             mov dword ptr [esp + 0x34], eax
// 009c1683  740f                 je 0x9c1694
// 009c1685  8d842488000000       lea eax, [esp + 0x88]
// 009c168c  50                   push eax
// 009c168d  8bce                 mov ecx, esi
// 009c168f  e81cf5ffff           call 0x9c0bb0
// 009c1694  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1697  51                   push ecx
// 009c1698  8d4c2470             lea ecx, [esp + 0x70]
// 009c169c  e8fb18fcff           call 0x982f9c
// 009c16a1  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c16a4  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c16a7  8d542440             lea edx, [esp + 0x40]
// 009c16ab  52                   push edx
// 009c16ac  bb01000000           mov ebx, 1
// 009c16b1  50                   push eax
// 009c16b2  889c24b4000000       mov byte ptr [esp + 0xb4], bl
// 009c16b9  ff15d83ab200         call dword ptr [0xb23ad8]
// 009c16bf  8b3dfc3bb200         mov edi, dword ptr [0xb23bfc]
// 009c16c5  6a45                 push 0x45
// 009c16c7  ffd7                 call edi
// 009c16c9  6a44                 push 0x44
// 009c16cb  8944243c             mov dword ptr [esp + 0x3c], eax
// 009c16cf  ffd7                 call edi
// 009c16d1  55                   push ebp
// 009c16d2  89842484000000       mov dword ptr [esp + 0x84], eax
// 009c16d9  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c16dc  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c16df  6a4b                 push 0x4b
// 009c16e1  53                   push ebx
// 009c16e2  51                   push ecx
// 009c16e3  896c243c             mov dword ptr [esp + 0x3c], ebp
// 009c16e7  ff15e03ab200         call dword ptr [0xb23ae0]
// 009c16ed  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c16f0  53                   push ebx
// 009c16f1  89442440             mov dword ptr [esp + 0x40], eax
// 009c16f5  e85a810d00           call 0xa99854
// 009c16fa  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c16fd  55                   push ebp
// 009c16fe  8bf8                 mov edi, eax
// 009c1700  e84f810d00           call 0xa99854
// 009c1705  33c9                 xor ecx, ecx
// 009c1707  51                   push ecx
// 009c1708  8be8                 mov ebp, eax
// 009c170a  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c170d  51                   push ecx
// 009c170e  894c2424             mov dword ptr [esp + 0x24], ecx
// 009c1712  894c2428             mov dword ptr [esp + 0x28], ecx
// 009c1716  894c242c             mov dword ptr [esp + 0x2c], ecx
// 009c171a  894c2430             mov dword ptr [esp + 0x30], ecx
// 009c171e  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c1721  680a110000           push 0x110a
// 009c1726  52                   push edx
// 009c1727  894c2440             mov dword ptr [esp + 0x40], ecx
// 009c172b  ff15043cb200         call dword ptr [0xb23c04]
// 009c1731  85c0                 test eax, eax
// 009c1733  741f                 je 0x9c1754
// 009c1735  6a00                 push 0
// 009c1737  8d4c2420             lea ecx, [esp + 0x20]
// 009c173b  51                   push ecx
// 009c173c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c173f  50                   push eax
// 009c1740  e82f13fcff           call 0x982a74
// 009c1745  8b442428             mov eax, dword ptr [esp + 0x28]
// 009c1749  2b442420             sub eax, dword ptr [esp + 0x20]
// 009c174d  89442430             mov dword ptr [esp + 0x30], eax
// 009c1751  0faff8               imul edi, eax
// 009c1754  01ac24b8000000       add dword ptr [esp + 0xb8], ebp
// 009c175b  01bc24bc000000       add dword ptr [esp + 0xbc], edi
// 009c1762  6a00                 push 0
// 009c1764  6a00                 push 0
// 009c1766  6a00                 push 0
// 009c1768  8d54245c             lea edx, [esp + 0x5c]
// 009c176c  52                   push edx
// 009c176d  ff15343bb200         call dword ptr [0xb23b34]
// 009c1773  85c0                 test eax, eax
// 009c1775  0f84b2000000         je 0x9c182d
// 009c177b  8b7e34               mov edi, dword ptr [esi + 0x34]
// 009c177e  ff157c3ab200         call dword ptr [0xb23a7c]
// 009c1784  3b4720               cmp eax, dword ptr [edi + 0x20]
// 009c1787  0f85a0000000         jne 0x9c182d
// 009c178d  8b442454             mov eax, dword ptr [esp + 0x54]
// 009c1791  3d00020000           cmp eax, 0x200
// 009c1796  0f87b9020000         ja 0x9c1a55
// 009c179c  0f84d0000000         je 0x9c1872
// 009c17a2  2d00010000           sub eax, 0x100
// 009c17a7  746d                 je 0x9c1816
// 009c17a9  83e813               sub eax, 0x13
// 009c17ac  0f85b7020000         jne 0x9c1a69
// 009c17b2  837c24584b           cmp dword ptr [esp + 0x58], 0x4b
// 009c17b7  75a9                 jne 0x9c1762
// 009c17b9  8b442464             mov eax, dword ptr [esp + 0x64]
// 009c17bd  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 009c17c1  8d542414             lea edx, [esp + 0x14]
// 009c17c5  89442414             mov dword ptr [esp + 0x14], eax
// 009c17c9  894c2418             mov dword ptr [esp + 0x18], ecx
// 009c17cd  8b4720               mov eax, dword ptr [edi + 0x20]
// 009c17d0  52                   push edx
// 009c17d1  50                   push eax
// 009c17d2  ff15883ab200         call dword ptr [0xb23a88]
// 009c17d8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009c17dc  8b542414             mov edx, dword ptr [esp + 0x14]
// 009c17e0  51                   push ecx
// 009c17e1  52                   push edx
// 009c17e2  8d442448             lea eax, [esp + 0x48]
// 009c17e6  50                   push eax
// 009c17e7  ff15483bb200         call dword ptr [0xb23b48]
// 009c17ed  85c0                 test eax, eax
// 009c17ef  7410                 je 0x9c1801
// 009c17f1  8d4c2450             lea ecx, [esp + 0x50]
// 009c17f5  51                   push ecx
// 009c17f6  ff15a43ab200         call dword ptr [0xb23aa4]
// 009c17fc  e961ffffff           jmp 0x9c1762
// 009c1801  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 009c1806  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 009c180b  c1e010               shl eax, 0x10
// 009c180e  0bc2                 or eax, edx
// 009c1810  8944245c             mov dword ptr [esp + 0x5c], eax
// 009c1814  eb60                 jmp 0x9c1876
// 009c1816  66837c24581b         cmp word ptr [esp + 0x58], 0x1b
// 009c181c  0f8547020000         jne 0x9c1a69
// 009c1822  6a00                 push 0
// 009c1824  6a00                 push 0
// 009c1826  8bce                 mov ecx, esi
// 009c1828  e873ecffff           call 0x9c04a0
// 009c182d  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c1830  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 009c1834  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c1837  52                   push edx
// 009c1838  50                   push eax
// 009c1839  ff15083cb200         call dword ptr [0xb23c08]
// 009c183f  ff15743ab200         call dword ptr [0xb23a74]
// 009c1845  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 009c184a  0f8429020000         je 0x9c1a79
// 009c1850  6a00                 push 0
// 009c1852  6a00                 push 0
// 009c1854  8bc3                 mov eax, ebx
// 009c1856  50                   push eax
// 009c1857  53                   push ebx
// 009c1858  6a00                 push 0
// 009c185a  50                   push eax
// 009c185b  53                   push ebx
// 009c185c  8d4c2438             lea ecx, [esp + 0x38]
// 009c1860  51                   push ecx
// 009c1861  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009c1868  e8e17f0d00           call 0xa9984e
// 009c186d  e919020000           jmp 0x9c1a8b
// 009c1872  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 009c1876  0fbfc8               movsx ecx, ax
// 009c1879  c1e810               shr eax, 0x10
// 009c187c  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 009c1881  0fbff8               movsx edi, ax
// 009c1884  894c2414             mov dword ptr [esp + 0x14], ecx
// 009c1888  897c2418             mov dword ptr [esp + 0x18], edi
// 009c188c  0f858c000000         jne 0x9c191e
// 009c1892  2b8c24b8000000       sub ecx, dword ptr [esp + 0xb8]
// 009c1899  8bc1                 mov eax, ecx
// 009c189b  99                   cdq 
// 009c189c  33c2                 xor eax, edx
// 009c189e  2bc2                 sub eax, edx
// 009c18a0  3b842480000000       cmp eax, dword ptr [esp + 0x80]
// 009c18a7  7f18                 jg 0x9c18c1
// 009c18a9  2bbc24bc000000       sub edi, dword ptr [esp + 0xbc]
// 009c18b0  8bc7                 mov eax, edi
// 009c18b2  99                   cdq 
// 009c18b3  33c2                 xor eax, edx
// 009c18b5  2bc2                 sub eax, edx
// 009c18b7  3b442438             cmp eax, dword ptr [esp + 0x38]
// 009c18bb  0f8ea1feffff         jle 0x9c1762
// 009c18c1  837c243400           cmp dword ptr [esp + 0x34], 0
// 009c18c6  895c242c             mov dword ptr [esp + 0x2c], ebx
// 009c18ca  750b                 jne 0x9c18d7
// 009c18cc  6a00                 push 0
// 009c18ce  6a00                 push 0
// 009c18d0  8bce                 mov ecx, esi
// 009c18d2  e8c9ebffff           call 0x9c04a0
// 009c18d7  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c18da  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c18dd  50                   push eax
// 009c18de  ff15c43cb200         call dword ptr [0xb23cc4]
// 009c18e4  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 009c18eb  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009c18f2  50                   push eax
// 009c18f3  51                   push ecx
// 009c18f4  50                   push eax
// 009c18f5  51                   push ecx
// 009c18f6  8d4c242c             lea ecx, [esp + 0x2c]
// 009c18fa  51                   push ecx
// 009c18fb  ff156c3bb200         call dword ptr [0xb23b6c]
// 009c1901  6a00                 push 0
// 009c1903  6a00                 push 0
// 009c1905  8bc3                 mov eax, ebx
// 009c1907  50                   push eax
// 009c1908  53                   push ebx
// 009c1909  6a00                 push 0
// 009c190b  50                   push eax
// 009c190c  53                   push ebx
// 009c190d  8d542438             lea edx, [esp + 0x38]
// 009c1911  52                   push edx
// 009c1912  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009c1919  e8307f0d00           call 0xa9984e
// 009c191e  6a00                 push 0
// 009c1920  6a00                 push 0
// 009c1922  8bc3                 mov eax, ebx
// 009c1924  50                   push eax
// 009c1925  53                   push ebx
// 009c1926  6a00                 push 0
// 009c1928  50                   push eax
// 009c1929  53                   push ebx
// 009c192a  8d442438             lea eax, [esp + 0x38]
// 009c192e  50                   push eax
// 009c192f  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009c1936  e8137f0d00           call 0xa9984e
// 009c193b  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c193f  3b442444             cmp eax, dword ptr [esp + 0x44]
// 009c1943  7d12                 jge 0x9c1957
// 009c1945  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1948  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009c194b  6a00                 push 0
// 009c194d  6a00                 push 0
// 009c194f  6815010000           push 0x115
// 009c1954  52                   push edx
// 009c1955  eb16                 jmp 0x9c196d
// 009c1957  3b44244c             cmp eax, dword ptr [esp + 0x4c]
// 009c195b  7c16                 jl 0x9c1973
// 009c195d  8b4634               mov eax, dword ptr [esi + 0x34]
// 009c1960  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c1963  6a00                 push 0
// 009c1965  6a01                 push 1
// 009c1967  6815010000           push 0x115
// 009c196c  51                   push ecx
// 009c196d  ff15043cb200         call dword ptr [0xb23c04]
// 009c1973  8b442414             mov eax, dword ptr [esp + 0x14]
// 009c1977  3b442440             cmp eax, dword ptr [esp + 0x40]
// 009c197b  7d12                 jge 0x9c198f
// 009c197d  8b5634               mov edx, dword ptr [esi + 0x34]
// 009c1980  8b4220               mov eax, dword ptr [edx + 0x20]
// 009c1983  6a00                 push 0
// 009c1985  6a00                 push 0
// 009c1987  6814010000           push 0x114
// 009c198c  50                   push eax
// 009c198d  eb16                 jmp 0x9c19a5
// 009c198f  3b442448             cmp eax, dword ptr [esp + 0x48]
// 009c1993  7c16                 jl 0x9c19ab
// 009c1995  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c1998  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009c199b  6a00                 push 0
// 009c199d  6a01                 push 1
// 009c199f  6814010000           push 0x114
// 009c19a4  52                   push edx
// 009c19a5  ff15043cb200         call dword ptr [0xb23c04]
// 009c19ab  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c19ae  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 009c19b5  8bac24bc000000       mov ebp, dword ptr [esp + 0xbc]
// 009c19bc  6a00                 push 0
// 009c19be  e8917e0d00           call 0xa99854
// 009c19c3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c19c6  6a01                 push 1
// 009c19c8  2bf8                 sub edi, eax
// 009c19ca  e8857e0d00           call 0xa99854
// 009c19cf  0faf442430           imul eax, dword ptr [esp + 0x30]
// 009c19d4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009c19d8  2be8                 sub ebp, eax
// 009c19da  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c19de  50                   push eax
// 009c19df  51                   push ecx
// 009c19e0  55                   push ebp
// 009c19e1  57                   push edi
// 009c19e2  8d54242c             lea edx, [esp + 0x2c]
// 009c19e6  52                   push edx
// 009c19e7  ff156c3bb200         call dword ptr [0xb23b6c]
// 009c19ed  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009c19f1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009c19f5  3bc1                 cmp eax, ecx
// 009c19f7  7e08                 jle 0x9c1a01
// 009c19f9  894c241c             mov dword ptr [esp + 0x1c], ecx
// 009c19fd  89442424             mov dword ptr [esp + 0x24], eax
// 009c1a01  8b442420             mov eax, dword ptr [esp + 0x20]
// 009c1a05  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009c1a09  3bc1                 cmp eax, ecx
// 009c1a0b  7e08                 jle 0x9c1a15
// 009c1a0d  894c2420             mov dword ptr [esp + 0x20], ecx
// 009c1a11  89442428             mov dword ptr [esp + 0x28], eax
// 009c1a15  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 009c1a1c  8b06                 mov eax, dword ptr [esi]
// 009c1a1e  8d8c2488000000       lea ecx, [esp + 0x88]
// 009c1a25  51                   push ecx
// 009c1a26  52                   push edx
// 009c1a27  8b5064               mov edx, dword ptr [eax + 0x64]
// 009c1a2a  8d4c2424             lea ecx, [esp + 0x24]
// 009c1a2e  51                   push ecx
// 009c1a2f  8bce                 mov ecx, esi
// 009c1a31  ffd2                 call edx
// 009c1a33  6a00                 push 0
// 009c1a35  6a00                 push 0
// 009c1a37  8bc3                 mov eax, ebx
// 009c1a39  50                   push eax
// 009c1a3a  53                   push ebx
// 009c1a3b  6a00                 push 0
// 009c1a3d  50                   push eax
// 009c1a3e  53                   push ebx
// 009c1a3f  8d442438             lea eax, [esp + 0x38]
// 009c1a43  50                   push eax
// 009c1a44  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009c1a4b  e8fe7d0d00           call 0xa9984e
// 009c1a50  e90dfdffff           jmp 0x9c1762
// 009c1a55  2d02020000           sub eax, 0x202
// 009c1a5a  0f84cdfdffff         je 0x9c182d
// 009c1a60  83e803               sub eax, 3
// 009c1a63  0f84c4fdffff         je 0x9c182d
// 009c1a69  8d4c2450             lea ecx, [esp + 0x50]
// 009c1a6d  51                   push ecx
// 009c1a6e  ff15a43ab200         call dword ptr [0xb23aa4]
// 009c1a74  e9e9fcffff           jmp 0x9c1762
// 009c1a79  837c243400           cmp dword ptr [esp + 0x34], 0
// 009c1a7e  750b                 jne 0x9c1a8b
// 009c1a80  6a00                 push 0
// 009c1a82  6a00                 push 0
// 009c1a84  8bce                 mov ecx, esi
// 009c1a86  e815eaffff           call 0x9c04a0
// 009c1a8b  8d4c246c             lea ecx, [esp + 0x6c]
// 009c1a8f  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 009c1a97  e8fa14fcff           call 0x982f96
// 009c1a9c  8d8c2488000000       lea ecx, [esp + 0x88]
// 009c1aa3  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 009c1aae  e8657d0d00           call 0xa99818
// 009c1ab3  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 009c1aba  64890d00000000       mov dword ptr fs:[0], ecx
// 009c1ac1  59                   pop ecx
// 009c1ac2  5f                   pop edi
// 009c1ac3  5e                   pop esi
// 009c1ac4  5d                   pop ebp
// 009c1ac5  5b                   pop ebx
// 009c1ac6  81c49c000000         add esp, 0x9c
// 009c1acc  c20c00               ret 0xc
// copied from an identical function in another client (function ?DoBanding@CXTTreeBase@@MAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp