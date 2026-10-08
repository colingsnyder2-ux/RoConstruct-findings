// roc 2008-06 004cff00  unit: RBX::Network::PhysicsSender  size: 964 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cff00
//
// 004cff00  51                   push ecx
// 004cff01  55                   push ebp
// 004cff02  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004cff06  8b4504               mov eax, dword ptr [ebp + 4]
// 004cff09  83f820               cmp eax, 0x20
// 004cff0c  56                   push esi
// 004cff0d  894c2408             mov dword ptr [esp + 8], ecx
// 004cff11  0f8da2000000         jge 0x4cffb9
// 004cff17  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cff1b  3bc2                 cmp eax, edx
// 004cff1d  7e13                 jle 0x4cff32
// 004cff1f  8d4c8508             lea ecx, [ebp + eax*4 + 8]
// 004cff23  2bc2                 sub eax, edx
// 004cff25  8b71fc               mov esi, dword ptr [ecx - 4]
// 004cff28  8931                 mov dword ptr [ecx], esi
// 004cff2a  83c1fc               add ecx, -4
// 004cff2d  83e801               sub eax, 1
// 004cff30  75f3                 jne 0x4cff25
// 004cff32  807d0000             cmp byte ptr [ebp], 0
// 004cff36  741f                 je 0x4cff57
// 004cff38  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004cff3b  3bca                 cmp ecx, edx
// 004cff3d  7e3e                 jle 0x4cff7d
// 004cff3f  8d848d88000000       lea eax, [ebp + ecx*4 + 0x88]
// 004cff46  2bca                 sub ecx, edx
// 004cff48  8b70fc               mov esi, dword ptr [eax - 4]
// 004cff4b  8930                 mov dword ptr [eax], esi
// 004cff4d  83c0fc               add eax, -4
// 004cff50  83e901               sub ecx, 1
// 004cff53  75f3                 jne 0x4cff48
// 004cff55  eb26                 jmp 0x4cff7d
// 004cff57  8b4504               mov eax, dword ptr [ebp + 4]
// 004cff5a  40                   inc eax
// 004cff5b  8d7201               lea esi, [edx + 1]
// 004cff5e  3bc6                 cmp eax, esi
// 004cff60  7e1b                 jle 0x4cff7d
// 004cff62  8d8c8510010000       lea ecx, [ebp + eax*4 + 0x110]
// 004cff69  2bc6                 sub eax, esi
// 004cff6b  eb03                 jmp 0x4cff70
// 004cff6d  8d4900               lea ecx, [ecx]
// 004cff70  8b71fc               mov esi, dword ptr [ecx - 4]
// 004cff73  8931                 mov dword ptr [ecx], esi
// 004cff75  83c1fc               add ecx, -4
// 004cff78  83e801               sub eax, 1
// 004cff7b  75f3                 jne 0x4cff70
// 004cff7d  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cff81  89449508             mov dword ptr [ebp + edx*4 + 8], eax
// 004cff85  807d0000             cmp byte ptr [ebp], 0
// 004cff89  7418                 je 0x4cffa3
// 004cff8b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cff8f  8b01                 mov eax, dword ptr [ecx]
// 004cff91  89849588000000       mov dword ptr [ebp + edx*4 + 0x88], eax
// 004cff98  ff4504               inc dword ptr [ebp + 4]
// 004cff9b  5e                   pop esi
// 004cff9c  33c0                 xor eax, eax
// 004cff9e  5d                   pop ebp
// 004cff9f  59                   pop ecx
// 004cffa0  c21800               ret 0x18
// 004cffa3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004cffa7  898c9514010000       mov dword ptr [ebp + edx*4 + 0x114], ecx
// 004cffae  ff4504               inc dword ptr [ebp + 4]
// 004cffb1  5e                   pop esi
// 004cffb2  33c0                 xor eax, eax
// 004cffb4  5d                   pop ebp
// 004cffb5  59                   pop ecx
// 004cffb6  c21800               ret 0x18
// 004cffb9  53                   push ebx
// 004cffba  57                   push edi
// 004cffbb  e850fbffff           call 0x4cfb10
// 004cffc0  8a5500               mov dl, byte ptr [ebp]
// 004cffc3  8bd8                 mov ebx, eax
// 004cffc5  8813                 mov byte ptr [ebx], dl
// 004cffc7  807d0000             cmp byte ptr [ebp], 0
// 004cffcb  7428                 je 0x4cfff5
// 004cffcd  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 004cffd3  898308010000         mov dword ptr [ebx + 0x108], eax
// 004cffd9  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 004cffdf  85c0                 test eax, eax
// 004cffe1  7406                 je 0x4cffe9
// 004cffe3  89980c010000         mov dword ptr [eax + 0x10c], ebx
// 004cffe9  89ab0c010000         mov dword ptr [ebx + 0x10c], ebp
// 004cffef  899d08010000         mov dword ptr [ebp + 0x108], ebx
// 004cfff5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004cfff9  83ff10               cmp edi, 0x10
// 004cfffc  0f8c8d010000         jl 0x4d018f
// 004d0002  b910000000           mov ecx, 0x10
// 004d0007  33d2                 xor edx, edx
// 004d0009  3bf9                 cmp edi, ecx
// 004d000b  7e2c                 jle 0x4d0039
// 004d000d  8d4d48               lea ecx, [ebp + 0x48]
// 004d0010  8d47f0               lea eax, [edi - 0x10]
// 004d0013  894c2428             mov dword ptr [esp + 0x28], ecx
// 004d0017  8d7308               lea esi, [ebx + 8]
// 004d001a  8bd0                 mov edx, eax
// 004d001c  8d4810               lea ecx, [eax + 0x10]
// 004d001f  90                   nop 
// 004d0020  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004d0024  8b3f                 mov edi, dword ptr [edi]
// 004d0026  8344242804           add dword ptr [esp + 0x28], 4
// 004d002b  893e                 mov dword ptr [esi], edi
// 004d002d  83c604               add esi, 4
// 004d0030  83e801               sub eax, 1
// 004d0033  75eb                 jne 0x4d0020
// 004d0035  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004d0039  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d003d  89449308             mov dword ptr [ebx + edx*4 + 8], eax
// 004d0041  42                   inc edx
// 004d0042  83f920               cmp ecx, 0x20
// 004d0045  7d1e                 jge 0x4d0065
// 004d0047  b820000000           mov eax, 0x20
// 004d004c  8d749308             lea esi, [ebx + edx*4 + 8]
// 004d0050  8d548d08             lea edx, [ebp + ecx*4 + 8]
// 004d0054  2bc1                 sub eax, ecx
// 004d0056  8b0a                 mov ecx, dword ptr [edx]
// 004d0058  890e                 mov dword ptr [esi], ecx
// 004d005a  83c204               add edx, 4
// 004d005d  83c604               add esi, 4
// 004d0060  83e801               sub eax, 1
// 004d0063  75f1                 jne 0x4d0056
// 004d0065  33c0                 xor eax, eax
// 004d0067  8d4810               lea ecx, [eax + 0x10]
// 004d006a  384500               cmp byte ptr [ebp], al
// 004d006d  0f8481000000         je 0x4d00f4
// 004d0073  3bf9                 cmp edi, ecx
// 004d0075  7e2c                 jle 0x4d00a3
// 004d0077  8d47f0               lea eax, [edi - 0x10]
// 004d007a  8db388000000         lea esi, [ebx + 0x88]
// 004d0080  8d95c8000000         lea edx, [ebp + 0xc8]
// 004d0086  89442428             mov dword ptr [esp + 0x28], eax
// 004d008a  8d4810               lea ecx, [eax + 0x10]
// 004d008d  8d4900               lea ecx, [ecx]
// 004d0090  8b3a                 mov edi, dword ptr [edx]
// 004d0092  893e                 mov dword ptr [esi], edi
// 004d0094  83c204               add edx, 4
// 004d0097  83c604               add esi, 4
// 004d009a  83e801               sub eax, 1
// 004d009d  75f1                 jne 0x4d0090
// 004d009f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d00a3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004d00a7  8b12                 mov edx, dword ptr [edx]
// 004d00a9  89948388000000       mov dword ptr [ebx + eax*4 + 0x88], edx
// 004d00b0  40                   inc eax
// 004d00b1  83f920               cmp ecx, 0x20
// 004d00b4  0f8dc1000000         jge 0x4d017b
// 004d00ba  ba20000000           mov edx, 0x20
// 004d00bf  2bd1                 sub edx, ecx
// 004d00c1  8dbc8388000000       lea edi, [ebx + eax*4 + 0x88]
// 004d00c8  8db48d88000000       lea esi, [ebp + ecx*4 + 0x88]
// 004d00cf  03c2                 add eax, edx
// 004d00d1  8b0e                 mov ecx, dword ptr [esi]
// 004d00d3  890f                 mov dword ptr [edi], ecx
// 004d00d5  83c604               add esi, 4
// 004d00d8  83c704               add edi, 4
// 004d00db  83ea01               sub edx, 1
// 004d00de  75f1                 jne 0x4d00d1
// 004d00e0  c7450410000000       mov dword ptr [ebp + 4], 0x10
// 004d00e7  5f                   pop edi
// 004d00e8  894304               mov dword ptr [ebx + 4], eax
// 004d00eb  8bc3                 mov eax, ebx
// 004d00ed  5b                   pop ebx
// 004d00ee  5e                   pop esi
// 004d00ef  5d                   pop ebp
// 004d00f0  59                   pop ecx
// 004d00f1  c21800               ret 0x18
// 004d00f4  3bf9                 cmp edi, ecx
// 004d00f6  7e2b                 jle 0x4d0123
// 004d00f8  8d47f0               lea eax, [edi - 0x10]
// 004d00fb  8db310010000         lea esi, [ebx + 0x110]
// 004d0101  8d9554010000         lea edx, [ebp + 0x154]
// 004d0107  89442428             mov dword ptr [esp + 0x28], eax
// 004d010b  8d4810               lea ecx, [eax + 0x10]
// 004d010e  8bff                 mov edi, edi
// 004d0110  8b3a                 mov edi, dword ptr [edx]
// 004d0112  893e                 mov dword ptr [esi], edi
// 004d0114  83c204               add edx, 4
// 004d0117  83c604               add esi, 4
// 004d011a  83e801               sub eax, 1
// 004d011d  75f1                 jne 0x4d0110
// 004d011f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d0123  8b542424             mov edx, dword ptr [esp + 0x24]
// 004d0127  89948310010000       mov dword ptr [ebx + eax*4 + 0x110], edx
// 004d012e  8b7504               mov esi, dword ptr [ebp + 4]
// 004d0131  8d5101               lea edx, [ecx + 1]
// 004d0134  46                   inc esi
// 004d0135  40                   inc eax
// 004d0136  3bd6                 cmp edx, esi
// 004d0138  7d22                 jge 0x4d015c
// 004d013a  8db48310010000       lea esi, [ebx + eax*4 + 0x110]
// 004d0141  8d8c8d14010000       lea ecx, [ebp + ecx*4 + 0x114]
// 004d0148  8b39                 mov edi, dword ptr [ecx]
// 004d014a  893e                 mov dword ptr [esi], edi
// 004d014c  8b7d04               mov edi, dword ptr [ebp + 4]
// 004d014f  42                   inc edx
// 004d0150  47                   inc edi
// 004d0151  83c104               add ecx, 4
// 004d0154  40                   inc eax
// 004d0155  83c604               add esi, 4
// 004d0158  3bd7                 cmp edx, edi
// 004d015a  7cec                 jl 0x4d0148
// 004d015c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004d0160  c7410802000000       mov dword ptr [ecx + 8], 2
// 004d0167  8b5308               mov edx, dword ptr [ebx + 8]
// 004d016a  8d7b08               lea edi, [ebx + 8]
// 004d016d  8911                 mov dword ptr [ecx], edx
// 004d016f  8d48ff               lea ecx, [eax - 1]
// 004d0172  85c9                 test ecx, ecx
// 004d0174  7e05                 jle 0x4d017b
// 004d0176  8d730c               lea esi, [ebx + 0xc]
// 004d0179  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004d017b  c7450410000000       mov dword ptr [ebp + 4], 0x10
// 004d0182  5f                   pop edi
// 004d0183  894304               mov dword ptr [ebx + 4], eax
// 004d0186  8bc3                 mov eax, ebx
// 004d0188  5b                   pop ebx
// 004d0189  5e                   pop esi
// 004d018a  5d                   pop ebp
// 004d018b  59                   pop ecx
// 004d018c  c21800               ret 0x18
// 004d018f  8d4308               lea eax, [ebx + 8]
// 004d0192  8d4d44               lea ecx, [ebp + 0x44]
// 004d0195  8bd0                 mov edx, eax
// 004d0197  bf11000000           mov edi, 0x11
// 004d019c  8d642400             lea esp, [esp]
// 004d01a0  8b31                 mov esi, dword ptr [ecx]
// 004d01a2  8932                 mov dword ptr [edx], esi
// 004d01a4  83c104               add ecx, 4
// 004d01a7  83c204               add edx, 4
// 004d01aa  83ef01               sub edi, 1
// 004d01ad  75f1                 jne 0x4d01a0
// 004d01af  807d0000             cmp byte ptr [ebp], 0
// 004d01b3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004d01b7  742b                 je 0x4d01e4
// 004d01b9  ba11000000           mov edx, 0x11
// 004d01be  8d8b88000000         lea ecx, [ebx + 0x88]
// 004d01c4  8d85c4000000         lea eax, [ebp + 0xc4]
// 004d01ca  89542428             mov dword ptr [esp + 0x28], edx
// 004d01ce  8bff                 mov edi, edi
// 004d01d0  8b30                 mov esi, dword ptr [eax]
// 004d01d2  8931                 mov dword ptr [ecx], esi
// 004d01d4  83c004               add eax, 4
// 004d01d7  83c104               add ecx, 4
// 004d01da  83ea01               sub edx, 1
// 004d01dd  75f1                 jne 0x4d01d0
// 004d01df  e999000000           jmp 0x4d027d
// 004d01e4  bf11000000           mov edi, 0x11
// 004d01e9  8d9310010000         lea edx, [ebx + 0x110]
// 004d01ef  8d8d50010000         lea ecx, [ebp + 0x150]
// 004d01f5  897c2428             mov dword ptr [esp + 0x28], edi
// 004d01f9  8da42400000000       lea esp, [esp]
// 004d0200  8b31                 mov esi, dword ptr [ecx]
// 004d0202  8932                 mov dword ptr [edx], esi
// 004d0204  83c104               add ecx, 4
// 004d0207  83c204               add edx, 4
// 004d020a  83ef01               sub edi, 1
// 004d020d  75f1                 jne 0x4d0200
// 004d020f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004d0213  c7470802000000       mov dword ptr [edi + 8], 2
// 004d021a  8b08                 mov ecx, dword ptr [eax]
// 004d021c  890f                 mov dword ptr [edi], ecx
// 004d021e  8b530c               mov edx, dword ptr [ebx + 0xc]
// 004d0221  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 004d0224  8910                 mov dword ptr [eax], edx
// 004d0226  8b5314               mov edx, dword ptr [ebx + 0x14]
// 004d0229  894804               mov dword ptr [eax + 4], ecx
// 004d022c  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 004d022f  895008               mov dword ptr [eax + 8], edx
// 004d0232  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 004d0235  89480c               mov dword ptr [eax + 0xc], ecx
// 004d0238  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 004d023b  895010               mov dword ptr [eax + 0x10], edx
// 004d023e  8b5324               mov edx, dword ptr [ebx + 0x24]
// 004d0241  894814               mov dword ptr [eax + 0x14], ecx
// 004d0244  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 004d0247  895018               mov dword ptr [eax + 0x18], edx
// 004d024a  8b532c               mov edx, dword ptr [ebx + 0x2c]
// 004d024d  89481c               mov dword ptr [eax + 0x1c], ecx
// 004d0250  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 004d0253  895020               mov dword ptr [eax + 0x20], edx
// 004d0256  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004d0259  894824               mov dword ptr [eax + 0x24], ecx
// 004d025c  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 004d025f  895028               mov dword ptr [eax + 0x28], edx
// 004d0262  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 004d0265  89482c               mov dword ptr [eax + 0x2c], ecx
// 004d0268  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004d026b  895030               mov dword ptr [eax + 0x30], edx
// 004d026e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 004d0271  894834               mov dword ptr [eax + 0x34], ecx
// 004d0274  8b4b48               mov ecx, dword ptr [ebx + 0x48]
// 004d0277  895038               mov dword ptr [eax + 0x38], edx
// 004d027a  89483c               mov dword ptr [eax + 0x3c], ecx
// 004d027d  8b742418             mov esi, dword ptr [esp + 0x18]
// 004d0281  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d0285  8d542420             lea edx, [esp + 0x20]
// 004d0289  52                   push edx
// 004d028a  55                   push ebp
// 004d028b  56                   push esi
// 004d028c  c745040f000000       mov dword ptr [ebp + 4], 0xf
// 004d0293  e8e8efffff           call 0x4cf280
// 004d0298  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d029c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d02a0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004d02a4  57                   push edi
// 004d02a5  55                   push ebp
// 004d02a6  50                   push eax
// 004d02a7  51                   push ecx
// 004d02a8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d02ac  52                   push edx
// 004d02ad  56                   push esi
// 004d02ae  e84dfcffff           call 0x4cff00
// 004d02b3  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d02b7  5f                   pop edi
// 004d02b8  894304               mov dword ptr [ebx + 4], eax
// 004d02bb  8bc3                 mov eax, ebx
// 004d02bd  5b                   pop ebx
// 004d02be  5e                   pop esi
// 004d02bf  5d                   pop ebp
// 004d02c0  59                   pop ecx
// 004d02c1  c21800               ret 0x18
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?InsertIntoNode@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAEPAU?$Page@IPAUInternalPacket@@$0CA@@2@IABQAUInternalPacket@@HPAU32@1PAUReturnAction@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
