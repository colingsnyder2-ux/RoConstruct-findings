// roc 2010-06 0087e010  unit: CXTPPropertyGridPaintManager  size: 1667 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087e010
//
// 0087e010  6aff                 push -1
// 0087e012  6886a99b00           push 0x9ba986
// 0087e017  64a100000000         mov eax, dword ptr fs:[0]
// 0087e01d  50                   push eax
// 0087e01e  81ec80000000         sub esp, 0x80
// 0087e024  53                   push ebx
// 0087e025  55                   push ebp
// 0087e026  56                   push esi
// 0087e027  57                   push edi
// 0087e028  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087e02d  33c4                 xor eax, esp
// 0087e02f  50                   push eax
// 0087e030  8d842494000000       lea eax, [esp + 0x94]
// 0087e037  64a300000000         mov dword ptr fs:[0], eax
// 0087e03d  8bf9                 mov edi, ecx
// 0087e03f  897c2424             mov dword ptr [esp + 0x24], edi
// 0087e043  33db                 xor ebx, ebx
// 0087e045  399c24b8000000       cmp dword ptr [esp + 0xb8], ebx
// 0087e04c  7511                 jne 0x87e05f
// 0087e04e  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0087e056  399c24bc000000       cmp dword ptr [esp + 0xbc], ebx
// 0087e05d  7404                 je 0x87e063
// 0087e05f  895c2428             mov dword ptr [esp + 0x28], ebx
// 0087e063  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 0087e06a  8d4764               lea eax, [edi + 0x64]
// 0087e06d  50                   push eax
// 0087e06e  56                   push esi
// 0087e06f  8d4c247c             lea ecx, [esp + 0x7c]
// 0087e073  e82816f8ff           call 0x7ff6a0
// 0087e078  6afc                 push -4
// 0087e07a  6afa                 push -6
// 0087e07c  8d8424b0000000       lea eax, [esp + 0xb0]
// 0087e083  50                   push eax
// 0087e084  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 0087e08b  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0087e091  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0087e094  8b8938010000         mov ecx, dword ptr [ecx + 0x138]
// 0087e09a  e80101f5ff           call 0x7ce1a0
// 0087e09f  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 0087e0a6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0087e0a9  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 0087e0b0  8bd8                 mov ebx, eax
// 0087e0b2  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 0087e0b9  2bc5                 sub eax, ebp
// 0087e0bb  89442434             mov dword ptr [esp + 0x34], eax
// 0087e0bf  8d44243c             lea eax, [esp + 0x3c]
// 0087e0c3  50                   push eax
// 0087e0c4  6a03                 push 3
// 0087e0c6  68fc50a600           push 0xa650fc
// 0087e0cb  51                   push ecx
// 0087e0cc  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0087e0d0  89542428             mov dword ptr [esp + 0x28], edx
// 0087e0d4  ff1594a19e00         call dword ptr [0x9ea194]
// 0087e0da  33c0                 xor eax, eax
// 0087e0dc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087e0e0  85db                 test ebx, ebx
// 0087e0e2  7f40                 jg 0x87e124
// 0087e0e4  8d4c2474             lea ecx, [esp + 0x74]
// 0087e0e8  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 0087e0f3  e82816f8ff           call 0x7ff720
// 0087e0f8  83c8ff               or eax, 0xffffffff
// 0087e0fb  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0087e102  64890d00000000       mov dword ptr fs:[0], ecx
// 0087e109  59                   pop ecx
// 0087e10a  5f                   pop edi
// 0087e10b  5e                   pop esi
// 0087e10c  5d                   pop ebp
// 0087e10d  5b                   pop ebx
// 0087e10e  81c48c000000         add esp, 0x8c
// 0087e114  c21c00               ret 0x1c
// 0087e117  eb07                 jmp 0x87e120
// 0087e119  8da42400000000       lea esp, [esp]
// 0087e120  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087e124  8b5760               mov edx, dword ptr [edi + 0x60]
// 0087e127  8b8a38010000         mov ecx, dword ptr [edx + 0x138]
// 0087e12d  85c0                 test eax, eax
// 0087e12f  0f8c59050000         jl 0x87e68e
// 0087e135  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0087e138  0f8d50050000         jge 0x87e68e
// 0087e13e  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0087e141  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 0087e144  8d0481               lea eax, [ecx + eax*4]
// 0087e147  8d542414             lea edx, [esp + 0x14]
// 0087e14b  52                   push edx
// 0087e14c  8bcb                 mov ecx, ebx
// 0087e14e  e81df6ffff           call 0x87d770
// 0087e153  8d4c2414             lea ecx, [esp + 0x14]
// 0087e157  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 0087e15f  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0087e165  84c0                 test al, al
// 0087e167  0f8531040000         jne 0x87e59e
// 0087e16d  8d442444             lea eax, [esp + 0x44]
// 0087e171  50                   push eax
// 0087e172  8d4c2418             lea ecx, [esp + 0x18]
// 0087e176  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087e17c  50                   push eax
// 0087e17d  8d4c241c             lea ecx, [esp + 0x1c]
// 0087e181  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087e187  8b4e08               mov ecx, dword ptr [esi + 8]
// 0087e18a  50                   push eax
// 0087e18b  51                   push ecx
// 0087e18c  ff1594a19e00         call dword ptr [0x9ea194]
// 0087e192  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0087e196  8d142f               lea edx, [edi + ebp]
// 0087e199  3b542434             cmp edx, dword ptr [esp + 0x34]
// 0087e19d  0f8cb6020000         jl 0x87e459
// 0087e1a3  8d4c2414             lea ecx, [esp + 0x14]
// 0087e1a7  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087e1ad  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087e1b1  48                   dec eax
// 0087e1b2  2bcd                 sub ecx, ebp
// 0087e1b4  0fafc1               imul eax, ecx
// 0087e1b7  99                   cdq 
// 0087e1b8  f7ff                 idiv edi
// 0087e1ba  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 0087e1c1  83f801               cmp eax, 1
// 0087e1c4  89442438             mov dword ptr [esp + 0x38], eax
// 0087e1c8  8bf8                 mov edi, eax
// 0087e1ca  7d08                 jge 0x87e1d4
// 0087e1cc  3be9                 cmp ebp, ecx
// 0087e1ce  0f84bd030000         je 0x87e591
// 0087e1d4  85c0                 test eax, eax
// 0087e1d6  7c45                 jl 0x87e21d
// 0087e1d8  eb06                 jmp 0x87e1e0
// 0087e1da  8d9b00000000         lea ebx, [ebx]
// 0087e1e0  57                   push edi
// 0087e1e1  8d4c2418             lea ecx, [esp + 0x18]
// 0087e1e5  ff1558c59e00         call dword ptr [0x9ec558]
// 0087e1eb  3c20                 cmp al, 0x20
// 0087e1ed  7423                 je 0x87e212
// 0087e1ef  57                   push edi
// 0087e1f0  8d4c2418             lea ecx, [esp + 0x18]
// 0087e1f4  ff1558c59e00         call dword ptr [0x9ec558]
// 0087e1fa  3c2c                 cmp al, 0x2c
// 0087e1fc  7414                 je 0x87e212
// 0087e1fe  57                   push edi
// 0087e1ff  8d4c2418             lea ecx, [esp + 0x18]
// 0087e203  ff1558c59e00         call dword ptr [0x9ec558]
// 0087e209  3c2d                 cmp al, 0x2d
// 0087e20b  7405                 je 0x87e212
// 0087e20d  83ef01               sub edi, 1
// 0087e210  79ce                 jns 0x87e1e0
// 0087e212  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 0087e219  8b442438             mov eax, dword ptr [esp + 0x38]
// 0087e21d  85ff                 test edi, edi
// 0087e21f  7f15                 jg 0x87e236
// 0087e221  3be9                 cmp ebp, ecx
// 0087e223  740f                 je 0x87e234
// 0087e225  8b542440             mov edx, dword ptr [esp + 0x40]
// 0087e229  01542418             add dword ptr [esp + 0x18], edx
// 0087e22d  8be9                 mov ebp, ecx
// 0087e22f  e9a3010000           jmp 0x87e3d7
// 0087e234  8bf8                 mov edi, eax
// 0087e236  47                   inc edi
// 0087e237  57                   push edi
// 0087e238  8d442424             lea eax, [esp + 0x24]
// 0087e23c  50                   push eax
// 0087e23d  8d4c241c             lea ecx, [esp + 0x1c]
// 0087e241  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 0087e247  57                   push edi
// 0087e248  8d4c2434             lea ecx, [esp + 0x34]
// 0087e24c  51                   push ecx
// 0087e24d  8d4c241c             lea ecx, [esp + 0x1c]
// 0087e251  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 0087e259  ff1574c69e00         call dword ptr [0x9ec674]
// 0087e25f  8d54244c             lea edx, [esp + 0x4c]
// 0087e263  52                   push edx
// 0087e264  8d4c2424             lea ecx, [esp + 0x24]
// 0087e268  c68424a000000003     mov byte ptr [esp + 0xa0], 3
// 0087e270  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087e276  50                   push eax
// 0087e277  8d4c2428             lea ecx, [esp + 0x28]
// 0087e27b  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087e281  50                   push eax
// 0087e282  8b4608               mov eax, dword ptr [esi + 8]
// 0087e285  50                   push eax
// 0087e286  ff1594a19e00         call dword ptr [0x9ea194]
// 0087e28c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087e290  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087e294  8d3c01               lea edi, [ecx + eax]
// 0087e297  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0087e29e  3bf9                 cmp edi, ecx
// 0087e2a0  897c2418             mov dword ptr [esp + 0x18], edi
// 0087e2a4  8bd7                 mov edx, edi
// 0087e2a6  7c02                 jl 0x87e2aa
// 0087e2a8  8bd1                 mov edx, ecx
// 0087e2aa  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0087e2ae  03cd                 add ecx, ebp
// 0087e2b0  3b8c24b0000000       cmp ecx, dword ptr [esp + 0xb0]
// 0087e2b7  7c07                 jl 0x87e2c0
// 0087e2b9  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0087e2c0  837c242800           cmp dword ptr [esp + 0x28], 0
// 0087e2c5  896c2454             mov dword ptr [esp + 0x54], ebp
// 0087e2c9  89442458             mov dword ptr [esp + 0x58], eax
// 0087e2cd  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0087e2d1  89542460             mov dword ptr [esp + 0x60], edx
// 0087e2d5  0f8424010000         je 0x87e3ff
// 0087e2db  896b2c               mov dword ptr [ebx + 0x2c], ebp
// 0087e2de  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0087e2e2  894330               mov dword ptr [ebx + 0x30], eax
// 0087e2e5  894b34               mov dword ptr [ebx + 0x34], ecx
// 0087e2e8  895338               mov dword ptr [ebx + 0x38], edx
// 0087e2eb  8b4574               mov eax, dword ptr [ebp + 0x74]
// 0087e2ee  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 0087e2f4  0588000000           add eax, 0x88
// 0087e2f9  83f9ff               cmp ecx, -1
// 0087e2fc  7505                 jne 0x87e303
// 0087e2fe  8b4004               mov eax, dword ptr [eax + 4]
// 0087e301  eb02                 jmp 0x87e305
// 0087e303  8bc1                 mov eax, ecx
// 0087e305  8b16                 mov edx, dword ptr [esi]
// 0087e307  50                   push eax
// 0087e308  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087e30b  8bce                 mov ecx, esi
// 0087e30d  ffd0                 call eax
// 0087e30f  8b3e                 mov edi, dword ptr [esi]
// 0087e311  6820080000           push 0x820
// 0087e316  8d4c2458             lea ecx, [esp + 0x58]
// 0087e31a  51                   push ecx
// 0087e31b  8d4c2428             lea ecx, [esp + 0x28]
// 0087e31f  83c770               add edi, 0x70
// 0087e322  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087e328  50                   push eax
// 0087e329  8d4c242c             lea ecx, [esp + 0x2c]
// 0087e32d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087e333  8b17                 mov edx, dword ptr [edi]
// 0087e335  50                   push eax
// 0087e336  8bce                 mov ecx, esi
// 0087e338  ffd2                 call edx
// 0087e33a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0087e33d  8b4034               mov eax, dword ptr [eax + 0x34]
// 0087e340  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 0087e343  3b8848010000         cmp ecx, dword ptr [eax + 0x148]
// 0087e349  7552                 jne 0x87e39d
// 0087e34b  85c0                 test eax, eax
// 0087e34d  7504                 jne 0x87e353
// 0087e34f  33ff                 xor edi, edi
// 0087e351  eb03                 jmp 0x87e356
// 0087e353  8b7820               mov edi, dword ptr [eax + 0x20]
// 0087e356  ff1580ba9e00         call dword ptr [0x9eba80]
// 0087e35c  3bc7                 cmp eax, edi
// 0087e35e  753d                 jne 0x87e39d
// 0087e360  8b4574               mov eax, dword ptr [ebp + 0x74]
// 0087e363  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0087e366  83c034               add eax, 0x34
// 0087e369  83f9ff               cmp ecx, -1
// 0087e36c  7505                 jne 0x87e373
// 0087e36e  8b4004               mov eax, dword ptr [eax + 4]
// 0087e371  eb02                 jmp 0x87e375
// 0087e373  8bc1                 mov eax, ecx
// 0087e375  8b16                 mov edx, dword ptr [esi]
// 0087e377  50                   push eax
// 0087e378  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087e37b  8bce                 mov ecx, esi
// 0087e37d  ffd0                 call eax
// 0087e37f  8b16                 mov edx, dword ptr [esi]
// 0087e381  8b4234               mov eax, dword ptr [edx + 0x34]
// 0087e384  6a00                 push 0
// 0087e386  8bce                 mov ecx, esi
// 0087e388  ffd0                 call eax
// 0087e38a  8b5604               mov edx, dword ptr [esi + 4]
// 0087e38d  ff442460             inc dword ptr [esp + 0x60]
// 0087e391  8d4c2454             lea ecx, [esp + 0x54]
// 0087e395  51                   push ecx
// 0087e396  52                   push edx
// 0087e397  ff15c8ba9e00         call dword ptr [0x9ebac8]
// 0087e39d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0087e3a1  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 0087e3a8  8d442430             lea eax, [esp + 0x30]
// 0087e3ac  50                   push eax
// 0087e3ad  8d4c2418             lea ecx, [esp + 0x18]
// 0087e3b1  897c241c             mov dword ptr [esp + 0x1c], edi
// 0087e3b5  ff1580c59e00         call dword ptr [0x9ec580]
// 0087e3bb  8d4c2430             lea ecx, [esp + 0x30]
// 0087e3bf  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087e3c5  8d4c2420             lea ecx, [esp + 0x20]
// 0087e3c9  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 0087e3d1  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087e3d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087e3db  3b8c24b4000000       cmp ecx, dword ptr [esp + 0xb4]
// 0087e3e2  0f8d97020000         jge 0x87e67f
// 0087e3e8  8d4c2414             lea ecx, [esp + 0x14]
// 0087e3ec  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0087e3f2  84c0                 test al, al
// 0087e3f4  0f8473fdffff         je 0x87e16d
// 0087e3fa  e99b010000           jmp 0x87e59a
// 0087e3ff  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 0087e406  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0087e40d  50                   push eax
// 0087e40e  51                   push ecx
// 0087e40f  8d54245c             lea edx, [esp + 0x5c]
// 0087e413  52                   push edx
// 0087e414  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0087e41a  85c0                 test eax, eax
// 0087e41c  7483                 je 0x87e3a1
// 0087e41e  8d4c2430             lea ecx, [esp + 0x30]
// 0087e422  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087e428  8d4c2420             lea ecx, [esp + 0x20]
// 0087e42c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087e432  8d4c2414             lea ecx, [esp + 0x14]
// 0087e436  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087e43c  8d4c2474             lea ecx, [esp + 0x74]
// 0087e440  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 0087e44b  e8d012f8ff           call 0x7ff720
// 0087e450  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087e454  e9a2fcffff           jmp 0x87e0fb
// 0087e459  8b542440             mov edx, dword ptr [esp + 0x40]
// 0087e45d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087e461  8d0c02               lea ecx, [edx + eax]
// 0087e464  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 0087e46b  3bca                 cmp ecx, edx
// 0087e46d  7d02                 jge 0x87e471
// 0087e46f  8bd1                 mov edx, ecx
// 0087e471  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0087e478  03fd                 add edi, ebp
// 0087e47a  3bf9                 cmp edi, ecx
// 0087e47c  897c2438             mov dword ptr [esp + 0x38], edi
// 0087e480  7d02                 jge 0x87e484
// 0087e482  8bcf                 mov ecx, edi
// 0087e484  837c242800           cmp dword ptr [esp + 0x28], 0
// 0087e489  896c2464             mov dword ptr [esp + 0x64], ebp
// 0087e48d  89442468             mov dword ptr [esp + 0x68], eax
// 0087e491  894c246c             mov dword ptr [esp + 0x6c], ecx
// 0087e495  89542470             mov dword ptr [esp + 0x70], edx
// 0087e499  0f84cb000000         je 0x87e56a
// 0087e49f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0087e4a3  896b2c               mov dword ptr [ebx + 0x2c], ebp
// 0087e4a6  894330               mov dword ptr [ebx + 0x30], eax
// 0087e4a9  894b34               mov dword ptr [ebx + 0x34], ecx
// 0087e4ac  895338               mov dword ptr [ebx + 0x38], edx
// 0087e4af  8b4774               mov eax, dword ptr [edi + 0x74]
// 0087e4b2  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 0087e4b8  0588000000           add eax, 0x88
// 0087e4bd  83f9ff               cmp ecx, -1
// 0087e4c0  7505                 jne 0x87e4c7
// 0087e4c2  8b4004               mov eax, dword ptr [eax + 4]
// 0087e4c5  eb02                 jmp 0x87e4c9
// 0087e4c7  8bc1                 mov eax, ecx
// 0087e4c9  8b16                 mov edx, dword ptr [esi]
// 0087e4cb  50                   push eax
// 0087e4cc  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087e4cf  8bce                 mov ecx, esi
// 0087e4d1  ffd0                 call eax
// 0087e4d3  8b2e                 mov ebp, dword ptr [esi]
// 0087e4d5  6820080000           push 0x820
// 0087e4da  8d4c2468             lea ecx, [esp + 0x68]
// 0087e4de  51                   push ecx
// 0087e4df  8d4c241c             lea ecx, [esp + 0x1c]
// 0087e4e3  83c570               add ebp, 0x70
// 0087e4e6  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087e4ec  50                   push eax
// 0087e4ed  8d4c2420             lea ecx, [esp + 0x20]
// 0087e4f1  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087e4f7  8b5500               mov edx, dword ptr [ebp]
// 0087e4fa  50                   push eax
// 0087e4fb  8bce                 mov ecx, esi
// 0087e4fd  ffd2                 call edx
// 0087e4ff  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0087e502  8b4034               mov eax, dword ptr [eax + 0x34]
// 0087e505  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 0087e508  3b8848010000         cmp ecx, dword ptr [eax + 0x148]
// 0087e50e  7552                 jne 0x87e562
// 0087e510  85c0                 test eax, eax
// 0087e512  7504                 jne 0x87e518
// 0087e514  33db                 xor ebx, ebx
// 0087e516  eb03                 jmp 0x87e51b
// 0087e518  8b5820               mov ebx, dword ptr [eax + 0x20]
// 0087e51b  ff1580ba9e00         call dword ptr [0x9eba80]
// 0087e521  3bc3                 cmp eax, ebx
// 0087e523  753d                 jne 0x87e562
// 0087e525  8b4774               mov eax, dword ptr [edi + 0x74]
// 0087e528  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0087e52b  83c034               add eax, 0x34
// 0087e52e  83f9ff               cmp ecx, -1
// 0087e531  7505                 jne 0x87e538
// 0087e533  8b4004               mov eax, dword ptr [eax + 4]
// 0087e536  eb02                 jmp 0x87e53a
// 0087e538  8bc1                 mov eax, ecx
// 0087e53a  8b16                 mov edx, dword ptr [esi]
// 0087e53c  50                   push eax
// 0087e53d  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087e540  8bce                 mov ecx, esi
// 0087e542  ffd0                 call eax
// 0087e544  8b16                 mov edx, dword ptr [esi]
// 0087e546  8b4234               mov eax, dword ptr [edx + 0x34]
// 0087e549  6a00                 push 0
// 0087e54b  8bce                 mov ecx, esi
// 0087e54d  ffd0                 call eax
// 0087e54f  8b5604               mov edx, dword ptr [esi + 4]
// 0087e552  ff442470             inc dword ptr [esp + 0x70]
// 0087e556  8d4c2464             lea ecx, [esp + 0x64]
// 0087e55a  51                   push ecx
// 0087e55b  52                   push edx
// 0087e55c  ff15c8ba9e00         call dword ptr [0x9ebac8]
// 0087e562  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0087e566  8bef                 mov ebp, edi
// 0087e568  eb30                 jmp 0x87e59a
// 0087e56a  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 0087e571  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0087e578  50                   push eax
// 0087e579  51                   push ecx
// 0087e57a  8d54246c             lea edx, [esp + 0x6c]
// 0087e57e  52                   push edx
// 0087e57f  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 0087e585  85c0                 test eax, eax
// 0087e587  0f85a5feffff         jne 0x87e432
// 0087e58d  8bef                 mov ebp, edi
// 0087e58f  eb09                 jmp 0x87e59a
// 0087e591  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087e595  48                   dec eax
// 0087e596  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087e59a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0087e59e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0087e5a2  3b9c24b4000000       cmp ebx, dword ptr [esp + 0xb4]
// 0087e5a9  0f8dd0000000         jge 0x87e67f
// 0087e5af  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087e5b3  49                   dec ecx
// 0087e5b4  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 0087e5b8  0f84c1000000         je 0x87e67f
// 0087e5be  837c242800           cmp dword ptr [esp + 0x28], 0
// 0087e5c3  0f8489000000         je 0x87e652
// 0087e5c9  8d576c               lea edx, [edi + 0x6c]
// 0087e5cc  52                   push edx
// 0087e5cd  8d4c2478             lea ecx, [esp + 0x78]
// 0087e5d1  e84afcf7ff           call 0x7fe220
// 0087e5d6  8b4774               mov eax, dword ptr [edi + 0x74]
// 0087e5d9  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0087e5dc  83c040               add eax, 0x40
// 0087e5df  83f9ff               cmp ecx, -1
// 0087e5e2  7505                 jne 0x87e5e9
// 0087e5e4  8b4004               mov eax, dword ptr [eax + 4]
// 0087e5e7  eb02                 jmp 0x87e5eb
// 0087e5e9  8bc1                 mov eax, ecx
// 0087e5eb  8b16                 mov edx, dword ptr [esi]
// 0087e5ed  50                   push eax
// 0087e5ee  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087e5f1  8bce                 mov ecx, esi
// 0087e5f3  ffd0                 call eax
// 0087e5f5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0087e5f9  8d0419               lea eax, [ecx + ebx]
// 0087e5fc  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0087e603  3bc1                 cmp eax, ecx
// 0087e605  7c02                 jl 0x87e609
// 0087e607  8bc1                 mov eax, ecx
// 0087e609  6820080000           push 0x820
// 0087e60e  8d8c2488000000       lea ecx, [esp + 0x88]
// 0087e615  51                   push ecx
// 0087e616  8d5508               lea edx, [ebp + 8]
// 0087e619  89842498000000       mov dword ptr [esp + 0x98], eax
// 0087e620  8b06                 mov eax, dword ptr [esi]
// 0087e622  6a01                 push 1
// 0087e624  89942498000000       mov dword ptr [esp + 0x98], edx
// 0087e62b  8b5070               mov edx, dword ptr [eax + 0x70]
// 0087e62e  68c430a100           push 0xa130c4
// 0087e633  8bce                 mov ecx, esi
// 0087e635  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 0087e63c  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 0087e643  ffd2                 call edx
// 0087e645  8d4764               lea eax, [edi + 0x64]
// 0087e648  50                   push eax
// 0087e649  8d4c2478             lea ecx, [esp + 0x78]
// 0087e64d  e8cefbf7ff           call 0x7fe220
// 0087e652  8d4c2414             lea ecx, [esp + 0x14]
// 0087e656  83c508               add ebp, 8
// 0087e659  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 0087e661  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087e667  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0087e66b  40                   inc eax
// 0087e66c  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 0087e670  8944241c             mov dword ptr [esp + 0x1c], eax
// 0087e674  0f8ca6faffff         jl 0x87e120
// 0087e67a  e965faffff           jmp 0x87e0e4
// 0087e67f  8d4c2414             lea ecx, [esp + 0x14]
// 0087e683  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087e689  e956faffff           jmp 0x87e0e4
// 0087e68e  e8b995f2ff           call 0x7a7c4c
// copied from an identical function in another client (function ?HitTestVerbs@CXTPPropertyGridPaintManager@@QAEHPAVCDC@@VCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp