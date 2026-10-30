// roc 2012-06 00a2e6f0  unit: CXTPReportInplaceList  size: 1117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2e6f0
//
// 00a2e6f0  6aff                 push -1
// 00a2e6f2  68b252ae00           push 0xae52b2
// 00a2e6f7  64a100000000         mov eax, dword ptr fs:[0]
// 00a2e6fd  50                   push eax
// 00a2e6fe  83ec74               sub esp, 0x74
// 00a2e701  53                   push ebx
// 00a2e702  55                   push ebp
// 00a2e703  56                   push esi
// 00a2e704  57                   push edi
// 00a2e705  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2e70a  33c4                 xor eax, esp
// 00a2e70c  50                   push eax
// 00a2e70d  8d842488000000       lea eax, [esp + 0x88]
// 00a2e714  64a300000000         mov dword ptr fs:[0], eax
// 00a2e71a  8bf1                 mov esi, ecx
// 00a2e71c  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a2e71f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 00a2e726  8b5004               mov edx, dword ptr [eax + 4]
// 00a2e729  8d4e54               lea ecx, [esi + 0x54]
// 00a2e72c  53                   push ebx
// 00a2e72d  ffd2                 call edx
// 00a2e72f  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00a2e732  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00a2e735  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00a2e738  89442444             mov dword ptr [esp + 0x44], eax
// 00a2e73c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00a2e73f  33ed                 xor ebp, ebp
// 00a2e741  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a2e745  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a2e749  89442450             mov dword ptr [esp + 0x50], eax
// 00a2e74d  396e20               cmp dword ptr [esi + 0x20], ebp
// 00a2e750  7552                 jne 0xa2e7a4
// 00a2e752  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00a2e755  55                   push ebp
// 00a2e756  55                   push ebp
// 00a2e757  51                   push ecx
// 00a2e758  8d542438             lea edx, [esp + 0x38]
// 00a2e75c  52                   push edx
// 00a2e75d  680100a040           push 0x40a00001
// 00a2e762  68e83bb400           push 0xb43be8
// 00a2e767  6850dec000           push 0xc0de50
// 00a2e76c  896c2448             mov dword ptr [esp + 0x48], ebp
// 00a2e770  896c244c             mov dword ptr [esp + 0x4c], ebp
// 00a2e774  896c2450             mov dword ptr [esp + 0x50], ebp
// 00a2e778  896c2454             mov dword ptr [esp + 0x54], ebp
// 00a2e77c  e857ae0600           call 0xa995d8
// 00a2e781  2500004000           and eax, 0x400000
// 00a2e786  0d80000000           or eax, 0x80
// 00a2e78b  50                   push eax
// 00a2e78c  8bce                 mov ecx, esi
// 00a2e78e  e8f939f5ff           call 0x98218c
// 00a2e793  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a2e796  3bc5                 cmp eax, ebp
// 00a2e798  7405                 je 0xa2e79f
// 00a2e79a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a2e79d  eb02                 jmp 0xa2e7a1
// 00a2e79f  33c0                 xor eax, eax
// 00a2e7a1  894638               mov dword ptr [esi + 0x38], eax
// 00a2e7a4  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a2e7a7  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00a2e7ad  83c020               add eax, 0x20
// 00a2e7b0  3bc5                 cmp eax, ebp
// 00a2e7b2  7504                 jne 0xa2e7b8
// 00a2e7b4  33c0                 xor eax, eax
// 00a2e7b6  eb03                 jmp 0xa2e7bb
// 00a2e7b8  8b4004               mov eax, dword ptr [eax + 4]
// 00a2e7bb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2e7be  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 00a2e7c4  6a01                 push 1
// 00a2e7c6  50                   push eax
// 00a2e7c7  6a30                 push 0x30
// 00a2e7c9  51                   push ecx
// 00a2e7ca  ffd7                 call edi
// 00a2e7cc  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a2e7cf  55                   push ebp
// 00a2e7d0  55                   push ebp
// 00a2e7d1  6884010000           push 0x184
// 00a2e7d6  52                   push edx
// 00a2e7d7  ffd7                 call edi
// 00a2e7d9  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00a2e7dd  2b6c2444             sub ebp, dword ptr [esp + 0x44]
// 00a2e7e1  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a2e7e4  50                   push eax
// 00a2e7e5  8d4c2478             lea ecx, [esp + 0x78]
// 00a2e7e9  45                   inc ebp
// 00a2e7ea  e8adad0600           call 0xa9959c
// 00a2e7ef  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2e7f2  6a00                 push 0
// 00a2e7f4  6a00                 push 0
// 00a2e7f6  6a31                 push 0x31
// 00a2e7f8  51                   push ecx
// 00a2e7f9  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 00a2e804  ffd7                 call edi
// 00a2e806  50                   push eax
// 00a2e807  e8e243f5ff           call 0x982bee
// 00a2e80c  50                   push eax
// 00a2e80d  8d542478             lea edx, [esp + 0x78]
// 00a2e811  52                   push edx
// 00a2e812  8d4c246c             lea ecx, [esp + 0x6c]
// 00a2e816  e8156dfaff           call 0x9d5530
// 00a2e81b  6a0a                 push 0xa
// 00a2e81d  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00a2e825  ff15fc3bb200         call dword ptr [0xb23bfc]
// 00a2e82b  8b5660               mov edx, dword ptr [esi + 0x60]
// 00a2e82e  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00a2e831  89442420             mov dword ptr [esp + 0x20], eax
// 00a2e835  8b01                 mov eax, dword ptr [ecx]
// 00a2e837  8b406c               mov eax, dword ptr [eax + 0x6c]
// 00a2e83a  52                   push edx
// 00a2e83b  8d542420             lea edx, [esp + 0x20]
// 00a2e83f  52                   push edx
// 00a2e840  ffd0                 call eax
// 00a2e842  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00a2e845  8b11                 mov edx, dword ptr [ecx]
// 00a2e847  8b8238010000         mov eax, dword ptr [edx + 0x138]
// 00a2e84d  53                   push ebx
// 00a2e84e  c684249400000002     mov byte ptr [esp + 0x94], 2
// 00a2e856  ffd0                 call eax
// 00a2e858  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00a2e85f  89442424             mov dword ptr [esp + 0x24], eax
// 00a2e863  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00a2e86b  e8f0cdffff           call 0xa2b660
// 00a2e870  85c0                 test eax, eax
// 00a2e872  0f8e2e010000         jle 0xa2e9a6
// 00a2e878  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a2e87c  51                   push ecx
// 00a2e87d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a2e884  e8f71f0000           call 0xa30880
// 00a2e889  8bd8                 mov ebx, eax
// 00a2e88b  8d5320               lea edx, [ebx + 0x20]
// 00a2e88e  52                   push edx
// 00a2e88f  8d4c2418             lea ecx, [esp + 0x18]
// 00a2e893  ff158047b200         call dword ptr [0xb24780]
// 00a2e899  8d4c2414             lea ecx, [esp + 0x14]
// 00a2e89d  c684249000000003     mov byte ptr [esp + 0x90], 3
// 00a2e8a5  ff159847b200         call dword ptr [0xb24798]
// 00a2e8ab  50                   push eax
// 00a2e8ac  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2e8af  6a00                 push 0
// 00a2e8b1  6880010000           push 0x180
// 00a2e8b6  50                   push eax
// 00a2e8b7  ffd7                 call edi
// 00a2e8b9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2e8bc  53                   push ebx
// 00a2e8bd  50                   push eax
// 00a2e8be  689a010000           push 0x19a
// 00a2e8c3  51                   push ecx
// 00a2e8c4  89442438             mov dword ptr [esp + 0x38], eax
// 00a2e8c8  ffd7                 call edi
// 00a2e8ca  8d54242c             lea edx, [esp + 0x2c]
// 00a2e8ce  52                   push edx
// 00a2e8cf  8d4c2418             lea ecx, [esp + 0x18]
// 00a2e8d3  ff155846b200         call dword ptr [0xb24658]
// 00a2e8d9  50                   push eax
// 00a2e8da  8d4c241c             lea ecx, [esp + 0x1c]
// 00a2e8de  ff159847b200         call dword ptr [0xb24798]
// 00a2e8e4  50                   push eax
// 00a2e8e5  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00a2e8ec  50                   push eax
// 00a2e8ed  ff154021b200         call dword ptr [0xb22140]
// 00a2e8f3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a2e8f7  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a2e8fb  03ca                 add ecx, edx
// 00a2e8fd  3be9                 cmp ebp, ecx
// 00a2e8ff  7f34                 jg 0xa2e935
// 00a2e901  8d44243c             lea eax, [esp + 0x3c]
// 00a2e905  50                   push eax
// 00a2e906  8d4c2418             lea ecx, [esp + 0x18]
// 00a2e90a  ff155846b200         call dword ptr [0xb24658]
// 00a2e910  50                   push eax
// 00a2e911  8d4c241c             lea ecx, [esp + 0x1c]
// 00a2e915  ff159847b200         call dword ptr [0xb24798]
// 00a2e91b  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a2e922  50                   push eax
// 00a2e923  51                   push ecx
// 00a2e924  ff154021b200         call dword ptr [0xb22140]
// 00a2e92a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a2e92e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a2e932  8d2c02               lea ebp, [edx + eax]
// 00a2e935  837c2424ff           cmp dword ptr [esp + 0x24], -1
// 00a2e93a  7519                 jne 0xa2e955
// 00a2e93c  8d4c2414             lea ecx, [esp + 0x14]
// 00a2e940  ff159847b200         call dword ptr [0xb24798]
// 00a2e946  50                   push eax
// 00a2e947  8d4c2420             lea ecx, [esp + 0x20]
// 00a2e94b  ff159c47b200         call dword ptr [0xb2479c]
// 00a2e951  85c0                 test eax, eax
// 00a2e953  7409                 je 0xa2e95e
// 00a2e955  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a2e959  3b4b24               cmp ecx, dword ptr [ebx + 0x24]
// 00a2e95c  7512                 jne 0xa2e970
// 00a2e95e  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a2e962  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2e965  6a00                 push 0
// 00a2e967  52                   push edx
// 00a2e968  6886010000           push 0x186
// 00a2e96d  50                   push eax
// 00a2e96e  ffd7                 call edi
// 00a2e970  8d4c2414             lea ecx, [esp + 0x14]
// 00a2e974  c684249000000002     mov byte ptr [esp + 0x90], 2
// 00a2e97c  ff15d047b200         call dword ptr [0xb247d0]
// 00a2e982  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a2e986  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00a2e98d  43                   inc ebx
// 00a2e98e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a2e992  e8c9ccffff           call 0xa2b660
// 00a2e997  3bd8                 cmp ebx, eax
// 00a2e999  0f8cd9feffff         jl 0xa2e878
// 00a2e99f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 00a2e9a6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2e9a9  6a00                 push 0
// 00a2e9ab  6a00                 push 0
// 00a2e9ad  68a1010000           push 0x1a1
// 00a2e9b2  51                   push ecx
// 00a2e9b3  ffd7                 call edi
// 00a2e9b5  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a2e9b9  6a00                 push 0
// 00a2e9bb  6a00                 push 0
// 00a2e9bd  89442430             mov dword ptr [esp + 0x30], eax
// 00a2e9c1  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2e9c4  688b010000           push 0x18b
// 00a2e9c9  50                   push eax
// 00a2e9ca  89542458             mov dword ptr [esp + 0x58], edx
// 00a2e9ce  ffd7                 call edi
// 00a2e9d0  83f80a               cmp eax, 0xa
// 00a2e9d3  7e07                 jle 0xa2e9dc
// 00a2e9d5  b80a000000           mov eax, 0xa
// 00a2e9da  eb0f                 jmp 0xa2e9eb
// 00a2e9dc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2e9df  6a00                 push 0
// 00a2e9e1  6a00                 push 0
// 00a2e9e3  688b010000           push 0x18b
// 00a2e9e8  51                   push ecx
// 00a2e9e9  ffd7                 call edi
// 00a2e9eb  0faf442428           imul eax, dword ptr [esp + 0x28]
// 00a2e9f0  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a2e9f4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a2e9f8  8d440202             lea eax, [edx + eax + 2]
// 00a2e9fc  2bcd                 sub ecx, ebp
// 00a2e9fe  8d542444             lea edx, [esp + 0x44]
// 00a2ea02  894c2444             mov dword ptr [esp + 0x44], ecx
// 00a2ea06  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00a2ea09  52                   push edx
// 00a2ea0a  89442454             mov dword ptr [esp + 0x54], eax
// 00a2ea0e  e89b3cf5ff           call 0x9826ae
// 00a2ea13  8d442444             lea eax, [esp + 0x44]
// 00a2ea17  50                   push eax
// 00a2ea18  8d4c2458             lea ecx, [esp + 0x58]
// 00a2ea1c  51                   push ecx
// 00a2ea1d  e8aebbf9ff           call 0x9ca5d0
// 00a2ea22  8bc8                 mov ecx, eax
// 00a2ea24  e807b7f9ff           call 0x9ca130
// 00a2ea29  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a2ea2d  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a2ea31  3bc8                 cmp ecx, eax
// 00a2ea33  8b3df43ab200         mov edi, dword ptr [0xb23af4]
// 00a2ea39  7e27                 jle 0xa2ea62
// 00a2ea3b  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a2ea3f  03c2                 add eax, edx
// 00a2ea41  99                   cdq 
// 00a2ea42  2bc2                 sub eax, edx
// 00a2ea44  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a2ea48  d1f8                 sar eax, 1
// 00a2ea4a  3bd0                 cmp edx, eax
// 00a2ea4c  7e14                 jle 0xa2ea62
// 00a2ea4e  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00a2ea51  2b4320               sub eax, dword ptr [ebx + 0x20]
// 00a2ea54  2bc1                 sub eax, ecx
// 00a2ea56  03c2                 add eax, edx
// 00a2ea58  50                   push eax
// 00a2ea59  6a00                 push 0
// 00a2ea5b  8d44244c             lea eax, [esp + 0x4c]
// 00a2ea5f  50                   push eax
// 00a2ea60  ffd7                 call edi
// 00a2ea62  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a2ea66  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a2ea6a  3bc8                 cmp ecx, eax
// 00a2ea6c  7d0c                 jge 0xa2ea7a
// 00a2ea6e  2bc1                 sub eax, ecx
// 00a2ea70  6a00                 push 0
// 00a2ea72  50                   push eax
// 00a2ea73  8d4c244c             lea ecx, [esp + 0x4c]
// 00a2ea77  51                   push ecx
// 00a2ea78  ffd7                 call edi
// 00a2ea7a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a2ea7e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a2ea82  3bc8                 cmp ecx, eax
// 00a2ea84  7e0c                 jle 0xa2ea92
// 00a2ea86  6a00                 push 0
// 00a2ea88  2bc1                 sub eax, ecx
// 00a2ea8a  50                   push eax
// 00a2ea8b  8d54244c             lea edx, [esp + 0x4c]
// 00a2ea8f  52                   push edx
// 00a2ea90  ffd7                 call edi
// 00a2ea92  8bce                 mov ecx, esi
// 00a2ea94  e80b3af5ff           call 0x9824a4
// 00a2ea99  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2ea9c  85c0                 test eax, eax
// 00a2ea9e  7462                 je 0xa2eb02
// 00a2eaa0  8b3d943ab200         mov edi, dword ptr [0xb23a94]
// 00a2eaa6  6a00                 push 0
// 00a2eaa8  6af8                 push -8
// 00a2eaaa  50                   push eax
// 00a2eaab  ffd7                 call edi
// 00a2eaad  6a00                 push 0
// 00a2eaaf  6800000080           push 0x80000000
// 00a2eab4  6800000040           push 0x40000000
// 00a2eab9  8bce                 mov ecx, esi
// 00a2eabb  e8983df5ff           call 0x982858
// 00a2eac0  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a2eac3  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a2eac6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2eac9  50                   push eax
// 00a2eaca  6af8                 push -8
// 00a2eacc  51                   push ecx
// 00a2eacd  ffd7                 call edi
// 00a2eacf  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a2ead3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a2ead7  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a2eadb  6850020000           push 0x250
// 00a2eae0  2bc8                 sub ecx, eax
// 00a2eae2  51                   push ecx
// 00a2eae3  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a2eae7  2bd1                 sub edx, ecx
// 00a2eae9  52                   push edx
// 00a2eaea  50                   push eax
// 00a2eaeb  a1544ab200           mov eax, dword ptr [0xb24a54]
// 00a2eaf0  51                   push ecx
// 00a2eaf1  50                   push eax
// 00a2eaf2  8bce                 mov ecx, esi
// 00a2eaf4  e8db39f5ff           call 0x9824d4
// 00a2eaf9  56                   push esi
// 00a2eafa  e8918bfaff           call 0x9d7690
// 00a2eaff  83c404               add esp, 4
// 00a2eb02  8d4c241c             lea ecx, [esp + 0x1c]
// 00a2eb06  ff15d047b200         call dword ptr [0xb247d0]
// 00a2eb0c  8d4c2464             lea ecx, [esp + 0x64]
// 00a2eb10  c684249000000000     mov byte ptr [esp + 0x90], 0
// 00a2eb18  e8936afaff           call 0x9d55b0
// 00a2eb1d  8d4c2474             lea ecx, [esp + 0x74]
// 00a2eb21  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 00a2eb2c  e865aa0600           call 0xa99596
// 00a2eb31  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00a2eb38  64890d00000000       mov dword ptr fs:[0], ecx
// 00a2eb3f  59                   pop ecx
// 00a2eb40  5f                   pop edi
// 00a2eb41  5e                   pop esi
// 00a2eb42  5d                   pop ebp
// 00a2eb43  5b                   pop ebx
// 00a2eb44  81c480000000         add esp, 0x80
// 00a2eb4a  c20800               ret 8
// copied from an identical function in another client (function ?Create@CXTPReportInplaceList@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@PAVCXTPReportRecordItemConstraints@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportInplaceControls.cpp