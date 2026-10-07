// roc 2007-08 005254b0  unit: G3D::Line  size: 1605 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005254b0
//
// 005254b0  81ec0c010000         sub esp, 0x10c
// 005254b6  a188518b00           mov eax, dword ptr [0x8b5188]
// 005254bb  33c4                 xor eax, esp
// 005254bd  89842408010000       mov dword ptr [esp + 0x108], eax
// 005254c4  8b842414010000       mov eax, dword ptr [esp + 0x114]
// 005254cb  56                   push esi
// 005254cc  8bb42414010000       mov esi, dword ptr [esp + 0x114]
// 005254d3  8b567c               mov edx, dword ptr [esi + 0x7c]
// 005254d6  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 005254dc  89842480000000       mov dword ptr [esp + 0x80], eax
// 005254e3  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 005254e9  83e801               sub eax, 1
// 005254ec  3b9684000000         cmp edx, dword ptr [esi + 0x84]
// 005254f2  89742408             mov dword ptr [esp + 8], esi
// 005254f6  894c2470             mov dword ptr [esp + 0x70], ecx
// 005254fa  8944247c             mov dword ptr [esp + 0x7c], eax
// 005254fe  7f4b                 jg 0x52554b
// 00525500  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00525506  80781100             cmp byte ptr [eax + 0x11], 0
// 0052550a  753f                 jne 0x52554b
// 0052550c  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0052550f  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 00525515  7519                 jne 0x525530
// 00525517  33d2                 xor edx, edx
// 00525519  39966c010000         cmp dword ptr [esi + 0x16c], edx
// 0052551f  0f94c2               sete dl
// 00525522  039688000000         add edx, dword ptr [esi + 0x88]
// 00525528  399680000000         cmp dword ptr [esi + 0x80], edx
// 0052552e  771b                 ja 0x52554b
// 00525530  8b00                 mov eax, dword ptr [eax]
// 00525532  56                   push esi
// 00525533  ffd0                 call eax
// 00525535  83c404               add esp, 4
// 00525538  85c0                 test eax, eax
// 0052553a  0f847f000000         je 0x5255bf
// 00525540  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00525543  3b8e84000000         cmp ecx, dword ptr [esi + 0x84]
// 00525549  7eb5                 jle 0x525500
// 0052554b  837e2400             cmp dword ptr [esi + 0x24], 0
// 0052554f  53                   push ebx
// 00525550  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00525556  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0052555e  895c2430             mov dword ptr [esp + 0x30], ebx
// 00525562  0f8e5a050000         jle 0x525ac2
// 00525568  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0052556c  b8b8ffffff           mov eax, 0xffffffb8
// 00525571  8d5148               lea edx, [ecx + 0x48]
// 00525574  2bc1                 sub eax, ecx
// 00525576  55                   push ebp
// 00525577  c744246000000000     mov dword ptr [esp + 0x60], 0
// 0052557f  8954242c             mov dword ptr [esp + 0x2c], edx
// 00525583  89842490000000       mov dword ptr [esp + 0x90], eax
// 0052558a  57                   push edi
// 0052558b  eb03                 jmp 0x525590
// 0052558d  8d4900               lea ecx, [ecx]
// 00525590  807b3000             cmp byte ptr [ebx + 0x30], 0
// 00525594  0f84fd040000         je 0x525a97
// 0052559a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052559e  8bb088000000         mov esi, dword ptr [eax + 0x88]
// 005255a4  3bb42488000000       cmp esi, dword ptr [esp + 0x88]
// 005255ab  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005255ae  7327                 jae 0x5255d7
// 005255b0  8bc1                 mov eax, ecx
// 005255b2  89442424             mov dword ptr [esp + 0x24], eax
// 005255b6  03c0                 add eax, eax
// 005255b8  c644241200           mov byte ptr [esp + 0x12], 0
// 005255bd  eb34                 jmp 0x5255f3
// 005255bf  33c0                 xor eax, eax
// 005255c1  5e                   pop esi
// 005255c2  8b8c2408010000       mov ecx, dword ptr [esp + 0x108]
// 005255c9  33cc                 xor ecx, esp
// 005255cb  e84eb41000           call 0x630a1e
// 005255d0  81c40c010000         add esp, 0x10c
// 005255d6  c3                   ret 
// 005255d7  8b4320               mov eax, dword ptr [ebx + 0x20]
// 005255da  33d2                 xor edx, edx
// 005255dc  f7f1                 div ecx
// 005255de  8bc2                 mov eax, edx
// 005255e0  85c0                 test eax, eax
// 005255e2  89442424             mov dword ptr [esp + 0x24], eax
// 005255e6  7506                 jne 0x5255ee
// 005255e8  8bc1                 mov eax, ecx
// 005255ea  894c2424             mov dword ptr [esp + 0x24], ecx
// 005255ee  c644241201           mov byte ptr [esp + 0x12], 1
// 005255f3  85f6                 test esi, esi
// 005255f5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005255f9  6a00                 push 0
// 005255fb  7627                 jbe 0x525624
// 005255fd  8b5704               mov edx, dword ptr [edi + 4]
// 00525600  83c6ff               add esi, -1
// 00525603  0faff1               imul esi, ecx
// 00525606  03c1                 add eax, ecx
// 00525608  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0052560b  50                   push eax
// 0052560c  56                   push esi
// 0052560d  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00525611  8b06                 mov eax, dword ptr [esi]
// 00525613  50                   push eax
// 00525614  57                   push edi
// 00525615  ffd1                 call ecx
// 00525617  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0052561a  8d0490               lea eax, [eax + edx*4]
// 0052561d  c644242700           mov byte ptr [esp + 0x27], 0
// 00525622  eb18                 jmp 0x52563c
// 00525624  8b742434             mov esi, dword ptr [esp + 0x34]
// 00525628  8b16                 mov edx, dword ptr [esi]
// 0052562a  8b4f04               mov ecx, dword ptr [edi + 4]
// 0052562d  50                   push eax
// 0052562e  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00525631  6a00                 push 0
// 00525633  52                   push edx
// 00525634  57                   push edi
// 00525635  ffd0                 call eax
// 00525637  c644242701           mov byte ptr [esp + 0x27], 1
// 0052563c  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00525643  8944247c             mov dword ptr [esp + 0x7c], eax
// 00525647  8b4170               mov eax, dword ptr [ecx + 0x70]
// 0052564a  03442478             add eax, dword ptr [esp + 0x78]
// 0052564e  83c414               add esp, 0x14
// 00525651  8944241c             mov dword ptr [esp + 0x1c], eax
// 00525655  8b434c               mov eax, dword ptr [ebx + 0x4c]
// 00525658  0fb710               movzx edx, word ptr [eax]
// 0052565b  0fb74802             movzx ecx, word ptr [eax + 2]
// 0052565f  89542420             mov dword ptr [esp + 0x20], edx
// 00525663  0fb75010             movzx edx, word ptr [eax + 0x10]
// 00525667  894c2474             mov dword ptr [esp + 0x74], ecx
// 0052566b  0fb74820             movzx ecx, word ptr [eax + 0x20]
// 0052566f  89942484000000       mov dword ptr [esp + 0x84], edx
// 00525676  0fb75012             movzx edx, word ptr [eax + 0x12]
// 0052567a  0fb74004             movzx eax, word ptr [eax + 4]
// 0052567e  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00525685  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 0052568b  038c2494000000       add ecx, dword ptr [esp + 0x94]
// 00525692  837c242400           cmp dword ptr [esp + 0x24], 0
// 00525697  89542478             mov dword ptr [esp + 0x78], edx
// 0052569b  8b543104             mov edx, dword ptr [ecx + esi + 4]
// 0052569f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005256a3  8944246c             mov dword ptr [esp + 0x6c], eax
// 005256a7  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 005256ae  89942490000000       mov dword ptr [esp + 0x90], edx
// 005256b5  8b1488               mov edx, dword ptr [eax + ecx*4]
// 005256b8  8954244c             mov dword ptr [esp + 0x4c], edx
// 005256bc  c744245400000000     mov dword ptr [esp + 0x54], 0
// 005256c4  0f8ecd030000         jle 0x525a97
// 005256ca  8d9b00000000         lea ebx, [ebx]
// 005256d0  807c241300           cmp byte ptr [esp + 0x13], 0
// 005256d5  8b742468             mov esi, dword ptr [esp + 0x68]
// 005256d9  8b542454             mov edx, dword ptr [esp + 0x54]
// 005256dd  8b3c96               mov edi, dword ptr [esi + edx*4]
// 005256e0  897c2418             mov dword ptr [esp + 0x18], edi
// 005256e4  7406                 je 0x5256ec
// 005256e6  85d2                 test edx, edx
// 005256e8  8bcf                 mov ecx, edi
// 005256ea  7404                 je 0x5256f0
// 005256ec  8b4c96fc             mov ecx, dword ptr [esi + edx*4 - 4]
// 005256f0  807c241200           cmp byte ptr [esp + 0x12], 0
// 005256f5  740d                 je 0x525704
// 005256f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005256fb  83c0ff               add eax, -1
// 005256fe  3bd0                 cmp edx, eax
// 00525700  8bc7                 mov eax, edi
// 00525702  7404                 je 0x525708
// 00525704  8b449604             mov eax, dword ptr [esi + edx*4 + 4]
// 00525708  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052570c  0fbf32               movsx esi, word ptr [edx]
// 0052570f  0fbf39               movsx edi, word ptr [ecx]
// 00525712  0fbf28               movsx ebp, word ptr [eax]
// 00525715  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00525718  83ea01               sub edx, 1
// 0052571b  0580000000           add eax, 0x80
// 00525720  81c180000000         add ecx, 0x80
// 00525726  897c2440             mov dword ptr [esp + 0x40], edi
// 0052572a  897c2428             mov dword ptr [esp + 0x28], edi
// 0052572e  89742434             mov dword ptr [esp + 0x34], esi
// 00525732  89742460             mov dword ptr [esp + 0x60], esi
// 00525736  896c2448             mov dword ptr [esp + 0x48], ebp
// 0052573a  896c242c             mov dword ptr [esp + 0x2c], ebp
// 0052573e  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00525746  89542470             mov dword ptr [esp + 0x70], edx
// 0052574a  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00525752  89442450             mov dword ptr [esp + 0x50], eax
// 00525756  894c2458             mov dword ptr [esp + 0x58], ecx
// 0052575a  8d9b00000000         lea ebx, [ebx]
// 00525760  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00525764  6a01                 push 1
// 00525766  8d84249c000000       lea eax, [esp + 0x9c]
// 0052576d  50                   push eax
// 0052576e  51                   push ecx
// 0052576f  e85c8bffff           call 0x51e2d0
// 00525774  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00525778  83c40c               add esp, 0xc
// 0052577b  39542444             cmp dword ptr [esp + 0x44], edx
// 0052577f  7321                 jae 0x5257a2
// 00525781  8b442458             mov eax, dword ptr [esp + 0x58]
// 00525785  0fbf08               movsx ecx, word ptr [eax]
// 00525788  8b442450             mov eax, dword ptr [esp + 0x50]
// 0052578c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00525790  0fbfb280000000       movsx esi, word ptr [edx + 0x80]
// 00525797  894c2440             mov dword ptr [esp + 0x40], ecx
// 0052579b  0fbf08               movsx ecx, word ptr [eax]
// 0052579e  894c2448             mov dword ptr [esp + 0x48], ecx
// 005257a2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005257a6  8b4a04               mov ecx, dword ptr [edx + 4]
// 005257a9  85c9                 test ecx, ecx
// 005257ab  7469                 je 0x525816
// 005257ad  6683bc249a00000000   cmp word ptr [esp + 0x9a], 0
// 005257b6  755e                 jne 0x525816
// 005257b8  8b442460             mov eax, dword ptr [esp + 0x60]
// 005257bc  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 005257c0  2bc6                 sub eax, esi
// 005257c2  0faf442420           imul eax, dword ptr [esp + 0x20]
// 005257c7  8d14c0               lea edx, [eax + eax*8]
// 005257ca  8bc3                 mov eax, ebx
// 005257cc  03d2                 add edx, edx
// 005257ce  c1e007               shl eax, 7
// 005257d1  c1e308               shl ebx, 8
// 005257d4  03d2                 add edx, edx
// 005257d6  7819                 js 0x5257f1
// 005257d8  03c2                 add eax, edx
// 005257da  99                   cdq 
// 005257db  f7fb                 idiv ebx
// 005257dd  85c9                 test ecx, ecx
// 005257df  7e29                 jle 0x52580a
// 005257e1  ba01000000           mov edx, 1
// 005257e6  d3e2                 shl edx, cl
// 005257e8  3bc2                 cmp eax, edx
// 005257ea  7c1e                 jl 0x52580a
// 005257ec  8d42ff               lea eax, [edx - 1]
// 005257ef  eb19                 jmp 0x52580a
// 005257f1  2bc2                 sub eax, edx
// 005257f3  99                   cdq 
// 005257f4  f7fb                 idiv ebx
// 005257f6  85c9                 test ecx, ecx
// 005257f8  7e0e                 jle 0x525808
// 005257fa  ba01000000           mov edx, 1
// 005257ff  d3e2                 shl edx, cl
// 00525801  3bc2                 cmp eax, edx
// 00525803  7c03                 jl 0x525808
// 00525805  8d42ff               lea eax, [edx - 1]
// 00525808  f7d8                 neg eax
// 0052580a  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0052580e  668984249a000000     mov word ptr [esp + 0x9a], ax
// 00525816  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052581a  8b4808               mov ecx, dword ptr [eax + 8]
// 0052581d  85c9                 test ecx, ecx
// 0052581f  746e                 je 0x52588f
// 00525821  6683bc24a800000000   cmp word ptr [esp + 0xa8], 0
// 0052582a  7563                 jne 0x52588f
// 0052582c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00525830  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 00525834  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 0052583b  0faf442420           imul eax, dword ptr [esp + 0x20]
// 00525840  8d14c0               lea edx, [eax + eax*8]
// 00525843  8bc3                 mov eax, ebx
// 00525845  03d2                 add edx, edx
// 00525847  c1e007               shl eax, 7
// 0052584a  c1e308               shl ebx, 8
// 0052584d  03d2                 add edx, edx
// 0052584f  7819                 js 0x52586a
// 00525851  03c2                 add eax, edx
// 00525853  99                   cdq 
// 00525854  f7fb                 idiv ebx
// 00525856  85c9                 test ecx, ecx
// 00525858  7e29                 jle 0x525883
// 0052585a  ba01000000           mov edx, 1
// 0052585f  d3e2                 shl edx, cl
// 00525861  3bc2                 cmp eax, edx
// 00525863  7c1e                 jl 0x525883
// 00525865  8d42ff               lea eax, [edx - 1]
// 00525868  eb19                 jmp 0x525883
// 0052586a  2bc2                 sub eax, edx
// 0052586c  99                   cdq 
// 0052586d  f7fb                 idiv ebx
// 0052586f  85c9                 test ecx, ecx
// 00525871  7e0e                 jle 0x525881
// 00525873  ba01000000           mov edx, 1
// 00525878  d3e2                 shl edx, cl
// 0052587a  3bc2                 cmp eax, edx
// 0052587c  7c03                 jl 0x525881
// 0052587e  8d42ff               lea eax, [edx - 1]
// 00525881  f7d8                 neg eax
// 00525883  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00525887  66898424a8000000     mov word ptr [esp + 0xa8], ax
// 0052588f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00525893  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00525896  85c9                 test ecx, ecx
// 00525898  0f8477000000         je 0x525915
// 0052589e  6683bc24b800000000   cmp word ptr [esp + 0xb8], 0
// 005258a7  756c                 jne 0x525915
// 005258a9  8b542434             mov edx, dword ptr [esp + 0x34]
// 005258ad  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 005258b4  8d0412               lea eax, [edx + edx]
// 005258b7  8bd0                 mov edx, eax
// 005258b9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005258bd  2bc2                 sub eax, edx
// 005258bf  03442428             add eax, dword ptr [esp + 0x28]
// 005258c3  0faf442420           imul eax, dword ptr [esp + 0x20]
// 005258c8  8d14c0               lea edx, [eax + eax*8]
// 005258cb  8bc3                 mov eax, ebx
// 005258cd  c1e007               shl eax, 7
// 005258d0  c1e308               shl ebx, 8
// 005258d3  85d2                 test edx, edx
// 005258d5  7c19                 jl 0x5258f0
// 005258d7  03c2                 add eax, edx
// 005258d9  99                   cdq 
// 005258da  f7fb                 idiv ebx
// 005258dc  85c9                 test ecx, ecx
// 005258de  7e29                 jle 0x525909
// 005258e0  ba01000000           mov edx, 1
// 005258e5  d3e2                 shl edx, cl
// 005258e7  3bc2                 cmp eax, edx
// 005258e9  7c1e                 jl 0x525909
// 005258eb  8d42ff               lea eax, [edx - 1]
// 005258ee  eb19                 jmp 0x525909
// 005258f0  2bc2                 sub eax, edx
// 005258f2  99                   cdq 
// 005258f3  f7fb                 idiv ebx
// 005258f5  85c9                 test ecx, ecx
// 005258f7  7e0e                 jle 0x525907
// 005258f9  ba01000000           mov edx, 1
// 005258fe  d3e2                 shl edx, cl
// 00525900  3bc2                 cmp eax, edx
// 00525902  7c03                 jl 0x525907
// 00525904  8d42ff               lea eax, [edx - 1]
// 00525907  f7d8                 neg eax
// 00525909  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0052590d  66898424b8000000     mov word ptr [esp + 0xb8], ax
// 00525915  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00525919  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0052591c  85c9                 test ecx, ecx
// 0052591e  7469                 je 0x525989
// 00525920  6683bc24aa00000000   cmp word ptr [esp + 0xaa], 0
// 00525929  755e                 jne 0x525989
// 0052592b  8b442448             mov eax, dword ptr [esp + 0x48]
// 0052592f  2bc5                 sub eax, ebp
// 00525931  2b442440             sub eax, dword ptr [esp + 0x40]
// 00525935  03c7                 add eax, edi
// 00525937  0faf442420           imul eax, dword ptr [esp + 0x20]
// 0052593c  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00525940  8d1480               lea edx, [eax + eax*4]
// 00525943  8bc7                 mov eax, edi
// 00525945  c1e007               shl eax, 7
// 00525948  c1e708               shl edi, 8
// 0052594b  85d2                 test edx, edx
// 0052594d  7c19                 jl 0x525968
// 0052594f  03c2                 add eax, edx
// 00525951  99                   cdq 
// 00525952  f7ff                 idiv edi
// 00525954  85c9                 test ecx, ecx
// 00525956  7e29                 jle 0x525981
// 00525958  ba01000000           mov edx, 1
// 0052595d  d3e2                 shl edx, cl
// 0052595f  3bc2                 cmp eax, edx
// 00525961  7c1e                 jl 0x525981
// 00525963  8d42ff               lea eax, [edx - 1]
// 00525966  eb19                 jmp 0x525981
// 00525968  2bc2                 sub eax, edx
// 0052596a  99                   cdq 
// 0052596b  f7ff                 idiv edi
// 0052596d  85c9                 test ecx, ecx
// 0052596f  7e0e                 jle 0x52597f
// 00525971  ba01000000           mov edx, 1
// 00525976  d3e2                 shl edx, cl
// 00525978  3bc2                 cmp eax, edx
// 0052597a  7c03                 jl 0x52597f
// 0052597c  8d42ff               lea eax, [edx - 1]
// 0052597f  f7d8                 neg eax
// 00525981  66898424aa000000     mov word ptr [esp + 0xaa], ax
// 00525989  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052598d  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00525990  85c9                 test ecx, ecx
// 00525992  746e                 je 0x525a02
// 00525994  6683bc249c00000000   cmp word ptr [esp + 0x9c], 0
// 0052599d  7563                 jne 0x525a02
// 0052599f  8b542434             mov edx, dword ptr [esp + 0x34]
// 005259a3  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 005259a7  8d0412               lea eax, [edx + edx]
// 005259aa  8bd0                 mov edx, eax
// 005259ac  8bc6                 mov eax, esi
// 005259ae  2bc2                 sub eax, edx
// 005259b0  03442460             add eax, dword ptr [esp + 0x60]
// 005259b4  0faf442420           imul eax, dword ptr [esp + 0x20]
// 005259b9  8d14c0               lea edx, [eax + eax*8]
// 005259bc  8bc7                 mov eax, edi
// 005259be  c1e007               shl eax, 7
// 005259c1  c1e708               shl edi, 8
// 005259c4  85d2                 test edx, edx
// 005259c6  7c19                 jl 0x5259e1
// 005259c8  03c2                 add eax, edx
// 005259ca  99                   cdq 
// 005259cb  f7ff                 idiv edi
// 005259cd  85c9                 test ecx, ecx
// 005259cf  7e29                 jle 0x5259fa
// 005259d1  ba01000000           mov edx, 1
// 005259d6  d3e2                 shl edx, cl
// 005259d8  3bc2                 cmp eax, edx
// 005259da  7c1e                 jl 0x5259fa
// 005259dc  8d42ff               lea eax, [edx - 1]
// 005259df  eb19                 jmp 0x5259fa
// 005259e1  2bc2                 sub eax, edx
// 005259e3  99                   cdq 
// 005259e4  f7ff                 idiv edi
// 005259e6  85c9                 test ecx, ecx
// 005259e8  7e0e                 jle 0x5259f8
// 005259ea  ba01000000           mov edx, 1
// 005259ef  d3e2                 shl edx, cl
// 005259f1  3bc2                 cmp eax, edx
// 005259f3  7c03                 jl 0x5259f8
// 005259f5  8d42ff               lea eax, [edx - 1]
// 005259f8  f7d8                 neg eax
// 005259fa  668984249c000000     mov word ptr [esp + 0x9c], ax
// 00525a02  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00525a06  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00525a0a  50                   push eax
// 00525a0b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00525a0f  51                   push ecx
// 00525a10  8d9424a0000000       lea edx, [esp + 0xa0]
// 00525a17  52                   push edx
// 00525a18  53                   push ebx
// 00525a19  50                   push eax
// 00525a1a  ff9424a4000000       call dword ptr [esp + 0xa4]
// 00525a21  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00525a25  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00525a29  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00525a2d  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00525a31  8b542448             mov edx, dword ptr [esp + 0x48]
// 00525a35  89442440             mov dword ptr [esp + 0x40], eax
// 00525a39  b880000000           mov eax, 0x80
// 00525a3e  0144242c             add dword ptr [esp + 0x2c], eax
// 00525a42  0144246c             add dword ptr [esp + 0x6c], eax
// 00525a46  01442464             add dword ptr [esp + 0x64], eax
// 00525a4a  8b442458             mov eax, dword ptr [esp + 0x58]
// 00525a4e  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00525a52  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 00525a55  014c2450             add dword ptr [esp + 0x50], ecx
// 00525a59  83c001               add eax, 1
// 00525a5c  83c414               add esp, 0x14
// 00525a5f  3b442470             cmp eax, dword ptr [esp + 0x70]
// 00525a63  89542460             mov dword ptr [esp + 0x60], edx
// 00525a67  89742434             mov dword ptr [esp + 0x34], esi
// 00525a6b  89442444             mov dword ptr [esp + 0x44], eax
// 00525a6f  0f86ebfcffff         jbe 0x525760
// 00525a75  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00525a79  8bd1                 mov edx, ecx
// 00525a7b  8d0c90               lea ecx, [eax + edx*4]
// 00525a7e  8b442454             mov eax, dword ptr [esp + 0x54]
// 00525a82  83c001               add eax, 1
// 00525a85  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00525a89  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00525a8d  89442454             mov dword ptr [esp + 0x54], eax
// 00525a91  0f8c39fcffff         jl 0x5256d0
// 00525a97  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00525a9b  8b542414             mov edx, dword ptr [esp + 0x14]
// 00525a9f  8344246418           add dword ptr [esp + 0x64], 0x18
// 00525aa4  8344243004           add dword ptr [esp + 0x30], 4
// 00525aa9  83c001               add eax, 1
// 00525aac  83c354               add ebx, 0x54
// 00525aaf  3b4224               cmp eax, dword ptr [edx + 0x24]
// 00525ab2  8944245c             mov dword ptr [esp + 0x5c], eax
// 00525ab6  895c2438             mov dword ptr [esp + 0x38], ebx
// 00525aba  0f8cd0faffff         jl 0x525590
// 00525ac0  5f                   pop edi
// 00525ac1  5d                   pop ebp
// 00525ac2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00525ac6  83818800000001       add dword ptr [ecx + 0x88], 1
// 00525acd  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 00525ad3  3b811c010000         cmp eax, dword ptr [ecx + 0x11c]
// 00525ad9  8b8c2410010000       mov ecx, dword ptr [esp + 0x110]
// 00525ae0  5b                   pop ebx
// 00525ae1  1bc0                 sbb eax, eax
// 00525ae3  5e                   pop esi
// 00525ae4  33cc                 xor ecx, esp
// 00525ae6  83c004               add eax, 4
// 00525ae9  e830af1000           call 0x630a1e
// 00525aee  81c40c010000         add esp, 0x10c
// 00525af4  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_smooth_data)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jdcoefct.c
