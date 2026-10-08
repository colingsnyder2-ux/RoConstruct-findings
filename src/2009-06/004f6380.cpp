// roc 2009-06 004f6380  unit: RBX::Network::ClientReplicator  size: 964 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004f6380
//
// 004f6380  51                   push ecx
// 004f6381  55                   push ebp
// 004f6382  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004f6386  8b4504               mov eax, dword ptr [ebp + 4]
// 004f6389  83f820               cmp eax, 0x20
// 004f638c  56                   push esi
// 004f638d  894c2408             mov dword ptr [esp + 8], ecx
// 004f6391  0f8da2000000         jge 0x4f6439
// 004f6397  8b542418             mov edx, dword ptr [esp + 0x18]
// 004f639b  3bc2                 cmp eax, edx
// 004f639d  7e13                 jle 0x4f63b2
// 004f639f  8d4c8508             lea ecx, [ebp + eax*4 + 8]
// 004f63a3  2bc2                 sub eax, edx
// 004f63a5  8b71fc               mov esi, dword ptr [ecx - 4]
// 004f63a8  8931                 mov dword ptr [ecx], esi
// 004f63aa  83c1fc               add ecx, -4
// 004f63ad  83e801               sub eax, 1
// 004f63b0  75f3                 jne 0x4f63a5
// 004f63b2  807d0000             cmp byte ptr [ebp], 0
// 004f63b6  741f                 je 0x4f63d7
// 004f63b8  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004f63bb  3bca                 cmp ecx, edx
// 004f63bd  7e3e                 jle 0x4f63fd
// 004f63bf  8d848d88000000       lea eax, [ebp + ecx*4 + 0x88]
// 004f63c6  2bca                 sub ecx, edx
// 004f63c8  8b70fc               mov esi, dword ptr [eax - 4]
// 004f63cb  8930                 mov dword ptr [eax], esi
// 004f63cd  83c0fc               add eax, -4
// 004f63d0  83e901               sub ecx, 1
// 004f63d3  75f3                 jne 0x4f63c8
// 004f63d5  eb26                 jmp 0x4f63fd
// 004f63d7  8b4504               mov eax, dword ptr [ebp + 4]
// 004f63da  40                   inc eax
// 004f63db  8d7201               lea esi, [edx + 1]
// 004f63de  3bc6                 cmp eax, esi
// 004f63e0  7e1b                 jle 0x4f63fd
// 004f63e2  8d8c8510010000       lea ecx, [ebp + eax*4 + 0x110]
// 004f63e9  2bc6                 sub eax, esi
// 004f63eb  eb03                 jmp 0x4f63f0
// 004f63ed  8d4900               lea ecx, [ecx]
// 004f63f0  8b71fc               mov esi, dword ptr [ecx - 4]
// 004f63f3  8931                 mov dword ptr [ecx], esi
// 004f63f5  83c1fc               add ecx, -4
// 004f63f8  83e801               sub eax, 1
// 004f63fb  75f3                 jne 0x4f63f0
// 004f63fd  8b442410             mov eax, dword ptr [esp + 0x10]
// 004f6401  89449508             mov dword ptr [ebp + edx*4 + 8], eax
// 004f6405  807d0000             cmp byte ptr [ebp], 0
// 004f6409  7418                 je 0x4f6423
// 004f640b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004f640f  8b01                 mov eax, dword ptr [ecx]
// 004f6411  89849588000000       mov dword ptr [ebp + edx*4 + 0x88], eax
// 004f6418  ff4504               inc dword ptr [ebp + 4]
// 004f641b  5e                   pop esi
// 004f641c  33c0                 xor eax, eax
// 004f641e  5d                   pop ebp
// 004f641f  59                   pop ecx
// 004f6420  c21800               ret 0x18
// 004f6423  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f6427  898c9514010000       mov dword ptr [ebp + edx*4 + 0x114], ecx
// 004f642e  ff4504               inc dword ptr [ebp + 4]
// 004f6431  5e                   pop esi
// 004f6432  33c0                 xor eax, eax
// 004f6434  5d                   pop ebp
// 004f6435  59                   pop ecx
// 004f6436  c21800               ret 0x18
// 004f6439  53                   push ebx
// 004f643a  57                   push edi
// 004f643b  e8b0fdffff           call 0x4f61f0
// 004f6440  8a5500               mov dl, byte ptr [ebp]
// 004f6443  8bd8                 mov ebx, eax
// 004f6445  8813                 mov byte ptr [ebx], dl
// 004f6447  807d0000             cmp byte ptr [ebp], 0
// 004f644b  7428                 je 0x4f6475
// 004f644d  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 004f6453  898308010000         mov dword ptr [ebx + 0x108], eax
// 004f6459  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 004f645f  85c0                 test eax, eax
// 004f6461  7406                 je 0x4f6469
// 004f6463  89980c010000         mov dword ptr [eax + 0x10c], ebx
// 004f6469  89ab0c010000         mov dword ptr [ebx + 0x10c], ebp
// 004f646f  899d08010000         mov dword ptr [ebp + 0x108], ebx
// 004f6475  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004f6479  83ff10               cmp edi, 0x10
// 004f647c  0f8c8d010000         jl 0x4f660f
// 004f6482  b910000000           mov ecx, 0x10
// 004f6487  33d2                 xor edx, edx
// 004f6489  3bf9                 cmp edi, ecx
// 004f648b  7e2c                 jle 0x4f64b9
// 004f648d  8d4d48               lea ecx, [ebp + 0x48]
// 004f6490  8d47f0               lea eax, [edi - 0x10]
// 004f6493  894c2428             mov dword ptr [esp + 0x28], ecx
// 004f6497  8d7308               lea esi, [ebx + 8]
// 004f649a  8bd0                 mov edx, eax
// 004f649c  8d4810               lea ecx, [eax + 0x10]
// 004f649f  90                   nop 
// 004f64a0  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004f64a4  8b3f                 mov edi, dword ptr [edi]
// 004f64a6  8344242804           add dword ptr [esp + 0x28], 4
// 004f64ab  893e                 mov dword ptr [esi], edi
// 004f64ad  83c604               add esi, 4
// 004f64b0  83e801               sub eax, 1
// 004f64b3  75eb                 jne 0x4f64a0
// 004f64b5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004f64b9  8b442418             mov eax, dword ptr [esp + 0x18]
// 004f64bd  89449308             mov dword ptr [ebx + edx*4 + 8], eax
// 004f64c1  42                   inc edx
// 004f64c2  83f920               cmp ecx, 0x20
// 004f64c5  7d1e                 jge 0x4f64e5
// 004f64c7  b820000000           mov eax, 0x20
// 004f64cc  8d749308             lea esi, [ebx + edx*4 + 8]
// 004f64d0  8d548d08             lea edx, [ebp + ecx*4 + 8]
// 004f64d4  2bc1                 sub eax, ecx
// 004f64d6  8b0a                 mov ecx, dword ptr [edx]
// 004f64d8  890e                 mov dword ptr [esi], ecx
// 004f64da  83c204               add edx, 4
// 004f64dd  83c604               add esi, 4
// 004f64e0  83e801               sub eax, 1
// 004f64e3  75f1                 jne 0x4f64d6
// 004f64e5  33c0                 xor eax, eax
// 004f64e7  8d4810               lea ecx, [eax + 0x10]
// 004f64ea  384500               cmp byte ptr [ebp], al
// 004f64ed  0f8481000000         je 0x4f6574
// 004f64f3  3bf9                 cmp edi, ecx
// 004f64f5  7e2c                 jle 0x4f6523
// 004f64f7  8d47f0               lea eax, [edi - 0x10]
// 004f64fa  8db388000000         lea esi, [ebx + 0x88]
// 004f6500  8d95c8000000         lea edx, [ebp + 0xc8]
// 004f6506  89442428             mov dword ptr [esp + 0x28], eax
// 004f650a  8d4810               lea ecx, [eax + 0x10]
// 004f650d  8d4900               lea ecx, [ecx]
// 004f6510  8b3a                 mov edi, dword ptr [edx]
// 004f6512  893e                 mov dword ptr [esi], edi
// 004f6514  83c204               add edx, 4
// 004f6517  83c604               add esi, 4
// 004f651a  83e801               sub eax, 1
// 004f651d  75f1                 jne 0x4f6510
// 004f651f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f6523  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004f6527  8b12                 mov edx, dword ptr [edx]
// 004f6529  89948388000000       mov dword ptr [ebx + eax*4 + 0x88], edx
// 004f6530  40                   inc eax
// 004f6531  83f920               cmp ecx, 0x20
// 004f6534  0f8dc1000000         jge 0x4f65fb
// 004f653a  ba20000000           mov edx, 0x20
// 004f653f  2bd1                 sub edx, ecx
// 004f6541  8dbc8388000000       lea edi, [ebx + eax*4 + 0x88]
// 004f6548  8db48d88000000       lea esi, [ebp + ecx*4 + 0x88]
// 004f654f  03c2                 add eax, edx
// 004f6551  8b0e                 mov ecx, dword ptr [esi]
// 004f6553  890f                 mov dword ptr [edi], ecx
// 004f6555  83c604               add esi, 4
// 004f6558  83c704               add edi, 4
// 004f655b  83ea01               sub edx, 1
// 004f655e  75f1                 jne 0x4f6551
// 004f6560  c7450410000000       mov dword ptr [ebp + 4], 0x10
// 004f6567  5f                   pop edi
// 004f6568  894304               mov dword ptr [ebx + 4], eax
// 004f656b  8bc3                 mov eax, ebx
// 004f656d  5b                   pop ebx
// 004f656e  5e                   pop esi
// 004f656f  5d                   pop ebp
// 004f6570  59                   pop ecx
// 004f6571  c21800               ret 0x18
// 004f6574  3bf9                 cmp edi, ecx
// 004f6576  7e2b                 jle 0x4f65a3
// 004f6578  8d47f0               lea eax, [edi - 0x10]
// 004f657b  8db310010000         lea esi, [ebx + 0x110]
// 004f6581  8d9554010000         lea edx, [ebp + 0x154]
// 004f6587  89442428             mov dword ptr [esp + 0x28], eax
// 004f658b  8d4810               lea ecx, [eax + 0x10]
// 004f658e  8bff                 mov edi, edi
// 004f6590  8b3a                 mov edi, dword ptr [edx]
// 004f6592  893e                 mov dword ptr [esi], edi
// 004f6594  83c204               add edx, 4
// 004f6597  83c604               add esi, 4
// 004f659a  83e801               sub eax, 1
// 004f659d  75f1                 jne 0x4f6590
// 004f659f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f65a3  8b542424             mov edx, dword ptr [esp + 0x24]
// 004f65a7  89948310010000       mov dword ptr [ebx + eax*4 + 0x110], edx
// 004f65ae  8b7504               mov esi, dword ptr [ebp + 4]
// 004f65b1  8d5101               lea edx, [ecx + 1]
// 004f65b4  46                   inc esi
// 004f65b5  40                   inc eax
// 004f65b6  3bd6                 cmp edx, esi
// 004f65b8  7d22                 jge 0x4f65dc
// 004f65ba  8db48310010000       lea esi, [ebx + eax*4 + 0x110]
// 004f65c1  8d8c8d14010000       lea ecx, [ebp + ecx*4 + 0x114]
// 004f65c8  8b39                 mov edi, dword ptr [ecx]
// 004f65ca  893e                 mov dword ptr [esi], edi
// 004f65cc  8b7d04               mov edi, dword ptr [ebp + 4]
// 004f65cf  42                   inc edx
// 004f65d0  47                   inc edi
// 004f65d1  83c104               add ecx, 4
// 004f65d4  40                   inc eax
// 004f65d5  83c604               add esi, 4
// 004f65d8  3bd7                 cmp edx, edi
// 004f65da  7cec                 jl 0x4f65c8
// 004f65dc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004f65e0  c7410802000000       mov dword ptr [ecx + 8], 2
// 004f65e7  8b5308               mov edx, dword ptr [ebx + 8]
// 004f65ea  8d7b08               lea edi, [ebx + 8]
// 004f65ed  8911                 mov dword ptr [ecx], edx
// 004f65ef  8d48ff               lea ecx, [eax - 1]
// 004f65f2  85c9                 test ecx, ecx
// 004f65f4  7e05                 jle 0x4f65fb
// 004f65f6  8d730c               lea esi, [ebx + 0xc]
// 004f65f9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004f65fb  c7450410000000       mov dword ptr [ebp + 4], 0x10
// 004f6602  5f                   pop edi
// 004f6603  894304               mov dword ptr [ebx + 4], eax
// 004f6606  8bc3                 mov eax, ebx
// 004f6608  5b                   pop ebx
// 004f6609  5e                   pop esi
// 004f660a  5d                   pop ebp
// 004f660b  59                   pop ecx
// 004f660c  c21800               ret 0x18
// 004f660f  8d4308               lea eax, [ebx + 8]
// 004f6612  8d4d44               lea ecx, [ebp + 0x44]
// 004f6615  8bd0                 mov edx, eax
// 004f6617  bf11000000           mov edi, 0x11
// 004f661c  8d642400             lea esp, [esp]
// 004f6620  8b31                 mov esi, dword ptr [ecx]
// 004f6622  8932                 mov dword ptr [edx], esi
// 004f6624  83c104               add ecx, 4
// 004f6627  83c204               add edx, 4
// 004f662a  83ef01               sub edi, 1
// 004f662d  75f1                 jne 0x4f6620
// 004f662f  807d0000             cmp byte ptr [ebp], 0
// 004f6633  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004f6637  742b                 je 0x4f6664
// 004f6639  ba11000000           mov edx, 0x11
// 004f663e  8d8b88000000         lea ecx, [ebx + 0x88]
// 004f6644  8d85c4000000         lea eax, [ebp + 0xc4]
// 004f664a  89542428             mov dword ptr [esp + 0x28], edx
// 004f664e  8bff                 mov edi, edi
// 004f6650  8b30                 mov esi, dword ptr [eax]
// 004f6652  8931                 mov dword ptr [ecx], esi
// 004f6654  83c004               add eax, 4
// 004f6657  83c104               add ecx, 4
// 004f665a  83ea01               sub edx, 1
// 004f665d  75f1                 jne 0x4f6650
// 004f665f  e999000000           jmp 0x4f66fd
// 004f6664  bf11000000           mov edi, 0x11
// 004f6669  8d9310010000         lea edx, [ebx + 0x110]
// 004f666f  8d8d50010000         lea ecx, [ebp + 0x150]
// 004f6675  897c2428             mov dword ptr [esp + 0x28], edi
// 004f6679  8da42400000000       lea esp, [esp]
// 004f6680  8b31                 mov esi, dword ptr [ecx]
// 004f6682  8932                 mov dword ptr [edx], esi
// 004f6684  83c104               add ecx, 4
// 004f6687  83c204               add edx, 4
// 004f668a  83ef01               sub edi, 1
// 004f668d  75f1                 jne 0x4f6680
// 004f668f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004f6693  c7470802000000       mov dword ptr [edi + 8], 2
// 004f669a  8b08                 mov ecx, dword ptr [eax]
// 004f669c  890f                 mov dword ptr [edi], ecx
// 004f669e  8b530c               mov edx, dword ptr [ebx + 0xc]
// 004f66a1  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 004f66a4  8910                 mov dword ptr [eax], edx
// 004f66a6  8b5314               mov edx, dword ptr [ebx + 0x14]
// 004f66a9  894804               mov dword ptr [eax + 4], ecx
// 004f66ac  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 004f66af  895008               mov dword ptr [eax + 8], edx
// 004f66b2  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 004f66b5  89480c               mov dword ptr [eax + 0xc], ecx
// 004f66b8  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 004f66bb  895010               mov dword ptr [eax + 0x10], edx
// 004f66be  8b5324               mov edx, dword ptr [ebx + 0x24]
// 004f66c1  894814               mov dword ptr [eax + 0x14], ecx
// 004f66c4  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 004f66c7  895018               mov dword ptr [eax + 0x18], edx
// 004f66ca  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 004f66cd  89481c               mov dword ptr [eax + 0x1c], ecx
// 004f66d0  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 004f66d3  895020               mov dword ptr [eax + 0x20], edx
// 004f66d6  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004f66d9  894824               mov dword ptr [eax + 0x24], ecx
// 004f66dc  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 004f66df  895028               mov dword ptr [eax + 0x28], edx
// 004f66e2  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 004f66e5  89482c               mov dword ptr [eax + 0x2c], ecx
// 004f66e8  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004f66eb  895030               mov dword ptr [eax + 0x30], edx
// 004f66ee  8b5344               mov edx, dword ptr [ebx + 0x44]
// 004f66f1  894834               mov dword ptr [eax + 0x34], ecx
// 004f66f4  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 004f66f7  895038               mov dword ptr [eax + 0x38], edx
// 004f66fa  89483c               mov dword ptr [eax + 0x3c], ecx
// 004f66fd  8b742418             mov esi, dword ptr [esp + 0x18]
// 004f6701  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f6705  8d542420             lea edx, [esp + 0x20]
// 004f6709  52                   push edx
// 004f670a  55                   push ebp
// 004f670b  56                   push esi
// 004f670c  c745040f000000       mov dword ptr [ebp + 4], 0xf
// 004f6713  e878eeffff           call 0x4f5590
// 004f6718  8b442424             mov eax, dword ptr [esp + 0x24]
// 004f671c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f6720  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004f6724  57                   push edi
// 004f6725  55                   push ebp
// 004f6726  50                   push eax
// 004f6727  51                   push ecx
// 004f6728  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f672c  52                   push edx
// 004f672d  56                   push esi
// 004f672e  e84dfcffff           call 0x4f6380
// 004f6733  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f6737  5f                   pop edi
// 004f6738  894304               mov dword ptr [ebx + 4], eax
// 004f673b  8bc3                 mov eax, ebx
// 004f673d  5b                   pop ebx
// 004f673e  5e                   pop esi
// 004f673f  5d                   pop ebp
// 004f6740  59                   pop ecx
// 004f6741  c21800               ret 0x18
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?InsertIntoNode@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEPAU?$Page@IPAUInternalPacket@@$0CA@@2@IABQAUInternalPacket@@HPAU32@1PAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
