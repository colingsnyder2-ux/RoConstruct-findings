// roc 2012-06 00a5c150  unit: CXTPPropertyGridPaintManager  size: 1645 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5c150
//
// 00a5c150  6aff                 push -1
// 00a5c152  687e79ae00           push 0xae797e
// 00a5c157  64a100000000         mov eax, dword ptr fs:[0]
// 00a5c15d  50                   push eax
// 00a5c15e  81ecb8000000         sub esp, 0xb8
// 00a5c164  53                   push ebx
// 00a5c165  55                   push ebp
// 00a5c166  56                   push esi
// 00a5c167  57                   push edi
// 00a5c168  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a5c16d  33c4                 xor eax, esp
// 00a5c16f  50                   push eax
// 00a5c170  8d8424cc000000       lea eax, [esp + 0xcc]
// 00a5c177  64a300000000         mov dword ptr fs:[0], eax
// 00a5c17d  8bf1                 mov esi, ecx
// 00a5c17f  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00a5c182  e89955f8ff           call 0x9e1720
// 00a5c187  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 00a5c18e  8b7d2c               mov edi, dword ptr [ebp + 0x2c]
// 00a5c191  50                   push eax
// 00a5c192  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 00a5c199  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a5c19d  e89e8ff7ff           call 0x9d5140
// 00a5c1a2  8d451c               lea eax, [ebp + 0x1c]
// 00a5c1a5  50                   push eax
// 00a5c1a6  8d4c2420             lea ecx, [esp + 0x20]
// 00a5c1aa  51                   push ecx
// 00a5c1ab  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a5c1b1  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00a5c1b4  8d54241c             lea edx, [esp + 0x1c]
// 00a5c1b8  52                   push edx
// 00a5c1b9  50                   push eax
// 00a5c1ba  8d4c245c             lea ecx, [esp + 0x5c]
// 00a5c1be  e83d90f7ff           call 0x9d5200
// 00a5c1c3  8b16                 mov edx, dword ptr [esi]
// 00a5c1c5  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a5c1c8  6a01                 push 1
// 00a5c1ca  57                   push edi
// 00a5c1cb  8bce                 mov ecx, esi
// 00a5c1cd  c78424dc00000000000000 mov dword ptr [esp + 0xdc], 0
// 00a5c1d8  ffd0                 call eax
// 00a5c1da  50                   push eax
// 00a5c1db  8d4c2458             lea ecx, [esp + 0x58]
// 00a5c1df  51                   push ecx
// 00a5c1e0  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00a5c1e7  e84493f7ff           call 0x9d5530
// 00a5c1ec  8b16                 mov edx, dword ptr [esi]
// 00a5c1ee  8b4208               mov eax, dword ptr [edx + 8]
// 00a5c1f1  6a00                 push 0
// 00a5c1f3  57                   push edi
// 00a5c1f4  8bce                 mov ecx, esi
// 00a5c1f6  c68424dc00000001     mov byte ptr [esp + 0xdc], 1
// 00a5c1fe  ffd0                 call eax
// 00a5c200  50                   push eax
// 00a5c201  8d4c2420             lea ecx, [esp + 0x20]
// 00a5c205  51                   push ecx
// 00a5c206  8d4c245c             lea ecx, [esp + 0x5c]
// 00a5c20a  e89d6cf2ff           call 0x982eac
// 00a5c20f  6a01                 push 1
// 00a5c211  8d4c2458             lea ecx, [esp + 0x58]
// 00a5c215  e88ed30300           call 0xa995a8
// 00a5c21a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5c21e  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00a5c222  e8f92ff9ff           call 0x9ef220
// 00a5c227  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a5c22b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5c22f  03c2                 add eax, edx
// 00a5c231  895c2438             mov dword ptr [esp + 0x38], ebx
// 00a5c235  8b1e                 mov ebx, dword ptr [esi]
// 00a5c237  89442414             mov dword ptr [esp + 0x14], eax
// 00a5c23b  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a5c23f  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a5c243  89442434             mov dword ptr [esp + 0x34], eax
// 00a5c247  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 00a5c24d  83ec10               sub esp, 0x10
// 00a5c250  85c0                 test eax, eax
// 00a5c252  0f8481010000         je 0xa5c3d9
// 00a5c258  8bc4                 mov eax, esp
// 00a5c25a  8910                 mov dword ptr [eax], edx
// 00a5c25c  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a5c260  894804               mov dword ptr [eax + 4], ecx
// 00a5c263  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a5c267  895008               mov dword ptr [eax + 8], edx
// 00a5c26a  89480c               mov dword ptr [eax + 0xc], ecx
// 00a5c26d  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00a5c270  8d542464             lea edx, [esp + 0x64]
// 00a5c274  52                   push edx
// 00a5c275  8bce                 mov ecx, esi
// 00a5c277  ffd0                 call eax
// 00a5c279  8b16                 mov edx, dword ptr [esi]
// 00a5c27b  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a5c27e  6a00                 push 0
// 00a5c280  57                   push edi
// 00a5c281  8bce                 mov ecx, esi
// 00a5c283  ffd0                 call eax
// 00a5c285  50                   push eax
// 00a5c286  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00a5c28d  e87e7df7ff           call 0x9d4010
// 00a5c292  8b16                 mov edx, dword ptr [esi]
// 00a5c294  8b4204               mov eax, dword ptr [edx + 4]
// 00a5c297  6a00                 push 0
// 00a5c299  57                   push edi
// 00a5c29a  8bce                 mov ecx, esi
// 00a5c29c  ffd0                 call eax
// 00a5c29e  50                   push eax
// 00a5c29f  8d4c2458             lea ecx, [esp + 0x58]
// 00a5c2a3  e8a8d30300           call 0xa99650
// 00a5c2a8  8d4c2444             lea ecx, [esp + 0x44]
// 00a5c2ac  e84f8ef7ff           call 0x9d5100
// 00a5c2b1  8d4c2414             lea ecx, [esp + 0x14]
// 00a5c2b5  51                   push ecx
// 00a5c2b6  8bcf                 mov ecx, edi
// 00a5c2b8  e853839fff           call 0x454610
// 00a5c2bd  8be8                 mov ebp, eax
// 00a5c2bf  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00a5c2c3  68240c0000           push 0xc24
// 00a5c2c8  8d542448             lea edx, [esp + 0x48]
// 00a5c2cc  52                   push edx
// 00a5c2cd  8bcd                 mov ecx, ebp
// 00a5c2cf  c68424dc00000002     mov byte ptr [esp + 0xdc], 2
// 00a5c2d7  83c370               add ebx, 0x70
// 00a5c2da  ff155846b200         call dword ptr [0xb24658]
// 00a5c2e0  50                   push eax
// 00a5c2e1  8bcd                 mov ecx, ebp
// 00a5c2e3  ff159847b200         call dword ptr [0xb24798]
// 00a5c2e9  50                   push eax
// 00a5c2ea  8b03                 mov eax, dword ptr [ebx]
// 00a5c2ec  8d4c2464             lea ecx, [esp + 0x64]
// 00a5c2f0  ffd0                 call eax
// 00a5c2f2  8d4c2414             lea ecx, [esp + 0x14]
// 00a5c2f6  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 00a5c2fe  ff15d047b200         call dword ptr [0xb247d0]
// 00a5c304  8b9784000000         mov edx, dword ptr [edi + 0x84]
// 00a5c30a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00a5c30e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a5c312  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a5c316  2b4c2444             sub ecx, dword ptr [esp + 0x44]
// 00a5c31a  8d1cd500000000       lea ebx, [edx*8]
// 00a5c321  2bda                 sub ebx, edx
// 00a5c323  2bc5                 sub eax, ebp
// 00a5c325  8d541b0d             lea edx, [ebx + ebx + 0xd]
// 00a5c329  8d4c0a04             lea ecx, [edx + ecx + 4]
// 00a5c32d  45                   inc ebp
// 00a5c32e  89942488000000       mov dword ptr [esp + 0x88], edx
// 00a5c335  8d5428fd             lea edx, [eax + ebp - 3]
// 00a5c339  8d442414             lea eax, [esp + 0x14]
// 00a5c33d  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 00a5c344  50                   push eax
// 00a5c345  8bcf                 mov ecx, edi
// 00a5c347  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 00a5c34e  89942498000000       mov dword ptr [esp + 0x98], edx
// 00a5c355  e8b6829fff           call 0x454610
// 00a5c35a  8bd8                 mov ebx, eax
// 00a5c35c  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00a5c360  c68424d400000003     mov byte ptr [esp + 0xd4], 3
// 00a5c368  83c570               add ebp, 0x70
// 00a5c36b  6826080000           push 0x826
// 00a5c370  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00a5c377  51                   push ecx
// 00a5c378  8bcb                 mov ecx, ebx
// 00a5c37a  ff155846b200         call dword ptr [0xb24658]
// 00a5c380  50                   push eax
// 00a5c381  8bcb                 mov ecx, ebx
// 00a5c383  ff159847b200         call dword ptr [0xb24798]
// 00a5c389  8b5500               mov edx, dword ptr [ebp]
// 00a5c38c  50                   push eax
// 00a5c38d  8d4c2464             lea ecx, [esp + 0x64]
// 00a5c391  ffd2                 call edx
// 00a5c393  8d4c2414             lea ecx, [esp + 0x14]
// 00a5c397  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 00a5c39f  ff15d047b200         call dword ptr [0xb247d0]
// 00a5c3a5  8bac24dc000000       mov ebp, dword ptr [esp + 0xdc]
// 00a5c3ac  f6451010             test byte ptr [ebp + 0x10], 0x10
// 00a5c3b0  0f84c4020000         je 0xa5c67a
// 00a5c3b6  6a00                 push 0
// 00a5c3b8  8d4c2458             lea ecx, [esp + 0x58]
// 00a5c3bc  e88fd20300           call 0xa99650
// 00a5c3c1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a5c3c5  8d842488000000       lea eax, [esp + 0x88]
// 00a5c3cc  50                   push eax
// 00a5c3cd  51                   push ecx
// 00a5c3ce  ff15d43cb200         call dword ptr [0xb23cd4]
// 00a5c3d4  e9a1020000           jmp 0xa5c67a
// 00a5c3d9  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5c3dd  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a5c3e1  894c2458             mov dword ptr [esp + 0x58], ecx
// 00a5c3e5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5c3e9  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a5c3ed  8bc4                 mov eax, esp
// 00a5c3ef  8908                 mov dword ptr [eax], ecx
// 00a5c3f1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a5c3f5  894804               mov dword ptr [eax + 4], ecx
// 00a5c3f8  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a5c3fc  4a                   dec edx
// 00a5c3fd  894808               mov dword ptr [eax + 8], ecx
// 00a5c400  89500c               mov dword ptr [eax + 0xc], edx
// 00a5c403  8b4340               mov eax, dword ptr [ebx + 0x40]
// 00a5c406  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a5c40a  57                   push edi
// 00a5c40b  8d542468             lea edx, [esp + 0x68]
// 00a5c40f  52                   push edx
// 00a5c410  8bce                 mov ecx, esi
// 00a5c412  ffd0                 call eax
// 00a5c414  8b16                 mov edx, dword ptr [esi]
// 00a5c416  8b4204               mov eax, dword ptr [edx + 4]
// 00a5c419  6a00                 push 0
// 00a5c41b  57                   push edi
// 00a5c41c  8bce                 mov ecx, esi
// 00a5c41e  ffd0                 call eax
// 00a5c420  50                   push eax
// 00a5c421  8d4c2458             lea ecx, [esp + 0x58]
// 00a5c425  e826d20300           call 0xa99650
// 00a5c42a  8b16                 mov edx, dword ptr [esi]
// 00a5c42c  8b420c               mov eax, dword ptr [edx + 0xc]
// 00a5c42f  6a00                 push 0
// 00a5c431  57                   push edi
// 00a5c432  8bce                 mov ecx, esi
// 00a5c434  ffd0                 call eax
// 00a5c436  50                   push eax
// 00a5c437  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00a5c43e  e8cd7bf7ff           call 0x9d4010
// 00a5c443  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00a5c446  83e001               and eax, 1
// 00a5c449  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a5c450  0f84a8000000         je 0xa5c4fe
// 00a5c456  8b1de83bb200         mov ebx, dword ptr [0xb23be8]
// 00a5c45c  ffd3                 call ebx
// 00a5c45e  50                   push eax
// 00a5c45f  e80262f2ff           call 0x982666
// 00a5c464  85c0                 test eax, eax
// 00a5c466  7469                 je 0xa5c4d1
// 00a5c468  ffd3                 call ebx
// 00a5c46a  50                   push eax
// 00a5c46b  e8f661f2ff           call 0x982666
// 00a5c470  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00a5c474  7433                 je 0xa5c4a9
// 00a5c476  ffd3                 call ebx
// 00a5c478  50                   push eax
// 00a5c479  e8e861f2ff           call 0x982666
// 00a5c47e  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a5c481  51                   push ecx
// 00a5c482  ff15503ab200         call dword ptr [0xb23a50]
// 00a5c488  50                   push eax
// 00a5c489  e8d861f2ff           call 0x982666
// 00a5c48e  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00a5c492  7415                 je 0xa5c4a9
// 00a5c494  ffd3                 call ebx
// 00a5c496  50                   push eax
// 00a5c497  e8ca61f2ff           call 0x982666
// 00a5c49c  8bc8                 mov ecx, eax
// 00a5c49e  e8ed86f3ff           call 0x994b90
// 00a5c4a3  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00a5c4a7  7528                 jne 0xa5c4d1
// 00a5c4a9  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00a5c4ac  83f8ff               cmp eax, -1
// 00a5c4af  7503                 jne 0xa5c4b4
// 00a5c4b1  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a5c4b4  50                   push eax
// 00a5c4b5  8d4c2458             lea ecx, [esp + 0x58]
// 00a5c4b9  e892d10300           call 0xa99650
// 00a5c4be  8b4650               mov eax, dword ptr [esi + 0x50]
// 00a5c4c1  83f8ff               cmp eax, -1
// 00a5c4c4  7503                 jne 0xa5c4c9
// 00a5c4c6  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00a5c4c9  50                   push eax
// 00a5c4ca  8d542430             lea edx, [esp + 0x30]
// 00a5c4ce  52                   push edx
// 00a5c4cf  eb24                 jmp 0xa5c4f5
// 00a5c4d1  8b4660               mov eax, dword ptr [esi + 0x60]
// 00a5c4d4  83785c00             cmp dword ptr [eax + 0x5c], 0
// 00a5c4d8  7524                 jne 0xa5c4fe
// 00a5c4da  8b4674               mov eax, dword ptr [esi + 0x74]
// 00a5c4dd  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00a5c4e0  83c04c               add eax, 0x4c
// 00a5c4e3  83f9ff               cmp ecx, -1
// 00a5c4e6  7505                 jne 0xa5c4ed
// 00a5c4e8  8b4004               mov eax, dword ptr [eax + 4]
// 00a5c4eb  eb02                 jmp 0xa5c4ef
// 00a5c4ed  8bc1                 mov eax, ecx
// 00a5c4ef  50                   push eax
// 00a5c4f0  8d4c2430             lea ecx, [esp + 0x30]
// 00a5c4f4  51                   push ecx
// 00a5c4f5  8d4c245c             lea ecx, [esp + 0x5c]
// 00a5c4f9  e8ae69f2ff           call 0x982eac
// 00a5c4fe  8b9fb8000000         mov ebx, dword ptr [edi + 0xb8]
// 00a5c504  85db                 test ebx, ebx
// 00a5c506  745f                 je 0xa5c567
// 00a5c508  eb06                 jmp 0xa5c510
// 00a5c50a  8d9b00000000         lea ebx, [ebx]
// 00a5c510  83bb9800000000       cmp dword ptr [ebx + 0x98], 0
// 00a5c517  7444                 je 0xa5c55d
// 00a5c519  8b4674               mov eax, dword ptr [esi + 0x74]
// 00a5c51c  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00a5c51f  83c04c               add eax, 0x4c
// 00a5c522  83f9ff               cmp ecx, -1
// 00a5c525  7505                 jne 0xa5c52c
// 00a5c527  8b4004               mov eax, dword ptr [eax + 4]
// 00a5c52a  eb02                 jmp 0xa5c52e
// 00a5c52c  8bc1                 mov eax, ecx
// 00a5c52e  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5c532  8b8b84000000         mov ecx, dword ptr [ebx + 0x84]
// 00a5c538  50                   push eax
// 00a5c539  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a5c53d  2bd0                 sub edx, eax
// 00a5c53f  52                   push edx
// 00a5c540  6a0e                 push 0xe
// 00a5c542  50                   push eax
// 00a5c543  8d04cd00000000       lea eax, [ecx*8]
// 00a5c54a  2bc1                 sub eax, ecx
// 00a5c54c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5c550  8d1441               lea edx, [ecx + eax*2]
// 00a5c553  52                   push edx
// 00a5c554  8d4c2468             lea ecx, [esp + 0x68]
// 00a5c558  e833d00300           call 0xa99590
// 00a5c55d  8b9bb8000000         mov ebx, dword ptr [ebx + 0xb8]
// 00a5c563  85db                 test ebx, ebx
// 00a5c565  75a9                 jne 0xa5c510
// 00a5c567  8b4674               mov eax, dword ptr [esi + 0x74]
// 00a5c56a  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00a5c56d  83c04c               add eax, 0x4c
// 00a5c570  83f9ff               cmp ecx, -1
// 00a5c573  7505                 jne 0xa5c57a
// 00a5c575  8b4004               mov eax, dword ptr [eax + 4]
// 00a5c578  eb02                 jmp 0xa5c57c
// 00a5c57a  8bc1                 mov eax, ecx
// 00a5c57c  50                   push eax
// 00a5c57d  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a5c581  50                   push eax
// 00a5c582  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00a5c589  e84290f7ff           call 0x9d55d0
// 00a5c58e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5c592  49                   dec ecx
// 00a5c593  51                   push ecx
// 00a5c594  6a00                 push 0
// 00a5c596  8d942490000000       lea edx, [esp + 0x90]
// 00a5c59d  52                   push edx
// 00a5c59e  8d4c2460             lea ecx, [esp + 0x60]
// 00a5c5a2  c68424e000000004     mov byte ptr [esp + 0xe0], 4
// 00a5c5aa  e8536af2ff           call 0x983002
// 00a5c5af  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a5c5b3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5c5b7  48                   dec eax
// 00a5c5b8  50                   push eax
// 00a5c5b9  51                   push ecx
// 00a5c5ba  8d4c245c             lea ecx, [esp + 0x5c]
// 00a5c5be  e8396af2ff           call 0x982ffc
// 00a5c5c3  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a5c5c7  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5c5cb  52                   push edx
// 00a5c5cc  50                   push eax
// 00a5c5cd  8d8c2490000000       lea ecx, [esp + 0x90]
// 00a5c5d4  51                   push ecx
// 00a5c5d5  8d4c2460             lea ecx, [esp + 0x60]
// 00a5c5d9  e8246af2ff           call 0x983002
// 00a5c5de  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5c5e2  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5c5e6  4a                   dec edx
// 00a5c5e7  52                   push edx
// 00a5c5e8  50                   push eax
// 00a5c5e9  8d4c245c             lea ecx, [esp + 0x5c]
// 00a5c5ed  e80a6af2ff           call 0x982ffc
// 00a5c5f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5c5f6  8b16                 mov edx, dword ptr [esi]
// 00a5c5f8  8b5244               mov edx, dword ptr [edx + 0x44]
// 00a5c5fb  83ec10               sub esp, 0x10
// 00a5c5fe  8bc4                 mov eax, esp
// 00a5c600  8908                 mov dword ptr [eax], ecx
// 00a5c602  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a5c606  894804               mov dword ptr [eax + 4], ecx
// 00a5c609  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a5c60d  894808               mov dword ptr [eax + 8], ecx
// 00a5c610  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a5c614  89480c               mov dword ptr [eax + 0xc], ecx
// 00a5c617  57                   push edi
// 00a5c618  8d442468             lea eax, [esp + 0x68]
// 00a5c61c  50                   push eax
// 00a5c61d  8bce                 mov ecx, esi
// 00a5c61f  ffd2                 call edx
// 00a5c621  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 00a5c629  750c                 jne 0xa5c637
// 00a5c62b  8b4660               mov eax, dword ptr [esi + 0x60]
// 00a5c62e  83b86801000000       cmp dword ptr [eax + 0x168], 0
// 00a5c635  742f                 je 0xa5c666
// 00a5c637  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5c63b  8b16                 mov edx, dword ptr [esi]
// 00a5c63d  8b5248               mov edx, dword ptr [edx + 0x48]
// 00a5c640  83ec10               sub esp, 0x10
// 00a5c643  8bc4                 mov eax, esp
// 00a5c645  8908                 mov dword ptr [eax], ecx
// 00a5c647  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a5c64b  894804               mov dword ptr [eax + 4], ecx
// 00a5c64e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a5c652  894808               mov dword ptr [eax + 8], ecx
// 00a5c655  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a5c659  89480c               mov dword ptr [eax + 0xc], ecx
// 00a5c65c  57                   push edi
// 00a5c65d  8d442468             lea eax, [esp + 0x68]
// 00a5c661  50                   push eax
// 00a5c662  8bce                 mov ecx, esi
// 00a5c664  ffd2                 call edx
// 00a5c666  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00a5c66d  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 00a5c675  e8e68ff7ff           call 0x9d5660
// 00a5c67a  8b4508               mov eax, dword ptr [ebp + 8]
// 00a5c67d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a5c681  40                   inc eax
// 00a5c682  50                   push eax
// 00a5c683  e8382ef9ff           call 0x9ef4c0
// 00a5c688  85c0                 test eax, eax
// 00a5c68a  744a                 je 0xa5c6d6
// 00a5c68c  83b89800000000       cmp dword ptr [eax + 0x98], 0
// 00a5c693  7441                 je 0xa5c6d6
// 00a5c695  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00a5c69c  7438                 je 0xa5c6d6
// 00a5c69e  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00a5c6a1  83f9ff               cmp ecx, -1
// 00a5c6a4  7503                 jne 0xa5c6a9
// 00a5c6a6  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00a5c6a9  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 00a5c6af  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5c6b3  51                   push ecx
// 00a5c6b4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5c6b8  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 00a5c6bc  6a01                 push 1
// 00a5c6be  51                   push ecx
// 00a5c6bf  8d0cc500000000       lea ecx, [eax*8]
// 00a5c6c6  2bc8                 sub ecx, eax
// 00a5c6c8  4a                   dec edx
// 00a5c6c9  03c9                 add ecx, ecx
// 00a5c6cb  52                   push edx
// 00a5c6cc  51                   push ecx
// 00a5c6cd  8d4c2468             lea ecx, [esp + 0x68]
// 00a5c6d1  e8bace0300           call 0xa99590
// 00a5c6d6  8bcf                 mov ecx, edi
// 00a5c6d8  e8c368f9ff           call 0x9f2fa0
// 00a5c6dd  85c0                 test eax, eax
// 00a5c6df  0f8494000000         je 0xa5c779
// 00a5c6e5  bb28e1c000           mov ebx, 0xc0e128
// 00a5c6ea  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00a5c6f2  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00a5c6f6  83bf9800000000       cmp dword ptr [edi + 0x98], 0
// 00a5c6fd  c68424d400000005     mov byte ptr [esp + 0xd4], 5
// 00a5c705  7523                 jne 0xa5c72a
// 00a5c707  8d54242c             lea edx, [esp + 0x2c]
// 00a5c70b  52                   push edx
// 00a5c70c  ff152c21b200         call dword ptr [0xb2212c]
// 00a5c712  50                   push eax
// 00a5c713  8d4c2440             lea ecx, [esp + 0x40]
// 00a5c717  e8bc5ff2ff           call 0x9826d8
// 00a5c71c  8d44243c             lea eax, [esp + 0x3c]
// 00a5c720  50                   push eax
// 00a5c721  8d4c2458             lea ecx, [esp + 0x58]
// 00a5c725  e8c4d00300           call 0xa997ee
// 00a5c72a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5c72e  8b16                 mov edx, dword ptr [esi]
// 00a5c730  8b5238               mov edx, dword ptr [edx + 0x38]
// 00a5c733  83ec10               sub esp, 0x10
// 00a5c736  8bc4                 mov eax, esp
// 00a5c738  8908                 mov dword ptr [eax], ecx
// 00a5c73a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a5c73e  894804               mov dword ptr [eax + 4], ecx
// 00a5c741  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a5c745  894808               mov dword ptr [eax + 8], ecx
// 00a5c748  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a5c74c  89480c               mov dword ptr [eax + 0xc], ecx
// 00a5c74f  57                   push edi
// 00a5c750  8d442468             lea eax, [esp + 0x68]
// 00a5c754  50                   push eax
// 00a5c755  8bce                 mov ecx, esi
// 00a5c757  ffd2                 call edx
// 00a5c759  6a00                 push 0
// 00a5c75b  8d4c2458             lea ecx, [esp + 0x58]
// 00a5c75f  e88ad00300           call 0xa997ee
// 00a5c764  8d4c243c             lea ecx, [esp + 0x3c]
// 00a5c768  c68424d400000001     mov byte ptr [esp + 0xd4], 1
// 00a5c770  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00a5c774  e887a49bff           call 0x416c00
// 00a5c779  8d8c2498000000       lea ecx, [esp + 0x98]
// 00a5c780  c68424d400000000     mov byte ptr [esp + 0xd4], 0
// 00a5c788  e8238ef7ff           call 0x9d55b0
// 00a5c78d  8d4c2454             lea ecx, [esp + 0x54]
// 00a5c791  c78424d4000000ffffffff mov dword ptr [esp + 0xd4], 0xffffffff
// 00a5c79c  e86f8cf7ff           call 0x9d5410
// 00a5c7a1  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 00a5c7a8  64890d00000000       mov dword ptr fs:[0], ecx
// 00a5c7af  59                   pop ecx
// 00a5c7b0  5f                   pop edi
// 00a5c7b1  5e                   pop esi
// 00a5c7b2  5d                   pop ebp
// 00a5c7b3  5b                   pop ebx
// 00a5c7b4  81c4c4000000         add esp, 0xc4
// 00a5c7ba  c20400               ret 4
// copied from an identical function in another client (function ?DrawItem@CXTPPropertyGridPaintManager@@UAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp