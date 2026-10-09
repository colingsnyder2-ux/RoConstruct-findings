// roc 2009-12 00554170  unit: RBX::Network::ClientReplicator  size: 964 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00554170
//
// 00554170  51                   push ecx
// 00554171  55                   push ebp
// 00554172  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00554176  8b4504               mov eax, dword ptr [ebp + 4]
// 00554179  83f820               cmp eax, 0x20
// 0055417c  56                   push esi
// 0055417d  894c2408             mov dword ptr [esp + 8], ecx
// 00554181  0f8da2000000         jge 0x554229
// 00554187  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055418b  3bc2                 cmp eax, edx
// 0055418d  7e13                 jle 0x5541a2
// 0055418f  8d4c8508             lea ecx, [ebp + eax*4 + 8]
// 00554193  2bc2                 sub eax, edx
// 00554195  8b71fc               mov esi, dword ptr [ecx - 4]
// 00554198  8931                 mov dword ptr [ecx], esi
// 0055419a  83c1fc               add ecx, -4
// 0055419d  83e801               sub eax, 1
// 005541a0  75f3                 jne 0x554195
// 005541a2  807d0000             cmp byte ptr [ebp], 0
// 005541a6  741f                 je 0x5541c7
// 005541a8  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005541ab  3bca                 cmp ecx, edx
// 005541ad  7e3e                 jle 0x5541ed
// 005541af  8d848d88000000       lea eax, [ebp + ecx*4 + 0x88]
// 005541b6  2bca                 sub ecx, edx
// 005541b8  8b70fc               mov esi, dword ptr [eax - 4]
// 005541bb  8930                 mov dword ptr [eax], esi
// 005541bd  83c0fc               add eax, -4
// 005541c0  83e901               sub ecx, 1
// 005541c3  75f3                 jne 0x5541b8
// 005541c5  eb26                 jmp 0x5541ed
// 005541c7  8b4504               mov eax, dword ptr [ebp + 4]
// 005541ca  40                   inc eax
// 005541cb  8d7201               lea esi, [edx + 1]
// 005541ce  3bc6                 cmp eax, esi
// 005541d0  7e1b                 jle 0x5541ed
// 005541d2  8d8c8510010000       lea ecx, [ebp + eax*4 + 0x110]
// 005541d9  2bc6                 sub eax, esi
// 005541db  eb03                 jmp 0x5541e0
// 005541dd  8d4900               lea ecx, [ecx]
// 005541e0  8b71fc               mov esi, dword ptr [ecx - 4]
// 005541e3  8931                 mov dword ptr [ecx], esi
// 005541e5  83c1fc               add ecx, -4
// 005541e8  83e801               sub eax, 1
// 005541eb  75f3                 jne 0x5541e0
// 005541ed  8b442410             mov eax, dword ptr [esp + 0x10]
// 005541f1  89449508             mov dword ptr [ebp + edx*4 + 8], eax
// 005541f5  807d0000             cmp byte ptr [ebp], 0
// 005541f9  7418                 je 0x554213
// 005541fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005541ff  8b01                 mov eax, dword ptr [ecx]
// 00554201  89849588000000       mov dword ptr [ebp + edx*4 + 0x88], eax
// 00554208  ff4504               inc dword ptr [ebp + 4]
// 0055420b  5e                   pop esi
// 0055420c  33c0                 xor eax, eax
// 0055420e  5d                   pop ebp
// 0055420f  59                   pop ecx
// 00554210  c21800               ret 0x18
// 00554213  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00554217  898c9514010000       mov dword ptr [ebp + edx*4 + 0x114], ecx
// 0055421e  ff4504               inc dword ptr [ebp + 4]
// 00554221  5e                   pop esi
// 00554222  33c0                 xor eax, eax
// 00554224  5d                   pop ebp
// 00554225  59                   pop ecx
// 00554226  c21800               ret 0x18
// 00554229  53                   push ebx
// 0055422a  57                   push edi
// 0055422b  e8b0fdffff           call 0x553fe0
// 00554230  8a5500               mov dl, byte ptr [ebp]
// 00554233  8bd8                 mov ebx, eax
// 00554235  8813                 mov byte ptr [ebx], dl
// 00554237  807d0000             cmp byte ptr [ebp], 0
// 0055423b  7428                 je 0x554265
// 0055423d  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 00554243  898308010000         mov dword ptr [ebx + 0x108], eax
// 00554249  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 0055424f  85c0                 test eax, eax
// 00554251  7406                 je 0x554259
// 00554253  89980c010000         mov dword ptr [eax + 0x10c], ebx
// 00554259  89ab0c010000         mov dword ptr [ebx + 0x10c], ebp
// 0055425f  899d08010000         mov dword ptr [ebp + 0x108], ebx
// 00554265  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00554269  83ff10               cmp edi, 0x10
// 0055426c  0f8c8d010000         jl 0x5543ff
// 00554272  b910000000           mov ecx, 0x10
// 00554277  33d2                 xor edx, edx
// 00554279  3bf9                 cmp edi, ecx
// 0055427b  7e2c                 jle 0x5542a9
// 0055427d  8d4d48               lea ecx, [ebp + 0x48]
// 00554280  8d47f0               lea eax, [edi - 0x10]
// 00554283  894c2428             mov dword ptr [esp + 0x28], ecx
// 00554287  8d7308               lea esi, [ebx + 8]
// 0055428a  8bd0                 mov edx, eax
// 0055428c  8d4810               lea ecx, [eax + 0x10]
// 0055428f  90                   nop 
// 00554290  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00554294  8b3f                 mov edi, dword ptr [edi]
// 00554296  8344242804           add dword ptr [esp + 0x28], 4
// 0055429b  893e                 mov dword ptr [esi], edi
// 0055429d  83c604               add esi, 4
// 005542a0  83e801               sub eax, 1
// 005542a3  75eb                 jne 0x554290
// 005542a5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005542a9  8b442418             mov eax, dword ptr [esp + 0x18]
// 005542ad  89449308             mov dword ptr [ebx + edx*4 + 8], eax
// 005542b1  42                   inc edx
// 005542b2  83f920               cmp ecx, 0x20
// 005542b5  7d1e                 jge 0x5542d5
// 005542b7  b820000000           mov eax, 0x20
// 005542bc  8d749308             lea esi, [ebx + edx*4 + 8]
// 005542c0  8d548d08             lea edx, [ebp + ecx*4 + 8]
// 005542c4  2bc1                 sub eax, ecx
// 005542c6  8b0a                 mov ecx, dword ptr [edx]
// 005542c8  890e                 mov dword ptr [esi], ecx
// 005542ca  83c204               add edx, 4
// 005542cd  83c604               add esi, 4
// 005542d0  83e801               sub eax, 1
// 005542d3  75f1                 jne 0x5542c6
// 005542d5  33c0                 xor eax, eax
// 005542d7  8d4810               lea ecx, [eax + 0x10]
// 005542da  384500               cmp byte ptr [ebp], al
// 005542dd  0f8481000000         je 0x554364
// 005542e3  3bf9                 cmp edi, ecx
// 005542e5  7e2c                 jle 0x554313
// 005542e7  8d47f0               lea eax, [edi - 0x10]
// 005542ea  8db388000000         lea esi, [ebx + 0x88]
// 005542f0  8d95c8000000         lea edx, [ebp + 0xc8]
// 005542f6  89442428             mov dword ptr [esp + 0x28], eax
// 005542fa  8d4810               lea ecx, [eax + 0x10]
// 005542fd  8d4900               lea ecx, [ecx]
// 00554300  8b3a                 mov edi, dword ptr [edx]
// 00554302  893e                 mov dword ptr [esi], edi
// 00554304  83c204               add edx, 4
// 00554307  83c604               add esi, 4
// 0055430a  83e801               sub eax, 1
// 0055430d  75f1                 jne 0x554300
// 0055430f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00554313  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00554317  8b12                 mov edx, dword ptr [edx]
// 00554319  89948388000000       mov dword ptr [ebx + eax*4 + 0x88], edx
// 00554320  40                   inc eax
// 00554321  83f920               cmp ecx, 0x20
// 00554324  0f8dc1000000         jge 0x5543eb
// 0055432a  ba20000000           mov edx, 0x20
// 0055432f  2bd1                 sub edx, ecx
// 00554331  8dbc8388000000       lea edi, [ebx + eax*4 + 0x88]
// 00554338  8db48d88000000       lea esi, [ebp + ecx*4 + 0x88]
// 0055433f  03c2                 add eax, edx
// 00554341  8b0e                 mov ecx, dword ptr [esi]
// 00554343  890f                 mov dword ptr [edi], ecx
// 00554345  83c604               add esi, 4
// 00554348  83c704               add edi, 4
// 0055434b  83ea01               sub edx, 1
// 0055434e  75f1                 jne 0x554341
// 00554350  c7450410000000       mov dword ptr [ebp + 4], 0x10
// 00554357  5f                   pop edi
// 00554358  894304               mov dword ptr [ebx + 4], eax
// 0055435b  8bc3                 mov eax, ebx
// 0055435d  5b                   pop ebx
// 0055435e  5e                   pop esi
// 0055435f  5d                   pop ebp
// 00554360  59                   pop ecx
// 00554361  c21800               ret 0x18
// 00554364  3bf9                 cmp edi, ecx
// 00554366  7e2b                 jle 0x554393
// 00554368  8d47f0               lea eax, [edi - 0x10]
// 0055436b  8db310010000         lea esi, [ebx + 0x110]
// 00554371  8d9554010000         lea edx, [ebp + 0x154]
// 00554377  89442428             mov dword ptr [esp + 0x28], eax
// 0055437b  8d4810               lea ecx, [eax + 0x10]
// 0055437e  8bff                 mov edi, edi
// 00554380  8b3a                 mov edi, dword ptr [edx]
// 00554382  893e                 mov dword ptr [esi], edi
// 00554384  83c204               add edx, 4
// 00554387  83c604               add esi, 4
// 0055438a  83e801               sub eax, 1
// 0055438d  75f1                 jne 0x554380
// 0055438f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00554393  8b542424             mov edx, dword ptr [esp + 0x24]
// 00554397  89948310010000       mov dword ptr [ebx + eax*4 + 0x110], edx
// 0055439e  8b7504               mov esi, dword ptr [ebp + 4]
// 005543a1  8d5101               lea edx, [ecx + 1]
// 005543a4  46                   inc esi
// 005543a5  40                   inc eax
// 005543a6  3bd6                 cmp edx, esi
// 005543a8  7d22                 jge 0x5543cc
// 005543aa  8db48310010000       lea esi, [ebx + eax*4 + 0x110]
// 005543b1  8d8c8d14010000       lea ecx, [ebp + ecx*4 + 0x114]
// 005543b8  8b39                 mov edi, dword ptr [ecx]
// 005543ba  893e                 mov dword ptr [esi], edi
// 005543bc  8b7d04               mov edi, dword ptr [ebp + 4]
// 005543bf  42                   inc edx
// 005543c0  47                   inc edi
// 005543c1  83c104               add ecx, 4
// 005543c4  40                   inc eax
// 005543c5  83c604               add esi, 4
// 005543c8  3bd7                 cmp edx, edi
// 005543ca  7cec                 jl 0x5543b8
// 005543cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005543d0  c7410802000000       mov dword ptr [ecx + 8], 2
// 005543d7  8b5308               mov edx, dword ptr [ebx + 8]
// 005543da  8d7b08               lea edi, [ebx + 8]
// 005543dd  8911                 mov dword ptr [ecx], edx
// 005543df  8d48ff               lea ecx, [eax - 1]
// 005543e2  85c9                 test ecx, ecx
// 005543e4  7e05                 jle 0x5543eb
// 005543e6  8d730c               lea esi, [ebx + 0xc]
// 005543e9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005543eb  c7450410000000       mov dword ptr [ebp + 4], 0x10
// 005543f2  5f                   pop edi
// 005543f3  894304               mov dword ptr [ebx + 4], eax
// 005543f6  8bc3                 mov eax, ebx
// 005543f8  5b                   pop ebx
// 005543f9  5e                   pop esi
// 005543fa  5d                   pop ebp
// 005543fb  59                   pop ecx
// 005543fc  c21800               ret 0x18
// 005543ff  8d4308               lea eax, [ebx + 8]
// 00554402  8d4d44               lea ecx, [ebp + 0x44]
// 00554405  8bd0                 mov edx, eax
// 00554407  bf11000000           mov edi, 0x11
// 0055440c  8d642400             lea esp, [esp]
// 00554410  8b31                 mov esi, dword ptr [ecx]
// 00554412  8932                 mov dword ptr [edx], esi
// 00554414  83c104               add ecx, 4
// 00554417  83c204               add edx, 4
// 0055441a  83ef01               sub edi, 1
// 0055441d  75f1                 jne 0x554410
// 0055441f  807d0000             cmp byte ptr [ebp], 0
// 00554423  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00554427  742b                 je 0x554454
// 00554429  ba11000000           mov edx, 0x11
// 0055442e  8d8b88000000         lea ecx, [ebx + 0x88]
// 00554434  8d85c4000000         lea eax, [ebp + 0xc4]
// 0055443a  89542428             mov dword ptr [esp + 0x28], edx
// 0055443e  8bff                 mov edi, edi
// 00554440  8b30                 mov esi, dword ptr [eax]
// 00554442  8931                 mov dword ptr [ecx], esi
// 00554444  83c004               add eax, 4
// 00554447  83c104               add ecx, 4
// 0055444a  83ea01               sub edx, 1
// 0055444d  75f1                 jne 0x554440
// 0055444f  e999000000           jmp 0x5544ed
// 00554454  bf11000000           mov edi, 0x11
// 00554459  8d9310010000         lea edx, [ebx + 0x110]
// 0055445f  8d8d50010000         lea ecx, [ebp + 0x150]
// 00554465  897c2428             mov dword ptr [esp + 0x28], edi
// 00554469  8da42400000000       lea esp, [esp]
// 00554470  8b31                 mov esi, dword ptr [ecx]
// 00554472  8932                 mov dword ptr [edx], esi
// 00554474  83c104               add ecx, 4
// 00554477  83c204               add edx, 4
// 0055447a  83ef01               sub edi, 1
// 0055447d  75f1                 jne 0x554470
// 0055447f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00554483  c7470802000000       mov dword ptr [edi + 8], 2
// 0055448a  8b08                 mov ecx, dword ptr [eax]
// 0055448c  890f                 mov dword ptr [edi], ecx
// 0055448e  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00554491  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00554494  8910                 mov dword ptr [eax], edx
// 00554496  8b5314               mov edx, dword ptr [ebx + 0x14]
// 00554499  894804               mov dword ptr [eax + 4], ecx
// 0055449c  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0055449f  895008               mov dword ptr [eax + 8], edx
// 005544a2  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 005544a5  89480c               mov dword ptr [eax + 0xc], ecx
// 005544a8  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 005544ab  895010               mov dword ptr [eax + 0x10], edx
// 005544ae  8b5324               mov edx, dword ptr [ebx + 0x24]
// 005544b1  894814               mov dword ptr [eax + 0x14], ecx
// 005544b4  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 005544b7  895018               mov dword ptr [eax + 0x18], edx
// 005544ba  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 005544bd  89481c               mov dword ptr [eax + 0x1c], ecx
// 005544c0  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 005544c3  895020               mov dword ptr [eax + 0x20], edx
// 005544c6  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005544c9  894824               mov dword ptr [eax + 0x24], ecx
// 005544cc  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 005544cf  895028               mov dword ptr [eax + 0x28], edx
// 005544d2  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 005544d5  89482c               mov dword ptr [eax + 0x2c], ecx
// 005544d8  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005544db  895030               mov dword ptr [eax + 0x30], edx
// 005544de  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005544e1  894834               mov dword ptr [eax + 0x34], ecx
// 005544e4  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 005544e7  895038               mov dword ptr [eax + 0x38], edx
// 005544ea  89483c               mov dword ptr [eax + 0x3c], ecx
// 005544ed  8b742418             mov esi, dword ptr [esp + 0x18]
// 005544f1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005544f5  8d542420             lea edx, [esp + 0x20]
// 005544f9  52                   push edx
// 005544fa  55                   push ebp
// 005544fb  56                   push esi
// 005544fc  c745040f000000       mov dword ptr [ebp + 4], 0xf
// 00554503  e808f0ffff           call 0x553510
// 00554508  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055450c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00554510  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00554514  57                   push edi
// 00554515  55                   push ebp
// 00554516  50                   push eax
// 00554517  51                   push ecx
// 00554518  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055451c  52                   push edx
// 0055451d  56                   push esi
// 0055451e  e84dfcffff           call 0x554170
// 00554523  8b442428             mov eax, dword ptr [esp + 0x28]
// 00554527  5f                   pop edi
// 00554528  894304               mov dword ptr [ebx + 4], eax
// 0055452b  8bc3                 mov eax, ebx
// 0055452d  5b                   pop ebx
// 0055452e  5e                   pop esi
// 0055452f  5d                   pop ebp
// 00554530  59                   pop ecx
// 00554531  c21800               ret 0x18
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?InsertIntoNode@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEPAU?$Page@IPAUInternalPacket@@$0CA@@2@IABQAUInternalPacket@@HPAU32@1PAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
