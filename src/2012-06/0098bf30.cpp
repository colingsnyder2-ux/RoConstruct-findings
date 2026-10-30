// roc 2012-06 0098bf30  unit: CXTPPaintManager  size: 3642 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098bf30
//
// 0098bf30  6aff                 push -1
// 0098bf32  68e0c1ad00           push 0xadc1e0
// 0098bf37  64a100000000         mov eax, dword ptr fs:[0]
// 0098bf3d  50                   push eax
// 0098bf3e  81ec98000000         sub esp, 0x98
// 0098bf44  53                   push ebx
// 0098bf45  55                   push ebp
// 0098bf46  56                   push esi
// 0098bf47  57                   push edi
// 0098bf48  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098bf4d  33c4                 xor eax, esp
// 0098bf4f  50                   push eax
// 0098bf50  8d8424ac000000       lea eax, [esp + 0xac]
// 0098bf57  64a300000000         mov dword ptr fs:[0], eax
// 0098bf5d  8bf1                 mov esi, ecx
// 0098bf5f  8bbc24c4000000       mov edi, dword ptr [esp + 0xc4]
// 0098bf66  8b9f00010000         mov ebx, dword ptr [edi + 0x100]
// 0098bf6c  8b2e                 mov ebp, dword ptr [esi]
// 0098bf6e  8bcf                 mov ecx, edi
// 0098bf70  e87b8bffff           call 0x984af0
// 0098bf75  50                   push eax
// 0098bf76  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 0098bf7c  53                   push ebx
// 0098bf7d  8bce                 mov ecx, esi
// 0098bf7f  ffd0                 call eax
// 0098bf81  8bac24c0000000       mov ebp, dword ptr [esp + 0xc0]
// 0098bf88  50                   push eax
// 0098bf89  55                   push ebp
// 0098bf8a  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0098bf91  e89a950400           call 0x9d5530
// 0098bf96  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 0098bf9e  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 0098bfa9  742a                 je 0x98bfd5
// 0098bfab  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 0098bfb1  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 0098bfb7  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 0098bfbd  894c2430             mov dword ptr [esp + 0x30], ecx
// 0098bfc1  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 0098bfc7  89542434             mov dword ptr [esp + 0x34], edx
// 0098bfcb  89442438             mov dword ptr [esp + 0x38], eax
// 0098bfcf  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0098bfd3  eb27                 jmp 0x98bffc
// 0098bfd5  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0098bfdc  e81f910400           call 0x9d5100
// 0098bfe1  8b10                 mov edx, dword ptr [eax]
// 0098bfe3  8b4804               mov ecx, dword ptr [eax + 4]
// 0098bfe6  89542430             mov dword ptr [esp + 0x30], edx
// 0098bfea  8b5008               mov edx, dword ptr [eax + 8]
// 0098bfed  8b400c               mov eax, dword ptr [eax + 0xc]
// 0098bff0  894c2434             mov dword ptr [esp + 0x34], ecx
// 0098bff4  89542438             mov dword ptr [esp + 0x38], edx
// 0098bff8  8944243c             mov dword ptr [esp + 0x3c], eax
// 0098bffc  8d442430             lea eax, [esp + 0x30]
// 0098c000  8b08                 mov ecx, dword ptr [eax]
// 0098c002  8b5004               mov edx, dword ptr [eax + 4]
// 0098c005  894c2418             mov dword ptr [esp + 0x18], ecx
// 0098c009  8b4808               mov ecx, dword ptr [eax + 8]
// 0098c00c  8954241c             mov dword ptr [esp + 0x1c], edx
// 0098c010  8b500c               mov edx, dword ptr [eax + 0xc]
// 0098c013  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 0098c019  894c2420             mov dword ptr [esp + 0x20], ecx
// 0098c01d  8bcf                 mov ecx, edi
// 0098c01f  89542424             mov dword ptr [esp + 0x24], edx
// 0098c023  89442448             mov dword ptr [esp + 0x48], eax
// 0098c027  e82487ffff           call 0x984750
// 0098c02c  57                   push edi
// 0098c02d  8d4c2434             lea ecx, [esp + 0x34]
// 0098c031  8bd8                 mov ebx, eax
// 0098c033  51                   push ecx
// 0098c034  8bce                 mov ecx, esi
// 0098c036  895c2454             mov dword ptr [esp + 0x54], ebx
// 0098c03a  e8f1c0ffff           call 0x988130
// 0098c03f  8b17                 mov edx, dword ptr [edi]
// 0098c041  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 0098c047  8d442428             lea eax, [esp + 0x28]
// 0098c04b  50                   push eax
// 0098c04c  8bcf                 mov ecx, edi
// 0098c04e  ffd2                 call edx
// 0098c050  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0098c056  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0098c05c  ba02000000           mov edx, 2
// 0098c061  83f903               cmp ecx, 3
// 0098c064  740c                 je 0x98c072
// 0098c066  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0098c06e  3bca                 cmp ecx, edx
// 0098c070  7508                 jne 0x98c07a
// 0098c072  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0098c07a  85db                 test ebx, ebx
// 0098c07c  7510                 jne 0x98c08e
// 0098c07e  39542448             cmp dword ptr [esp + 0x48], edx
// 0098c082  7518                 jne 0x98c09c
// 0098c084  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0098c08c  eb63                 jmp 0x98c0f1
// 0098c08e  3bda                 cmp ebx, edx
// 0098c090  740a                 je 0x98c09c
// 0098c092  83fb03               cmp ebx, 3
// 0098c095  7405                 je 0x98c09c
// 0098c097  83fb04               cmp ebx, 4
// 0098c09a  75e8                 jne 0x98c084
// 0098c09c  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 0098c0a2  85c0                 test eax, eax
// 0098c0a4  752a                 jne 0x98c0d0
// 0098c0a6  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 0098c0ac  85c0                 test eax, eax
// 0098c0ae  7f20                 jg 0x98c0d0
// 0098c0b0  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 0098c0b6  85c9                 test ecx, ecx
// 0098c0b8  740c                 je 0x98c0c6
// 0098c0ba  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0098c0bd  85c0                 test eax, eax
// 0098c0bf  7f0f                 jg 0x98c0d0
// 0098c0c1  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0098c0c4  eb06                 jmp 0x98c0cc
// 0098c0c6  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 0098c0cc  85c0                 test eax, eax
// 0098c0ce  74b4                 je 0x98c084
// 0098c0d0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0098c0d4  8b07                 mov eax, dword ptr [edi]
// 0098c0d6  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0098c0dc  51                   push ecx
// 0098c0dd  8bcf                 mov ecx, edi
// 0098c0df  ffd2                 call edx
// 0098c0e1  89442460             mov dword ptr [esp + 0x60], eax
// 0098c0e5  c744244401000000     mov dword ptr [esp + 0x44], 1
// 0098c0ed  85c0                 test eax, eax
// 0098c0ef  7508                 jne 0x98c0f9
// 0098c0f1  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0098c0f9  8b07                 mov eax, dword ptr [edi]
// 0098c0fb  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0098c101  8bcf                 mov ecx, edi
// 0098c103  ffd2                 call edx
// 0098c105  8944246c             mov dword ptr [esp + 0x6c], eax
// 0098c109  8b07                 mov eax, dword ptr [edi]
// 0098c10b  8b5078               mov edx, dword ptr [eax + 0x78]
// 0098c10e  8bcf                 mov ecx, edi
// 0098c110  ffd2                 call edx
// 0098c112  89442464             mov dword ptr [esp + 0x64], eax
// 0098c116  8b07                 mov eax, dword ptr [edi]
// 0098c118  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0098c11b  8bcf                 mov ecx, edi
// 0098c11d  ffd2                 call edx
// 0098c11f  8944245c             mov dword ptr [esp + 0x5c], eax
// 0098c123  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 0098c129  83f8ff               cmp eax, -1
// 0098c12c  750f                 jne 0x98c13d
// 0098c12e  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 0098c134  85c9                 test ecx, ecx
// 0098c136  7405                 je 0x98c13d
// 0098c138  e8e38dffff           call 0x984f20
// 0098c13d  8b9fa0000000         mov ebx, dword ptr [edi + 0xa0]
// 0098c143  89442440             mov dword ptr [esp + 0x40], eax
// 0098c147  83fbff               cmp ebx, -1
// 0098c14a  750d                 jne 0x98c159
// 0098c14c  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0098c152  85c0                 test eax, eax
// 0098c154  7403                 je 0x98c159
// 0098c156  8b5838               mov ebx, dword ptr [eax + 0x38]
// 0098c159  8b07                 mov eax, dword ptr [edi]
// 0098c15b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0098c161  8bcf                 mov ecx, edi
// 0098c163  895c2468             mov dword ptr [esp + 0x68], ebx
// 0098c167  ffd2                 call edx
// 0098c169  837c244804           cmp dword ptr [esp + 0x48], 4
// 0098c16e  89842494000000       mov dword ptr [esp + 0x94], eax
// 0098c175  7511                 jne 0x98c188
// 0098c177  837c244004           cmp dword ptr [esp + 0x40], 4
// 0098c17c  7520                 jne 0x98c19e
// 0098c17e  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0098c186  eb16                 jmp 0x98c19e
// 0098c188  8b442448             mov eax, dword ptr [esp + 0x48]
// 0098c18c  83f809               cmp eax, 9
// 0098c18f  0f84fe080000         je 0x98ca93
// 0098c195  83f80b               cmp eax, 0xb
// 0098c198  0f84b5080000         je 0x98ca53
// 0098c19e  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 0098c1a5  85db                 test ebx, ebx
// 0098c1a7  746c                 je 0x98c215
// 0098c1a9  837c244804           cmp dword ptr [esp + 0x48], 4
// 0098c1ae  741d                 je 0x98c1cd
// 0098c1b0  8b07                 mov eax, dword ptr [edi]
// 0098c1b2  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0098c1b8  8bcf                 mov ecx, edi
// 0098c1ba  ffd2                 call edx
// 0098c1bc  85c0                 test eax, eax
// 0098c1be  7538                 jne 0x98c1f8
// 0098c1c0  8b06                 mov eax, dword ptr [esi]
// 0098c1c2  8b5078               mov edx, dword ptr [eax + 0x78]
// 0098c1c5  57                   push edi
// 0098c1c6  55                   push ebp
// 0098c1c7  8bce                 mov ecx, esi
// 0098c1c9  ffd2                 call edx
// 0098c1cb  eb2b                 jmp 0x98c1f8
// 0098c1cd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0098c1d1  8b16                 mov edx, dword ptr [esi]
// 0098c1d3  8b5260               mov edx, dword ptr [edx + 0x60]
// 0098c1d6  83ec10               sub esp, 0x10
// 0098c1d9  8bc4                 mov eax, esp
// 0098c1db  8908                 mov dword ptr [eax], ecx
// 0098c1dd  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0098c1e1  894804               mov dword ptr [eax + 4], ecx
// 0098c1e4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0098c1e8  894808               mov dword ptr [eax + 8], ecx
// 0098c1eb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098c1ef  57                   push edi
// 0098c1f0  89480c               mov dword ptr [eax + 0xc], ecx
// 0098c1f3  55                   push ebp
// 0098c1f4  8bce                 mov ecx, esi
// 0098c1f6  ffd2                 call edx
// 0098c1f8  8b4500               mov eax, dword ptr [ebp]
// 0098c1fb  8b16                 mov edx, dword ptr [esi]
// 0098c1fd  89442474             mov dword ptr [esp + 0x74], eax
// 0098c201  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0098c204  57                   push edi
// 0098c205  8bce                 mov ecx, esi
// 0098c207  ffd0                 call eax
// 0098c209  8b542474             mov edx, dword ptr [esp + 0x74]
// 0098c20d  50                   push eax
// 0098c20e  8b4238               mov eax, dword ptr [edx + 0x38]
// 0098c211  8bcd                 mov ecx, ebp
// 0098c213  ffd0                 call eax
// 0098c215  837c244c04           cmp dword ptr [esp + 0x4c], 4
// 0098c21a  0f8534020000         jne 0x98c454
// 0098c220  8b17                 mov edx, dword ptr [edi]
// 0098c222  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0098c228  8bcf                 mov ecx, edi
// 0098c22a  ffd0                 call eax
// 0098c22c  8bd8                 mov ebx, eax
// 0098c22e  f7db                 neg ebx
// 0098c230  1bdb                 sbb ebx, ebx
// 0098c232  8bce                 mov ecx, esi
// 0098c234  f7db                 neg ebx
// 0098c236  e8d5b7ffff           call 0x987a10
// 0098c23b  8bd0                 mov edx, eax
// 0098c23d  e84ebfffff           call 0x988190
// 0098c242  8944246c             mov dword ptr [esp + 0x6c], eax
// 0098c246  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0098c24c  85c0                 test eax, eax
// 0098c24e  7e05                 jle 0x98c255
// 0098c250  8d0c40               lea ecx, [eax + eax*2]
// 0098c253  eb0c                 jmp 0x98c261
// 0098c255  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098c259  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0098c25d  8d4c0107             lea ecx, [ecx + eax + 7]
// 0098c261  8d4412fd             lea eax, [edx + edx - 3]
// 0098c265  83f82a               cmp eax, 0x2a
// 0098c268  7d05                 jge 0x98c26f
// 0098c26a  b82a000000           mov eax, 0x2a
// 0098c26f  8b542414             mov edx, dword ptr [esp + 0x14]
// 0098c273  89442428             mov dword ptr [esp + 0x28], eax
// 0098c277  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0098c27b  85d2                 test edx, edx
// 0098c27d  7408                 je 0x98c287
// 0098c27f  894c2428             mov dword ptr [esp + 0x28], ecx
// 0098c283  8944242c             mov dword ptr [esp + 0x2c], eax
// 0098c287  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 0098c28f  0f843a010000         je 0x98c3cf
// 0098c295  837c244400           cmp dword ptr [esp + 0x44], 0
// 0098c29a  0f84b5000000         je 0x98c355
// 0098c2a0  85d2                 test edx, edx
// 0098c2a2  743a                 je 0x98c2de
// 0098c2a4  8d4c244c             lea ecx, [esp + 0x4c]
// 0098c2a8  51                   push ecx
// 0098c2a9  8d4c241c             lea ecx, [esp + 0x1c]
// 0098c2ad  e82edba9ff           call 0x429de0
// 0098c2b2  8bc8                 mov ecx, eax
// 0098c2b4  8b442434             mov eax, dword ptr [esp + 0x34]
// 0098c2b8  99                   cdq 
// 0098c2b9  2bc2                 sub eax, edx
// 0098c2bb  8bd0                 mov edx, eax
// 0098c2bd  8b4104               mov eax, dword ptr [ecx + 4]
// 0098c2c0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0098c2c4  d1fa                 sar edx, 1
// 0098c2c6  2bc2                 sub eax, edx
// 0098c2c8  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0098c2cc  8d4c0a04             lea ecx, [edx + ecx + 4]
// 0098c2d0  89442450             mov dword ptr [esp + 0x50], eax
// 0098c2d4  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0098c2d8  8d44244c             lea eax, [esp + 0x4c]
// 0098c2dc  eb38                 jmp 0x98c316
// 0098c2de  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0098c2e2  8d442474             lea eax, [esp + 0x74]
// 0098c2e6  83c203               add edx, 3
// 0098c2e9  50                   push eax
// 0098c2ea  8d4c241c             lea ecx, [esp + 0x1c]
// 0098c2ee  89542450             mov dword ptr [esp + 0x50], edx
// 0098c2f2  e8e9daa9ff           call 0x429de0
// 0098c2f7  8bc8                 mov ecx, eax
// 0098c2f9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098c2fd  8b09                 mov ecx, dword ptr [ecx]
// 0098c2ff  99                   cdq 
// 0098c300  2bc2                 sub eax, edx
// 0098c302  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0098c306  d1f8                 sar eax, 1
// 0098c308  2bc8                 sub ecx, eax
// 0098c30a  894c2474             mov dword ptr [esp + 0x74], ecx
// 0098c30e  89542478             mov dword ptr [esp + 0x78], edx
// 0098c312  8d442474             lea eax, [esp + 0x74]
// 0098c316  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0098c31d  6a01                 push 1
// 0098c31f  51                   push ecx
// 0098c320  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0098c324  51                   push ecx
// 0098c325  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0098c329  51                   push ecx
// 0098c32a  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0098c32e  8b16                 mov edx, dword ptr [esi]
// 0098c330  51                   push ecx
// 0098c331  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0098c335  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 0098c33b  51                   push ecx
// 0098c33c  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0098c340  51                   push ecx
// 0098c341  33c9                 xor ecx, ecx
// 0098c343  51                   push ecx
// 0098c344  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0098c348  51                   push ecx
// 0098c349  8b4804               mov ecx, dword ptr [eax + 4]
// 0098c34c  8b00                 mov eax, dword ptr [eax]
// 0098c34e  51                   push ecx
// 0098c34f  50                   push eax
// 0098c350  55                   push ebp
// 0098c351  8bce                 mov ecx, esi
// 0098c353  ffd2                 call edx
// 0098c355  837c241400           cmp dword ptr [esp + 0x14], 0
// 0098c35a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0098c35e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0098c362  8b542420             mov edx, dword ptr [esp + 0x20]
// 0098c366  89442430             mov dword ptr [esp + 0x30], eax
// 0098c36a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0098c36e  8944243c             mov dword ptr [esp + 0x3c], eax
// 0098c372  740c                 je 0x98c380
// 0098c374  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0098c378  8b442418             mov eax, dword ptr [esp + 0x18]
// 0098c37c  03d0                 add edx, eax
// 0098c37e  eb0d                 jmp 0x98c38d
// 0098c380  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0098c384  49                   dec ecx
// 0098c385  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0098c389  2b4c246c             sub ecx, dword ptr [esp + 0x6c]
// 0098c38d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0098c391  53                   push ebx
// 0098c392  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0098c396  50                   push eax
// 0098c397  6a01                 push 1
// 0098c399  83ec10               sub esp, 0x10
// 0098c39c  8bc4                 mov eax, esp
// 0098c39e  8918                 mov dword ptr [eax], ebx
// 0098c3a0  894804               mov dword ptr [eax + 4], ecx
// 0098c3a3  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0098c3a7  57                   push edi
// 0098c3a8  895008               mov dword ptr [eax + 8], edx
// 0098c3ab  55                   push ebp
// 0098c3ac  8d542454             lea edx, [esp + 0x54]
// 0098c3b0  89480c               mov dword ptr [eax + 0xc], ecx
// 0098c3b3  52                   push edx
// 0098c3b4  8bce                 mov ecx, esi
// 0098c3b6  e8c5cfffff           call 0x989380
// 0098c3bb  8b542414             mov edx, dword ptr [esp + 0x14]
// 0098c3bf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098c3c3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098c3c7  52                   push edx
// 0098c3c8  50                   push eax
// 0098c3c9  51                   push ecx
// 0098c3ca  e93c090000           jmp 0x98cd0b
// 0098c3cf  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0098c3d6  e8258d0400           call 0x9d5100
// 0098c3db  8b10                 mov edx, dword ptr [eax]
// 0098c3dd  53                   push ebx
// 0098c3de  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0098c3e2  53                   push ebx
// 0098c3e3  6a00                 push 0
// 0098c3e5  83ec10               sub esp, 0x10
// 0098c3e8  8bcc                 mov ecx, esp
// 0098c3ea  8911                 mov dword ptr [ecx], edx
// 0098c3ec  8b5004               mov edx, dword ptr [eax + 4]
// 0098c3ef  895104               mov dword ptr [ecx + 4], edx
// 0098c3f2  8b5008               mov edx, dword ptr [eax + 8]
// 0098c3f5  8b400c               mov eax, dword ptr [eax + 0xc]
// 0098c3f8  895108               mov dword ptr [ecx + 8], edx
// 0098c3fb  57                   push edi
// 0098c3fc  89410c               mov dword ptr [ecx + 0xc], eax
// 0098c3ff  55                   push ebp
// 0098c400  8d4c2454             lea ecx, [esp + 0x54]
// 0098c404  51                   push ecx
// 0098c405  8bce                 mov ecx, esi
// 0098c407  e874cfffff           call 0x989380
// 0098c40c  85db                 test ebx, ebx
// 0098c40e  741f                 je 0x98c42f
// 0098c410  8b442434             mov eax, dword ptr [esp + 0x34]
// 0098c414  83c006               add eax, 6
// 0098c417  3944242c             cmp dword ptr [esp + 0x2c], eax
// 0098c41b  7f23                 jg 0x98c440
// 0098c41d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098c421  8bd3                 mov edx, ebx
// 0098c423  52                   push edx
// 0098c424  50                   push eax
// 0098c425  89442434             mov dword ptr [esp + 0x34], eax
// 0098c429  51                   push ecx
// 0098c42a  e9dc080000           jmp 0x98cd0b
// 0098c42f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098c433  83c005               add eax, 5
// 0098c436  39442428             cmp dword ptr [esp + 0x28], eax
// 0098c43a  7f04                 jg 0x98c440
// 0098c43c  89442428             mov dword ptr [esp + 0x28], eax
// 0098c440  8b542414             mov edx, dword ptr [esp + 0x14]
// 0098c444  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098c448  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098c44c  52                   push edx
// 0098c44d  50                   push eax
// 0098c44e  51                   push ecx
// 0098c44f  e9b7080000           jmp 0x98cd0b
// 0098c454  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0098c45a  e861340100           call 0x99f8c0
// 0098c45f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0098c463  85c0                 test eax, eax
// 0098c465  0f84b5010000         je 0x98c620
// 0098c46b  85c9                 test ecx, ecx
// 0098c46d  0f84ad010000         je 0x98c620
// 0098c473  8bcf                 mov ecx, edi
// 0098c475  e87686ffff           call 0x984af0
// 0098c47a  85c0                 test eax, eax
// 0098c47c  8d86f8000000         lea eax, [esi + 0xf8]
// 0098c482  7506                 jne 0x98c48a
// 0098c484  8d86f0000000         lea eax, [esi + 0xf0]
// 0098c48a  50                   push eax
// 0098c48b  55                   push ebp
// 0098c48c  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0098c493  e898900400           call 0x9d5530
// 0098c498  33db                 xor ebx, ebx
// 0098c49a  837c244802           cmp dword ptr [esp + 0x48], 2
// 0098c49f  c68424b400000001     mov byte ptr [esp + 0xb4], 1
// 0098c4a7  0f94c3               sete bl
// 0098c4aa  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 0098c4b2  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0098c4b6  0f84c0000000         je 0x98c57c
// 0098c4bc  837c244804           cmp dword ptr [esp + 0x48], 4
// 0098c4c1  750a                 jne 0x98c4cd
// 0098c4c3  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0098c4c9  29542420             sub dword ptr [esp + 0x20], edx
// 0098c4cd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0098c4d1  8d442474             lea eax, [esp + 0x74]
// 0098c4d5  50                   push eax
// 0098c4d6  8d4c241c             lea ecx, [esp + 0x1c]
// 0098c4da  83c304               add ebx, 4
// 0098c4dd  e8fed8a9ff           call 0x429de0
// 0098c4e2  8bc8                 mov ecx, eax
// 0098c4e4  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098c4e8  99                   cdq 
// 0098c4e9  6a01                 push 1
// 0098c4eb  2bc2                 sub eax, edx
// 0098c4ed  8bd0                 mov edx, eax
// 0098c4ef  8b01                 mov eax, dword ptr [ecx]
// 0098c4f1  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0098c4f8  51                   push ecx
// 0098c4f9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0098c4fd  51                   push ecx
// 0098c4fe  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0098c502  51                   push ecx
// 0098c503  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0098c507  51                   push ecx
// 0098c508  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0098c50c  51                   push ecx
// 0098c50d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0098c511  51                   push ecx
// 0098c512  33c9                 xor ecx, ecx
// 0098c514  51                   push ecx
// 0098c515  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0098c519  51                   push ecx
// 0098c51a  d1fa                 sar edx, 1
// 0098c51c  2bc2                 sub eax, edx
// 0098c51e  8b16                 mov edx, dword ptr [esi]
// 0098c520  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 0098c526  53                   push ebx
// 0098c527  50                   push eax
// 0098c528  55                   push ebp
// 0098c529  8bce                 mov ecx, esi
// 0098c52b  ffd2                 call edx
// 0098c52d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0098c531  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0098c535  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0098c539  8b542420             mov edx, dword ptr [esp + 0x20]
// 0098c53d  8d5c03fc             lea ebx, [ebx + eax - 4]
// 0098c541  89442434             mov dword ptr [esp + 0x34], eax
// 0098c545  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0098c549  50                   push eax
// 0098c54a  6a01                 push 1
// 0098c54c  6a00                 push 0
// 0098c54e  6a01                 push 1
// 0098c550  83ec10               sub esp, 0x10
// 0098c553  8bc4                 mov eax, esp
// 0098c555  8908                 mov dword ptr [eax], ecx
// 0098c557  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0098c55b  895804               mov dword ptr [eax + 4], ebx
// 0098c55e  57                   push edi
// 0098c55f  895008               mov dword ptr [eax + 8], edx
// 0098c562  89480c               mov dword ptr [eax + 0xc], ecx
// 0098c565  55                   push ebp
// 0098c566  8d4c2458             lea ecx, [esp + 0x58]
// 0098c56a  51                   push ecx
// 0098c56b  8bce                 mov ecx, esi
// 0098c56d  e8fed3ffff           call 0x989970
// 0098c572  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098c576  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098c57a  eb74                 jmp 0x98c5f0
// 0098c57c  8d4c244c             lea ecx, [esp + 0x4c]
// 0098c580  e87b8b0400           call 0x9d5100
// 0098c585  8b10                 mov edx, dword ptr [eax]
// 0098c587  53                   push ebx
// 0098c588  6a01                 push 1
// 0098c58a  6a00                 push 0
// 0098c58c  6a00                 push 0
// 0098c58e  83ec10               sub esp, 0x10
// 0098c591  8bcc                 mov ecx, esp
// 0098c593  8911                 mov dword ptr [ecx], edx
// 0098c595  8b5004               mov edx, dword ptr [eax + 4]
// 0098c598  895104               mov dword ptr [ecx + 4], edx
// 0098c59b  8b5008               mov edx, dword ptr [eax + 8]
// 0098c59e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0098c5a1  895108               mov dword ptr [ecx + 8], edx
// 0098c5a4  57                   push edi
// 0098c5a5  89410c               mov dword ptr [ecx + 0xc], eax
// 0098c5a8  55                   push ebp
// 0098c5a9  8d4c2458             lea ecx, [esp + 0x58]
// 0098c5ad  51                   push ecx
// 0098c5ae  8bce                 mov ecx, esi
// 0098c5b0  e8bbd3ffff           call 0x989970
// 0098c5b5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098c5b9  8b542430             mov edx, dword ptr [esp + 0x30]
// 0098c5bd  03442434             add eax, dword ptr [esp + 0x34]
// 0098c5c1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098c5c5  83c20a               add edx, 0xa
// 0098c5c8  3bca                 cmp ecx, edx
// 0098c5ca  8944242c             mov dword ptr [esp + 0x2c], eax
// 0098c5ce  7f06                 jg 0x98c5d6
// 0098c5d0  8bca                 mov ecx, edx
// 0098c5d2  894c2428             mov dword ptr [esp + 0x28], ecx
// 0098c5d6  83bffc00000004       cmp dword ptr [edi + 0xfc], 4
// 0098c5dd  7507                 jne 0x98c5e6
// 0098c5df  83c10b               add ecx, 0xb
// 0098c5e2  894c2428             mov dword ptr [esp + 0x28], ecx
// 0098c5e6  3bc8                 cmp ecx, eax
// 0098c5e8  7f06                 jg 0x98c5f0
// 0098c5ea  8bc8                 mov ecx, eax
// 0098c5ec  894c2428             mov dword ptr [esp + 0x28], ecx
// 0098c5f0  8b542414             mov edx, dword ptr [esp + 0x14]
// 0098c5f4  52                   push edx
// 0098c5f5  50                   push eax
// 0098c5f6  51                   push ecx
// 0098c5f7  57                   push edi
// 0098c5f8  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 0098c5ff  57                   push edi
// 0098c600  8bce                 mov ecx, esi
// 0098c602  e8a9baffff           call 0x9880b0
// 0098c607  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0098c60e  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 0098c616  e8958f0400           call 0x9d55b0
// 0098c61b  e9fb060000           jmp 0x98cd1b
// 0098c620  85db                 test ebx, ebx
// 0098c622  0f849d010000         je 0x98c7c5
// 0098c628  837c246000           cmp dword ptr [esp + 0x60], 0
// 0098c62d  0f8492010000         je 0x98c7c5
// 0098c633  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0098c637  e8e4b30000           call 0x997a20
// 0098c63c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0098c640  8bd8                 mov ebx, eax
// 0098c642  0faf5c2430           imul ebx, dword ptr [esp + 0x30]
// 0098c647  e814f00900           call 0xa2b660
// 0098c64c  8bc8                 mov ecx, eax
// 0098c64e  8bc3                 mov eax, ebx
// 0098c650  99                   cdq 
// 0098c651  f7f9                 idiv ecx
// 0098c653  837c241400           cmp dword ptr [esp + 0x14], 0
// 0098c658  8d4c2418             lea ecx, [esp + 0x18]
// 0098c65c  89442434             mov dword ptr [esp + 0x34], eax
// 0098c660  752d                 jne 0x98c68f
// 0098c662  8d54244c             lea edx, [esp + 0x4c]
// 0098c666  52                   push edx
// 0098c667  e874d7a9ff           call 0x429de0
// 0098c66c  8bc8                 mov ecx, eax
// 0098c66e  8b442434             mov eax, dword ptr [esp + 0x34]
// 0098c672  99                   cdq 
// 0098c673  2bc2                 sub eax, edx
// 0098c675  8bd0                 mov edx, eax
// 0098c677  8b4104               mov eax, dword ptr [ecx + 4]
// 0098c67a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0098c67e  d1fa                 sar edx, 1
// 0098c680  2bc2                 sub eax, edx
// 0098c682  8d5103               lea edx, [ecx + 3]
// 0098c685  89542474             mov dword ptr [esp + 0x74], edx
// 0098c689  89442478             mov dword ptr [esp + 0x78], eax
// 0098c68d  eb2c                 jmp 0x98c6bb
// 0098c68f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0098c693  8d44244c             lea eax, [esp + 0x4c]
// 0098c697  50                   push eax
// 0098c698  83c303               add ebx, 3
// 0098c69b  e840d7a9ff           call 0x429de0
// 0098c6a0  8bc8                 mov ecx, eax
// 0098c6a2  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098c6a6  8b09                 mov ecx, dword ptr [ecx]
// 0098c6a8  99                   cdq 
// 0098c6a9  2bc2                 sub eax, edx
// 0098c6ab  d1f8                 sar eax, 1
// 0098c6ad  2bc8                 sub ecx, eax
// 0098c6af  894c2474             mov dword ptr [esp + 0x74], ecx
// 0098c6b3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0098c6b7  895c2478             mov dword ptr [esp + 0x78], ebx
// 0098c6bb  8d442474             lea eax, [esp + 0x74]
// 0098c6bf  8b10                 mov edx, dword ptr [eax]
// 0098c6c1  8b4004               mov eax, dword ptr [eax + 4]
// 0098c6c4  89442450             mov dword ptr [esp + 0x50], eax
// 0098c6c8  8b442448             mov eax, dword ptr [esp + 0x48]
// 0098c6cc  8954244c             mov dword ptr [esp + 0x4c], edx
// 0098c6d0  83f804               cmp eax, 4
// 0098c6d3  750c                 jne 0x98c6e1
// 0098c6d5  83c103               add ecx, 3
// 0098c6d8  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0098c6dc  e984000000           jmp 0x98c765
// 0098c6e1  83f802               cmp eax, 2
// 0098c6e4  7517                 jne 0x98c6fd
// 0098c6e6  837c244400           cmp dword ptr [esp + 0x44], 0
// 0098c6eb  7478                 je 0x98c765
// 0098c6ed  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 0098c6f2  7571                 jne 0x98c765
// 0098c6f4  83c103               add ecx, 3
// 0098c6f7  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0098c6fb  eb68                 jmp 0x98c765
// 0098c6fd  83f803               cmp eax, 3
// 0098c700  7405                 je 0x98c707
// 0098c702  83f801               cmp eax, 1
// 0098c705  755e                 jne 0x98c765
// 0098c707  837c244400           cmp dword ptr [esp + 0x44], 0
// 0098c70c  7457                 je 0x98c765
// 0098c70e  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 0098c713  7550                 jne 0x98c765
// 0098c715  837c241400           cmp dword ptr [esp + 0x14], 0
// 0098c71a  7525                 jne 0x98c741
// 0098c71c  8d4c2474             lea ecx, [esp + 0x74]
// 0098c720  51                   push ecx
// 0098c721  8d4c241c             lea ecx, [esp + 0x1c]
// 0098c725  e8b6d6a9ff           call 0x429de0
// 0098c72a  8bc8                 mov ecx, eax
// 0098c72c  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098c730  99                   cdq 
// 0098c731  2bc2                 sub eax, edx
// 0098c733  8bd0                 mov edx, eax
// 0098c735  8b01                 mov eax, dword ptr [ecx]
// 0098c737  d1fa                 sar edx, 1
// 0098c739  2bc2                 sub eax, edx
// 0098c73b  8944244c             mov dword ptr [esp + 0x4c], eax
// 0098c73f  eb24                 jmp 0x98c765
// 0098c741  8d442474             lea eax, [esp + 0x74]
// 0098c745  50                   push eax
// 0098c746  8d4c241c             lea ecx, [esp + 0x1c]
// 0098c74a  e891d6a9ff           call 0x429de0
// 0098c74f  8bc8                 mov ecx, eax
// 0098c751  8b442434             mov eax, dword ptr [esp + 0x34]
// 0098c755  99                   cdq 
// 0098c756  2bc2                 sub eax, edx
// 0098c758  8bd0                 mov edx, eax
// 0098c75a  8b4104               mov eax, dword ptr [ecx + 4]
// 0098c75d  d1fa                 sar edx, 1
// 0098c75f  2bc2                 sub eax, edx
// 0098c761  89442450             mov dword ptr [esp + 0x50], eax
// 0098c765  8bcf                 mov ecx, edi
// 0098c767  e8f45b0700           call 0xa02360
// 0098c76c  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0098c773  8b542468             mov edx, dword ptr [esp + 0x68]
// 0098c777  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 0098c77b  6a01                 push 1
// 0098c77d  51                   push ecx
// 0098c77e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0098c782  52                   push edx
// 0098c783  8b542470             mov edx, dword ptr [esp + 0x70]
// 0098c787  51                   push ecx
// 0098c788  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0098c78c  52                   push edx
// 0098c78d  8b542448             mov edx, dword ptr [esp + 0x48]
// 0098c791  51                   push ecx
// 0098c792  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0098c796  53                   push ebx
// 0098c797  52                   push edx
// 0098c798  8b542470             mov edx, dword ptr [esp + 0x70]
// 0098c79c  51                   push ecx
// 0098c79d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0098c7a1  52                   push edx
// 0098c7a2  894320               mov dword ptr [ebx + 0x20], eax
// 0098c7a5  8b06                 mov eax, dword ptr [esi]
// 0098c7a7  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0098c7ad  51                   push ecx
// 0098c7ae  55                   push ebp
// 0098c7af  8bce                 mov ecx, esi
// 0098c7b1  ffd2                 call edx
// 0098c7b3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0098c7b7  c7432000000000       mov dword ptr [ebx + 0x20], 0
// 0098c7be  8b9c24c8000000       mov ebx, dword ptr [esp + 0xc8]
// 0098c7c5  8b442448             mov eax, dword ptr [esp + 0x48]
// 0098c7c9  48                   dec eax
// 0098c7ca  83f809               cmp eax, 9
// 0098c7cd  0f874e020000         ja 0x98ca21
// 0098c7d3  0fb68060cd9800       movzx eax, byte ptr [eax + 0x98cd60]
// 0098c7da  ff248550cd9800       jmp dword ptr [eax*4 + 0x98cd50]
// 0098c7e1  85c9                 test ecx, ecx
// 0098c7e3  756f                 jne 0x98c854
// 0098c7e5  85db                 test ebx, ebx
// 0098c7e7  7412                 je 0x98c7fb
// 0098c7e9  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0098c7ef  3988f8000000         cmp dword ptr [eax + 0xf8], ecx
// 0098c7f5  7504                 jne 0x98c7fb
// 0098c7f7  33c0                 xor eax, eax
// 0098c7f9  eb05                 jmp 0x98c800
// 0098c7fb  b801000000           mov eax, 1
// 0098c800  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0098c804  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 0098c80b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0098c80f  50                   push eax
// 0098c810  6a01                 push 1
// 0098c812  53                   push ebx
// 0098c813  51                   push ecx
// 0098c814  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0098c818  83ec10               sub esp, 0x10
// 0098c81b  8bc4                 mov eax, esp
// 0098c81d  8910                 mov dword ptr [eax], edx
// 0098c81f  8b542440             mov edx, dword ptr [esp + 0x40]
// 0098c823  894804               mov dword ptr [eax + 4], ecx
// 0098c826  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0098c82a  57                   push edi
// 0098c82b  895008               mov dword ptr [eax + 8], edx
// 0098c82e  55                   push ebp
// 0098c82f  8d542458             lea edx, [esp + 0x58]
// 0098c833  89480c               mov dword ptr [eax + 0xc], ecx
// 0098c836  52                   push edx
// 0098c837  8bce                 mov ecx, esi
// 0098c839  e832d1ffff           call 0x989970
// 0098c83e  8b442434             mov eax, dword ptr [esp + 0x34]
// 0098c842  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0098c846  83c006               add eax, 6
// 0098c849  53                   push ebx
// 0098c84a  83c106               add ecx, 6
// 0098c84d  50                   push eax
// 0098c84e  51                   push ecx
// 0098c84f  e9b7040000           jmp 0x98cd0b
// 0098c854  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 0098c859  756c                 jne 0x98c8c7
// 0098c85b  8d442474             lea eax, [esp + 0x74]
// 0098c85f  50                   push eax
// 0098c860  8d4c241c             lea ecx, [esp + 0x1c]
// 0098c864  e877d5a9ff           call 0x429de0
// 0098c869  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0098c86d  8b16                 mov edx, dword ptr [esi]
// 0098c86f  8b5804               mov ebx, dword ptr [eax + 4]
// 0098c872  83c1f9               add ecx, -7
// 0098c875  894c2430             mov dword ptr [esp + 0x30], ecx
// 0098c879  6a00                 push 0
// 0098c87b  8bcf                 mov ecx, edi
// 0098c87d  89542450             mov dword ptr [esp + 0x50], edx
// 0098c881  e83ab5aeff           call 0x477dc0
// 0098c886  50                   push eax
// 0098c887  8b07                 mov eax, dword ptr [edi]
// 0098c889  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0098c88f  8bcf                 mov ecx, edi
// 0098c891  ffd2                 call edx
// 0098c893  50                   push eax
// 0098c894  8b07                 mov eax, dword ptr [edi]
// 0098c896  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0098c899  8bcf                 mov ecx, edi
// 0098c89b  ffd2                 call edx
// 0098c89d  8b542458             mov edx, dword ptr [esp + 0x58]
// 0098c8a1  50                   push eax
// 0098c8a2  8b442440             mov eax, dword ptr [esp + 0x40]
// 0098c8a6  53                   push ebx
// 0098c8a7  50                   push eax
// 0098c8a8  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 0098c8ae  57                   push edi
// 0098c8af  55                   push ebp
// 0098c8b0  8bce                 mov ecx, esi
// 0098c8b2  ffd0                 call eax
// 0098c8b4  8b542414             mov edx, dword ptr [esp + 0x14]
// 0098c8b8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098c8bc  52                   push edx
// 0098c8bd  8d4807               lea ecx, [eax + 7]
// 0098c8c0  50                   push eax
// 0098c8c1  51                   push ecx
// 0098c8c2  e944040000           jmp 0x98cd0b
// 0098c8c7  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0098c8cd  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0098c8d3  8b542428             mov edx, dword ptr [esp + 0x28]
// 0098c8d7  51                   push ecx
// 0098c8d8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0098c8dc  51                   push ecx
// 0098c8dd  33c9                 xor ecx, ecx
// 0098c8df  85c0                 test eax, eax
// 0098c8e1  0f95c1               setne cl
// 0098c8e4  52                   push edx
// 0098c8e5  8b542424             mov edx, dword ptr [esp + 0x24]
// 0098c8e9  51                   push ecx
// 0098c8ea  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0098c8ee  53                   push ebx
// 0098c8ef  83ec10               sub esp, 0x10
// 0098c8f2  8bc4                 mov eax, esp
// 0098c8f4  8910                 mov dword ptr [eax], edx
// 0098c8f6  8b542444             mov edx, dword ptr [esp + 0x44]
// 0098c8fa  894804               mov dword ptr [eax + 4], ecx
// 0098c8fd  895008               mov dword ptr [eax + 8], edx
// 0098c900  8d9424b8000000       lea edx, [esp + 0xb8]
// 0098c907  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0098c90b  57                   push edi
// 0098c90c  55                   push ebp
// 0098c90d  89480c               mov dword ptr [eax + 0xc], ecx
// 0098c910  52                   push edx
// 0098c911  8bce                 mov ecx, esi
// 0098c913  e848e9ffff           call 0x98b260
// 0098c918  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0098c91c  8b5004               mov edx, dword ptr [eax + 4]
// 0098c91f  8b00                 mov eax, dword ptr [eax]
// 0098c921  51                   push ecx
// 0098c922  52                   push edx
// 0098c923  e9e2030000           jmp 0x98cd0a
// 0098c928  85c9                 test ecx, ecx
// 0098c92a  7511                 jne 0x98c93d
// 0098c92c  bb16000000           mov ebx, 0x16
// 0098c931  8bd3                 mov edx, ebx
// 0098c933  895c2428             mov dword ptr [esp + 0x28], ebx
// 0098c937  8954242c             mov dword ptr [esp + 0x2c], edx
// 0098c93b  eb08                 jmp 0x98c945
// 0098c93d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0098c941  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0098c945  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 0098c94a  7513                 jne 0x98c95f
// 0098c94c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0098c950  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0098c956  51                   push ecx
// 0098c957  03c3                 add eax, ebx
// 0098c959  52                   push edx
// 0098c95a  e9ab030000           jmp 0x98cd0a
// 0098c95f  ff742444             push dword ptr [esp + 0x44]
// 0098c963  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0098c967  2b8ec8000000         sub ecx, dword ptr [esi + 0xc8]
// 0098c96d  52                   push edx
// 0098c96e  8b9424d0000000       mov edx, dword ptr [esp + 0xd0]
// 0098c975  53                   push ebx
// 0098c976  6a00                 push 0
// 0098c978  52                   push edx
// 0098c979  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0098c97d  83ec10               sub esp, 0x10
// 0098c980  8bc4                 mov eax, esp
// 0098c982  8910                 mov dword ptr [eax], edx
// 0098c984  8b542440             mov edx, dword ptr [esp + 0x40]
// 0098c988  895004               mov dword ptr [eax + 4], edx
// 0098c98b  894808               mov dword ptr [eax + 8], ecx
// 0098c98e  894c2444             mov dword ptr [esp + 0x44], ecx
// 0098c992  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0098c996  57                   push edi
// 0098c997  55                   push ebp
// 0098c998  8d54245c             lea edx, [esp + 0x5c]
// 0098c99c  89480c               mov dword ptr [eax + 0xc], ecx
// 0098c99f  52                   push edx
// 0098c9a0  8bce                 mov ecx, esi
// 0098c9a2  e8b9e8ffff           call 0x98b260
// 0098c9a7  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0098c9ad  03442430             add eax, dword ptr [esp + 0x30]
// 0098c9b1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098c9b5  8b542414             mov edx, dword ptr [esp + 0x14]
// 0098c9b9  e94a030000           jmp 0x98cd08
// 0098c9be  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 0098c9c3  7514                 jne 0x98c9d9
// 0098c9c5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0098c9c9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0098c9cd  8b542428             mov edx, dword ptr [esp + 0x28]
// 0098c9d1  50                   push eax
// 0098c9d2  51                   push ecx
// 0098c9d3  52                   push edx
// 0098c9d4  e932030000           jmp 0x98cd0b
// 0098c9d9  85c9                 test ecx, ecx
// 0098c9db  7511                 jne 0x98c9ee
// 0098c9dd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0098c9e1  b816000000           mov eax, 0x16
// 0098c9e6  89442428             mov dword ptr [esp + 0x28], eax
// 0098c9ea  8954242c             mov dword ptr [esp + 0x2c], edx
// 0098c9ee  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098c9f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0098c9f6  51                   push ecx
// 0098c9f7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0098c9fb  50                   push eax
// 0098c9fc  51                   push ecx
// 0098c9fd  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098ca01  6a00                 push 0
// 0098ca03  53                   push ebx
// 0098ca04  83ec10               sub esp, 0x10
// 0098ca07  8bc4                 mov eax, esp
// 0098ca09  8910                 mov dword ptr [eax], edx
// 0098ca0b  8b542444             mov edx, dword ptr [esp + 0x44]
// 0098ca0f  894804               mov dword ptr [eax + 4], ecx
// 0098ca12  895008               mov dword ptr [eax + 8], edx
// 0098ca15  8d942490000000       lea edx, [esp + 0x90]
// 0098ca1c  e9e6feffff           jmp 0x98c907
// 0098ca21  8bb424bc000000       mov esi, dword ptr [esp + 0xbc]
// 0098ca28  8d8c2484000000       lea ecx, [esp + 0x84]
// 0098ca2f  c70600000000         mov dword ptr [esi], 0
// 0098ca35  c7460400000000       mov dword ptr [esi + 4], 0
// 0098ca3c  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 0098ca47  e8648b0400           call 0x9d55b0
// 0098ca4c  8bc6                 mov eax, esi
// 0098ca4e  e9e1020000           jmp 0x98cd34
// 0098ca53  8b442440             mov eax, dword ptr [esp + 0x40]
// 0098ca57  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0098ca5b  8b16                 mov edx, dword ptr [esi]
// 0098ca5d  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 0098ca63  50                   push eax
// 0098ca64  8b442460             mov eax, dword ptr [esp + 0x60]
// 0098ca68  53                   push ebx
// 0098ca69  51                   push ecx
// 0098ca6a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0098ca6e  50                   push eax
// 0098ca6f  6a00                 push 0
// 0098ca71  83ec10               sub esp, 0x10
// 0098ca74  8bc4                 mov eax, esp
// 0098ca76  8908                 mov dword ptr [eax], ecx
// 0098ca78  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0098ca7c  894804               mov dword ptr [eax + 4], ecx
// 0098ca7f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0098ca83  894808               mov dword ptr [eax + 8], ecx
// 0098ca86  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0098ca8a  89480c               mov dword ptr [eax + 0xc], ecx
// 0098ca8d  8d442470             lea eax, [esp + 0x70]
// 0098ca91  eb41                 jmp 0x98cad4
// 0098ca93  8b442440             mov eax, dword ptr [esp + 0x40]
// 0098ca97  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0098ca9b  8b16                 mov edx, dword ptr [esi]
// 0098ca9d  8b92d0000000         mov edx, dword ptr [edx + 0xd0]
// 0098caa3  50                   push eax
// 0098caa4  8b442460             mov eax, dword ptr [esp + 0x60]
// 0098caa8  53                   push ebx
// 0098caa9  51                   push ecx
// 0098caaa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0098caae  50                   push eax
// 0098caaf  6a00                 push 0
// 0098cab1  83ec10               sub esp, 0x10
// 0098cab4  8bc4                 mov eax, esp
// 0098cab6  8908                 mov dword ptr [eax], ecx
// 0098cab8  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0098cabc  894804               mov dword ptr [eax + 4], ecx
// 0098cabf  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0098cac3  894808               mov dword ptr [eax + 8], ecx
// 0098cac6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0098caca  89480c               mov dword ptr [eax + 0xc], ecx
// 0098cacd  8d842498000000       lea eax, [esp + 0x98]
// 0098cad4  55                   push ebp
// 0098cad5  50                   push eax
// 0098cad6  8bce                 mov ecx, esi
// 0098cad8  ffd2                 call edx
// 0098cada  83bc24c800000000     cmp dword ptr [esp + 0xc8], 0
// 0098cae2  8b18                 mov ebx, dword ptr [eax]
// 0098cae4  8b4004               mov eax, dword ptr [eax + 4]
// 0098cae7  895c2430             mov dword ptr [esp + 0x30], ebx
// 0098caeb  89442434             mov dword ptr [esp + 0x34], eax
// 0098caef  0f84af010000         je 0x98cca4
// 0098caf5  8b16                 mov edx, dword ptr [esi]
// 0098caf7  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0098cafa  8b5d00               mov ebx, dword ptr [ebp]
// 0098cafd  57                   push edi
// 0098cafe  8bce                 mov ecx, esi
// 0098cb00  ffd0                 call eax
// 0098cb02  8b5338               mov edx, dword ptr [ebx + 0x38]
// 0098cb05  50                   push eax
// 0098cb06  8bcd                 mov ecx, ebp
// 0098cb08  ffd2                 call edx
// 0098cb0a  837c241400           cmp dword ptr [esp + 0x14], 0
// 0098cb0f  7552                 jne 0x98cb63
// 0098cb11  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0098cb15  2b442434             sub eax, dword ptr [esp + 0x34]
// 0098cb19  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0098cb1d  03442424             add eax, dword ptr [esp + 0x24]
// 0098cb21  8d4b03               lea ecx, [ebx + 3]
// 0098cb24  99                   cdq 
// 0098cb25  2bc2                 sub eax, edx
// 0098cb27  8b542430             mov edx, dword ptr [esp + 0x30]
// 0098cb2b  03d1                 add edx, ecx
// 0098cb2d  d1f8                 sar eax, 1
// 0098cb2f  8954247c             mov dword ptr [esp + 0x7c], edx
// 0098cb33  8b542434             mov edx, dword ptr [esp + 0x34]
// 0098cb37  03d0                 add edx, eax
// 0098cb39  89942480000000       mov dword ptr [esp + 0x80], edx
// 0098cb40  8bd0                 mov edx, eax
// 0098cb42  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 0098cb46  89442454             mov dword ptr [esp + 0x54], eax
// 0098cb4a  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0098cb51  89442458             mov dword ptr [esp + 0x58], eax
// 0098cb55  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098cb59  8d440305             lea eax, [ebx + eax + 5]
// 0098cb5d  89442418             mov dword ptr [esp + 0x18], eax
// 0098cb61  eb58                 jmp 0x98cbbb
// 0098cb63  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0098cb67  8b542420             mov edx, dword ptr [esp + 0x20]
// 0098cb6b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0098cb6f  8d040a               lea eax, [edx + ecx]
// 0098cb72  99                   cdq 
// 0098cb73  2bc2                 sub eax, edx
// 0098cb75  8bc8                 mov ecx, eax
// 0098cb77  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098cb7b  99                   cdq 
// 0098cb7c  2bc2                 sub eax, edx
// 0098cb7e  8b542434             mov edx, dword ptr [esp + 0x34]
// 0098cb82  d1f8                 sar eax, 1
// 0098cb84  d1f9                 sar ecx, 1
// 0098cb86  2bc8                 sub ecx, eax
// 0098cb88  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098cb8c  03c1                 add eax, ecx
// 0098cb8e  83c303               add ebx, 3
// 0098cb91  03d3                 add edx, ebx
// 0098cb93  89442454             mov dword ptr [esp + 0x54], eax
// 0098cb97  899424a8000000       mov dword ptr [esp + 0xa8], edx
// 0098cb9e  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 0098cba5  89442458             mov dword ptr [esp + 0x58], eax
// 0098cba9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0098cbad  8bd3                 mov edx, ebx
// 0098cbaf  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0098cbb3  8d441805             lea eax, [eax + ebx + 5]
// 0098cbb7  8944241c             mov dword ptr [esp + 0x1c], eax
// 0098cbbb  8b442440             mov eax, dword ptr [esp + 0x40]
// 0098cbbf  50                   push eax
// 0098cbc0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0098cbc4  8b1e                 mov ebx, dword ptr [esi]
// 0098cbc6  50                   push eax
// 0098cbc7  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0098cbcb  50                   push eax
// 0098cbcc  8b442468             mov eax, dword ptr [esp + 0x68]
// 0098cbd0  50                   push eax
// 0098cbd1  6a01                 push 1
// 0098cbd3  83ec10               sub esp, 0x10
// 0098cbd6  837c246c0b           cmp dword ptr [esp + 0x6c], 0xb
// 0098cbdb  8bc4                 mov eax, esp
// 0098cbdd  8908                 mov dword ptr [eax], ecx
// 0098cbdf  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0098cbe3  895004               mov dword ptr [eax + 4], edx
// 0098cbe6  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0098cbea  894808               mov dword ptr [eax + 8], ecx
// 0098cbed  89500c               mov dword ptr [eax + 0xc], edx
// 0098cbf0  55                   push ebp
// 0098cbf1  8d442474             lea eax, [esp + 0x74]
// 0098cbf5  8bce                 mov ecx, esi
// 0098cbf7  50                   push eax
// 0098cbf8  7508                 jne 0x98cc02
// 0098cbfa  8b93d4000000         mov edx, dword ptr [ebx + 0xd4]
// 0098cc00  eb06                 jmp 0x98cc08
// 0098cc02  8b93d0000000         mov edx, dword ptr [ebx + 0xd0]
// 0098cc08  ffd2                 call edx
// 0098cc0a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098cc0e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098cc12  8b9424c8000000       mov edx, dword ptr [esp + 0xc8]
// 0098cc19  6a00                 push 0
// 0098cc1b  50                   push eax
// 0098cc1c  51                   push ecx
// 0098cc1d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0098cc21  6a00                 push 0
// 0098cc23  52                   push edx
// 0098cc24  8b542430             mov edx, dword ptr [esp + 0x30]
// 0098cc28  83ec10               sub esp, 0x10
// 0098cc2b  8bc4                 mov eax, esp
// 0098cc2d  8908                 mov dword ptr [eax], ecx
// 0098cc2f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0098cc33  895004               mov dword ptr [eax + 4], edx
// 0098cc36  8b542448             mov edx, dword ptr [esp + 0x48]
// 0098cc3a  894808               mov dword ptr [eax + 8], ecx
// 0098cc3d  57                   push edi
// 0098cc3e  89500c               mov dword ptr [eax + 0xc], edx
// 0098cc41  55                   push ebp
// 0098cc42  8d442478             lea eax, [esp + 0x78]
// 0098cc46  50                   push eax
// 0098cc47  8bce                 mov ecx, esi
// 0098cc49  e812e6ffff           call 0x98b260
// 0098cc4e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0098cc52  83f802               cmp eax, 2
// 0098cc55  7405                 je 0x98cc5c
// 0098cc57  83f803               cmp eax, 3
// 0098cc5a  7537                 jne 0x98cc93
// 0098cc5c  8b5500               mov edx, dword ptr [ebp]
// 0098cc5f  6a12                 push 0x12
// 0098cc61  8bce                 mov ecx, esi
// 0098cc63  e828acffff           call 0x987890
// 0098cc68  50                   push eax
// 0098cc69  8b4238               mov eax, dword ptr [edx + 0x38]
// 0098cc6c  8bcd                 mov ecx, ebp
// 0098cc6e  ffd0                 call eax
// 0098cc70  8b5500               mov edx, dword ptr [ebp]
// 0098cc73  6a0f                 push 0xf
// 0098cc75  8bce                 mov ecx, esi
// 0098cc77  e814acffff           call 0x987890
// 0098cc7c  50                   push eax
// 0098cc7d  8b4234               mov eax, dword ptr [edx + 0x34]
// 0098cc80  8bcd                 mov ecx, ebp
// 0098cc82  ffd0                 call eax
// 0098cc84  8b5504               mov edx, dword ptr [ebp + 4]
// 0098cc87  8d4c2418             lea ecx, [esp + 0x18]
// 0098cc8b  51                   push ecx
// 0098cc8c  52                   push edx
// 0098cc8d  ff15d43cb200         call dword ptr [0xb23cd4]
// 0098cc93  8b442414             mov eax, dword ptr [esp + 0x14]
// 0098cc97  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098cc9b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0098cc9f  50                   push eax
// 0098cca0  51                   push ecx
// 0098cca1  52                   push edx
// 0098cca2  eb67                 jmp 0x98cd0b
// 0098cca4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098cca8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098ccac  8b542418             mov edx, dword ptr [esp + 0x18]
// 0098ccb0  6a00                 push 0
// 0098ccb2  50                   push eax
// 0098ccb3  51                   push ecx
// 0098ccb4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098ccb8  6a00                 push 0
// 0098ccba  6a00                 push 0
// 0098ccbc  83ec10               sub esp, 0x10
// 0098ccbf  8bc4                 mov eax, esp
// 0098ccc1  8910                 mov dword ptr [eax], edx
// 0098ccc3  8b542444             mov edx, dword ptr [esp + 0x44]
// 0098ccc7  894804               mov dword ptr [eax + 4], ecx
// 0098ccca  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0098ccce  57                   push edi
// 0098cccf  895008               mov dword ptr [eax + 8], edx
// 0098ccd2  55                   push ebp
// 0098ccd3  8d542478             lea edx, [esp + 0x78]
// 0098ccd7  89480c               mov dword ptr [eax + 0xc], ecx
// 0098ccda  52                   push edx
// 0098ccdb  8bce                 mov ecx, esi
// 0098ccdd  e87ee5ffff           call 0x98b260
// 0098cce2  8b542414             mov edx, dword ptr [esp + 0x14]
// 0098cce6  85d2                 test edx, edx
// 0098cce8  7412                 je 0x98ccfc
// 0098ccea  8b442450             mov eax, dword ptr [esp + 0x50]
// 0098ccee  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098ccf2  8d4c0805             lea ecx, [eax + ecx + 5]
// 0098ccf6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0098ccfa  eb0c                 jmp 0x98cd08
// 0098ccfc  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0098cd00  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0098cd04  8d441805             lea eax, [eax + ebx + 5]
// 0098cd08  52                   push edx
// 0098cd09  51                   push ecx
// 0098cd0a  50                   push eax
// 0098cd0b  57                   push edi
// 0098cd0c  8bbc24cc000000       mov edi, dword ptr [esp + 0xcc]
// 0098cd13  57                   push edi
// 0098cd14  8bce                 mov ecx, esi
// 0098cd16  e895b3ffff           call 0x9880b0
// 0098cd1b  8d8c2484000000       lea ecx, [esp + 0x84]
// 0098cd22  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 0098cd2d  e87e880400           call 0x9d55b0
// 0098cd32  8bc7                 mov eax, edi
// 0098cd34  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 0098cd3b  64890d00000000       mov dword ptr fs:[0], ecx
// 0098cd42  59                   pop ecx
// 0098cd43  5f                   pop edi
// 0098cd44  5e                   pop esi
// 0098cd45  5d                   pop ebp
// 0098cd46  5b                   pop ebx
// 0098cd47  81c4a4000000         add esp, 0xa4
// 0098cd4d  c21000               ret 0x10
// 0098cd50  bec99800e1           mov esi, 0xe10098c9
// copied from an identical function in another client (function ?DrawControlToolBarParent@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp