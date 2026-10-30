// roc 2012-06 009c1ed0  unit: CRobloxTreeCtrl  size: 1544 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1ed0
//
// 009c1ed0  6aff                 push -1
// 009c1ed2  68e2f2ad00           push 0xadf2e2
// 009c1ed7  64a100000000         mov eax, dword ptr fs:[0]
// 009c1edd  50                   push eax
// 009c1ede  81ec78010000         sub esp, 0x178
// 009c1ee4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c1ee9  33c4                 xor eax, esp
// 009c1eeb  89842474010000       mov dword ptr [esp + 0x174], eax
// 009c1ef2  53                   push ebx
// 009c1ef3  55                   push ebp
// 009c1ef4  56                   push esi
// 009c1ef5  57                   push edi
// 009c1ef6  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c1efb  33c4                 xor eax, esp
// 009c1efd  50                   push eax
// 009c1efe  8d84248c010000       lea eax, [esp + 0x18c]
// 009c1f05  64a300000000         mov dword ptr fs:[0], eax
// 009c1f0b  8bb4249c010000       mov esi, dword ptr [esp + 0x19c]
// 009c1f12  8be9                 mov ebp, ecx
// 009c1f14  8b4534               mov eax, dword ptr [ebp + 0x34]
// 009c1f17  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c1f1a  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 009c1f21  51                   push ecx
// 009c1f22  52                   push edx
// 009c1f23  ff15d83ab200         call dword ptr [0xb23ad8]
// 009c1f29  8b4500               mov eax, dword ptr [ebp]
// 009c1f2c  8b5070               mov edx, dword ptr [eax + 0x70]
// 009c1f2f  8bcd                 mov ecx, ebp
// 009c1f31  ffd2                 call edx
// 009c1f33  8bd8                 mov ebx, eax
// 009c1f35  8b4500               mov eax, dword ptr [ebp]
// 009c1f38  8b5074               mov edx, dword ptr [eax + 0x74]
// 009c1f3b  8bcd                 mov ecx, ebp
// 009c1f3d  895c2444             mov dword ptr [esp + 0x44], ebx
// 009c1f41  ffd2                 call edx
// 009c1f43  33ff                 xor edi, edi
// 009c1f45  89442448             mov dword ptr [esp + 0x48], eax
// 009c1f49  3bf7                 cmp esi, edi
// 009c1f4b  7504                 jne 0x9c1f51
// 009c1f4d  33f6                 xor esi, esi
// 009c1f4f  eb03                 jmp 0x9c1f54
// 009c1f51  8b7604               mov esi, dword ptr [esi + 4]
// 009c1f54  8d8424bc000000       lea eax, [esp + 0xbc]
// 009c1f5b  50                   push eax
// 009c1f5c  56                   push esi
// 009c1f5d  8d4c247c             lea ecx, [esp + 0x7c]
// 009c1f61  e89a320100           call 0x9d5200
// 009c1f66  53                   push ebx
// 009c1f67  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 009c1f6e  51                   push ecx
// 009c1f6f  8d4c247c             lea ecx, [esp + 0x7c]
// 009c1f73  89bc249c010000       mov dword ptr [esp + 0x19c], edi
// 009c1f7a  e82d0ffcff           call 0x982eac
// 009c1f7f  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 009c1f82  8b442478             mov eax, dword ptr [esp + 0x78]
// 009c1f86  8b11                 mov edx, dword ptr [ecx]
// 009c1f88  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 009c1f8e  57                   push edi
// 009c1f8f  50                   push eax
// 009c1f90  6a0f                 push 0xf
// 009c1f92  ffd2                 call edx
// 009c1f94  8d4c2474             lea ecx, [esp + 0x74]
// 009c1f98  39bc24a0010000       cmp dword ptr [esp + 0x1a0], edi
// 009c1f9f  0f84f9040000         je 0x9c249e
// 009c1fa5  e888760d00           call 0xa99632
// 009c1faa  8bcd                 mov ecx, ebp
// 009c1fac  89442460             mov dword ptr [esp + 0x60], eax
// 009c1fb0  e8fbd6ffff           call 0x9bf6b0
// 009c1fb5  8b35043cb200         mov esi, dword ptr [0xb23c04]
// 009c1fbb  84c0                 test al, al
// 009c1fbd  7424                 je 0x9c1fe3
// 009c1fbf  8b4534               mov eax, dword ptr [ebp + 0x34]
// 009c1fc2  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c1fc5  57                   push edi
// 009c1fc6  57                   push edi
// 009c1fc7  680f110000           push 0x110f
// 009c1fcc  50                   push eax
// 009c1fcd  ffd6                 call esi
// 009c1fcf  50                   push eax
// 009c1fd0  e89106fcff           call 0x982666
// 009c1fd5  85c0                 test eax, eax
// 009c1fd7  740a                 je 0x9c1fe3
// 009c1fd9  c744245401000000     mov dword ptr [esp + 0x54], 1
// 009c1fe1  eb07                 jmp 0x9c1fea
// 009c1fe3  897c2454             mov dword ptr [esp + 0x54], edi
// 009c1fe7  897d10               mov dword ptr [ebp + 0x10], edi
// 009c1fea  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 009c1fed  e8ba770d00           call 0xa997ac
// 009c1ff2  89442450             mov dword ptr [esp + 0x50], eax
// 009c1ff6  ff15e83bb200         call dword ptr [0xb23be8]
// 009c1ffc  50                   push eax
// 009c1ffd  e86406fcff           call 0x982666
// 009c2002  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 009c2005  3bc1                 cmp eax, ecx
// 009c2007  0f94c2               sete dl
// 009c200a  8854245c             mov byte ptr [esp + 0x5c], dl
// 009c200e  e8bf750d00           call 0xa995d2
// 009c2013  57                   push edi
// 009c2014  89442450             mov dword ptr [esp + 0x50], eax
// 009c2018  8b4534               mov eax, dword ptr [ebp + 0x34]
// 009c201b  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c201e  6a05                 push 5
// 009c2020  680a110000           push 0x110a
// 009c2025  50                   push eax
// 009c2026  ffd6                 call esi
// 009c2028  57                   push edi
// 009c2029  8bd8                 mov ebx, eax
// 009c202b  8b4534               mov eax, dword ptr [ebp + 0x34]
// 009c202e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c2031  57                   push edi
// 009c2032  6810110000           push 0x1110
// 009c2037  51                   push ecx
// 009c2038  ffd6                 call esi
// 009c203a  6a00                 push 0
// 009c203c  8bf8                 mov edi, eax
// 009c203e  8b4534               mov eax, dword ptr [ebp + 0x34]
// 009c2041  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c2044  6a00                 push 0
// 009c2046  6a31                 push 0x31
// 009c2048  52                   push edx
// 009c2049  47                   inc edi
// 009c204a  ffd6                 call esi
// 009c204c  50                   push eax
// 009c204d  e89c0bfcff           call 0x982bee
// 009c2052  8b5004               mov edx, dword ptr [eax + 4]
// 009c2055  8d8c244c010000       lea ecx, [esp + 0x14c]
// 009c205c  51                   push ecx
// 009c205d  6a3c                 push 0x3c
// 009c205f  52                   push edx
// 009c2060  ff155021b200         call dword ptr [0xb22150]
// 009c2066  85c0                 test eax, eax
// 009c2068  7519                 jne 0x9c2083
// 009c206a  8d84244c010000       lea eax, [esp + 0x14c]
// 009c2071  50                   push eax
// 009c2072  6a3c                 push 0x3c
// 009c2074  6a11                 push 0x11
// 009c2076  ff153021b200         call dword ptr [0xb22130]
// 009c207c  50                   push eax
// 009c207d  ff155021b200         call dword ptr [0xb22150]
// 009c2083  85db                 test ebx, ebx
// 009c2085  0f8401040000         je 0x9c248c
// 009c208b  eb0d                 jmp 0x9c209a
// 009c208d  8d4900               lea ecx, [ecx]
// 009c2090  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 009c2094  8b35043cb200         mov esi, dword ptr [0xb23c04]
// 009c209a  8bcf                 mov ecx, edi
// 009c209c  4f                   dec edi
// 009c209d  897c2458             mov dword ptr [esp + 0x58], edi
// 009c20a1  85c9                 test ecx, ecx
// 009c20a3  0f84e3030000         je 0x9c248c
// 009c20a9  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 009c20ac  6a01                 push 1
// 009c20ae  8d542430             lea edx, [esp + 0x30]
// 009c20b2  52                   push edx
// 009c20b3  53                   push ebx
// 009c20b4  e8bb09fcff           call 0x982a74
// 009c20b9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009c20bd  8b542434             mov edx, dword ptr [esp + 0x34]
// 009c20c1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009c20c5  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 009c20c9  898c24a8000000       mov dword ptr [esp + 0xa8], ecx
// 009c20d0  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 009c20d7  899424ac000000       mov dword ptr [esp + 0xac], edx
// 009c20de  898424a4000000       mov dword ptr [esp + 0xa4], eax
// 009c20e5  8b442438             mov eax, dword ptr [esp + 0x38]
// 009c20e9  57                   push edi
// 009c20ea  8d9424a8000000       lea edx, [esp + 0xa8]
// 009c20f1  898c24b0000000       mov dword ptr [esp + 0xb0], ecx
// 009c20f8  52                   push edx
// 009c20f9  8d4c247c             lea ecx, [esp + 0x7c]
// 009c20fd  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 009c2104  e8a30dfcff           call 0x982eac
// 009c2109  6a0b                 push 0xb
// 009c210b  53                   push ebx
// 009c210c  8bcd                 mov ecx, ebp
// 009c210e  e8fde1ffff           call 0x9c0310
// 009c2113  6a00                 push 0
// 009c2115  8944241c             mov dword ptr [esp + 0x1c], eax
// 009c2119  8b4534               mov eax, dword ptr [ebp + 0x34]
// 009c211c  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c211f  6a08                 push 8
// 009c2121  680a110000           push 0x110a
// 009c2126  50                   push eax
// 009c2127  ffd6                 call esi
// 009c2129  85c0                 test eax, eax
// 009c212b  7422                 je 0x9c214f
// 009c212d  f644241802           test byte ptr [esp + 0x18], 2
// 009c2132  741b                 je 0x9c214f
// 009c2134  8b4534               mov eax, dword ptr [ebp + 0x34]
// 009c2137  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c213a  6a00                 push 0
// 009c213c  6a08                 push 8
// 009c213e  680a110000           push 0x110a
// 009c2143  51                   push ecx
// 009c2144  ffd6                 call esi
// 009c2146  3bd8                 cmp ebx, eax
// 009c2148  7405                 je 0x9c214f
// 009c214a  8374241802           xor dword ptr [esp + 0x18], 2
// 009c214f  8b442418             mov eax, dword ptr [esp + 0x18]
// 009c2153  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 009c2157  a80a                 test al, 0xa
// 009c2159  ba00000000           mov edx, 0
// 009c215e  0f95c2               setne dl
// 009c2161  395d14               cmp dword ptr [ebp + 0x14], ebx
// 009c2164  57                   push edi
// 009c2165  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 009c2169  57                   push edi
// 009c216a  56                   push esi
// 009c216b  50                   push eax
// 009c216c  89542434             mov dword ptr [esp + 0x34], edx
// 009c2170  8b5500               mov edx, dword ptr [ebp]
// 009c2173  8b4238               mov eax, dword ptr [edx + 0x38]
// 009c2176  8bcd                 mov ecx, ebp
// 009c2178  0f94442427           sete byte ptr [esp + 0x27]
// 009c217d  ffd0                 call eax
// 009c217f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009c2183  8b5500               mov edx, dword ptr [ebp]
// 009c2186  8b5278               mov edx, dword ptr [edx + 0x78]
// 009c2189  89442428             mov dword ptr [esp + 0x28], eax
// 009c218d  8b442448             mov eax, dword ptr [esp + 0x48]
// 009c2191  50                   push eax
// 009c2192  57                   push edi
// 009c2193  56                   push esi
// 009c2194  51                   push ecx
// 009c2195  8bcd                 mov ecx, ebp
// 009c2197  ffd2                 call edx
// 009c2199  89442420             mov dword ptr [esp + 0x20], eax
// 009c219d  395d10               cmp dword ptr [ebp + 0x10], ebx
// 009c21a0  750c                 jne 0x9c21ae
// 009c21a2  8b442444             mov eax, dword ptr [esp + 0x44]
// 009c21a6  89442428             mov dword ptr [esp + 0x28], eax
// 009c21aa  89442420             mov dword ptr [esp + 0x20], eax
// 009c21ae  6a3c                 push 0x3c
// 009c21b0  b90f000000           mov ecx, 0xf
// 009c21b5  8db42450010000       lea esi, [esp + 0x150]
// 009c21bc  8dbc2414010000       lea edi, [esp + 0x114]
// 009c21c3  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c21c5  8d8424d0000000       lea eax, [esp + 0xd0]
// 009c21cc  83ceff               or esi, 0xffffffff
// 009c21cf  6a00                 push 0
// 009c21d1  50                   push eax
// 009c21d2  89b42414010000       mov dword ptr [esp + 0x114], esi
// 009c21d9  89b42418010000       mov dword ptr [esp + 0x118], esi
// 009c21e0  e88f11fcff           call 0x983374
// 009c21e5  83c40c               add esp, 0xc
// 009c21e8  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 009c21ef  51                   push ecx
// 009c21f0  53                   push ebx
// 009c21f1  8d4d18               lea ecx, [ebp + 0x18]
// 009c21f4  e8f7f8ffff           call 0x9c1af0
// 009c21f9  85c0                 test eax, eax
// 009c21fb  744b                 je 0x9c2248
// 009c21fd  837c242400           cmp dword ptr [esp + 0x24], 0
// 009c2202  7525                 jne 0x9c2229
// 009c2204  837c245000           cmp dword ptr [esp + 0x50], 0
// 009c2209  741e                 je 0x9c2229
// 009c220b  8b842408010000       mov eax, dword ptr [esp + 0x108]
// 009c2212  3bc6                 cmp eax, esi
// 009c2214  7404                 je 0x9c221a
// 009c2216  89442420             mov dword ptr [esp + 0x20], eax
// 009c221a  8b84240c010000       mov eax, dword ptr [esp + 0x10c]
// 009c2221  3bc6                 cmp eax, esi
// 009c2223  7404                 je 0x9c2229
// 009c2225  89442428             mov dword ptr [esp + 0x28], eax
// 009c2229  80bc24e800000000     cmp byte ptr [esp + 0xe8], 0
// 009c2231  7415                 je 0x9c2248
// 009c2233  b90f000000           mov ecx, 0xf
// 009c2238  8db424cc000000       lea esi, [esp + 0xcc]
// 009c223f  8dbc2410010000       lea edi, [esp + 0x110]
// 009c2246  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c2248  8b5500               mov edx, dword ptr [ebp]
// 009c224b  8b4228               mov eax, dword ptr [edx + 0x28]
// 009c224e  53                   push ebx
// 009c224f  8bcd                 mov ecx, ebp
// 009c2251  ffd0                 call eax
// 009c2253  85c0                 test eax, eax
// 009c2255  740b                 je 0x9c2262
// 009c2257  c7842420010000bc020000 mov dword ptr [esp + 0x120], 0x2bc
// 009c2262  f744244c00020000     test dword ptr [esp + 0x4c], 0x200
// 009c226a  7455                 je 0x9c22c1
// 009c226c  807c241700           cmp byte ptr [esp + 0x17], 0
// 009c2271  0f95c0               setne al
// 009c2274  88842425010000       mov byte ptr [esp + 0x125], al
// 009c227b  84c0                 test al, al
// 009c227d  7442                 je 0x9c22c1
// 009c227f  837c242400           cmp dword ptr [esp + 0x24], 0
// 009c2284  753b                 jne 0x9c22c1
// 009c2286  e805730000           call 0x9c9590
// 009c228b  8bc8                 mov ecx, eax
// 009c228d  e82e730000           call 0x9c95c0
// 009c2292  84c0                 test al, al
// 009c2294  7519                 jne 0x9c22af
// 009c2296  e8f5720000           call 0x9c9590
// 009c229b  8bc8                 mov ecx, eax
// 009c229d  e87e7b0000           call 0x9c9e20
// 009c22a2  84c0                 test al, al
// 009c22a4  7509                 jne 0x9c22af
// 009c22a6  e8b5b5ffff           call 0x9bd860
// 009c22ab  6a1a                 push 0x1a
// 009c22ad  eb07                 jmp 0x9c22b6
// 009c22af  e8acb5ffff           call 0x9bd860
// 009c22b4  6a0d                 push 0xd
// 009c22b6  8bc8                 mov ecx, eax
// 009c22b8  e823adffff           call 0x9bcfe0
// 009c22bd  89442420             mov dword ptr [esp + 0x20], eax
// 009c22c1  c744244000000000     mov dword ptr [esp + 0x40], 0
// 009c22c9  c744243c5007b600     mov dword ptr [esp + 0x3c], 0xb60750
// 009c22d1  8d8c2410010000       lea ecx, [esp + 0x110]
// 009c22d8  51                   push ecx
// 009c22d9  c684249801000001     mov byte ptr [esp + 0x198], 1
// 009c22e1  ff15a820b200         call dword ptr [0xb220a8]
// 009c22e7  50                   push eax
// 009c22e8  8d4c2440             lea ecx, [esp + 0x40]
// 009c22ec  e8e703fcff           call 0x9826d8
// 009c22f1  8d54243c             lea edx, [esp + 0x3c]
// 009c22f5  52                   push edx
// 009c22f6  8d4c2478             lea ecx, [esp + 0x78]
// 009c22fa  e845730d00           call 0xa99644
// 009c22ff  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 009c2302  8bf8                 mov edi, eax
// 009c2304  53                   push ebx
// 009c2305  8d442420             lea eax, [esp + 0x20]
// 009c2309  50                   push eax
// 009c230a  e827750d00           call 0xa99836
// 009c230f  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 009c2316  51                   push ecx
// 009c2317  8d4c2420             lea ecx, [esp + 0x20]
// 009c231b  c684249801000002     mov byte ptr [esp + 0x198], 2
// 009c2323  ff155846b200         call dword ptr [0xb24658]
// 009c2329  50                   push eax
// 009c232a  8d4c2424             lea ecx, [esp + 0x24]
// 009c232e  ff159847b200         call dword ptr [0xb24798]
// 009c2334  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 009c233b  50                   push eax
// 009c233c  52                   push edx
// 009c233d  ff154021b200         call dword ptr [0xb22140]
// 009c2343  8b542434             mov edx, dword ptr [esp + 0x34]
// 009c2347  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009c234b  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 009c2352  2bd0                 sub edx, eax
// 009c2354  3bd1                 cmp edx, ecx
// 009c2356  7d08                 jge 0x9c2360
// 009c2358  8d440102             lea eax, [ecx + eax + 2]
// 009c235c  89442434             mov dword ptr [esp + 0x34], eax
// 009c2360  8b742428             mov esi, dword ptr [esp + 0x28]
// 009c2364  56                   push esi
// 009c2365  8d4c2478             lea ecx, [esp + 0x78]
// 009c2369  e8dc720d00           call 0xa9964a
// 009c236e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009c2372  51                   push ecx
// 009c2373  8d4c2478             lea ecx, [esp + 0x78]
// 009c2377  e8d4720d00           call 0xa99650
// 009c237c  837c242400           cmp dword ptr [esp + 0x24], 0
// 009c2381  740f                 je 0x9c2392
// 009c2383  56                   push esi
// 009c2384  8d542430             lea edx, [esp + 0x30]
// 009c2388  52                   push edx
// 009c2389  8d4c247c             lea ecx, [esp + 0x7c]
// 009c238d  e81a0bfcff           call 0x982eac
// 009c2392  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009c2396  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009c239a  8b542434             mov edx, dword ptr [esp + 0x34]
// 009c239e  6a00                 push 0
// 009c23a0  894c246c             mov dword ptr [esp + 0x6c], ecx
// 009c23a4  89442468             mov dword ptr [esp + 0x68], eax
// 009c23a8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009c23ac  6a03                 push 3
// 009c23ae  8d4c246c             lea ecx, [esp + 0x6c]
// 009c23b2  51                   push ecx
// 009c23b3  89542478             mov dword ptr [esp + 0x78], edx
// 009c23b7  8944247c             mov dword ptr [esp + 0x7c], eax
// 009c23bb  ff15f43ab200         call dword ptr [0xb23af4]
// 009c23c1  8b742474             mov esi, dword ptr [esp + 0x74]
// 009c23c5  6824080000           push 0x824
// 009c23ca  8d542468             lea edx, [esp + 0x68]
// 009c23ce  52                   push edx
// 009c23cf  8d4c2424             lea ecx, [esp + 0x24]
// 009c23d3  83c670               add esi, 0x70
// 009c23d6  ff155846b200         call dword ptr [0xb24658]
// 009c23dc  50                   push eax
// 009c23dd  8d4c2428             lea ecx, [esp + 0x28]
// 009c23e1  ff159847b200         call dword ptr [0xb24798]
// 009c23e7  50                   push eax
// 009c23e8  8b06                 mov eax, dword ptr [esi]
// 009c23ea  8d8c2484000000       lea ecx, [esp + 0x84]
// 009c23f1  ffd0                 call eax
// 009c23f3  f644241801           test byte ptr [esp + 0x18], 1
// 009c23f8  743d                 je 0x9c2437
// 009c23fa  837c245400           cmp dword ptr [esp + 0x54], 0
// 009c23ff  7536                 jne 0x9c2437
// 009c2401  837c245000           cmp dword ptr [esp + 0x50], 0
// 009c2406  742f                 je 0x9c2437
// 009c2408  ff15e83bb200         call dword ptr [0xb23be8]
// 009c240e  50                   push eax
// 009c240f  e85202fcff           call 0x982666
// 009c2414  3b4534               cmp eax, dword ptr [ebp + 0x34]
// 009c2417  751e                 jne 0x9c2437
// 009c2419  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009c241d  51                   push ecx
// 009c241e  8d4c2478             lea ecx, [esp + 0x78]
// 009c2422  e829720d00           call 0xa99650
// 009c2427  8b442478             mov eax, dword ptr [esp + 0x78]
// 009c242b  8d54242c             lea edx, [esp + 0x2c]
// 009c242f  52                   push edx
// 009c2430  50                   push eax
// 009c2431  ff15d43cb200         call dword ptr [0xb23cd4]
// 009c2437  57                   push edi
// 009c2438  8d4c2478             lea ecx, [esp + 0x78]
// 009c243c  e803720d00           call 0xa99644
// 009c2441  8d4c243c             lea ecx, [esp + 0x3c]
// 009c2445  e88202fcff           call 0x9826cc
// 009c244a  8b4534               mov eax, dword ptr [ebp + 0x34]
// 009c244d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c2450  53                   push ebx
// 009c2451  6a06                 push 6
// 009c2453  680a110000           push 0x110a
// 009c2458  51                   push ecx
// 009c2459  ff15043cb200         call dword ptr [0xb23c04]
// 009c245f  8d4c241c             lea ecx, [esp + 0x1c]
// 009c2463  8bd8                 mov ebx, eax
// 009c2465  ff15d047b200         call dword ptr [0xb247d0]
// 009c246b  8d4c243c             lea ecx, [esp + 0x3c]
// 009c246f  c684249401000000     mov byte ptr [esp + 0x194], 0
// 009c2477  c744243c5007b600     mov dword ptr [esp + 0x3c], 0xb60750
// 009c247f  e87c47a5ff           call 0x416c00
// 009c2484  85db                 test ebx, ebx
// 009c2486  0f8504fcffff         jne 0x9c2090
// 009c248c  8b542460             mov edx, dword ptr [esp + 0x60]
// 009c2490  52                   push edx
// 009c2491  8d4c2478             lea ecx, [esp + 0x78]
// 009c2495  e89e710d00           call 0xa99638
// 009c249a  8d4c2474             lea ecx, [esp + 0x74]
// 009c249e  c7842494010000ffffffff mov dword ptr [esp + 0x194], 0xffffffff
// 009c24a9  e8622f0100           call 0x9d5410
// 009c24ae  8b8c248c010000       mov ecx, dword ptr [esp + 0x18c]
// 009c24b5  64890d00000000       mov dword ptr fs:[0], ecx
// 009c24bc  59                   pop ecx
// 009c24bd  5f                   pop edi
// 009c24be  5e                   pop esi
// 009c24bf  5d                   pop ebp
// 009c24c0  5b                   pop ebx
// 009c24c1  8b8c2474010000       mov ecx, dword ptr [esp + 0x174]
// 009c24c8  33cc                 xor ecx, esp
// 009c24ca  e86815fcff           call 0x983a37
// 009c24cf  81c484010000         add esp, 0x184
// 009c24d5  c20800               ret 8
// copied from an identical function in another client (function ?DoPaint@CXTTreeBase@@MAEXAAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp