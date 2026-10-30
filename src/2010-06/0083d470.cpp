// roc 2010-06 0083d470  unit: XTPPaintThemes::CXTPOfficeTheme  size: 1589 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083d470
//
// 0083d470  6aff                 push -1
// 0083d472  68016a9b00           push 0x9b6a01
// 0083d477  64a100000000         mov eax, dword ptr fs:[0]
// 0083d47d  50                   push eax
// 0083d47e  83ec54               sub esp, 0x54
// 0083d481  53                   push ebx
// 0083d482  55                   push ebp
// 0083d483  56                   push esi
// 0083d484  57                   push edi
// 0083d485  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0083d48a  33c4                 xor eax, esp
// 0083d48c  50                   push eax
// 0083d48d  8d442468             lea eax, [esp + 0x68]
// 0083d491  64a300000000         mov dword ptr fs:[0], eax
// 0083d497  8be9                 mov ebp, ecx
// 0083d499  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0083d4a0  85c0                 test eax, eax
// 0083d4a2  7414                 je 0x83d4b8
// 0083d4a4  8b4074               mov eax, dword ptr [eax + 0x74]
// 0083d4a7  83787400             cmp dword ptr [eax + 0x74], 0
// 0083d4ab  7506                 jne 0x83d4b3
// 0083d4ad  83787800             cmp dword ptr [eax + 0x78], 0
// 0083d4b1  7405                 je 0x83d4b8
// 0083d4b3  83c074               add eax, 0x74
// 0083d4b6  eb0c                 jmp 0x83d4c4
// 0083d4b8  6a00                 push 0
// 0083d4ba  8d44241c             lea eax, [esp + 0x1c]
// 0083d4be  50                   push eax
// 0083d4bf  e85c06f7ff           call 0x7adb20
// 0083d4c4  8b10                 mov edx, dword ptr [eax]
// 0083d4c6  8b4004               mov eax, dword ptr [eax + 4]
// 0083d4c9  8d4806               lea ecx, [eax + 6]
// 0083d4cc  8b8510010000         mov eax, dword ptr [ebp + 0x110]
// 0083d4d2  3bc8                 cmp ecx, eax
// 0083d4d4  89542428             mov dword ptr [esp + 0x28], edx
// 0083d4d8  894c2418             mov dword ptr [esp + 0x18], ecx
// 0083d4dc  7f04                 jg 0x83d4e2
// 0083d4de  89442418             mov dword ptr [esp + 0x18], eax
// 0083d4e2  8d4a04               lea ecx, [edx + 4]
// 0083d4e5  83c004               add eax, 4
// 0083d4e8  3bc8                 cmp ecx, eax
// 0083d4ea  894c2414             mov dword ptr [esp + 0x14], ecx
// 0083d4ee  7f04                 jg 0x83d4f4
// 0083d4f0  89442414             mov dword ptr [esp + 0x14], eax
// 0083d4f4  83bc249800000000     cmp dword ptr [esp + 0x98], 0
// 0083d4fc  0f847c050000         je 0x83da7e
// 0083d502  6a29                 push 0x29
// 0083d504  8bcd                 mov ecx, ebp
// 0083d506  e805fcf6ff           call 0x7ad110
// 0083d50b  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 0083d50f  50                   push eax
// 0083d510  8d8c2488000000       lea ecx, [esp + 0x88]
// 0083d517  51                   push ecx
// 0083d518  8bce                 mov ecx, esi
// 0083d51a  e81fb2f6ff           call 0x7a873e
// 0083d51f  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0083d526  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0083d52d  8b5500               mov edx, dword ptr [ebp]
// 0083d530  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 0083d536  6a00                 push 0
// 0083d538  2bc8                 sub ecx, eax
// 0083d53a  51                   push ecx
// 0083d53b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083d53f  41                   inc ecx
// 0083d540  51                   push ecx
// 0083d541  50                   push eax
// 0083d542  6a00                 push 0
// 0083d544  56                   push esi
// 0083d545  8bcd                 mov ecx, ebp
// 0083d547  ffd2                 call edx
// 0083d549  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0083d550  85db                 test ebx, ebx
// 0083d552  750e                 jne 0x83d562
// 0083d554  8b442478             mov eax, dword ptr [esp + 0x78]
// 0083d558  8918                 mov dword ptr [eax], ebx
// 0083d55a  895804               mov dword ptr [eax + 4], ebx
// 0083d55d  e92d050000           jmp 0x83da8f
// 0083d562  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 0083d568  8bcb                 mov ecx, ebx
// 0083d56a  8944247c             mov dword ptr [esp + 0x7c], eax
// 0083d56e  e85dc8f6ff           call 0x7a9dd0
// 0083d573  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 0083d57a  89442420             mov dword ptr [esp + 0x20], eax
// 0083d57e  85ff                 test edi, edi
// 0083d580  744b                 je 0x83d5cd
// 0083d582  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0083d589  6a05                 push 5
// 0083d58b  8b5500               mov edx, dword ptr [ebp]
// 0083d58e  6a02                 push 2
// 0083d590  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0083d596  6a00                 push 0
// 0083d598  6a00                 push 0
// 0083d59a  6a01                 push 1
// 0083d59c  6a00                 push 0
// 0083d59e  57                   push edi
// 0083d59f  83ec10               sub esp, 0x10
// 0083d5a2  8bc4                 mov eax, esp
// 0083d5a4  8908                 mov dword ptr [eax], ecx
// 0083d5a6  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0083d5ad  894804               mov dword ptr [eax + 4], ecx
// 0083d5b0  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0083d5b7  894808               mov dword ptr [eax + 8], ecx
// 0083d5ba  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 0083d5c1  89480c               mov dword ptr [eax + 0xc], ecx
// 0083d5c4  56                   push esi
// 0083d5c5  8bcd                 mov ecx, ebp
// 0083d5c7  ffd2                 call edx
// 0083d5c9  8b442420             mov eax, dword ptr [esp + 0x20]
// 0083d5cd  85c0                 test eax, eax
// 0083d5cf  7536                 jne 0x83d607
// 0083d5d1  837c247c02           cmp dword ptr [esp + 0x7c], 2
// 0083d5d6  7439                 je 0x83d611
// 0083d5d8  ba01000000           mov edx, 1
// 0083d5dd  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 0083d5e3  85c0                 test eax, eax
// 0083d5e5  753c                 jne 0x83d623
// 0083d5e7  8b8388000000         mov eax, dword ptr [ebx + 0x88]
// 0083d5ed  85c0                 test eax, eax
// 0083d5ef  7f32                 jg 0x83d623
// 0083d5f1  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 0083d5f7  85c9                 test ecx, ecx
// 0083d5f9  741a                 je 0x83d615
// 0083d5fb  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0083d5fe  85c0                 test eax, eax
// 0083d600  7f21                 jg 0x83d623
// 0083d602  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0083d605  eb14                 jmp 0x83d61b
// 0083d607  83f802               cmp eax, 2
// 0083d60a  74cc                 je 0x83d5d8
// 0083d60c  83f803               cmp eax, 3
// 0083d60f  74c7                 je 0x83d5d8
// 0083d611  33d2                 xor edx, edx
// 0083d613  ebc8                 jmp 0x83d5dd
// 0083d615  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 0083d61b  85c0                 test eax, eax
// 0083d61d  0f84c5000000         je 0x83d6e8
// 0083d623  85d2                 test edx, edx
// 0083d625  0f84bd000000         je 0x83d6e8
// 0083d62b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083d62f  8b03                 mov eax, dword ptr [ebx]
// 0083d631  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0083d637  51                   push ecx
// 0083d638  8bcb                 mov ecx, ebx
// 0083d63a  ffd2                 call edx
// 0083d63c  89842494000000       mov dword ptr [esp + 0x94], eax
// 0083d643  85c0                 test eax, eax
// 0083d645  0f849d000000         je 0x83d6e8
// 0083d64b  8bc8                 mov ecx, eax
// 0083d64d  e8feb4f7ff           call 0x7b8b50
// 0083d652  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0083d659  8bd8                 mov ebx, eax
// 0083d65b  0faf5c2428           imul ebx, dword ptr [esp + 0x28]
// 0083d660  e83b0bf9ff           call 0x7ce1a0
// 0083d665  8bc8                 mov ecx, eax
// 0083d667  8bc3                 mov eax, ebx
// 0083d669  99                   cdq 
// 0083d66a  f7f9                 idiv ecx
// 0083d66c  6a00                 push 0
// 0083d66e  6a00                 push 0
// 0083d670  6a00                 push 0
// 0083d672  6a01                 push 1
// 0083d674  6a00                 push 0
// 0083d676  57                   push edi
// 0083d677  8bd8                 mov ebx, eax
// 0083d679  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 0083d680  2b8424a0000000       sub eax, dword ptr [esp + 0xa0]
// 0083d687  895c2444             mov dword ptr [esp + 0x44], ebx
// 0083d68b  99                   cdq 
// 0083d68c  2bc2                 sub eax, edx
// 0083d68e  8bc8                 mov ecx, eax
// 0083d690  8bc3                 mov eax, ebx
// 0083d692  99                   cdq 
// 0083d693  2bc2                 sub eax, edx
// 0083d695  d1f8                 sar eax, 1
// 0083d697  d1f9                 sar ecx, 1
// 0083d699  2bc8                 sub ecx, eax
// 0083d69b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0083d69f  038c24a0000000       add ecx, dword ptr [esp + 0xa0]
// 0083d6a6  99                   cdq 
// 0083d6a7  2bc2                 sub eax, edx
// 0083d6a9  8bd8                 mov ebx, eax
// 0083d6ab  8b442440             mov eax, dword ptr [esp + 0x40]
// 0083d6af  99                   cdq 
// 0083d6b0  2bc2                 sub eax, edx
// 0083d6b2  8b5500               mov edx, dword ptr [ebp]
// 0083d6b5  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 0083d6bb  d1f8                 sar eax, 1
// 0083d6bd  d1fb                 sar ebx, 1
// 0083d6bf  2bd8                 sub ebx, eax
// 0083d6c1  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0083d6c8  039c249c000000       add ebx, dword ptr [esp + 0x9c]
// 0083d6cf  50                   push eax
// 0083d6d0  8b442448             mov eax, dword ptr [esp + 0x48]
// 0083d6d4  50                   push eax
// 0083d6d5  8b442448             mov eax, dword ptr [esp + 0x48]
// 0083d6d9  50                   push eax
// 0083d6da  51                   push ecx
// 0083d6db  53                   push ebx
// 0083d6dc  56                   push esi
// 0083d6dd  8bcd                 mov ecx, ebp
// 0083d6df  ffd2                 call edx
// 0083d6e1  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0083d6e8  8bcd                 mov ecx, ebp
// 0083d6ea  85ff                 test edi, edi
// 0083d6ec  7404                 je 0x83d6f2
// 0083d6ee  6a2d                 push 0x2d
// 0083d6f0  eb02                 jmp 0x83d6f4
// 0083d6f2  6a2c                 push 0x2c
// 0083d6f4  e817faf6ff           call 0x7ad110
// 0083d6f9  8b16                 mov edx, dword ptr [esi]
// 0083d6fb  89842480000000       mov dword ptr [esp + 0x80], eax
// 0083d702  50                   push eax
// 0083d703  8b4238               mov eax, dword ptr [edx + 0x38]
// 0083d706  8bce                 mov ecx, esi
// 0083d708  ffd0                 call eax
// 0083d70a  6a01                 push 1
// 0083d70c  8bce                 mov ecx, esi
// 0083d70e  e8a1f61300           call 0x97cdb4
// 0083d713  8b13                 mov edx, dword ptr [ebx]
// 0083d715  8b5258               mov edx, dword ptr [edx + 0x58]
// 0083d718  8d842498000000       lea eax, [esp + 0x98]
// 0083d71f  50                   push eax
// 0083d720  8bcb                 mov ecx, ebx
// 0083d722  ffd2                 call edx
// 0083d724  8d842498000000       lea eax, [esp + 0x98]
// 0083d72b  33db                 xor ebx, ebx
// 0083d72d  50                   push eax
// 0083d72e  895c2474             mov dword ptr [esp + 0x74], ebx
// 0083d732  e869fcf6ff           call 0x7ad3a0
// 0083d737  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0083d73e  83c404               add esp, 4
// 0083d741  3bcb                 cmp ecx, ebx
// 0083d743  741e                 je 0x83d763
// 0083d745  e836adf8ff           call 0x7c8480
// 0083d74a  85c0                 test eax, eax
// 0083d74c  7415                 je 0x83d763
// 0083d74e  8b5500               mov edx, dword ptr [ebp]
// 0083d751  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 0083d757  8d842498000000       lea eax, [esp + 0x98]
// 0083d75e  50                   push eax
// 0083d75f  8bcd                 mov ecx, ebp
// 0083d761  ffd2                 call edx
// 0083d763  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0083d76a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083d76e  8d540108             lea edx, [ecx + eax + 8]
// 0083d772  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0083d779  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0083d780  89542438             mov dword ptr [esp + 0x38], edx
// 0083d784  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0083d78b  89542444             mov dword ptr [esp + 0x44], edx
// 0083d78f  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0083d793  8944243c             mov dword ptr [esp + 0x3c], eax
// 0083d797  894c2440             mov dword ptr [esp + 0x40], ecx
// 0083d79b  83fa02               cmp edx, 2
// 0083d79e  740e                 je 0x83d7ae
// 0083d7a0  83fa03               cmp edx, 3
// 0083d7a3  7409                 je 0x83d7ae
// 0083d7a5  83fa04               cmp edx, 4
// 0083d7a8  0f85a3000000         jne 0x83d851
// 0083d7ae  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0083d7b5  03c2                 add eax, edx
// 0083d7b7  99                   cdq 
// 0083d7b8  2bc2                 sub eax, edx
// 0083d7ba  d1f8                 sar eax, 1
// 0083d7bc  8d58fb               lea ebx, [eax - 5]
// 0083d7bf  8d5005               lea edx, [eax + 5]
// 0083d7c2  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 0083d7c9  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0083d7d0  53                   push ebx
// 0083d7d1  899424a0000000       mov dword ptr [esp + 0xa0], edx
// 0083d7d8  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 0083d7df  53                   push ebx
// 0083d7e0  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 0083d7e7  83c1f9               add ecx, -7
// 0083d7ea  8d51fb               lea edx, [ecx - 5]
// 0083d7ed  52                   push edx
// 0083d7ee  53                   push ebx
// 0083d7ef  52                   push edx
// 0083d7f0  50                   push eax
// 0083d7f1  51                   push ecx
// 0083d7f2  56                   push esi
// 0083d7f3  e8a809f7ff           call 0x7ae1a0
// 0083d7f8  836c246007           sub dword ptr [esp + 0x60], 7
// 0083d7fd  83c420               add esp, 0x20
// 0083d800  837c247c04           cmp dword ptr [esp + 0x7c], 4
// 0083d805  7544                 jne 0x83d84b
// 0083d807  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0083d80e  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0083d815  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0083d81c  83c0ec               add eax, -0x14
// 0083d81f  f7df                 neg edi
// 0083d821  1bff                 sbb edi, edi
// 0083d823  83e710               and edi, 0x10
// 0083d826  83c710               add edi, 0x10
// 0083d829  57                   push edi
// 0083d82a  49                   dec ecx
// 0083d82b  51                   push ecx
// 0083d82c  50                   push eax
// 0083d82d  42                   inc edx
// 0083d82e  52                   push edx
// 0083d82f  50                   push eax
// 0083d830  56                   push esi
// 0083d831  8bcd                 mov ecx, ebp
// 0083d833  e8780ef7ff           call 0x7ae6b0
// 0083d838  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0083d83f  83c0ec               add eax, -0x14
// 0083d842  89442440             mov dword ptr [esp + 0x40], eax
// 0083d846  e9d3010000           jmp 0x83da1e
// 0083d84b  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0083d84f  33db                 xor ebx, ebx
// 0083d851  83fa05               cmp edx, 5
// 0083d854  7409                 je 0x83d85f
// 0083d856  83fa06               cmp edx, 6
// 0083d859  0f85bf010000         jne 0x83da1e
// 0083d85f  6820040000           push 0x420
// 0083d864  8d4c244c             lea ecx, [esp + 0x4c]
// 0083d868  51                   push ecx
// 0083d869  895c2450             mov dword ptr [esp + 0x50], ebx
// 0083d86d  895c2454             mov dword ptr [esp + 0x54], ebx
// 0083d871  895c2458             mov dword ptr [esp + 0x58], ebx
// 0083d875  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0083d879  8b1e                 mov ebx, dword ptr [esi]
// 0083d87b  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0083d882  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0083d888  50                   push eax
// 0083d889  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0083d890  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0083d896  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0083d899  50                   push eax
// 0083d89a  8bce                 mov ecx, esi
// 0083d89c  ffd2                 call edx
// 0083d89e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0083d8a1  8d442420             lea eax, [esp + 0x20]
// 0083d8a5  50                   push eax
// 0083d8a6  6a01                 push 1
// 0083d8a8  68e86ea000           push 0xa06ee8
// 0083d8ad  51                   push ecx
// 0083d8ae  ff1594a19e00         call dword ptr [0x9ea194]
// 0083d8b4  8b542450             mov edx, dword ptr [esp + 0x50]
// 0083d8b8  2b542448             sub edx, dword ptr [esp + 0x48]
// 0083d8bc  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0083d8c3  03542414             add edx, dword ptr [esp + 0x14]
// 0083d8c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0083d8cb  83c002               add eax, 2
// 0083d8ce  8d540a0d             lea edx, [edx + ecx + 0xd]
// 0083d8d2  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0083d8d9  8bd9                 mov ebx, ecx
// 0083d8db  2bd8                 sub ebx, eax
// 0083d8dd  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0083d8e4  8944242c             mov dword ptr [esp + 0x2c], eax
// 0083d8e8  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0083d8ef  89442434             mov dword ptr [esp + 0x34], eax
// 0083d8f3  8bc7                 mov eax, edi
// 0083d8f5  f7d8                 neg eax
// 0083d8f7  1bc0                 sbb eax, eax
// 0083d8f9  83e011               and eax, 0x11
// 0083d8fc  6a05                 push 5
// 0083d8fe  83c00f               add eax, 0xf
// 0083d901  50                   push eax
// 0083d902  83ec10               sub esp, 0x10
// 0083d905  8bc4                 mov eax, esp
// 0083d907  8910                 mov dword ptr [eax], edx
// 0083d909  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0083d910  895004               mov dword ptr [eax + 4], edx
// 0083d913  894808               mov dword ptr [eax + 8], ecx
// 0083d916  894c2448             mov dword ptr [esp + 0x48], ecx
// 0083d91a  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 0083d921  89480c               mov dword ptr [eax + 0xc], ecx
// 0083d924  56                   push esi
// 0083d925  8bcd                 mov ecx, ebp
// 0083d927  e84409f7ff           call 0x7ae270
// 0083d92c  837c247c05           cmp dword ptr [esp + 0x7c], 5
// 0083d931  0f85e7000000         jne 0x83da1e
// 0083d937  85ff                 test edi, edi
// 0083d939  7551                 jne 0x83d98c
// 0083d93b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0083d93f  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0083d943  6a0f                 push 0xf
// 0083d945  89842484000000       mov dword ptr [esp + 0x84], eax
// 0083d94c  8b442434             mov eax, dword ptr [esp + 0x34]
// 0083d950  2bc3                 sub eax, ebx
// 0083d952  8bcd                 mov ecx, ebp
// 0083d954  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0083d95b  e8b0f7f6ff           call 0x7ad110
// 0083d960  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0083d967  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0083d96b  50                   push eax
// 0083d96c  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0083d973  83c2fc               add edx, -4
// 0083d976  52                   push edx
// 0083d977  83c0fc               add eax, -4
// 0083d97a  50                   push eax
// 0083d97b  83c102               add ecx, 2
// 0083d97e  51                   push ecx
// 0083d97f  8d5302               lea edx, [ebx + 2]
// 0083d982  52                   push edx
// 0083d983  8bce                 mov ecx, esi
// 0083d985  e800f41300           call 0x97cd8a
// 0083d98a  eb37                 jmp 0x83d9c3
// 0083d98c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0083d990  8b5500               mov edx, dword ptr [ebp]
// 0083d993  6a05                 push 5
// 0083d995  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0083d99b  6a02                 push 2
// 0083d99d  6a00                 push 0
// 0083d99f  6a00                 push 0
// 0083d9a1  6a01                 push 1
// 0083d9a3  6a00                 push 0
// 0083d9a5  57                   push edi
// 0083d9a6  83ec10               sub esp, 0x10
// 0083d9a9  8bc4                 mov eax, esp
// 0083d9ab  8918                 mov dword ptr [eax], ebx
// 0083d9ad  894804               mov dword ptr [eax + 4], ecx
// 0083d9b0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0083d9b4  894808               mov dword ptr [eax + 8], ecx
// 0083d9b7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0083d9bb  89480c               mov dword ptr [eax + 0xc], ecx
// 0083d9be  56                   push esi
// 0083d9bf  8bcd                 mov ecx, ebp
// 0083d9c1  ffd2                 call edx
// 0083d9c3  b801000000           mov eax, 1
// 0083d9c8  0144242c             add dword ptr [esp + 0x2c], eax
// 0083d9cc  29442430             sub dword ptr [esp + 0x30], eax
// 0083d9d0  29442434             sub dword ptr [esp + 0x34], eax
// 0083d9d4  03d8                 add ebx, eax
// 0083d9d6  8b4500               mov eax, dword ptr [ebp]
// 0083d9d9  f7df                 neg edi
// 0083d9db  1bff                 sbb edi, edi
// 0083d9dd  83c72e               add edi, 0x2e
// 0083d9e0  57                   push edi
// 0083d9e1  8bcd                 mov ecx, ebp
// 0083d9e3  89842484000000       mov dword ptr [esp + 0x84], eax
// 0083d9ea  e821f7f6ff           call 0x7ad110
// 0083d9ef  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0083d9f3  8b542430             mov edx, dword ptr [esp + 0x30]
// 0083d9f7  50                   push eax
// 0083d9f8  83ec10               sub esp, 0x10
// 0083d9fb  8bc4                 mov eax, esp
// 0083d9fd  8918                 mov dword ptr [eax], ebx
// 0083d9ff  894804               mov dword ptr [eax + 4], ecx
// 0083da02  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0083da06  895008               mov dword ptr [eax + 8], edx
// 0083da09  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0083da10  89480c               mov dword ptr [eax + 0xc], ecx
// 0083da13  8b82f0000000         mov eax, dword ptr [edx + 0xf0]
// 0083da19  56                   push esi
// 0083da1a  8bcd                 mov ecx, ebp
// 0083da1c  ffd0                 call eax
// 0083da1e  81c5f0000000         add ebp, 0xf0
// 0083da24  55                   push ebp
// 0083da25  56                   push esi
// 0083da26  8d4c2460             lea ecx, [esp + 0x60]
// 0083da2a  e8711cfcff           call 0x7ff6a0
// 0083da2f  8b3e                 mov edi, dword ptr [esi]
// 0083da31  6824880000           push 0x8824
// 0083da36  8d4c243c             lea ecx, [esp + 0x3c]
// 0083da3a  51                   push ecx
// 0083da3b  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0083da42  c644247801           mov byte ptr [esp + 0x78], 1
// 0083da47  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0083da4d  50                   push eax
// 0083da4e  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0083da55  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0083da5b  8b5770               mov edx, dword ptr [edi + 0x70]
// 0083da5e  50                   push eax
// 0083da5f  8bce                 mov ecx, esi
// 0083da61  ffd2                 call edx
// 0083da63  8d4c2458             lea ecx, [esp + 0x58]
// 0083da67  c644247000           mov byte ptr [esp + 0x70], 0
// 0083da6c  e8af1cfcff           call 0x7ff720
// 0083da71  8d8c2498000000       lea ecx, [esp + 0x98]
// 0083da78  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0083da7e  8b442478             mov eax, dword ptr [esp + 0x78]
// 0083da82  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083da86  8b542418             mov edx, dword ptr [esp + 0x18]
// 0083da8a  8908                 mov dword ptr [eax], ecx
// 0083da8c  895004               mov dword ptr [eax + 4], edx
// 0083da8f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0083da93  64890d00000000       mov dword ptr fs:[0], ecx
// 0083da9a  59                   pop ecx
// 0083da9b  5f                   pop edi
// 0083da9c  5e                   pop esi
// 0083da9d  5d                   pop ebp
// 0083da9e  5b                   pop ebx
// 0083da9f  83c460               add esp, 0x60
// 0083daa2  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawListBoxControl@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHPAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOfficeTheme.cpp