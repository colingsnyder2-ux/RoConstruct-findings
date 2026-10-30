// roc 2009-12 008a56f0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 1589 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a56f0
//
// 008a56f0  6aff                 push -1
// 008a56f2  68d6259600           push 0x9625d6
// 008a56f7  64a100000000         mov eax, dword ptr fs:[0]
// 008a56fd  50                   push eax
// 008a56fe  81ec14010000         sub esp, 0x114
// 008a5704  53                   push ebx
// 008a5705  55                   push ebp
// 008a5706  56                   push esi
// 008a5707  57                   push edi
// 008a5708  a10052b600           mov eax, dword ptr [0xb65200]
// 008a570d  33c4                 xor eax, esp
// 008a570f  50                   push eax
// 008a5710  8d842428010000       lea eax, [esp + 0x128]
// 008a5717  64a300000000         mov dword ptr fs:[0], eax
// 008a571d  8bf1                 mov esi, ecx
// 008a571f  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a5722  85c0                 test eax, eax
// 008a5724  0f84df050000         je 0x8a5d09
// 008a572a  8b9810010000         mov ebx, dword ptr [eax + 0x110]
// 008a5730  8b842450010000       mov eax, dword ptr [esp + 0x150]
// 008a5737  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 008a573e  8b942458010000       mov edx, dword ptr [esp + 0x158]
// 008a5745  89842494000000       mov dword ptr [esp + 0x94], eax
// 008a574c  8b84245c010000       mov eax, dword ptr [esp + 0x15c]
// 008a5753  8d6e2c               lea ebp, [esi + 0x2c]
// 008a5756  898c2498000000       mov dword ptr [esp + 0x98], ecx
// 008a575d  8b8c243c010000       mov ecx, dword ptr [esp + 0x13c]
// 008a5764  894d00               mov dword ptr [ebp], ecx
// 008a5767  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 008a576e  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 008a5775  8b942440010000       mov edx, dword ptr [esp + 0x140]
// 008a577c  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 008a5783  8b842444010000       mov eax, dword ptr [esp + 0x144]
// 008a578a  895504               mov dword ptr [ebp + 4], edx
// 008a578d  894508               mov dword ptr [ebp + 8], eax
// 008a5790  8b84244c010000       mov eax, dword ptr [esp + 0x14c]
// 008a5797  894d0c               mov dword ptr [ebp + 0xc], ecx
// 008a579a  294500               sub dword ptr [ebp], eax
// 008a579d  294634               sub dword ptr [esi + 0x34], eax
// 008a57a0  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008a57a4  85db                 test ebx, ebx
// 008a57a6  7528                 jne 0x8a57d0
// 008a57a8  8b5500               mov edx, dword ptr [ebp]
// 008a57ab  8b4504               mov eax, dword ptr [ebp + 4]
// 008a57ae  8b4d08               mov ecx, dword ptr [ebp + 8]
// 008a57b1  8994243c010000       mov dword ptr [esp + 0x13c], edx
// 008a57b8  8b550c               mov edx, dword ptr [ebp + 0xc]
// 008a57bb  89842440010000       mov dword ptr [esp + 0x140], eax
// 008a57c2  898c2444010000       mov dword ptr [esp + 0x144], ecx
// 008a57c9  89942448010000       mov dword ptr [esp + 0x148], edx
// 008a57d0  8d4c2468             lea ecx, [esp + 0x68]
// 008a57d4  e8874ef7ff           call 0x81a660
// 008a57d9  c7442468dc429f00     mov dword ptr [esp + 0x68], 0x9f42dc
// 008a57e1  8b842438010000       mov eax, dword ptr [esp + 0x138]
// 008a57e8  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a57eb  c784243001000000000000 mov dword ptr [esp + 0x130], 0
// 008a57f6  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 008a57fd  894c246c             mov dword ptr [esp + 0x6c], ecx
// 008a5801  89742470             mov dword ptr [esp + 0x70], esi
// 008a5805  e8b68cf7ff           call 0x81e4c0
// 008a580a  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 008a580d  8b5624               mov edx, dword ptr [esi + 0x24]
// 008a5810  8bba00010000         mov edi, dword ptr [edx + 0x100]
// 008a5816  89442424             mov dword ptr [esp + 0x24], eax
// 008a581a  c744245001000000     mov dword ptr [esp + 0x50], 1
// 008a5822  83f901               cmp ecx, 1
// 008a5825  7512                 jne 0x8a5839
// 008a5827  8b8740020000         mov eax, dword ptr [edi + 0x240]
// 008a582d  83e0fb               and eax, 0xfffffffb
// 008a5830  f7d8                 neg eax
// 008a5832  1bc0                 sbb eax, eax
// 008a5834  40                   inc eax
// 008a5835  89442450             mov dword ptr [esp + 0x50], eax
// 008a5839  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 008a5841  83f902               cmp ecx, 2
// 008a5844  7512                 jne 0x8a5858
// 008a5846  8b8744020000         mov eax, dword ptr [edi + 0x244]
// 008a584c  83e0fb               and eax, 0xfffffffb
// 008a584f  f7d8                 neg eax
// 008a5851  1bc0                 sbb eax, eax
// 008a5853  40                   inc eax
// 008a5854  8944244c             mov dword ptr [esp + 0x4c], eax
// 008a5858  52                   push edx
// 008a5859  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 008a5860  e83b86fcff           call 0x86dea0
// 008a5865  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a5868  8b89ec000000         mov ecx, dword ptr [ecx + 0xec]
// 008a586e  8d9424a4000000       lea edx, [esp + 0xa4]
// 008a5875  52                   push edx
// 008a5876  c684243401000001     mov byte ptr [esp + 0x134], 1
// 008a587e  e8dd7efcff           call 0x86d760
// 008a5883  8b8424d4000000       mov eax, dword ptr [esp + 0xd4]
// 008a588a  3bd8                 cmp ebx, eax
// 008a588c  89442428             mov dword ptr [esp + 0x28], eax
// 008a5890  7c06                 jl 0x8a5898
// 008a5892  8944242c             mov dword ptr [esp + 0x2c], eax
// 008a5896  8bd8                 mov ebx, eax
// 008a5898  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a589b  8b17                 mov edx, dword ptr [edi]
// 008a589d  50                   push eax
// 008a589e  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a58a1  8bcf                 mov ecx, edi
// 008a58a3  ffd0                 call eax
// 008a58a5  8b8c2438010000       mov ecx, dword ptr [esp + 0x138]
// 008a58ac  50                   push eax
// 008a58ad  55                   push ebp
// 008a58ae  e84bedf4ff           call 0x7f45fe
// 008a58b3  8b5500               mov edx, dword ptr [ebp]
// 008a58b6  8b4638               mov eax, dword ptr [esi + 0x38]
// 008a58b9  2b4668               sub eax, dword ptr [esi + 0x68]
// 008a58bc  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008a58bf  89542414             mov dword ptr [esp + 0x14], edx
// 008a58c3  8b5630               mov edx, dword ptr [esi + 0x30]
// 008a58c6  89542418             mov dword ptr [esp + 0x18], edx
// 008a58ca  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008a58ce  89442420             mov dword ptr [esp + 0x20], eax
// 008a58d2  85db                 test ebx, ebx
// 008a58d4  7407                 je 0x8a58dd
// 008a58d6  8dac243c010000       lea ebp, [esp + 0x13c]
// 008a58dd  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a58e1  8b4504               mov eax, dword ptr [ebp + 4]
// 008a58e4  8b5508               mov edx, dword ptr [ebp + 8]
// 008a58e7  8b4d00               mov ecx, dword ptr [ebp]
// 008a58ea  89442458             mov dword ptr [esp + 0x58], eax
// 008a58ee  8b450c               mov eax, dword ptr [ebp + 0xc]
// 008a58f1  8954245c             mov dword ptr [esp + 0x5c], edx
// 008a58f5  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a58f9  89442460             mov dword ptr [esp + 0x60], eax
// 008a58fd  8d0411               lea eax, [ecx + edx]
// 008a5900  894c2454             mov dword ptr [esp + 0x54], ecx
// 008a5904  8944245c             mov dword ptr [esp + 0x5c], eax
// 008a5908  0f8428030000         je 0x8a5c36
// 008a590e  8b84243c010000       mov eax, dword ptr [esp + 0x13c]
// 008a5915  03c2                 add eax, edx
// 008a5917  89442464             mov dword ptr [esp + 0x64], eax
// 008a591b  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a591f  83c0ff               add eax, -1
// 008a5922  89442448             mov dword ptr [esp + 0x48], eax
// 008a5926  0f88d6020000         js 0x8a5c02
// 008a592c  8bd3                 mov edx, ebx
// 008a592e  2bd0                 sub edx, eax
// 008a5930  4a                   dec edx
// 008a5931  89542428             mov dword ptr [esp + 0x28], edx
// 008a5935  eb04                 jmp 0x8a593b
// 008a5937  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008a593b  33c9                 xor ecx, ecx
// 008a593d  3bc3                 cmp eax, ebx
// 008a593f  0f9cc1               setl cl
// 008a5942  894c2444             mov dword ptr [esp + 0x44], ecx
// 008a5946  85c9                 test ecx, ecx
// 008a5948  7408                 je 0x8a5952
// 008a594a  8bda                 mov ebx, edx
// 008a594c  895c2440             mov dword ptr [esp + 0x40], ebx
// 008a5950  eb06                 jmp 0x8a5958
// 008a5952  89442440             mov dword ptr [esp + 0x40], eax
// 008a5956  8bd8                 mov ebx, eax
// 008a5958  85db                 test ebx, ebx
// 008a595a  0f8c88020000         jl 0x8a5be8
// 008a5960  3b9c24d4000000       cmp ebx, dword ptr [esp + 0xd4]
// 008a5967  0f8d7b020000         jge 0x8a5be8
// 008a596d  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 008a5974  8b2c99               mov ebp, dword ptr [ecx + ebx*4]
// 008a5977  85ed                 test ebp, ebp
// 008a5979  0f8469020000         je 0x8a5be8
// 008a597f  8b16                 mov edx, dword ptr [esi]
// 008a5981  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 008a5987  8bce                 mov ecx, esi
// 008a5989  ffd0                 call eax
// 008a598b  85c0                 test eax, eax
// 008a598d  0f844d020000         je 0x8a5be0
// 008a5993  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 008a599a  51                   push ecx
// 008a599b  8bcd                 mov ecx, ebp
// 008a599d  e82e21f8ff           call 0x827ad0
// 008a59a2  8b00                 mov eax, dword ptr [eax]
// 008a59a4  89442414             mov dword ptr [esp + 0x14], eax
// 008a59a8  85db                 test ebx, ebx
// 008a59aa  750c                 jne 0x8a59b8
// 008a59ac  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008a59b0  3bc8                 cmp ecx, eax
// 008a59b2  7e04                 jle 0x8a59b8
// 008a59b4  894c2414             mov dword ptr [esp + 0x14], ecx
// 008a59b8  8d9424e8000000       lea edx, [esp + 0xe8]
// 008a59bf  52                   push edx
// 008a59c0  8bcd                 mov ecx, ebp
// 008a59c2  e80921f8ff           call 0x827ad0
// 008a59c7  8b4008               mov eax, dword ptr [eax + 8]
// 008a59ca  8d4c2414             lea ecx, [esp + 0x14]
// 008a59ce  51                   push ecx
// 008a59cf  8d942498000000       lea edx, [esp + 0x98]
// 008a59d6  89442420             mov dword ptr [esp + 0x20], eax
// 008a59da  52                   push edx
// 008a59db  8d842420010000       lea eax, [esp + 0x120]
// 008a59e2  50                   push eax
// 008a59e3  ff15dcca9800         call dword ptr [0x98cadc]
// 008a59e9  85c0                 test eax, eax
// 008a59eb  0f84ef010000         je 0x8a5be0
// 008a59f1  837c244400           cmp dword ptr [esp + 0x44], 0
// 008a59f6  744e                 je 0x8a5a46
// 008a59f8  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a59fb  8b17                 mov edx, dword ptr [edi]
// 008a59fd  50                   push eax
// 008a59fe  8b4270               mov eax, dword ptr [edx + 0x70]
// 008a5a01  8bcf                 mov ecx, edi
// 008a5a03  ffd0                 call eax
// 008a5a05  8b9c2438010000       mov ebx, dword ptr [esp + 0x138]
// 008a5a0c  50                   push eax
// 008a5a0d  8d4c2418             lea ecx, [esp + 0x18]
// 008a5a11  51                   push ecx
// 008a5a12  8bcb                 mov ecx, ebx
// 008a5a14  e8e5ebf4ff           call 0x7f45fe
// 008a5a19  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a5a1d  8b17                 mov edx, dword ptr [edi]
// 008a5a1f  8b5274               mov edx, dword ptr [edx + 0x74]
// 008a5a22  83ec10               sub esp, 0x10
// 008a5a25  8bc4                 mov eax, esp
// 008a5a27  8908                 mov dword ptr [eax], ecx
// 008a5a29  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a5a2d  894804               mov dword ptr [eax + 4], ecx
// 008a5a30  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008a5a34  894808               mov dword ptr [eax + 8], ecx
// 008a5a37  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a5a3b  56                   push esi
// 008a5a3c  89480c               mov dword ptr [eax + 0xc], ecx
// 008a5a3f  53                   push ebx
// 008a5a40  8bcf                 mov ecx, edi
// 008a5a42  ffd2                 call edx
// 008a5a44  eb07                 jmp 0x8a5a4d
// 008a5a46  8b9c2438010000       mov ebx, dword ptr [esp + 0x138]
// 008a5a4d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a5a51  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a5a55  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008a5a59  894c2434             mov dword ptr [esp + 0x34], ecx
// 008a5a5d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a5a61  89442430             mov dword ptr [esp + 0x30], eax
// 008a5a65  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008a5a69  48                   dec eax
// 008a5a6a  8bcd                 mov ecx, ebp
// 008a5a6c  89542438             mov dword ptr [esp + 0x38], edx
// 008a5a70  89442430             mov dword ptr [esp + 0x30], eax
// 008a5a74  e88720f8ff           call 0x827b00
// 008a5a79  85c0                 test eax, eax
// 008a5a7b  742d                 je 0x8a5aaa
// 008a5a7d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a5a81  8b17                 mov edx, dword ptr [edi]
// 008a5a83  8b928c000000         mov edx, dword ptr [edx + 0x8c]
// 008a5a89  83ec10               sub esp, 0x10
// 008a5a8c  8bc4                 mov eax, esp
// 008a5a8e  8908                 mov dword ptr [eax], ecx
// 008a5a90  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008a5a94  894804               mov dword ptr [eax + 4], ecx
// 008a5a97  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008a5a9b  894808               mov dword ptr [eax + 8], ecx
// 008a5a9e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a5aa2  89480c               mov dword ptr [eax + 0xc], ecx
// 008a5aa5  53                   push ebx
// 008a5aa6  8bcf                 mov ecx, edi
// 008a5aa8  ffd2                 call edx
// 008a5aaa  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a5aad  55                   push ebp
// 008a5aae  e88d52f8ff           call 0x82ad40
// 008a5ab3  8bd8                 mov ebx, eax
// 008a5ab5  85db                 test ebx, ebx
// 008a5ab7  745f                 je 0x8a5b18
// 008a5ab9  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a5abd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a5ac1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008a5ac5  8944247c             mov dword ptr [esp + 0x7c], eax
// 008a5ac9  8b442420             mov eax, dword ptr [esp + 0x20]
// 008a5acd  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008a5ad4  8bcd                 mov ecx, ebp
// 008a5ad6  896c2474             mov dword ptr [esp + 0x74], ebp
// 008a5ada  89942484000000       mov dword ptr [esp + 0x84], edx
// 008a5ae1  89842488000000       mov dword ptr [esp + 0x88], eax
// 008a5ae8  e8531ff8ff           call 0x827a40
// 008a5aed  89842490000000       mov dword ptr [esp + 0x90], eax
// 008a5af4  895c2478             mov dword ptr [esp + 0x78], ebx
// 008a5af8  8b13                 mov edx, dword ptr [ebx]
// 008a5afa  8b5258               mov edx, dword ptr [edx + 0x58]
// 008a5afd  8d442468             lea eax, [esp + 0x68]
// 008a5b01  50                   push eax
// 008a5b02  8bcb                 mov ecx, ebx
// 008a5b04  ffd2                 call edx
// 008a5b06  8b8d90000000         mov ecx, dword ptr [ebp + 0x90]
// 008a5b0c  3bc8                 cmp ecx, eax
// 008a5b0e  7e02                 jle 0x8a5b12
// 008a5b10  8bc1                 mov eax, ecx
// 008a5b12  898590000000         mov dword ptr [ebp + 0x90], eax
// 008a5b18  8b4670               mov eax, dword ptr [esi + 0x70]
// 008a5b1b  83f801               cmp eax, 1
// 008a5b1e  7509                 jne 0x8a5b29
// 008a5b20  83bdb400000000       cmp dword ptr [ebp + 0xb4], 0
// 008a5b27  eb0c                 jmp 0x8a5b35
// 008a5b29  83f802               cmp eax, 2
// 008a5b2c  753c                 jne 0x8a5b6a
// 008a5b2e  83bdb800000000       cmp dword ptr [ebp + 0xb8], 0
// 008a5b35  7433                 je 0x8a5b6a
// 008a5b37  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008a5b3b  8b17                 mov edx, dword ptr [edi]
// 008a5b3d  8b5278               mov edx, dword ptr [edx + 0x78]
// 008a5b40  83ec10               sub esp, 0x10
// 008a5b43  8bc4                 mov eax, esp
// 008a5b45  8908                 mov dword ptr [eax], ecx
// 008a5b47  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008a5b4b  894804               mov dword ptr [eax + 4], ecx
// 008a5b4e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008a5b52  894808               mov dword ptr [eax + 8], ecx
// 008a5b55  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008a5b59  89480c               mov dword ptr [eax + 0xc], ecx
// 008a5b5c  8b842448010000       mov eax, dword ptr [esp + 0x148]
// 008a5b63  6a01                 push 1
// 008a5b65  50                   push eax
// 008a5b66  8bcf                 mov ecx, edi
// 008a5b68  ffd2                 call edx
// 008a5b6a  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 008a5b6f  7441                 je 0x8a5bb2
// 008a5b71  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008a5b75  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a5b79  8b542430             mov edx, dword ptr [esp + 0x30]
// 008a5b7d  8b2f                 mov ebp, dword ptr [edi]
// 008a5b7f  83ec10               sub esp, 0x10
// 008a5b82  8bd9                 mov ebx, ecx
// 008a5b84  89842424010000       mov dword ptr [esp + 0x124], eax
// 008a5b8b  8bc4                 mov eax, esp
// 008a5b8d  8910                 mov dword ptr [eax], edx
// 008a5b8f  8b542448             mov edx, dword ptr [esp + 0x48]
// 008a5b93  49                   dec ecx
// 008a5b94  895804               mov dword ptr [eax + 4], ebx
// 008a5b97  895008               mov dword ptr [eax + 8], edx
// 008a5b9a  8b5578               mov edx, dword ptr [ebp + 0x78]
// 008a5b9d  894c2444             mov dword ptr [esp + 0x44], ecx
// 008a5ba1  89480c               mov dword ptr [eax + 0xc], ecx
// 008a5ba4  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 008a5bab  6a00                 push 0
// 008a5bad  51                   push ecx
// 008a5bae  8bcf                 mov ecx, edi
// 008a5bb0  ffd2                 call edx
// 008a5bb2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008a5bb6  48                   dec eax
// 008a5bb7  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 008a5bbf  39442440             cmp dword ptr [esp + 0x40], eax
// 008a5bc3  751b                 jne 0x8a5be0
// 008a5bc5  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a5bc8  8b8c2438010000       mov ecx, dword ptr [esp + 0x138]
// 008a5bcf  8b17                 mov edx, dword ptr [edi]
// 008a5bd1  8b527c               mov edx, dword ptr [edx + 0x7c]
// 008a5bd4  56                   push esi
// 008a5bd5  50                   push eax
// 008a5bd6  8d442438             lea eax, [esp + 0x38]
// 008a5bda  50                   push eax
// 008a5bdb  51                   push ecx
// 008a5bdc  8bcf                 mov ecx, edi
// 008a5bde  ffd2                 call edx
// 008a5be0  8b542428             mov edx, dword ptr [esp + 0x28]
// 008a5be4  8b442448             mov eax, dword ptr [esp + 0x48]
// 008a5be8  48                   dec eax
// 008a5be9  42                   inc edx
// 008a5bea  89442448             mov dword ptr [esp + 0x48], eax
// 008a5bee  89542428             mov dword ptr [esp + 0x28], edx
// 008a5bf2  85c0                 test eax, eax
// 008a5bf4  0f8d3dfdffff         jge 0x8a5937
// 008a5bfa  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008a5bfe  8b542424             mov edx, dword ptr [esp + 0x24]
// 008a5c02  85d2                 test edx, edx
// 008a5c04  7e30                 jle 0x8a5c36
// 008a5c06  8b17                 mov edx, dword ptr [edi]
// 008a5c08  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 008a5c0e  83ec10               sub esp, 0x10
// 008a5c11  8bc4                 mov eax, esp
// 008a5c13  8908                 mov dword ptr [eax], ecx
// 008a5c15  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008a5c19  894804               mov dword ptr [eax + 4], ecx
// 008a5c1c  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008a5c20  894808               mov dword ptr [eax + 8], ecx
// 008a5c23  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008a5c27  89480c               mov dword ptr [eax + 0xc], ecx
// 008a5c2a  8b842448010000       mov eax, dword ptr [esp + 0x148]
// 008a5c31  50                   push eax
// 008a5c32  8bcf                 mov ecx, edi
// 008a5c34  ffd2                 call edx
// 008a5c36  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a5c39  e802d8f7ff           call 0x823440
// 008a5c3e  8b5630               mov edx, dword ptr [esi + 0x30]
// 008a5c41  8b6e38               mov ebp, dword ptr [esi + 0x38]
// 008a5c44  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 008a5c47  89442444             mov dword ptr [esp + 0x44], eax
// 008a5c4b  33c0                 xor eax, eax
// 008a5c4d  3987b8020000         cmp dword ptr [edi + 0x2b8], eax
// 008a5c53  89542424             mov dword ptr [esp + 0x24], edx
// 008a5c57  0f95c0               setne al
// 008a5c5a  33c9                 xor ecx, ecx
// 008a5c5c  85c0                 test eax, eax
// 008a5c5e  8b06                 mov eax, dword ptr [esi]
// 008a5c60  8b5070               mov edx, dword ptr [eax + 0x70]
// 008a5c63  0f95c1               setne cl
// 008a5c66  2be9                 sub ebp, ecx
// 008a5c68  8bce                 mov ecx, esi
// 008a5c6a  ffd2                 call edx
// 008a5c6c  85c0                 test eax, eax
// 008a5c6e  743f                 je 0x8a5caf
// 008a5c70  837c244400           cmp dword ptr [esp + 0x44], 0
// 008a5c75  7438                 je 0x8a5caf
// 008a5c77  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a5c7a  83b80402000000       cmp dword ptr [eax + 0x204], 0
// 008a5c81  742c                 je 0x8a5caf
// 008a5c83  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008a5c87  8b17                 mov edx, dword ptr [edi]
// 008a5c89  8b92a0000000         mov edx, dword ptr [edx + 0xa0]
// 008a5c8f  83ec10               sub esp, 0x10
// 008a5c92  8bc4                 mov eax, esp
// 008a5c94  8908                 mov dword ptr [eax], ecx
// 008a5c96  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a5c9a  894804               mov dword ptr [eax + 4], ecx
// 008a5c9d  895808               mov dword ptr [eax + 8], ebx
// 008a5ca0  89680c               mov dword ptr [eax + 0xc], ebp
// 008a5ca3  8b842448010000       mov eax, dword ptr [esp + 0x148]
// 008a5caa  50                   push eax
// 008a5cab  8bcf                 mov ecx, edi
// 008a5cad  ffd2                 call edx
// 008a5caf  837c245000           cmp dword ptr [esp + 0x50], 0
// 008a5cb4  742b                 je 0x8a5ce1
// 008a5cb6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008a5cba  8b17                 mov edx, dword ptr [edi]
// 008a5cbc  8b5278               mov edx, dword ptr [edx + 0x78]
// 008a5cbf  83ec10               sub esp, 0x10
// 008a5cc2  8bc4                 mov eax, esp
// 008a5cc4  8908                 mov dword ptr [eax], ecx
// 008a5cc6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a5cca  894804               mov dword ptr [eax + 4], ecx
// 008a5ccd  895808               mov dword ptr [eax + 8], ebx
// 008a5cd0  89680c               mov dword ptr [eax + 0xc], ebp
// 008a5cd3  8b842448010000       mov eax, dword ptr [esp + 0x148]
// 008a5cda  6a00                 push 0
// 008a5cdc  50                   push eax
// 008a5cdd  8bcf                 mov ecx, edi
// 008a5cdf  ffd2                 call edx
// 008a5ce1  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 008a5ce8  c684243001000000     mov byte ptr [esp + 0x130], 0
// 008a5cf0  e8db82fcff           call 0x86dfd0
// 008a5cf5  8d4c2468             lea ecx, [esp + 0x68]
// 008a5cf9  c7842430010000ffffffff mov dword ptr [esp + 0x130], 0xffffffff
// 008a5d04  e89743f7ff           call 0x81a0a0
// 008a5d09  8b8c2428010000       mov ecx, dword ptr [esp + 0x128]
// 008a5d10  64890d00000000       mov dword ptr fs:[0], ecx
// 008a5d17  59                   pop ecx
// 008a5d18  5f                   pop edi
// 008a5d19  5e                   pop esi
// 008a5d1a  5d                   pop ebp
// 008a5d1b  5b                   pop ebx
// 008a5d1c  81c420010000         add esp, 0x120
// 008a5d22  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawFixed@CXTPReportRow@@QAEXPAVCDC@@VCRect@@H1@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportRow.cpp