// roc 2009-12 0089ee30  unit: CXTPReportPaintManager  size: 1129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089ee30
//
// 0089ee30  6aff                 push -1
// 0089ee32  68cb1e9600           push 0x961ecb
// 0089ee37  64a100000000         mov eax, dword ptr fs:[0]
// 0089ee3d  50                   push eax
// 0089ee3e  83ec44               sub esp, 0x44
// 0089ee41  53                   push ebx
// 0089ee42  55                   push ebp
// 0089ee43  56                   push esi
// 0089ee44  57                   push edi
// 0089ee45  a10052b600           mov eax, dword ptr [0xb65200]
// 0089ee4a  33c4                 xor eax, esp
// 0089ee4c  50                   push eax
// 0089ee4d  8d442458             lea eax, [esp + 0x58]
// 0089ee51  64a300000000         mov dword ptr fs:[0], eax
// 0089ee57  8bf1                 mov esi, ecx
// 0089ee59  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089ee5d  8b5824               mov ebx, dword ptr [eax + 0x24]
// 0089ee60  8b7810               mov edi, dword ptr [eax + 0x10]
// 0089ee63  83c8ff               or eax, 0xffffffff
// 0089ee66  89442424             mov dword ptr [esp + 0x24], eax
// 0089ee6a  89442428             mov dword ptr [esp + 0x28], eax
// 0089ee6e  8d442470             lea eax, [esp + 0x70]
// 0089ee72  50                   push eax
// 0089ee73  8d4c244c             lea ecx, [esp + 0x4c]
// 0089ee77  51                   push ecx
// 0089ee78  895c2428             mov dword ptr [esp + 0x28], ebx
// 0089ee7c  33ed                 xor ebp, ebp
// 0089ee7e  ff1564cc9800         call dword ptr [0x98cc64]
// 0089ee84  8b17                 mov edx, dword ptr [edi]
// 0089ee86  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0089ee8c  8bcf                 mov ecx, edi
// 0089ee8e  ffd0                 call eax
// 0089ee90  85c0                 test eax, eax
// 0089ee92  7546                 jne 0x89eeda
// 0089ee94  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0089ee9b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0089ee9f  8b33                 mov esi, dword ptr [ebx]
// 0089eea1  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 0089eea5  f7d8                 neg eax
// 0089eea7  1bc0                 sbb eax, eax
// 0089eea9  83e010               and eax, 0x10
// 0089eeac  0b4128               or eax, dword ptr [ecx + 0x28]
// 0089eeaf  8d542448             lea edx, [esp + 0x48]
// 0089eeb3  0d00080400           or eax, 0x40800
// 0089eeb8  50                   push eax
// 0089eeb9  52                   push edx
// 0089eeba  8bcf                 mov ecx, edi
// 0089eebc  83c670               add esi, 0x70
// 0089eebf  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089eec5  50                   push eax
// 0089eec6  8bcf                 mov ecx, edi
// 0089eec8  ff1580de9800         call dword ptr [0x98de80]
// 0089eece  50                   push eax
// 0089eecf  8b06                 mov eax, dword ptr [esi]
// 0089eed1  8bcb                 mov ecx, ebx
// 0089eed3  ffd0                 call eax
// 0089eed5  e9a9030000           jmp 0x89f283
// 0089eeda  8b5308               mov edx, dword ptr [ebx + 8]
// 0089eedd  8d4c2440             lea ecx, [esp + 0x40]
// 0089eee1  51                   push ecx
// 0089eee2  6a01                 push 1
// 0089eee4  6868619a00           push 0x9a6168
// 0089eee9  52                   push edx
// 0089eeea  ff156cb19800         call dword ptr [0x98b16c]
// 0089eef0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0089eef4  6868619a00           push 0x9a6168
// 0089eef9  50                   push eax
// 0089eefa  8d4c2424             lea ecx, [esp + 0x24]
// 0089eefe  51                   push ecx
// 0089eeff  e8dcdeb6ff           call 0x40cde0
// 0089ef04  83c40c               add esp, 0xc
// 0089ef07  6a20                 push 0x20
// 0089ef09  33db                 xor ebx, ebx
// 0089ef0b  6a0d                 push 0xd
// 0089ef0d  8d4c2424             lea ecx, [esp + 0x24]
// 0089ef11  895c2468             mov dword ptr [esp + 0x68], ebx
// 0089ef15  ff157cdc9800         call dword ptr [0x98dc7c]
// 0089ef1b  8b16                 mov edx, dword ptr [esi]
// 0089ef1d  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 0089ef23  6a01                 push 1
// 0089ef25  8d442420             lea eax, [esp + 0x20]
// 0089ef29  50                   push eax
// 0089ef2a  57                   push edi
// 0089ef2b  8bce                 mov ecx, esi
// 0089ef2d  ffd2                 call edx
// 0089ef2f  8d4c2434             lea ecx, [esp + 0x34]
// 0089ef33  ff1574de9800         call dword ptr [0x98de74]
// 0089ef39  8d4c2418             lea ecx, [esp + 0x18]
// 0089ef3d  ff1574de9800         call dword ptr [0x98de74]
// 0089ef43  8d4c241c             lea ecx, [esp + 0x1c]
// 0089ef47  c644246002           mov byte ptr [esp + 0x60], 2
// 0089ef4c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089ef52  8d7801               lea edi, [eax + 1]
// 0089ef55  57                   push edi
// 0089ef56  8d4c2420             lea ecx, [esp + 0x20]
// 0089ef5a  ff155cd29800         call dword ptr [0x98d25c]
// 0089ef60  57                   push edi
// 0089ef61  8d4c2438             lea ecx, [esp + 0x38]
// 0089ef65  89442430             mov dword ptr [esp + 0x30], eax
// 0089ef69  ff155cd29800         call dword ptr [0x98d25c]
// 0089ef6f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0089ef73  8bf8                 mov edi, eax
// 0089ef75  8a02                 mov al, byte ptr [edx]
// 0089ef77  897c2430             mov dword ptr [esp + 0x30], edi
// 0089ef7b  88442417             mov byte ptr [esp + 0x17], al
// 0089ef7f  84c0                 test al, al
// 0089ef81  0f8471020000         je 0x89f1f8
// 0089ef87  83c9ff               or ecx, 0xffffffff
// 0089ef8a  2bca                 sub ecx, edx
// 0089ef8c  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0089ef90  eb04                 jmp 0x89ef96
// 0089ef92  8a442417             mov al, byte ptr [esp + 0x17]
// 0089ef96  45                   inc ebp
// 0089ef97  3c20                 cmp al, 0x20
// 0089ef99  7416                 je 0x89efb1
// 0089ef9b  3c09                 cmp al, 9
// 0089ef9d  7412                 je 0x89efb1
// 0089ef9f  3c0a                 cmp al, 0xa
// 0089efa1  740e                 je 0x89efb1
// 0089efa3  88041f               mov byte ptr [edi + ebx], al
// 0089efa6  c6441f0100           mov byte ptr [edi + ebx + 1], 0
// 0089efab  43                   inc ebx
// 0089efac  e934020000           jmp 0x89f1e5
// 0089efb1  803f00               cmp byte ptr [edi], 0
// 0089efb4  7508                 jne 0x89efbe
// 0089efb6  3c0a                 cmp al, 0xa
// 0089efb8  0f8527020000         jne 0x89f1e5
// 0089efbe  8d4c2418             lea ecx, [esp + 0x18]
// 0089efc2  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0089efc8  84c0                 test al, al
// 0089efca  740c                 je 0x89efd8
// 0089efcc  8bc5                 mov eax, ebp
// 0089efce  2bc3                 sub eax, ebx
// 0089efd0  89442424             mov dword ptr [esp + 0x24], eax
// 0089efd4  896c2428             mov dword ptr [esp + 0x28], ebp
// 0089efd8  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089efdc  53                   push ebx
// 0089efdd  57                   push edi
// 0089efde  50                   push eax
// 0089efdf  e8fcbbffff           call 0x89abe0
// 0089efe4  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0089efeb  2b4c247c             sub ecx, dword ptr [esp + 0x7c]
// 0089efef  83c40c               add esp, 0xc
// 0089eff2  3bc1                 cmp eax, ecx
// 0089eff4  89442438             mov dword ptr [esp + 0x38], eax
// 0089eff8  7e0a                 jle 0x89f004
// 0089effa  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 0089f002  750b                 jne 0x89f00f
// 0089f004  807c24170a           cmp byte ptr [esp + 0x17], 0xa
// 0089f009  0f85f7000000         jne 0x89f106
// 0089f00f  8d4c2418             lea ecx, [esp + 0x18]
// 0089f013  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0089f019  84c0                 test al, al
// 0089f01b  756a                 jne 0x89f087
// 0089f01d  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089f021  8b3e                 mov edi, dword ptr [esi]
// 0089f023  8d542418             lea edx, [esp + 0x18]
// 0089f027  52                   push edx
// 0089f028  50                   push eax
// 0089f029  81c7ec000000         add edi, 0xec
// 0089f02f  e8bcbaffff           call 0x89aaf0
// 0089f034  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0089f038  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0089f03c  83c408               add esp, 8
// 0089f03f  50                   push eax
// 0089f040  49                   dec ecx
// 0089f041  51                   push ecx
// 0089f042  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0089f046  4a                   dec edx
// 0089f047  52                   push edx
// 0089f048  8b542458             mov edx, dword ptr [esp + 0x58]
// 0089f04c  83ec10               sub esp, 0x10
// 0089f04f  8bc4                 mov eax, esp
// 0089f051  8908                 mov dword ptr [eax], ecx
// 0089f053  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0089f057  895004               mov dword ptr [eax + 4], edx
// 0089f05a  8b542470             mov edx, dword ptr [esp + 0x70]
// 0089f05e  894808               mov dword ptr [eax + 8], ecx
// 0089f061  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0089f068  89500c               mov dword ptr [eax + 0xc], edx
// 0089f06b  8b17                 mov edx, dword ptr [edi]
// 0089f06d  8d442438             lea eax, [esp + 0x38]
// 0089f071  50                   push eax
// 0089f072  51                   push ecx
// 0089f073  8bce                 mov ecx, esi
// 0089f075  ffd2                 call edx
// 0089f077  8b442444             mov eax, dword ptr [esp + 0x44]
// 0089f07b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0089f07f  0144244c             add dword ptr [esp + 0x4c], eax
// 0089f083  894c2448             mov dword ptr [esp + 0x48], ecx
// 0089f087  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089f08b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089f08f  50                   push eax
// 0089f090  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089f094  03c8                 add ecx, eax
// 0089f096  8b16                 mov edx, dword ptr [esi]
// 0089f098  03cd                 add ecx, ebp
// 0089f09a  51                   push ecx
// 0089f09b  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 0089f0a1  8bfd                 mov edi, ebp
// 0089f0a3  2bfb                 sub edi, ebx
// 0089f0a5  8d4fff               lea ecx, [edi - 1]
// 0089f0a8  51                   push ecx
// 0089f0a9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089f0ad  83ec10               sub esp, 0x10
// 0089f0b0  8bc4                 mov eax, esp
// 0089f0b2  8908                 mov dword ptr [eax], ecx
// 0089f0b4  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0089f0b8  894804               mov dword ptr [eax + 4], ecx
// 0089f0bb  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0089f0bf  894808               mov dword ptr [eax + 8], ecx
// 0089f0c2  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0089f0c6  89480c               mov dword ptr [eax + 0xc], ecx
// 0089f0c9  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0089f0d0  8d442438             lea eax, [esp + 0x38]
// 0089f0d4  50                   push eax
// 0089f0d5  51                   push ecx
// 0089f0d6  8bce                 mov ecx, esi
// 0089f0d8  ffd2                 call edx
// 0089f0da  3bfd                 cmp edi, ebp
// 0089f0dc  7410                 je 0x89f0ee
// 0089f0de  8b442444             mov eax, dword ptr [esp + 0x44]
// 0089f0e2  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0089f0e6  0144244c             add dword ptr [esp + 0x4c], eax
// 0089f0ea  894c2448             mov dword ptr [esp + 0x48], ecx
// 0089f0ee  8d4c2418             lea ecx, [esp + 0x18]
// 0089f0f2  ff1590d69800         call dword ptr [0x98d690]
// 0089f0f8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089f0fc  c60200               mov byte ptr [edx], 0
// 0089f0ff  8bfa                 mov edi, edx
// 0089f101  e9dd000000           jmp 0x89f1e3
// 0089f106  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089f10a  8d442418             lea eax, [esp + 0x18]
// 0089f10e  50                   push eax
// 0089f10f  51                   push ecx
// 0089f110  e8dbb9ffff           call 0x89aaf0
// 0089f115  83c408               add esp, 8
// 0089f118  8d4c2418             lea ecx, [esp + 0x18]
// 0089f11c  89442438             mov dword ptr [esp + 0x38], eax
// 0089f120  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0089f126  84c0                 test al, al
// 0089f128  750f                 jne 0x89f139
// 0089f12a  6868619a00           push 0x9a6168
// 0089f12f  8d4c241c             lea ecx, [esp + 0x1c]
// 0089f133  ff1574d29800         call dword ptr [0x98d274]
// 0089f139  57                   push edi
// 0089f13a  8d4c241c             lea ecx, [esp + 0x1c]
// 0089f13e  ff1574d29800         call dword ptr [0x98d274]
// 0089f144  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089f148  8d542418             lea edx, [esp + 0x18]
// 0089f14c  52                   push edx
// 0089f14d  50                   push eax
// 0089f14e  e89db9ffff           call 0x89aaf0
// 0089f153  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0089f15a  2b4c2478             sub ecx, dword ptr [esp + 0x78]
// 0089f15e  83c408               add esp, 8
// 0089f161  3bc1                 cmp eax, ecx
// 0089f163  7e77                 jle 0x89f1dc
// 0089f165  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 0089f16d  746d                 je 0x89f1dc
// 0089f16f  8b442438             mov eax, dword ptr [esp + 0x38]
// 0089f173  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089f177  8b16                 mov edx, dword ptr [esi]
// 0089f179  50                   push eax
// 0089f17a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089f17e  49                   dec ecx
// 0089f17f  51                   push ecx
// 0089f180  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0089f184  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 0089f18a  48                   dec eax
// 0089f18b  50                   push eax
// 0089f18c  83ec10               sub esp, 0x10
// 0089f18f  8bc4                 mov eax, esp
// 0089f191  8908                 mov dword ptr [eax], ecx
// 0089f193  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0089f197  894804               mov dword ptr [eax + 4], ecx
// 0089f19a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0089f19e  894808               mov dword ptr [eax + 8], ecx
// 0089f1a1  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0089f1a5  89480c               mov dword ptr [eax + 0xc], ecx
// 0089f1a8  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0089f1af  8d442438             lea eax, [esp + 0x38]
// 0089f1b3  50                   push eax
// 0089f1b4  51                   push ecx
// 0089f1b5  8bce                 mov ecx, esi
// 0089f1b7  ffd2                 call edx
// 0089f1b9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0089f1bd  8b442444             mov eax, dword ptr [esp + 0x44]
// 0089f1c1  0144244c             add dword ptr [esp + 0x4c], eax
// 0089f1c5  8bd5                 mov edx, ebp
// 0089f1c7  894c2448             mov dword ptr [esp + 0x48], ecx
// 0089f1cb  2bd3                 sub edx, ebx
// 0089f1cd  57                   push edi
// 0089f1ce  8d4c241c             lea ecx, [esp + 0x1c]
// 0089f1d2  89542428             mov dword ptr [esp + 0x28], edx
// 0089f1d6  ff155cde9800         call dword ptr [0x98de5c]
// 0089f1dc  896c2428             mov dword ptr [esp + 0x28], ebp
// 0089f1e0  c60700               mov byte ptr [edi], 0
// 0089f1e3  33db                 xor ebx, ebx
// 0089f1e5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089f1e9  8a0428               mov al, byte ptr [eax + ebp]
// 0089f1ec  88442417             mov byte ptr [esp + 0x17], al
// 0089f1f0  84c0                 test al, al
// 0089f1f2  0f859afdffff         jne 0x89ef92
// 0089f1f8  8d4c2418             lea ecx, [esp + 0x18]
// 0089f1fc  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089f202  85c0                 test eax, eax
// 0089f204  745f                 je 0x89f265
// 0089f206  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089f20a  8b3e                 mov edi, dword ptr [esi]
// 0089f20c  8d4c2418             lea ecx, [esp + 0x18]
// 0089f210  51                   push ecx
// 0089f211  52                   push edx
// 0089f212  81c7ec000000         add edi, 0xec
// 0089f218  e8d3b8ffff           call 0x89aaf0
// 0089f21d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0089f221  83c408               add esp, 8
// 0089f224  50                   push eax
// 0089f225  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089f22b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0089f22f  8b542450             mov edx, dword ptr [esp + 0x50]
// 0089f233  50                   push eax
// 0089f234  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089f238  48                   dec eax
// 0089f239  50                   push eax
// 0089f23a  83ec10               sub esp, 0x10
// 0089f23d  8bc4                 mov eax, esp
// 0089f23f  8908                 mov dword ptr [eax], ecx
// 0089f241  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0089f245  895004               mov dword ptr [eax + 4], edx
// 0089f248  8b542470             mov edx, dword ptr [esp + 0x70]
// 0089f24c  894808               mov dword ptr [eax + 8], ecx
// 0089f24f  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0089f256  89500c               mov dword ptr [eax + 0xc], edx
// 0089f259  8b17                 mov edx, dword ptr [edi]
// 0089f25b  8d442438             lea eax, [esp + 0x38]
// 0089f25f  50                   push eax
// 0089f260  51                   push ecx
// 0089f261  8bce                 mov ecx, esi
// 0089f263  ffd2                 call edx
// 0089f265  8d4c2418             lea ecx, [esp + 0x18]
// 0089f269  ff15c0de9800         call dword ptr [0x98dec0]
// 0089f26f  8d4c2434             lea ecx, [esp + 0x34]
// 0089f273  ff15c0de9800         call dword ptr [0x98dec0]
// 0089f279  8d4c241c             lea ecx, [esp + 0x1c]
// 0089f27d  ff15c0de9800         call dword ptr [0x98dec0]
// 0089f283  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0089f287  64890d00000000       mov dword ptr fs:[0], ecx
// 0089f28e  59                   pop ecx
// 0089f28f  5f                   pop edi
// 0089f290  5e                   pop esi
// 0089f291  5d                   pop ebp
// 0089f292  5b                   pop ebx
// 0089f293  83c450               add esp, 0x50
// 0089f296  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawMultiLineText@CXTPReportPaintManager@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp