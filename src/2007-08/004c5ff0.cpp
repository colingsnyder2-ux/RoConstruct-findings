// roc 2007-08 004c5ff0  unit: RakPeer  size: 996 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5ff0
//
// 004c5ff0  51                   push ecx
// 004c5ff1  55                   push ebp
// 004c5ff2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004c5ff6  8b4504               mov eax, dword ptr [ebp + 4]
// 004c5ff9  83f820               cmp eax, 0x20
// 004c5ffc  56                   push esi
// 004c5ffd  894c2408             mov dword ptr [esp + 8], ecx
// 004c6001  0f8da4000000         jge 0x4c60ab
// 004c6007  8b542418             mov edx, dword ptr [esp + 0x18]
// 004c600b  3bc2                 cmp eax, edx
// 004c600d  7e13                 jle 0x4c6022
// 004c600f  8d4c8508             lea ecx, [ebp + eax*4 + 8]
// 004c6013  2bc2                 sub eax, edx
// 004c6015  8b71fc               mov esi, dword ptr [ecx - 4]
// 004c6018  8931                 mov dword ptr [ecx], esi
// 004c601a  83c1fc               add ecx, -4
// 004c601d  83e801               sub eax, 1
// 004c6020  75f3                 jne 0x4c6015
// 004c6022  807d0000             cmp byte ptr [ebp], 0
// 004c6026  741f                 je 0x4c6047
// 004c6028  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004c602b  3bca                 cmp ecx, edx
// 004c602d  7e3e                 jle 0x4c606d
// 004c602f  8d848d88000000       lea eax, [ebp + ecx*4 + 0x88]
// 004c6036  2bca                 sub ecx, edx
// 004c6038  8b70fc               mov esi, dword ptr [eax - 4]
// 004c603b  8930                 mov dword ptr [eax], esi
// 004c603d  83c0fc               add eax, -4
// 004c6040  83e901               sub ecx, 1
// 004c6043  75f3                 jne 0x4c6038
// 004c6045  eb26                 jmp 0x4c606d
// 004c6047  8b4504               mov eax, dword ptr [ebp + 4]
// 004c604a  83c001               add eax, 1
// 004c604d  8d7201               lea esi, [edx + 1]
// 004c6050  3bc6                 cmp eax, esi
// 004c6052  7e19                 jle 0x4c606d
// 004c6054  8d8c8510010000       lea ecx, [ebp + eax*4 + 0x110]
// 004c605b  2bc6                 sub eax, esi
// 004c605d  8d4900               lea ecx, [ecx]
// 004c6060  8b71fc               mov esi, dword ptr [ecx - 4]
// 004c6063  8931                 mov dword ptr [ecx], esi
// 004c6065  83c1fc               add ecx, -4
// 004c6068  83e801               sub eax, 1
// 004c606b  75f3                 jne 0x4c6060
// 004c606d  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c6071  89449508             mov dword ptr [ebp + edx*4 + 8], eax
// 004c6075  807d0000             cmp byte ptr [ebp], 0
// 004c6079  7419                 je 0x4c6094
// 004c607b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c607f  8b01                 mov eax, dword ptr [ecx]
// 004c6081  89849588000000       mov dword ptr [ebp + edx*4 + 0x88], eax
// 004c6088  83450401             add dword ptr [ebp + 4], 1
// 004c608c  5e                   pop esi
// 004c608d  33c0                 xor eax, eax
// 004c608f  5d                   pop ebp
// 004c6090  59                   pop ecx
// 004c6091  c21800               ret 0x18
// 004c6094  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c6098  898c9514010000       mov dword ptr [ebp + edx*4 + 0x114], ecx
// 004c609f  83450401             add dword ptr [ebp + 4], 1
// 004c60a3  5e                   pop esi
// 004c60a4  33c0                 xor eax, eax
// 004c60a6  5d                   pop ebp
// 004c60a7  59                   pop ecx
// 004c60a8  c21800               ret 0x18
// 004c60ab  53                   push ebx
// 004c60ac  57                   push edi
// 004c60ad  e8defaffff           call 0x4c5b90
// 004c60b2  8a5500               mov dl, byte ptr [ebp]
// 004c60b5  8bd8                 mov ebx, eax
// 004c60b7  8813                 mov byte ptr [ebx], dl
// 004c60b9  807d0000             cmp byte ptr [ebp], 0
// 004c60bd  7428                 je 0x4c60e7
// 004c60bf  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 004c60c5  898308010000         mov dword ptr [ebx + 0x108], eax
// 004c60cb  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 004c60d1  85c0                 test eax, eax
// 004c60d3  7406                 je 0x4c60db
// 004c60d5  89980c010000         mov dword ptr [eax + 0x10c], ebx
// 004c60db  89ab0c010000         mov dword ptr [ebx + 0x10c], ebp
// 004c60e1  899d08010000         mov dword ptr [ebp + 0x108], ebx
// 004c60e7  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004c60eb  83ff10               cmp edi, 0x10
// 004c60ee  0f8ca9010000         jl 0x4c629d
// 004c60f4  b910000000           mov ecx, 0x10
// 004c60f9  33d2                 xor edx, edx
// 004c60fb  3bf9                 cmp edi, ecx
// 004c60fd  7e2b                 jle 0x4c612a
// 004c60ff  8d4d48               lea ecx, [ebp + 0x48]
// 004c6102  8d47f0               lea eax, [edi - 0x10]
// 004c6105  894c2428             mov dword ptr [esp + 0x28], ecx
// 004c6109  8d7308               lea esi, [ebx + 8]
// 004c610c  8bd0                 mov edx, eax
// 004c610e  8d4810               lea ecx, [eax + 0x10]
// 004c6111  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004c6115  8b3f                 mov edi, dword ptr [edi]
// 004c6117  8344242804           add dword ptr [esp + 0x28], 4
// 004c611c  893e                 mov dword ptr [esi], edi
// 004c611e  83c604               add esi, 4
// 004c6121  83e801               sub eax, 1
// 004c6124  75eb                 jne 0x4c6111
// 004c6126  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004c612a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c612e  89449308             mov dword ptr [ebx + edx*4 + 8], eax
// 004c6132  83c201               add edx, 1
// 004c6135  83f920               cmp ecx, 0x20
// 004c6138  7d25                 jge 0x4c615f
// 004c613a  b820000000           mov eax, 0x20
// 004c613f  8d749308             lea esi, [ebx + edx*4 + 8]
// 004c6143  8d548d08             lea edx, [ebp + ecx*4 + 8]
// 004c6147  2bc1                 sub eax, ecx
// 004c6149  8da42400000000       lea esp, [esp]
// 004c6150  8b0a                 mov ecx, dword ptr [edx]
// 004c6152  890e                 mov dword ptr [esi], ecx
// 004c6154  83c204               add edx, 4
// 004c6157  83c604               add esi, 4
// 004c615a  83e801               sub eax, 1
// 004c615d  75f1                 jne 0x4c6150
// 004c615f  33c0                 xor eax, eax
// 004c6161  384500               cmp byte ptr [ebp], al
// 004c6164  b910000000           mov ecx, 0x10
// 004c6169  0f8487000000         je 0x4c61f6
// 004c616f  3bf9                 cmp edi, ecx
// 004c6171  7e30                 jle 0x4c61a3
// 004c6173  8d47f0               lea eax, [edi - 0x10]
// 004c6176  8db388000000         lea esi, [ebx + 0x88]
// 004c617c  8d95c8000000         lea edx, [ebp + 0xc8]
// 004c6182  89442428             mov dword ptr [esp + 0x28], eax
// 004c6186  8d4810               lea ecx, [eax + 0x10]
// 004c6189  8da42400000000       lea esp, [esp]
// 004c6190  8b3a                 mov edi, dword ptr [edx]
// 004c6192  893e                 mov dword ptr [esi], edi
// 004c6194  83c204               add edx, 4
// 004c6197  83c604               add esi, 4
// 004c619a  83e801               sub eax, 1
// 004c619d  75f1                 jne 0x4c6190
// 004c619f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c61a3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004c61a7  8b12                 mov edx, dword ptr [edx]
// 004c61a9  89948388000000       mov dword ptr [ebx + eax*4 + 0x88], edx
// 004c61b0  83c001               add eax, 1
// 004c61b3  83f920               cmp ecx, 0x20
// 004c61b6  0f8dcd000000         jge 0x4c6289
// 004c61bc  ba20000000           mov edx, 0x20
// 004c61c1  2bd1                 sub edx, ecx
// 004c61c3  8dbc8388000000       lea edi, [ebx + eax*4 + 0x88]
// 004c61ca  8db48d88000000       lea esi, [ebp + ecx*4 + 0x88]
// 004c61d1  03c2                 add eax, edx
// 004c61d3  8b0e                 mov ecx, dword ptr [esi]
// 004c61d5  890f                 mov dword ptr [edi], ecx
// 004c61d7  83c604               add esi, 4
// 004c61da  83c704               add edi, 4
// 004c61dd  83ea01               sub edx, 1
// 004c61e0  75f1                 jne 0x4c61d3
// 004c61e2  c7450410000000       mov dword ptr [ebp + 4], 0x10
// 004c61e9  5f                   pop edi
// 004c61ea  894304               mov dword ptr [ebx + 4], eax
// 004c61ed  8bc3                 mov eax, ebx
// 004c61ef  5b                   pop ebx
// 004c61f0  5e                   pop esi
// 004c61f1  5d                   pop ebp
// 004c61f2  59                   pop ecx
// 004c61f3  c21800               ret 0x18
// 004c61f6  3bf9                 cmp edi, ecx
// 004c61f8  7e29                 jle 0x4c6223
// 004c61fa  8d47f0               lea eax, [edi - 0x10]
// 004c61fd  8db310010000         lea esi, [ebx + 0x110]
// 004c6203  8d9554010000         lea edx, [ebp + 0x154]
// 004c6209  89442428             mov dword ptr [esp + 0x28], eax
// 004c620d  8d4810               lea ecx, [eax + 0x10]
// 004c6210  8b3a                 mov edi, dword ptr [edx]
// 004c6212  893e                 mov dword ptr [esi], edi
// 004c6214  83c204               add edx, 4
// 004c6217  83c604               add esi, 4
// 004c621a  83e801               sub eax, 1
// 004c621d  75f1                 jne 0x4c6210
// 004c621f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c6223  8b542424             mov edx, dword ptr [esp + 0x24]
// 004c6227  89948310010000       mov dword ptr [ebx + eax*4 + 0x110], edx
// 004c622e  8b7504               mov esi, dword ptr [ebp + 4]
// 004c6231  8d5101               lea edx, [ecx + 1]
// 004c6234  83c601               add esi, 1
// 004c6237  83c001               add eax, 1
// 004c623a  3bd6                 cmp edx, esi
// 004c623c  7d2c                 jge 0x4c626a
// 004c623e  8db48310010000       lea esi, [ebx + eax*4 + 0x110]
// 004c6245  8d8c8d14010000       lea ecx, [ebp + ecx*4 + 0x114]
// 004c624c  8d642400             lea esp, [esp]
// 004c6250  8b39                 mov edi, dword ptr [ecx]
// 004c6252  893e                 mov dword ptr [esi], edi
// 004c6254  8b7d04               mov edi, dword ptr [ebp + 4]
// 004c6257  83c201               add edx, 1
// 004c625a  83c701               add edi, 1
// 004c625d  83c104               add ecx, 4
// 004c6260  83c001               add eax, 1
// 004c6263  83c604               add esi, 4
// 004c6266  3bd7                 cmp edx, edi
// 004c6268  7ce6                 jl 0x4c6250
// 004c626a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004c626e  c7410802000000       mov dword ptr [ecx + 8], 2
// 004c6275  8b5308               mov edx, dword ptr [ebx + 8]
// 004c6278  8d7b08               lea edi, [ebx + 8]
// 004c627b  8911                 mov dword ptr [ecx], edx
// 004c627d  8d48ff               lea ecx, [eax - 1]
// 004c6280  85c9                 test ecx, ecx
// 004c6282  7e05                 jle 0x4c6289
// 004c6284  8d730c               lea esi, [ebx + 0xc]
// 004c6287  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004c6289  c7450410000000       mov dword ptr [ebp + 4], 0x10
// 004c6290  5f                   pop edi
// 004c6291  894304               mov dword ptr [ebx + 4], eax
// 004c6294  8bc3                 mov eax, ebx
// 004c6296  5b                   pop ebx
// 004c6297  5e                   pop esi
// 004c6298  5d                   pop ebp
// 004c6299  59                   pop ecx
// 004c629a  c21800               ret 0x18
// 004c629d  8d4308               lea eax, [ebx + 8]
// 004c62a0  8d4d44               lea ecx, [ebp + 0x44]
// 004c62a3  8bd0                 mov edx, eax
// 004c62a5  bf11000000           mov edi, 0x11
// 004c62aa  8d9b00000000         lea ebx, [ebx]
// 004c62b0  8b31                 mov esi, dword ptr [ecx]
// 004c62b2  8932                 mov dword ptr [edx], esi
// 004c62b4  83c104               add ecx, 4
// 004c62b7  83c204               add edx, 4
// 004c62ba  83ef01               sub edi, 1
// 004c62bd  75f1                 jne 0x4c62b0
// 004c62bf  807d0000             cmp byte ptr [ebp], 0
// 004c62c3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004c62c7  742b                 je 0x4c62f4
// 004c62c9  ba11000000           mov edx, 0x11
// 004c62ce  8d8b88000000         lea ecx, [ebx + 0x88]
// 004c62d4  8d85c4000000         lea eax, [ebp + 0xc4]
// 004c62da  89542428             mov dword ptr [esp + 0x28], edx
// 004c62de  8bff                 mov edi, edi
// 004c62e0  8b30                 mov esi, dword ptr [eax]
// 004c62e2  8931                 mov dword ptr [ecx], esi
// 004c62e4  83c004               add eax, 4
// 004c62e7  83c104               add ecx, 4
// 004c62ea  83ea01               sub edx, 1
// 004c62ed  75f1                 jne 0x4c62e0
// 004c62ef  e999000000           jmp 0x4c638d
// 004c62f4  bf11000000           mov edi, 0x11
// 004c62f9  8d9310010000         lea edx, [ebx + 0x110]
// 004c62ff  8d8d50010000         lea ecx, [ebp + 0x150]
// 004c6305  897c2428             mov dword ptr [esp + 0x28], edi
// 004c6309  8da42400000000       lea esp, [esp]
// 004c6310  8b31                 mov esi, dword ptr [ecx]
// 004c6312  8932                 mov dword ptr [edx], esi
// 004c6314  83c104               add ecx, 4
// 004c6317  83c204               add edx, 4
// 004c631a  83ef01               sub edi, 1
// 004c631d  75f1                 jne 0x4c6310
// 004c631f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004c6323  c7470802000000       mov dword ptr [edi + 8], 2
// 004c632a  8b08                 mov ecx, dword ptr [eax]
// 004c632c  890f                 mov dword ptr [edi], ecx
// 004c632e  8b530c               mov edx, dword ptr [ebx + 0xc]
// 004c6331  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 004c6334  8910                 mov dword ptr [eax], edx
// 004c6336  8b5314               mov edx, dword ptr [ebx + 0x14]
// 004c6339  894804               mov dword ptr [eax + 4], ecx
// 004c633c  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 004c633f  895008               mov dword ptr [eax + 8], edx
// 004c6342  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 004c6345  89480c               mov dword ptr [eax + 0xc], ecx
// 004c6348  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 004c634b  895010               mov dword ptr [eax + 0x10], edx
// 004c634e  8b5324               mov edx, dword ptr [ebx + 0x24]
// 004c6351  894814               mov dword ptr [eax + 0x14], ecx
// 004c6354  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 004c6357  895018               mov dword ptr [eax + 0x18], edx
// 004c635a  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 004c635d  89481c               mov dword ptr [eax + 0x1c], ecx
// 004c6360  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 004c6363  895020               mov dword ptr [eax + 0x20], edx
// 004c6366  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004c6369  894824               mov dword ptr [eax + 0x24], ecx
// 004c636c  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 004c636f  895028               mov dword ptr [eax + 0x28], edx
// 004c6372  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 004c6375  89482c               mov dword ptr [eax + 0x2c], ecx
// 004c6378  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004c637b  895030               mov dword ptr [eax + 0x30], edx
// 004c637e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 004c6381  894834               mov dword ptr [eax + 0x34], ecx
// 004c6384  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 004c6387  895038               mov dword ptr [eax + 0x38], edx
// 004c638a  89483c               mov dword ptr [eax + 0x3c], ecx
// 004c638d  8b742418             mov esi, dword ptr [esp + 0x18]
// 004c6391  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c6395  8d542420             lea edx, [esp + 0x20]
// 004c6399  52                   push edx
// 004c639a  55                   push ebp
// 004c639b  56                   push esi
// 004c639c  c745040f000000       mov dword ptr [ebp + 4], 0xf
// 004c63a3  e808efffff           call 0x4c52b0
// 004c63a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 004c63ac  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c63b0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004c63b4  57                   push edi
// 004c63b5  55                   push ebp
// 004c63b6  50                   push eax
// 004c63b7  51                   push ecx
// 004c63b8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c63bc  52                   push edx
// 004c63bd  56                   push esi
// 004c63be  e82dfcffff           call 0x4c5ff0
// 004c63c3  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c63c7  5f                   pop edi
// 004c63c8  894304               mov dword ptr [ebx + 4], eax
// 004c63cb  8bc3                 mov eax, ebx
// 004c63cd  5b                   pop ebx
// 004c63ce  5e                   pop esi
// 004c63cf  5d                   pop ebp
// 004c63d0  59                   pop ecx
// 004c63d1  c21800               ret 0x18
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?InsertIntoNode@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEPAU?$Page@IPAUInternalPacket@@$0CA@@2@IABQAUInternalPacket@@HPAU32@1PAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
