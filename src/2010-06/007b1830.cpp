// roc 2010-06 007b1830  unit: CXTPPaintManager  size: 3642 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b1830
//
// 007b1830  6aff                 push -1
// 007b1832  68c0ec9a00           push 0x9aecc0
// 007b1837  64a100000000         mov eax, dword ptr fs:[0]
// 007b183d  50                   push eax
// 007b183e  81ec98000000         sub esp, 0x98
// 007b1844  53                   push ebx
// 007b1845  55                   push ebp
// 007b1846  56                   push esi
// 007b1847  57                   push edi
// 007b1848  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b184d  33c4                 xor eax, esp
// 007b184f  50                   push eax
// 007b1850  8d8424ac000000       lea eax, [esp + 0xac]
// 007b1857  64a300000000         mov dword ptr fs:[0], eax
// 007b185d  8bf1                 mov esi, ecx
// 007b185f  8bbc24c4000000       mov edi, dword ptr [esp + 0xc4]
// 007b1866  8b9f00010000         mov ebx, dword ptr [edi + 0x100]
// 007b186c  8b2e                 mov ebp, dword ptr [esi]
// 007b186e  8bcf                 mov ecx, edi
// 007b1870  e80b58c8ff           call 0x437080
// 007b1875  50                   push eax
// 007b1876  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 007b187c  53                   push ebx
// 007b187d  8bce                 mov ecx, esi
// 007b187f  ffd0                 call eax
// 007b1881  8bac24c0000000       mov ebp, dword ptr [esp + 0xc0]
// 007b1888  50                   push eax
// 007b1889  55                   push ebp
// 007b188a  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007b1891  e80ade0400           call 0x7ff6a0
// 007b1896  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 007b189e  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 007b18a9  742a                 je 0x7b18d5
// 007b18ab  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 007b18b1  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 007b18b7  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 007b18bd  894c2430             mov dword ptr [esp + 0x30], ecx
// 007b18c1  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 007b18c7  89542434             mov dword ptr [esp + 0x34], edx
// 007b18cb  89442438             mov dword ptr [esp + 0x38], eax
// 007b18cf  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007b18d3  eb27                 jmp 0x7b18fc
// 007b18d5  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007b18dc  e88fd90400           call 0x7ff270
// 007b18e1  8b10                 mov edx, dword ptr [eax]
// 007b18e3  8b4804               mov ecx, dword ptr [eax + 4]
// 007b18e6  89542430             mov dword ptr [esp + 0x30], edx
// 007b18ea  8b5008               mov edx, dword ptr [eax + 8]
// 007b18ed  8b400c               mov eax, dword ptr [eax + 0xc]
// 007b18f0  894c2434             mov dword ptr [esp + 0x34], ecx
// 007b18f4  89542438             mov dword ptr [esp + 0x38], edx
// 007b18f8  8944243c             mov dword ptr [esp + 0x3c], eax
// 007b18fc  8d442430             lea eax, [esp + 0x30]
// 007b1900  8b08                 mov ecx, dword ptr [eax]
// 007b1902  8b5004               mov edx, dword ptr [eax + 4]
// 007b1905  894c2418             mov dword ptr [esp + 0x18], ecx
// 007b1909  8b4808               mov ecx, dword ptr [eax + 8]
// 007b190c  8954241c             mov dword ptr [esp + 0x1c], edx
// 007b1910  8b500c               mov edx, dword ptr [eax + 0xc]
// 007b1913  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 007b1919  894c2420             mov dword ptr [esp + 0x20], ecx
// 007b191d  8bcf                 mov ecx, edi
// 007b191f  89542424             mov dword ptr [esp + 0x24], edx
// 007b1923  89442448             mov dword ptr [esp + 0x48], eax
// 007b1927  e8a484ffff           call 0x7a9dd0
// 007b192c  57                   push edi
// 007b192d  8d4c2434             lea ecx, [esp + 0x34]
// 007b1931  8bd8                 mov ebx, eax
// 007b1933  51                   push ecx
// 007b1934  8bce                 mov ecx, esi
// 007b1936  895c2454             mov dword ptr [esp + 0x54], ebx
// 007b193a  e871c0ffff           call 0x7ad9b0
// 007b193f  8b17                 mov edx, dword ptr [edi]
// 007b1941  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 007b1947  8d442428             lea eax, [esp + 0x28]
// 007b194b  50                   push eax
// 007b194c  8bcf                 mov ecx, edi
// 007b194e  ffd2                 call edx
// 007b1950  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 007b1956  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007b195c  ba02000000           mov edx, 2
// 007b1961  83f903               cmp ecx, 3
// 007b1964  740c                 je 0x7b1972
// 007b1966  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007b196e  3bca                 cmp ecx, edx
// 007b1970  7508                 jne 0x7b197a
// 007b1972  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007b197a  85db                 test ebx, ebx
// 007b197c  7510                 jne 0x7b198e
// 007b197e  39542448             cmp dword ptr [esp + 0x48], edx
// 007b1982  7518                 jne 0x7b199c
// 007b1984  c744246000000000     mov dword ptr [esp + 0x60], 0
// 007b198c  eb63                 jmp 0x7b19f1
// 007b198e  3bda                 cmp ebx, edx
// 007b1990  740a                 je 0x7b199c
// 007b1992  83fb03               cmp ebx, 3
// 007b1995  7405                 je 0x7b199c
// 007b1997  83fb04               cmp ebx, 4
// 007b199a  75e8                 jne 0x7b1984
// 007b199c  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 007b19a2  85c0                 test eax, eax
// 007b19a4  752a                 jne 0x7b19d0
// 007b19a6  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 007b19ac  85c0                 test eax, eax
// 007b19ae  7f20                 jg 0x7b19d0
// 007b19b0  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 007b19b6  85c9                 test ecx, ecx
// 007b19b8  740c                 je 0x7b19c6
// 007b19ba  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 007b19bd  85c0                 test eax, eax
// 007b19bf  7f0f                 jg 0x7b19d0
// 007b19c1  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007b19c4  eb06                 jmp 0x7b19cc
// 007b19c6  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 007b19cc  85c0                 test eax, eax
// 007b19ce  74b4                 je 0x7b1984
// 007b19d0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b19d4  8b07                 mov eax, dword ptr [edi]
// 007b19d6  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 007b19dc  51                   push ecx
// 007b19dd  8bcf                 mov ecx, edi
// 007b19df  ffd2                 call edx
// 007b19e1  89442460             mov dword ptr [esp + 0x60], eax
// 007b19e5  c744244401000000     mov dword ptr [esp + 0x44], 1
// 007b19ed  85c0                 test eax, eax
// 007b19ef  7508                 jne 0x7b19f9
// 007b19f1  c744244400000000     mov dword ptr [esp + 0x44], 0
// 007b19f9  8b07                 mov eax, dword ptr [edi]
// 007b19fb  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 007b1a01  8bcf                 mov ecx, edi
// 007b1a03  ffd2                 call edx
// 007b1a05  8944246c             mov dword ptr [esp + 0x6c], eax
// 007b1a09  8b07                 mov eax, dword ptr [edi]
// 007b1a0b  8b5078               mov edx, dword ptr [eax + 0x78]
// 007b1a0e  8bcf                 mov ecx, edi
// 007b1a10  ffd2                 call edx
// 007b1a12  89442464             mov dword ptr [esp + 0x64], eax
// 007b1a16  8b07                 mov eax, dword ptr [edi]
// 007b1a18  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007b1a1b  8bcf                 mov ecx, edi
// 007b1a1d  ffd2                 call edx
// 007b1a1f  8944245c             mov dword ptr [esp + 0x5c], eax
// 007b1a23  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 007b1a29  83f8ff               cmp eax, -1
// 007b1a2c  750f                 jne 0x7b1a3d
// 007b1a2e  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 007b1a34  85c9                 test ecx, ecx
// 007b1a36  7405                 je 0x7b1a3d
// 007b1a38  e8538cffff           call 0x7aa690
// 007b1a3d  8b9fa0000000         mov ebx, dword ptr [edi + 0xa0]
// 007b1a43  89442440             mov dword ptr [esp + 0x40], eax
// 007b1a47  83fbff               cmp ebx, -1
// 007b1a4a  750d                 jne 0x7b1a59
// 007b1a4c  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 007b1a52  85c0                 test eax, eax
// 007b1a54  7403                 je 0x7b1a59
// 007b1a56  8b5838               mov ebx, dword ptr [eax + 0x38]
// 007b1a59  8b07                 mov eax, dword ptr [edi]
// 007b1a5b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 007b1a61  8bcf                 mov ecx, edi
// 007b1a63  895c2468             mov dword ptr [esp + 0x68], ebx
// 007b1a67  ffd2                 call edx
// 007b1a69  837c244804           cmp dword ptr [esp + 0x48], 4
// 007b1a6e  89842494000000       mov dword ptr [esp + 0x94], eax
// 007b1a75  7511                 jne 0x7b1a88
// 007b1a77  837c244004           cmp dword ptr [esp + 0x40], 4
// 007b1a7c  7520                 jne 0x7b1a9e
// 007b1a7e  c744244000000000     mov dword ptr [esp + 0x40], 0
// 007b1a86  eb16                 jmp 0x7b1a9e
// 007b1a88  8b442448             mov eax, dword ptr [esp + 0x48]
// 007b1a8c  83f809               cmp eax, 9
// 007b1a8f  0f84fe080000         je 0x7b2393
// 007b1a95  83f80b               cmp eax, 0xb
// 007b1a98  0f84b5080000         je 0x7b2353
// 007b1a9e  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 007b1aa5  85db                 test ebx, ebx
// 007b1aa7  746c                 je 0x7b1b15
// 007b1aa9  837c244804           cmp dword ptr [esp + 0x48], 4
// 007b1aae  741d                 je 0x7b1acd
// 007b1ab0  8b07                 mov eax, dword ptr [edi]
// 007b1ab2  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 007b1ab8  8bcf                 mov ecx, edi
// 007b1aba  ffd2                 call edx
// 007b1abc  85c0                 test eax, eax
// 007b1abe  7538                 jne 0x7b1af8
// 007b1ac0  8b06                 mov eax, dword ptr [esi]
// 007b1ac2  8b5078               mov edx, dword ptr [eax + 0x78]
// 007b1ac5  57                   push edi
// 007b1ac6  55                   push ebp
// 007b1ac7  8bce                 mov ecx, esi
// 007b1ac9  ffd2                 call edx
// 007b1acb  eb2b                 jmp 0x7b1af8
// 007b1acd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b1ad1  8b16                 mov edx, dword ptr [esi]
// 007b1ad3  8b5260               mov edx, dword ptr [edx + 0x60]
// 007b1ad6  83ec10               sub esp, 0x10
// 007b1ad9  8bc4                 mov eax, esp
// 007b1adb  8908                 mov dword ptr [eax], ecx
// 007b1add  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b1ae1  894804               mov dword ptr [eax + 4], ecx
// 007b1ae4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b1ae8  894808               mov dword ptr [eax + 8], ecx
// 007b1aeb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b1aef  57                   push edi
// 007b1af0  89480c               mov dword ptr [eax + 0xc], ecx
// 007b1af3  55                   push ebp
// 007b1af4  8bce                 mov ecx, esi
// 007b1af6  ffd2                 call edx
// 007b1af8  8b4500               mov eax, dword ptr [ebp]
// 007b1afb  8b16                 mov edx, dword ptr [esi]
// 007b1afd  89442474             mov dword ptr [esp + 0x74], eax
// 007b1b01  8b427c               mov eax, dword ptr [edx + 0x7c]
// 007b1b04  57                   push edi
// 007b1b05  8bce                 mov ecx, esi
// 007b1b07  ffd0                 call eax
// 007b1b09  8b542474             mov edx, dword ptr [esp + 0x74]
// 007b1b0d  50                   push eax
// 007b1b0e  8b4238               mov eax, dword ptr [edx + 0x38]
// 007b1b11  8bcd                 mov ecx, ebp
// 007b1b13  ffd0                 call eax
// 007b1b15  837c244c04           cmp dword ptr [esp + 0x4c], 4
// 007b1b1a  0f8534020000         jne 0x7b1d54
// 007b1b20  8b17                 mov edx, dword ptr [edi]
// 007b1b22  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 007b1b28  8bcf                 mov ecx, edi
// 007b1b2a  ffd0                 call eax
// 007b1b2c  8bd8                 mov ebx, eax
// 007b1b2e  f7db                 neg ebx
// 007b1b30  1bdb                 sbb ebx, ebx
// 007b1b32  8bce                 mov ecx, esi
// 007b1b34  f7db                 neg ebx
// 007b1b36  e855b7ffff           call 0x7ad290
// 007b1b3b  8bd0                 mov edx, eax
// 007b1b3d  e8cebeffff           call 0x7ada10
// 007b1b42  8944246c             mov dword ptr [esp + 0x6c], eax
// 007b1b46  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 007b1b4c  85c0                 test eax, eax
// 007b1b4e  7e05                 jle 0x7b1b55
// 007b1b50  8d0c40               lea ecx, [eax + eax*2]
// 007b1b53  eb0c                 jmp 0x7b1b61
// 007b1b55  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b1b59  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007b1b5d  8d4c0107             lea ecx, [ecx + eax + 7]
// 007b1b61  8d4412fd             lea eax, [edx + edx - 3]
// 007b1b65  83f82a               cmp eax, 0x2a
// 007b1b68  7d05                 jge 0x7b1b6f
// 007b1b6a  b82a000000           mov eax, 0x2a
// 007b1b6f  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b1b73  89442428             mov dword ptr [esp + 0x28], eax
// 007b1b77  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007b1b7b  85d2                 test edx, edx
// 007b1b7d  7408                 je 0x7b1b87
// 007b1b7f  894c2428             mov dword ptr [esp + 0x28], ecx
// 007b1b83  8944242c             mov dword ptr [esp + 0x2c], eax
// 007b1b87  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 007b1b8f  0f843a010000         je 0x7b1ccf
// 007b1b95  837c244400           cmp dword ptr [esp + 0x44], 0
// 007b1b9a  0f84b5000000         je 0x7b1c55
// 007b1ba0  85d2                 test edx, edx
// 007b1ba2  743a                 je 0x7b1bde
// 007b1ba4  8d4c244c             lea ecx, [esp + 0x4c]
// 007b1ba8  51                   push ecx
// 007b1ba9  8d4c241c             lea ecx, [esp + 0x1c]
// 007b1bad  e82eadc6ff           call 0x41c8e0
// 007b1bb2  8bc8                 mov ecx, eax
// 007b1bb4  8b442434             mov eax, dword ptr [esp + 0x34]
// 007b1bb8  99                   cdq 
// 007b1bb9  2bc2                 sub eax, edx
// 007b1bbb  8bd0                 mov edx, eax
// 007b1bbd  8b4104               mov eax, dword ptr [ecx + 4]
// 007b1bc0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b1bc4  d1fa                 sar edx, 1
// 007b1bc6  2bc2                 sub eax, edx
// 007b1bc8  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007b1bcc  8d4c0a04             lea ecx, [edx + ecx + 4]
// 007b1bd0  89442450             mov dword ptr [esp + 0x50], eax
// 007b1bd4  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007b1bd8  8d44244c             lea eax, [esp + 0x4c]
// 007b1bdc  eb38                 jmp 0x7b1c16
// 007b1bde  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007b1be2  8d442474             lea eax, [esp + 0x74]
// 007b1be6  83c203               add edx, 3
// 007b1be9  50                   push eax
// 007b1bea  8d4c241c             lea ecx, [esp + 0x1c]
// 007b1bee  89542450             mov dword ptr [esp + 0x50], edx
// 007b1bf2  e8e9acc6ff           call 0x41c8e0
// 007b1bf7  8bc8                 mov ecx, eax
// 007b1bf9  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b1bfd  8b09                 mov ecx, dword ptr [ecx]
// 007b1bff  99                   cdq 
// 007b1c00  2bc2                 sub eax, edx
// 007b1c02  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007b1c06  d1f8                 sar eax, 1
// 007b1c08  2bc8                 sub ecx, eax
// 007b1c0a  894c2474             mov dword ptr [esp + 0x74], ecx
// 007b1c0e  89542478             mov dword ptr [esp + 0x78], edx
// 007b1c12  8d442474             lea eax, [esp + 0x74]
// 007b1c16  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007b1c1d  6a01                 push 1
// 007b1c1f  51                   push ecx
// 007b1c20  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007b1c24  51                   push ecx
// 007b1c25  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007b1c29  51                   push ecx
// 007b1c2a  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007b1c2e  8b16                 mov edx, dword ptr [esi]
// 007b1c30  51                   push ecx
// 007b1c31  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007b1c35  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 007b1c3b  51                   push ecx
// 007b1c3c  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007b1c40  51                   push ecx
// 007b1c41  33c9                 xor ecx, ecx
// 007b1c43  51                   push ecx
// 007b1c44  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007b1c48  51                   push ecx
// 007b1c49  8b4804               mov ecx, dword ptr [eax + 4]
// 007b1c4c  8b00                 mov eax, dword ptr [eax]
// 007b1c4e  51                   push ecx
// 007b1c4f  50                   push eax
// 007b1c50  55                   push ebp
// 007b1c51  8bce                 mov ecx, esi
// 007b1c53  ffd2                 call edx
// 007b1c55  837c241400           cmp dword ptr [esp + 0x14], 0
// 007b1c5a  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b1c5e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b1c62  8b542420             mov edx, dword ptr [esp + 0x20]
// 007b1c66  89442430             mov dword ptr [esp + 0x30], eax
// 007b1c6a  8b442424             mov eax, dword ptr [esp + 0x24]
// 007b1c6e  8944243c             mov dword ptr [esp + 0x3c], eax
// 007b1c72  740c                 je 0x7b1c80
// 007b1c74  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007b1c78  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b1c7c  03d0                 add edx, eax
// 007b1c7e  eb0d                 jmp 0x7b1c8d
// 007b1c80  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b1c84  49                   dec ecx
// 007b1c85  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007b1c89  2b4c246c             sub ecx, dword ptr [esp + 0x6c]
// 007b1c8d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b1c91  53                   push ebx
// 007b1c92  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007b1c96  50                   push eax
// 007b1c97  6a01                 push 1
// 007b1c99  83ec10               sub esp, 0x10
// 007b1c9c  8bc4                 mov eax, esp
// 007b1c9e  8918                 mov dword ptr [eax], ebx
// 007b1ca0  894804               mov dword ptr [eax + 4], ecx
// 007b1ca3  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007b1ca7  57                   push edi
// 007b1ca8  895008               mov dword ptr [eax + 8], edx
// 007b1cab  55                   push ebp
// 007b1cac  8d542454             lea edx, [esp + 0x54]
// 007b1cb0  89480c               mov dword ptr [eax + 0xc], ecx
// 007b1cb3  52                   push edx
// 007b1cb4  8bce                 mov ecx, esi
// 007b1cb6  e8c5cfffff           call 0x7aec80
// 007b1cbb  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b1cbf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b1cc3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b1cc7  52                   push edx
// 007b1cc8  50                   push eax
// 007b1cc9  51                   push ecx
// 007b1cca  e93c090000           jmp 0x7b260b
// 007b1ccf  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007b1cd6  e895d50400           call 0x7ff270
// 007b1cdb  8b10                 mov edx, dword ptr [eax]
// 007b1cdd  53                   push ebx
// 007b1cde  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007b1ce2  53                   push ebx
// 007b1ce3  6a00                 push 0
// 007b1ce5  83ec10               sub esp, 0x10
// 007b1ce8  8bcc                 mov ecx, esp
// 007b1cea  8911                 mov dword ptr [ecx], edx
// 007b1cec  8b5004               mov edx, dword ptr [eax + 4]
// 007b1cef  895104               mov dword ptr [ecx + 4], edx
// 007b1cf2  8b5008               mov edx, dword ptr [eax + 8]
// 007b1cf5  8b400c               mov eax, dword ptr [eax + 0xc]
// 007b1cf8  895108               mov dword ptr [ecx + 8], edx
// 007b1cfb  57                   push edi
// 007b1cfc  89410c               mov dword ptr [ecx + 0xc], eax
// 007b1cff  55                   push ebp
// 007b1d00  8d4c2454             lea ecx, [esp + 0x54]
// 007b1d04  51                   push ecx
// 007b1d05  8bce                 mov ecx, esi
// 007b1d07  e874cfffff           call 0x7aec80
// 007b1d0c  85db                 test ebx, ebx
// 007b1d0e  741f                 je 0x7b1d2f
// 007b1d10  8b442434             mov eax, dword ptr [esp + 0x34]
// 007b1d14  83c006               add eax, 6
// 007b1d17  3944242c             cmp dword ptr [esp + 0x2c], eax
// 007b1d1b  7f23                 jg 0x7b1d40
// 007b1d1d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b1d21  8bd3                 mov edx, ebx
// 007b1d23  52                   push edx
// 007b1d24  50                   push eax
// 007b1d25  89442434             mov dword ptr [esp + 0x34], eax
// 007b1d29  51                   push ecx
// 007b1d2a  e9dc080000           jmp 0x7b260b
// 007b1d2f  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b1d33  83c005               add eax, 5
// 007b1d36  39442428             cmp dword ptr [esp + 0x28], eax
// 007b1d3a  7f04                 jg 0x7b1d40
// 007b1d3c  89442428             mov dword ptr [esp + 0x28], eax
// 007b1d40  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b1d44  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b1d48  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b1d4c  52                   push edx
// 007b1d4d  50                   push eax
// 007b1d4e  51                   push ecx
// 007b1d4f  e9b7080000           jmp 0x7b260b
// 007b1d54  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 007b1d5a  e8e1390100           call 0x7c5740
// 007b1d5f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b1d63  85c0                 test eax, eax
// 007b1d65  0f84b5010000         je 0x7b1f20
// 007b1d6b  85c9                 test ecx, ecx
// 007b1d6d  0f84ad010000         je 0x7b1f20
// 007b1d73  8bcf                 mov ecx, edi
// 007b1d75  e80653c8ff           call 0x437080
// 007b1d7a  85c0                 test eax, eax
// 007b1d7c  8d86f8000000         lea eax, [esi + 0xf8]
// 007b1d82  7506                 jne 0x7b1d8a
// 007b1d84  8d86f0000000         lea eax, [esi + 0xf0]
// 007b1d8a  50                   push eax
// 007b1d8b  55                   push ebp
// 007b1d8c  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 007b1d93  e808d90400           call 0x7ff6a0
// 007b1d98  33db                 xor ebx, ebx
// 007b1d9a  837c244802           cmp dword ptr [esp + 0x48], 2
// 007b1d9f  c68424b400000001     mov byte ptr [esp + 0xb4], 1
// 007b1da7  0f94c3               sete bl
// 007b1daa  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 007b1db2  895c244c             mov dword ptr [esp + 0x4c], ebx
// 007b1db6  0f84c0000000         je 0x7b1e7c
// 007b1dbc  837c244804           cmp dword ptr [esp + 0x48], 4
// 007b1dc1  750a                 jne 0x7b1dcd
// 007b1dc3  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 007b1dc9  29542420             sub dword ptr [esp + 0x20], edx
// 007b1dcd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007b1dd1  8d442474             lea eax, [esp + 0x74]
// 007b1dd5  50                   push eax
// 007b1dd6  8d4c241c             lea ecx, [esp + 0x1c]
// 007b1dda  83c304               add ebx, 4
// 007b1ddd  e8feaac6ff           call 0x41c8e0
// 007b1de2  8bc8                 mov ecx, eax
// 007b1de4  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b1de8  99                   cdq 
// 007b1de9  6a01                 push 1
// 007b1deb  2bc2                 sub eax, edx
// 007b1ded  8bd0                 mov edx, eax
// 007b1def  8b01                 mov eax, dword ptr [ecx]
// 007b1df1  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007b1df8  51                   push ecx
// 007b1df9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007b1dfd  51                   push ecx
// 007b1dfe  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007b1e02  51                   push ecx
// 007b1e03  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007b1e07  51                   push ecx
// 007b1e08  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007b1e0c  51                   push ecx
// 007b1e0d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007b1e11  51                   push ecx
// 007b1e12  33c9                 xor ecx, ecx
// 007b1e14  51                   push ecx
// 007b1e15  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007b1e19  51                   push ecx
// 007b1e1a  d1fa                 sar edx, 1
// 007b1e1c  2bc2                 sub eax, edx
// 007b1e1e  8b16                 mov edx, dword ptr [esi]
// 007b1e20  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 007b1e26  53                   push ebx
// 007b1e27  50                   push eax
// 007b1e28  55                   push ebp
// 007b1e29  8bce                 mov ecx, esi
// 007b1e2b  ffd2                 call edx
// 007b1e2d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b1e31  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 007b1e35  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b1e39  8b542420             mov edx, dword ptr [esp + 0x20]
// 007b1e3d  8d5c03fc             lea ebx, [ebx + eax - 4]
// 007b1e41  89442434             mov dword ptr [esp + 0x34], eax
// 007b1e45  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007b1e49  50                   push eax
// 007b1e4a  6a01                 push 1
// 007b1e4c  6a00                 push 0
// 007b1e4e  6a01                 push 1
// 007b1e50  83ec10               sub esp, 0x10
// 007b1e53  8bc4                 mov eax, esp
// 007b1e55  8908                 mov dword ptr [eax], ecx
// 007b1e57  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b1e5b  895804               mov dword ptr [eax + 4], ebx
// 007b1e5e  57                   push edi
// 007b1e5f  895008               mov dword ptr [eax + 8], edx
// 007b1e62  89480c               mov dword ptr [eax + 0xc], ecx
// 007b1e65  55                   push ebp
// 007b1e66  8d4c2458             lea ecx, [esp + 0x58]
// 007b1e6a  51                   push ecx
// 007b1e6b  8bce                 mov ecx, esi
// 007b1e6d  e8fed3ffff           call 0x7af270
// 007b1e72  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b1e76  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b1e7a  eb74                 jmp 0x7b1ef0
// 007b1e7c  8d4c244c             lea ecx, [esp + 0x4c]
// 007b1e80  e8ebd30400           call 0x7ff270
// 007b1e85  8b10                 mov edx, dword ptr [eax]
// 007b1e87  53                   push ebx
// 007b1e88  6a01                 push 1
// 007b1e8a  6a00                 push 0
// 007b1e8c  6a00                 push 0
// 007b1e8e  83ec10               sub esp, 0x10
// 007b1e91  8bcc                 mov ecx, esp
// 007b1e93  8911                 mov dword ptr [ecx], edx
// 007b1e95  8b5004               mov edx, dword ptr [eax + 4]
// 007b1e98  895104               mov dword ptr [ecx + 4], edx
// 007b1e9b  8b5008               mov edx, dword ptr [eax + 8]
// 007b1e9e  8b400c               mov eax, dword ptr [eax + 0xc]
// 007b1ea1  895108               mov dword ptr [ecx + 8], edx
// 007b1ea4  57                   push edi
// 007b1ea5  89410c               mov dword ptr [ecx + 0xc], eax
// 007b1ea8  55                   push ebp
// 007b1ea9  8d4c2458             lea ecx, [esp + 0x58]
// 007b1ead  51                   push ecx
// 007b1eae  8bce                 mov ecx, esi
// 007b1eb0  e8bbd3ffff           call 0x7af270
// 007b1eb5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b1eb9  8b542430             mov edx, dword ptr [esp + 0x30]
// 007b1ebd  03442434             add eax, dword ptr [esp + 0x34]
// 007b1ec1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b1ec5  83c20a               add edx, 0xa
// 007b1ec8  3bca                 cmp ecx, edx
// 007b1eca  8944242c             mov dword ptr [esp + 0x2c], eax
// 007b1ece  7f06                 jg 0x7b1ed6
// 007b1ed0  8bca                 mov ecx, edx
// 007b1ed2  894c2428             mov dword ptr [esp + 0x28], ecx
// 007b1ed6  83bffc00000004       cmp dword ptr [edi + 0xfc], 4
// 007b1edd  7507                 jne 0x7b1ee6
// 007b1edf  83c10b               add ecx, 0xb
// 007b1ee2  894c2428             mov dword ptr [esp + 0x28], ecx
// 007b1ee6  3bc8                 cmp ecx, eax
// 007b1ee8  7f06                 jg 0x7b1ef0
// 007b1eea  8bc8                 mov ecx, eax
// 007b1eec  894c2428             mov dword ptr [esp + 0x28], ecx
// 007b1ef0  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b1ef4  52                   push edx
// 007b1ef5  50                   push eax
// 007b1ef6  51                   push ecx
// 007b1ef7  57                   push edi
// 007b1ef8  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 007b1eff  57                   push edi
// 007b1f00  8bce                 mov ecx, esi
// 007b1f02  e829baffff           call 0x7ad930
// 007b1f07  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007b1f0e  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 007b1f16  e805d80400           call 0x7ff720
// 007b1f1b  e9fb060000           jmp 0x7b261b
// 007b1f20  85db                 test ebx, ebx
// 007b1f22  0f849d010000         je 0x7b20c5
// 007b1f28  837c246000           cmp dword ptr [esp + 0x60], 0
// 007b1f2d  0f8492010000         je 0x7b20c5
// 007b1f33  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007b1f37  e8146c0000           call 0x7b8b50
// 007b1f3c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007b1f40  8bd8                 mov ebx, eax
// 007b1f42  0faf5c2430           imul ebx, dword ptr [esp + 0x30]
// 007b1f47  e854c20100           call 0x7ce1a0
// 007b1f4c  8bc8                 mov ecx, eax
// 007b1f4e  8bc3                 mov eax, ebx
// 007b1f50  99                   cdq 
// 007b1f51  f7f9                 idiv ecx
// 007b1f53  837c241400           cmp dword ptr [esp + 0x14], 0
// 007b1f58  8d4c2418             lea ecx, [esp + 0x18]
// 007b1f5c  89442434             mov dword ptr [esp + 0x34], eax
// 007b1f60  752d                 jne 0x7b1f8f
// 007b1f62  8d54244c             lea edx, [esp + 0x4c]
// 007b1f66  52                   push edx
// 007b1f67  e874a9c6ff           call 0x41c8e0
// 007b1f6c  8bc8                 mov ecx, eax
// 007b1f6e  8b442434             mov eax, dword ptr [esp + 0x34]
// 007b1f72  99                   cdq 
// 007b1f73  2bc2                 sub eax, edx
// 007b1f75  8bd0                 mov edx, eax
// 007b1f77  8b4104               mov eax, dword ptr [ecx + 4]
// 007b1f7a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b1f7e  d1fa                 sar edx, 1
// 007b1f80  2bc2                 sub eax, edx
// 007b1f82  8d5103               lea edx, [ecx + 3]
// 007b1f85  89542474             mov dword ptr [esp + 0x74], edx
// 007b1f89  89442478             mov dword ptr [esp + 0x78], eax
// 007b1f8d  eb2c                 jmp 0x7b1fbb
// 007b1f8f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007b1f93  8d44244c             lea eax, [esp + 0x4c]
// 007b1f97  50                   push eax
// 007b1f98  83c303               add ebx, 3
// 007b1f9b  e840a9c6ff           call 0x41c8e0
// 007b1fa0  8bc8                 mov ecx, eax
// 007b1fa2  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b1fa6  8b09                 mov ecx, dword ptr [ecx]
// 007b1fa8  99                   cdq 
// 007b1fa9  2bc2                 sub eax, edx
// 007b1fab  d1f8                 sar eax, 1
// 007b1fad  2bc8                 sub ecx, eax
// 007b1faf  894c2474             mov dword ptr [esp + 0x74], ecx
// 007b1fb3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b1fb7  895c2478             mov dword ptr [esp + 0x78], ebx
// 007b1fbb  8d442474             lea eax, [esp + 0x74]
// 007b1fbf  8b10                 mov edx, dword ptr [eax]
// 007b1fc1  8b4004               mov eax, dword ptr [eax + 4]
// 007b1fc4  89442450             mov dword ptr [esp + 0x50], eax
// 007b1fc8  8b442448             mov eax, dword ptr [esp + 0x48]
// 007b1fcc  8954244c             mov dword ptr [esp + 0x4c], edx
// 007b1fd0  83f804               cmp eax, 4
// 007b1fd3  750c                 jne 0x7b1fe1
// 007b1fd5  83c103               add ecx, 3
// 007b1fd8  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007b1fdc  e984000000           jmp 0x7b2065
// 007b1fe1  83f802               cmp eax, 2
// 007b1fe4  7517                 jne 0x7b1ffd
// 007b1fe6  837c244400           cmp dword ptr [esp + 0x44], 0
// 007b1feb  7478                 je 0x7b2065
// 007b1fed  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 007b1ff2  7571                 jne 0x7b2065
// 007b1ff4  83c103               add ecx, 3
// 007b1ff7  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007b1ffb  eb68                 jmp 0x7b2065
// 007b1ffd  83f803               cmp eax, 3
// 007b2000  7405                 je 0x7b2007
// 007b2002  83f801               cmp eax, 1
// 007b2005  755e                 jne 0x7b2065
// 007b2007  837c244400           cmp dword ptr [esp + 0x44], 0
// 007b200c  7457                 je 0x7b2065
// 007b200e  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 007b2013  7550                 jne 0x7b2065
// 007b2015  837c241400           cmp dword ptr [esp + 0x14], 0
// 007b201a  7525                 jne 0x7b2041
// 007b201c  8d4c2474             lea ecx, [esp + 0x74]
// 007b2020  51                   push ecx
// 007b2021  8d4c241c             lea ecx, [esp + 0x1c]
// 007b2025  e8b6a8c6ff           call 0x41c8e0
// 007b202a  8bc8                 mov ecx, eax
// 007b202c  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b2030  99                   cdq 
// 007b2031  2bc2                 sub eax, edx
// 007b2033  8bd0                 mov edx, eax
// 007b2035  8b01                 mov eax, dword ptr [ecx]
// 007b2037  d1fa                 sar edx, 1
// 007b2039  2bc2                 sub eax, edx
// 007b203b  8944244c             mov dword ptr [esp + 0x4c], eax
// 007b203f  eb24                 jmp 0x7b2065
// 007b2041  8d442474             lea eax, [esp + 0x74]
// 007b2045  50                   push eax
// 007b2046  8d4c241c             lea ecx, [esp + 0x1c]
// 007b204a  e891a8c6ff           call 0x41c8e0
// 007b204f  8bc8                 mov ecx, eax
// 007b2051  8b442434             mov eax, dword ptr [esp + 0x34]
// 007b2055  99                   cdq 
// 007b2056  2bc2                 sub eax, edx
// 007b2058  8bd0                 mov edx, eax
// 007b205a  8b4104               mov eax, dword ptr [ecx + 4]
// 007b205d  d1fa                 sar edx, 1
// 007b205f  2bc2                 sub eax, edx
// 007b2061  89442450             mov dword ptr [esp + 0x50], eax
// 007b2065  8bcf                 mov ecx, edi
// 007b2067  e884ac0700           call 0x82ccf0
// 007b206c  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007b2073  8b542468             mov edx, dword ptr [esp + 0x68]
// 007b2077  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 007b207b  6a01                 push 1
// 007b207d  51                   push ecx
// 007b207e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007b2082  52                   push edx
// 007b2083  8b542470             mov edx, dword ptr [esp + 0x70]
// 007b2087  51                   push ecx
// 007b2088  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007b208c  52                   push edx
// 007b208d  8b542448             mov edx, dword ptr [esp + 0x48]
// 007b2091  51                   push ecx
// 007b2092  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007b2096  53                   push ebx
// 007b2097  52                   push edx
// 007b2098  8b542470             mov edx, dword ptr [esp + 0x70]
// 007b209c  51                   push ecx
// 007b209d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007b20a1  52                   push edx
// 007b20a2  894320               mov dword ptr [ebx + 0x20], eax
// 007b20a5  8b06                 mov eax, dword ptr [esi]
// 007b20a7  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 007b20ad  51                   push ecx
// 007b20ae  55                   push ebp
// 007b20af  8bce                 mov ecx, esi
// 007b20b1  ffd2                 call edx
// 007b20b3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b20b7  c7432000000000       mov dword ptr [ebx + 0x20], 0
// 007b20be  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 007b20c5  8b442448             mov eax, dword ptr [esp + 0x48]
// 007b20c9  48                   dec eax
// 007b20ca  83f809               cmp eax, 9
// 007b20cd  0f874e020000         ja 0x7b2321
// 007b20d3  0fb68060267b00       movzx eax, byte ptr [eax + 0x7b2660]
// 007b20da  ff248550267b00       jmp dword ptr [eax*4 + 0x7b2650]
// 007b20e1  85c9                 test ecx, ecx
// 007b20e3  756f                 jne 0x7b2154
// 007b20e5  85db                 test ebx, ebx
// 007b20e7  7412                 je 0x7b20fb
// 007b20e9  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 007b20ef  3988f8000000         cmp dword ptr [eax + 0xf8], ecx
// 007b20f5  7504                 jne 0x7b20fb
// 007b20f7  33c0                 xor eax, eax
// 007b20f9  eb05                 jmp 0x7b2100
// 007b20fb  b801000000           mov eax, 1
// 007b2100  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007b2104  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 007b210b  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b210f  50                   push eax
// 007b2110  6a01                 push 1
// 007b2112  53                   push ebx
// 007b2113  51                   push ecx
// 007b2114  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b2118  83ec10               sub esp, 0x10
// 007b211b  8bc4                 mov eax, esp
// 007b211d  8910                 mov dword ptr [eax], edx
// 007b211f  8b542440             mov edx, dword ptr [esp + 0x40]
// 007b2123  894804               mov dword ptr [eax + 4], ecx
// 007b2126  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b212a  57                   push edi
// 007b212b  895008               mov dword ptr [eax + 8], edx
// 007b212e  55                   push ebp
// 007b212f  8d542458             lea edx, [esp + 0x58]
// 007b2133  89480c               mov dword ptr [eax + 0xc], ecx
// 007b2136  52                   push edx
// 007b2137  8bce                 mov ecx, esi
// 007b2139  e832d1ffff           call 0x7af270
// 007b213e  8b442434             mov eax, dword ptr [esp + 0x34]
// 007b2142  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b2146  83c006               add eax, 6
// 007b2149  53                   push ebx
// 007b214a  83c106               add ecx, 6
// 007b214d  50                   push eax
// 007b214e  51                   push ecx
// 007b214f  e9b7040000           jmp 0x7b260b
// 007b2154  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 007b2159  756c                 jne 0x7b21c7
// 007b215b  8d442474             lea eax, [esp + 0x74]
// 007b215f  50                   push eax
// 007b2160  8d4c241c             lea ecx, [esp + 0x1c]
// 007b2164  e877a7c6ff           call 0x41c8e0
// 007b2169  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b216d  8b16                 mov edx, dword ptr [esi]
// 007b216f  8b5804               mov ebx, dword ptr [eax + 4]
// 007b2172  83c1f9               add ecx, -7
// 007b2175  894c2430             mov dword ptr [esp + 0x30], ecx
// 007b2179  6a00                 push 0
// 007b217b  8bcf                 mov ecx, edi
// 007b217d  89542450             mov dword ptr [esp + 0x50], edx
// 007b2181  e84a15caff           call 0x4536d0
// 007b2186  50                   push eax
// 007b2187  8b07                 mov eax, dword ptr [edi]
// 007b2189  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 007b218f  8bcf                 mov ecx, edi
// 007b2191  ffd2                 call edx
// 007b2193  50                   push eax
// 007b2194  8b07                 mov eax, dword ptr [edi]
// 007b2196  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007b2199  8bcf                 mov ecx, edi
// 007b219b  ffd2                 call edx
// 007b219d  8b542458             mov edx, dword ptr [esp + 0x58]
// 007b21a1  50                   push eax
// 007b21a2  8b442440             mov eax, dword ptr [esp + 0x40]
// 007b21a6  53                   push ebx
// 007b21a7  50                   push eax
// 007b21a8  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 007b21ae  57                   push edi
// 007b21af  55                   push ebp
// 007b21b0  8bce                 mov ecx, esi
// 007b21b2  ffd0                 call eax
// 007b21b4  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b21b8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b21bc  52                   push edx
// 007b21bd  8d4807               lea ecx, [eax + 7]
// 007b21c0  50                   push eax
// 007b21c1  51                   push ecx
// 007b21c2  e944040000           jmp 0x7b260b
// 007b21c7  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 007b21cd  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 007b21d3  8b542428             mov edx, dword ptr [esp + 0x28]
// 007b21d7  51                   push ecx
// 007b21d8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007b21dc  51                   push ecx
// 007b21dd  33c9                 xor ecx, ecx
// 007b21df  85c0                 test eax, eax
// 007b21e1  0f95c1               setne cl
// 007b21e4  52                   push edx
// 007b21e5  8b542424             mov edx, dword ptr [esp + 0x24]
// 007b21e9  51                   push ecx
// 007b21ea  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b21ee  53                   push ebx
// 007b21ef  83ec10               sub esp, 0x10
// 007b21f2  8bc4                 mov eax, esp
// 007b21f4  8910                 mov dword ptr [eax], edx
// 007b21f6  8b542444             mov edx, dword ptr [esp + 0x44]
// 007b21fa  894804               mov dword ptr [eax + 4], ecx
// 007b21fd  895008               mov dword ptr [eax + 8], edx
// 007b2200  8d9424b8000000       lea edx, [esp + 0xb8]
// 007b2207  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007b220b  57                   push edi
// 007b220c  55                   push ebp
// 007b220d  89480c               mov dword ptr [eax + 0xc], ecx
// 007b2210  52                   push edx
// 007b2211  8bce                 mov ecx, esi
// 007b2213  e848e9ffff           call 0x7b0b60
// 007b2218  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b221c  8b5004               mov edx, dword ptr [eax + 4]
// 007b221f  8b00                 mov eax, dword ptr [eax]
// 007b2221  51                   push ecx
// 007b2222  52                   push edx
// 007b2223  e9e2030000           jmp 0x7b260a
// 007b2228  85c9                 test ecx, ecx
// 007b222a  7511                 jne 0x7b223d
// 007b222c  bb16000000           mov ebx, 0x16
// 007b2231  8bd3                 mov edx, ebx
// 007b2233  895c2428             mov dword ptr [esp + 0x28], ebx
// 007b2237  8954242c             mov dword ptr [esp + 0x2c], edx
// 007b223b  eb08                 jmp 0x7b2245
// 007b223d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007b2241  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007b2245  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 007b224a  7513                 jne 0x7b225f
// 007b224c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007b2250  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007b2256  51                   push ecx
// 007b2257  03c3                 add eax, ebx
// 007b2259  52                   push edx
// 007b225a  e9ab030000           jmp 0x7b260a
// 007b225f  ff742444             push dword ptr [esp + 0x44]
// 007b2263  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b2267  2b8ec8000000         sub ecx, dword ptr [esi + 0xc8]
// 007b226d  52                   push edx
// 007b226e  8b9424d0000000       mov edx, dword ptr [esp + 0xd0]
// 007b2275  53                   push ebx
// 007b2276  6a00                 push 0
// 007b2278  52                   push edx
// 007b2279  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007b227d  83ec10               sub esp, 0x10
// 007b2280  8bc4                 mov eax, esp
// 007b2282  8910                 mov dword ptr [eax], edx
// 007b2284  8b542440             mov edx, dword ptr [esp + 0x40]
// 007b2288  895004               mov dword ptr [eax + 4], edx
// 007b228b  894808               mov dword ptr [eax + 8], ecx
// 007b228e  894c2444             mov dword ptr [esp + 0x44], ecx
// 007b2292  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007b2296  57                   push edi
// 007b2297  55                   push ebp
// 007b2298  8d54245c             lea edx, [esp + 0x5c]
// 007b229c  89480c               mov dword ptr [eax + 0xc], ecx
// 007b229f  52                   push edx
// 007b22a0  8bce                 mov ecx, esi
// 007b22a2  e8b9e8ffff           call 0x7b0b60
// 007b22a7  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007b22ad  03442430             add eax, dword ptr [esp + 0x30]
// 007b22b1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b22b5  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b22b9  e94a030000           jmp 0x7b2608
// 007b22be  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 007b22c3  7514                 jne 0x7b22d9
// 007b22c5  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b22c9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b22cd  8b542428             mov edx, dword ptr [esp + 0x28]
// 007b22d1  50                   push eax
// 007b22d2  51                   push ecx
// 007b22d3  52                   push edx
// 007b22d4  e932030000           jmp 0x7b260b
// 007b22d9  85c9                 test ecx, ecx
// 007b22db  7511                 jne 0x7b22ee
// 007b22dd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007b22e1  b816000000           mov eax, 0x16
// 007b22e6  89442428             mov dword ptr [esp + 0x28], eax
// 007b22ea  8954242c             mov dword ptr [esp + 0x2c], edx
// 007b22ee  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b22f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b22f6  51                   push ecx
// 007b22f7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007b22fb  50                   push eax
// 007b22fc  51                   push ecx
// 007b22fd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b2301  6a00                 push 0
// 007b2303  53                   push ebx
// 007b2304  83ec10               sub esp, 0x10
// 007b2307  8bc4                 mov eax, esp
// 007b2309  8910                 mov dword ptr [eax], edx
// 007b230b  8b542444             mov edx, dword ptr [esp + 0x44]
// 007b230f  894804               mov dword ptr [eax + 4], ecx
// 007b2312  895008               mov dword ptr [eax + 8], edx
// 007b2315  8d942490000000       lea edx, [esp + 0x90]
// 007b231c  e9e6feffff           jmp 0x7b2207
// 007b2321  8bb424bc000000       mov esi, dword ptr [esp + 0xbc]
// 007b2328  8d8c2484000000       lea ecx, [esp + 0x84]
// 007b232f  c70600000000         mov dword ptr [esi], 0
// 007b2335  c7460400000000       mov dword ptr [esi + 4], 0
// 007b233c  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 007b2347  e8d4d30400           call 0x7ff720
// 007b234c  8bc6                 mov eax, esi
// 007b234e  e9e1020000           jmp 0x7b2634
// 007b2353  8b442440             mov eax, dword ptr [esp + 0x40]
// 007b2357  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007b235b  8b16                 mov edx, dword ptr [esi]
// 007b235d  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 007b2363  50                   push eax
// 007b2364  8b442460             mov eax, dword ptr [esp + 0x60]
// 007b2368  53                   push ebx
// 007b2369  51                   push ecx
// 007b236a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b236e  50                   push eax
// 007b236f  6a00                 push 0
// 007b2371  83ec10               sub esp, 0x10
// 007b2374  8bc4                 mov eax, esp
// 007b2376  8908                 mov dword ptr [eax], ecx
// 007b2378  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007b237c  894804               mov dword ptr [eax + 4], ecx
// 007b237f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b2383  894808               mov dword ptr [eax + 8], ecx
// 007b2386  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007b238a  89480c               mov dword ptr [eax + 0xc], ecx
// 007b238d  8d442470             lea eax, [esp + 0x70]
// 007b2391  eb41                 jmp 0x7b23d4
// 007b2393  8b442440             mov eax, dword ptr [esp + 0x40]
// 007b2397  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007b239b  8b16                 mov edx, dword ptr [esi]
// 007b239d  8b92d0000000         mov edx, dword ptr [edx + 0xd0]
// 007b23a3  50                   push eax
// 007b23a4  8b442460             mov eax, dword ptr [esp + 0x60]
// 007b23a8  53                   push ebx
// 007b23a9  51                   push ecx
// 007b23aa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b23ae  50                   push eax
// 007b23af  6a00                 push 0
// 007b23b1  83ec10               sub esp, 0x10
// 007b23b4  8bc4                 mov eax, esp
// 007b23b6  8908                 mov dword ptr [eax], ecx
// 007b23b8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007b23bc  894804               mov dword ptr [eax + 4], ecx
// 007b23bf  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b23c3  894808               mov dword ptr [eax + 8], ecx
// 007b23c6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007b23ca  89480c               mov dword ptr [eax + 0xc], ecx
// 007b23cd  8d842498000000       lea eax, [esp + 0x98]
// 007b23d4  55                   push ebp
// 007b23d5  50                   push eax
// 007b23d6  8bce                 mov ecx, esi
// 007b23d8  ffd2                 call edx
// 007b23da  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 007b23e2  8b18                 mov ebx, dword ptr [eax]
// 007b23e4  8b4004               mov eax, dword ptr [eax + 4]
// 007b23e7  895c2430             mov dword ptr [esp + 0x30], ebx
// 007b23eb  89442434             mov dword ptr [esp + 0x34], eax
// 007b23ef  0f84af010000         je 0x7b25a4
// 007b23f5  8b16                 mov edx, dword ptr [esi]
// 007b23f7  8b427c               mov eax, dword ptr [edx + 0x7c]
// 007b23fa  8b5d00               mov ebx, dword ptr [ebp]
// 007b23fd  57                   push edi
// 007b23fe  8bce                 mov ecx, esi
// 007b2400  ffd0                 call eax
// 007b2402  8b5338               mov edx, dword ptr [ebx + 0x38]
// 007b2405  50                   push eax
// 007b2406  8bcd                 mov ecx, ebp
// 007b2408  ffd2                 call edx
// 007b240a  837c241400           cmp dword ptr [esp + 0x14], 0
// 007b240f  7552                 jne 0x7b2463
// 007b2411  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b2415  2b442434             sub eax, dword ptr [esp + 0x34]
// 007b2419  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007b241d  03442424             add eax, dword ptr [esp + 0x24]
// 007b2421  8d4b03               lea ecx, [ebx + 3]
// 007b2424  99                   cdq 
// 007b2425  2bc2                 sub eax, edx
// 007b2427  8b542430             mov edx, dword ptr [esp + 0x30]
// 007b242b  03d1                 add edx, ecx
// 007b242d  d1f8                 sar eax, 1
// 007b242f  8954247c             mov dword ptr [esp + 0x7c], edx
// 007b2433  8b542434             mov edx, dword ptr [esp + 0x34]
// 007b2437  03d0                 add edx, eax
// 007b2439  89942480000000       mov dword ptr [esp + 0x80], edx
// 007b2440  8bd0                 mov edx, eax
// 007b2442  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007b2446  89442454             mov dword ptr [esp + 0x54], eax
// 007b244a  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007b2451  89442458             mov dword ptr [esp + 0x58], eax
// 007b2455  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b2459  8d440305             lea eax, [ebx + eax + 5]
// 007b245d  89442418             mov dword ptr [esp + 0x18], eax
// 007b2461  eb58                 jmp 0x7b24bb
// 007b2463  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007b2467  8b542420             mov edx, dword ptr [esp + 0x20]
// 007b246b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007b246f  8d040a               lea eax, [edx + ecx]
// 007b2472  99                   cdq 
// 007b2473  2bc2                 sub eax, edx
// 007b2475  8bc8                 mov ecx, eax
// 007b2477  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b247b  99                   cdq 
// 007b247c  2bc2                 sub eax, edx
// 007b247e  8b542434             mov edx, dword ptr [esp + 0x34]
// 007b2482  d1f8                 sar eax, 1
// 007b2484  d1f9                 sar ecx, 1
// 007b2486  2bc8                 sub ecx, eax
// 007b2488  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b248c  03c1                 add eax, ecx
// 007b248e  83c303               add ebx, 3
// 007b2491  03d3                 add edx, ebx
// 007b2493  89442454             mov dword ptr [esp + 0x54], eax
// 007b2497  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 007b249e  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 007b24a5  89442458             mov dword ptr [esp + 0x58], eax
// 007b24a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b24ad  8bd3                 mov edx, ebx
// 007b24af  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007b24b3  8d441805             lea eax, [eax + ebx + 5]
// 007b24b7  8944241c             mov dword ptr [esp + 0x1c], eax
// 007b24bb  8b442440             mov eax, dword ptr [esp + 0x40]
// 007b24bf  50                   push eax
// 007b24c0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007b24c4  8b1e                 mov ebx, dword ptr [esi]
// 007b24c6  50                   push eax
// 007b24c7  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007b24cb  50                   push eax
// 007b24cc  8b442468             mov eax, dword ptr [esp + 0x68]
// 007b24d0  50                   push eax
// 007b24d1  6a01                 push 1
// 007b24d3  83ec10               sub esp, 0x10
// 007b24d6  837c246c0b           cmp dword ptr [esp + 0x6c], 0xb
// 007b24db  8bc4                 mov eax, esp
// 007b24dd  8908                 mov dword ptr [eax], ecx
// 007b24df  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007b24e3  895004               mov dword ptr [eax + 4], edx
// 007b24e6  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007b24ea  894808               mov dword ptr [eax + 8], ecx
// 007b24ed  89500c               mov dword ptr [eax + 0xc], edx
// 007b24f0  55                   push ebp
// 007b24f1  8d442474             lea eax, [esp + 0x74]
// 007b24f5  8bce                 mov ecx, esi
// 007b24f7  50                   push eax
// 007b24f8  7508                 jne 0x7b2502
// 007b24fa  8b93d4000000         mov edx, dword ptr [ebx + 0xd4]
// 007b2500  eb06                 jmp 0x7b2508
// 007b2502  8b93d0000000         mov edx, dword ptr [ebx + 0xd0]
// 007b2508  ffd2                 call edx
// 007b250a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b250e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b2512  8b9424c8000000       mov edx, dword ptr [esp + 0xc8]
// 007b2519  6a00                 push 0
// 007b251b  50                   push eax
// 007b251c  51                   push ecx
// 007b251d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007b2521  6a00                 push 0
// 007b2523  52                   push edx
// 007b2524  8b542430             mov edx, dword ptr [esp + 0x30]
// 007b2528  83ec10               sub esp, 0x10
// 007b252b  8bc4                 mov eax, esp
// 007b252d  8908                 mov dword ptr [eax], ecx
// 007b252f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b2533  895004               mov dword ptr [eax + 4], edx
// 007b2536  8b542448             mov edx, dword ptr [esp + 0x48]
// 007b253a  894808               mov dword ptr [eax + 8], ecx
// 007b253d  57                   push edi
// 007b253e  89500c               mov dword ptr [eax + 0xc], edx
// 007b2541  55                   push ebp
// 007b2542  8d442478             lea eax, [esp + 0x78]
// 007b2546  50                   push eax
// 007b2547  8bce                 mov ecx, esi
// 007b2549  e812e6ffff           call 0x7b0b60
// 007b254e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007b2552  83f802               cmp eax, 2
// 007b2555  7405                 je 0x7b255c
// 007b2557  83f803               cmp eax, 3
// 007b255a  7537                 jne 0x7b2593
// 007b255c  8b5500               mov edx, dword ptr [ebp]
// 007b255f  6a12                 push 0x12
// 007b2561  8bce                 mov ecx, esi
// 007b2563  e8a8abffff           call 0x7ad110
// 007b2568  50                   push eax
// 007b2569  8b4238               mov eax, dword ptr [edx + 0x38]
// 007b256c  8bcd                 mov ecx, ebp
// 007b256e  ffd0                 call eax
// 007b2570  8b5500               mov edx, dword ptr [ebp]
// 007b2573  6a0f                 push 0xf
// 007b2575  8bce                 mov ecx, esi
// 007b2577  e894abffff           call 0x7ad110
// 007b257c  50                   push eax
// 007b257d  8b4234               mov eax, dword ptr [edx + 0x34]
// 007b2580  8bcd                 mov ecx, ebp
// 007b2582  ffd0                 call eax
// 007b2584  8b5504               mov edx, dword ptr [ebp + 4]
// 007b2587  8d4c2418             lea ecx, [esp + 0x18]
// 007b258b  51                   push ecx
// 007b258c  52                   push edx
// 007b258d  ff15c8ba9e00         call dword ptr [0x9ebac8]
// 007b2593  8b442414             mov eax, dword ptr [esp + 0x14]
// 007b2597  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b259b  8b542430             mov edx, dword ptr [esp + 0x30]
// 007b259f  50                   push eax
// 007b25a0  51                   push ecx
// 007b25a1  52                   push edx
// 007b25a2  eb67                 jmp 0x7b260b
// 007b25a4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b25a8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b25ac  8b542418             mov edx, dword ptr [esp + 0x18]
// 007b25b0  6a00                 push 0
// 007b25b2  50                   push eax
// 007b25b3  51                   push ecx
// 007b25b4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007b25b8  6a00                 push 0
// 007b25ba  6a00                 push 0
// 007b25bc  83ec10               sub esp, 0x10
// 007b25bf  8bc4                 mov eax, esp
// 007b25c1  8910                 mov dword ptr [eax], edx
// 007b25c3  8b542444             mov edx, dword ptr [esp + 0x44]
// 007b25c7  894804               mov dword ptr [eax + 4], ecx
// 007b25ca  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007b25ce  57                   push edi
// 007b25cf  895008               mov dword ptr [eax + 8], edx
// 007b25d2  55                   push ebp
// 007b25d3  8d542478             lea edx, [esp + 0x78]
// 007b25d7  89480c               mov dword ptr [eax + 0xc], ecx
// 007b25da  52                   push edx
// 007b25db  8bce                 mov ecx, esi
// 007b25dd  e87ee5ffff           call 0x7b0b60
// 007b25e2  8b542414             mov edx, dword ptr [esp + 0x14]
// 007b25e6  85d2                 test edx, edx
// 007b25e8  7412                 je 0x7b25fc
// 007b25ea  8b442450             mov eax, dword ptr [esp + 0x50]
// 007b25ee  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007b25f2  8d4c0805             lea ecx, [eax + ecx + 5]
// 007b25f6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007b25fa  eb0c                 jmp 0x7b2608
// 007b25fc  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007b2600  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007b2604  8d441805             lea eax, [eax + ebx + 5]
// 007b2608  52                   push edx
// 007b2609  51                   push ecx
// 007b260a  50                   push eax
// 007b260b  57                   push edi
// 007b260c  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 007b2613  57                   push edi
// 007b2614  8bce                 mov ecx, esi
// 007b2616  e815b3ffff           call 0x7ad930
// 007b261b  8d8c2484000000       lea ecx, [esp + 0x84]
// 007b2622  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 007b262d  e8eed00400           call 0x7ff720
// 007b2632  8bc7                 mov eax, edi
// 007b2634  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 007b263b  64890d00000000       mov dword ptr fs:[0], ecx
// 007b2642  59                   pop ecx
// 007b2643  5f                   pop edi
// 007b2644  5e                   pop esi
// 007b2645  5d                   pop ebp
// 007b2646  5b                   pop ebx
// 007b2647  81c4a4000000         add esp, 0xa4
// 007b264d  c21000               ret 0x10
// 007b2650  be227b00e1           mov esi, 0xe1007b22
// 007b2655  207b00               and byte ptr [ebx], bh
// 007b2658  2822                 sub byte ptr [edx], ah
// 007b265a  7b00                 jnp 0x7b265c
// 007b265c  2123                 and dword ptr [ebx], esp
// 007b265e  7b00                 jnp 0x7b2660
// 007b2660  0001                 add byte ptr [ecx], al
// 007b2662  0002                 add byte ptr [edx], al
// 007b2664  0303                 add eax, dword ptr [ebx]
// 007b2666  0300                 add eax, dword ptr [eax]
// 007b2668  0000                 add byte ptr [eax], al
// copied from an identical function in another client (function ?DrawControlToolBarParent@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp