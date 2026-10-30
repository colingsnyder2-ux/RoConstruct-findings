// roc 2012-06 009f6210  unit: CXTPReportColumns  size: 847 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f6210
//
// 009f6210  6aff                 push -1
// 009f6212  682924ae00           push 0xae2429
// 009f6217  64a100000000         mov eax, dword ptr fs:[0]
// 009f621d  50                   push eax
// 009f621e  81ece0000000         sub esp, 0xe0
// 009f6224  53                   push ebx
// 009f6225  55                   push ebp
// 009f6226  56                   push esi
// 009f6227  57                   push edi
// 009f6228  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009f622d  33c4                 xor eax, esp
// 009f622f  50                   push eax
// 009f6230  8d8424f4000000       lea eax, [esp + 0xf4]
// 009f6237  64a300000000         mov dword ptr fs:[0], eax
// 009f623d  8bd9                 mov ebx, ecx
// 009f623f  8d4c2418             lea ecx, [esp + 0x18]
// 009f6243  ff158447b200         call dword ptr [0xb24784]
// 009f6249  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 009f6250  8b07                 mov eax, dword ptr [edi]
// 009f6252  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 009f6258  33f6                 xor esi, esi
// 009f625a  89b424fc000000       mov dword ptr [esp + 0xfc], esi
// 009f6261  6840a4c100           push 0xc1a440
// 009f6266  8bcf                 mov ecx, edi
// 009f6268  397728               cmp dword ptr [edi + 0x28], esi
// 009f626b  0f8501010000         jne 0x9f6372
// 009f6271  8b7330               mov esi, dword ptr [ebx + 0x30]
// 009f6274  89742430             mov dword ptr [esp + 0x30], esi
// 009f6278  ffd2                 call edx
// 009f627a  8be8                 mov ebp, eax
// 009f627c  896c2424             mov dword ptr [esp + 0x24], ebp
// 009f6280  8b4500               mov eax, dword ptr [ebp]
// 009f6283  8b5004               mov edx, dword ptr [eax + 4]
// 009f6286  6a00                 push 0
// 009f6288  56                   push esi
// 009f6289  8bcd                 mov ecx, ebp
// 009f628b  c684240401000001     mov byte ptr [esp + 0x104], 1
// 009f6293  ffd2                 call edx
// 009f6295  8944241c             mov dword ptr [esp + 0x1c], eax
// 009f6299  33c0                 xor eax, eax
// 009f629b  89442414             mov dword ptr [esp + 0x14], eax
// 009f629f  85f6                 test esi, esi
// 009f62a1  0f8eb3000000         jle 0x9f635a
// 009f62a7  eb0b                 jmp 0x9f62b4
// 009f62a9  8da42400000000       lea esp, [esp]
// 009f62b0  8b442414             mov eax, dword ptr [esp + 0x14]
// 009f62b4  85c0                 test eax, eax
// 009f62b6  7c10                 jl 0x9f62c8
// 009f62b8  3b4330               cmp eax, dword ptr [ebx + 0x30]
// 009f62bb  7d0b                 jge 0x9f62c8
// 009f62bd  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 009f62c0  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 009f62c3  8d0481               lea eax, [ecx + eax*4]
// 009f62c6  eb02                 jmp 0x9f62ca
// 009f62c8  33ff                 xor edi, edi
// 009f62ca  8b5500               mov edx, dword ptr [ebp]
// 009f62cd  8b5208               mov edx, dword ptr [edx + 8]
// 009f62d0  8d44241c             lea eax, [esp + 0x1c]
// 009f62d4  50                   push eax
// 009f62d5  8bcd                 mov ecx, ebp
// 009f62d7  ffd2                 call edx
// 009f62d9  8bf0                 mov esi, eax
// 009f62db  89742428             mov dword ptr [esp + 0x28], esi
// 009f62df  8bcf                 mov ecx, edi
// 009f62e1  c68424fc00000002     mov byte ptr [esp + 0xfc], 2
// 009f62e9  e83217faff           call 0x997a20
// 009f62ee  89442420             mov dword ptr [esp + 0x20], eax
// 009f62f2  8d4720               lea eax, [edi + 0x20]
// 009f62f5  50                   push eax
// 009f62f6  8d4c241c             lea ecx, [esp + 0x1c]
// 009f62fa  ff152045b200         call dword ptr [0xb24520]
// 009f6300  8d4c2420             lea ecx, [esp + 0x20]
// 009f6304  51                   push ecx
// 009f6305  6834a4c100           push 0xc1a434
// 009f630a  56                   push esi
// 009f630b  e84020feff           call 0x9d8350
// 009f6310  8d542424             lea edx, [esp + 0x24]
// 009f6314  52                   push edx
// 009f6315  68fc32b600           push 0xb632fc
// 009f631a  56                   push esi
// 009f631b  e8c020feff           call 0x9d83e0
// 009f6320  8b07                 mov eax, dword ptr [edi]
// 009f6322  8b5058               mov edx, dword ptr [eax + 0x58]
// 009f6325  83c418               add esp, 0x18
// 009f6328  56                   push esi
// 009f6329  8bcf                 mov ecx, edi
// 009f632b  ffd2                 call edx
// 009f632d  c68424fc00000001     mov byte ptr [esp + 0xfc], 1
// 009f6335  85f6                 test esi, esi
// 009f6337  7407                 je 0x9f6340
// 009f6339  8bce                 mov ecx, esi
// 009f633b  e84ac3f8ff           call 0x98268a
// 009f6340  8b442414             mov eax, dword ptr [esp + 0x14]
// 009f6344  40                   inc eax
// 009f6345  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 009f6349  89442414             mov dword ptr [esp + 0x14], eax
// 009f634d  0f8c5dffffff         jl 0x9f62b0
// 009f6353  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 009f635a  8b4500               mov eax, dword ptr [ebp]
// 009f635d  8b10                 mov edx, dword ptr [eax]
// 009f635f  6a01                 push 1
// 009f6361  8bcd                 mov ecx, ebp
// 009f6363  c684240001000000     mov byte ptr [esp + 0x100], 0
// 009f636b  ffd2                 call edx
// 009f636d  e948010000           jmp 0x9f64ba
// 009f6372  ffd2                 call edx
// 009f6374  8be8                 mov ebp, eax
// 009f6376  896c2428             mov dword ptr [esp + 0x28], ebp
// 009f637a  8b4500               mov eax, dword ptr [ebp]
// 009f637d  8b5004               mov edx, dword ptr [eax + 4]
// 009f6380  56                   push esi
// 009f6381  56                   push esi
// 009f6382  8bcd                 mov ecx, ebp
// 009f6384  c684240401000003     mov byte ptr [esp + 0x104], 3
// 009f638c  ffd2                 call edx
// 009f638e  6a01                 push 1
// 009f6390  6a01                 push 1
// 009f6392  6aff                 push -1
// 009f6394  6a01                 push 1
// 009f6396  56                   push esi
// 009f6397  68e83bb400           push 0xb43be8
// 009f639c  56                   push esi
// 009f639d  8d4c244c             lea ecx, [esp + 0x4c]
// 009f63a1  89442430             mov dword ptr [esp + 0x30], eax
// 009f63a5  e83624fbff           call 0x9a87e0
// 009f63aa  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 009f63b2  8974241c             mov dword ptr [esp + 0x1c], esi
// 009f63b6  39742414             cmp dword ptr [esp + 0x14], esi
// 009f63ba  0f84d6000000         je 0x9f6496
// 009f63c0  8b4500               mov eax, dword ptr [ebp]
// 009f63c3  8b5008               mov edx, dword ptr [eax + 8]
// 009f63c6  8d4c2414             lea ecx, [esp + 0x14]
// 009f63ca  51                   push ecx
// 009f63cb  8bcd                 mov ecx, ebp
// 009f63cd  ffd2                 call edx
// 009f63cf  8bf0                 mov esi, eax
// 009f63d1  89742424             mov dword ptr [esp + 0x24], esi
// 009f63d5  6aff                 push -1
// 009f63d7  8d442424             lea eax, [esp + 0x24]
// 009f63db  50                   push eax
// 009f63dc  6834a4c100           push 0xc1a434
// 009f63e1  56                   push esi
// 009f63e2  c684240c01000005     mov byte ptr [esp + 0x10c], 5
// 009f63ea  e8311ffeff           call 0x9d8320
// 009f63ef  83c410               add esp, 0x10
// 009f63f2  837f2c17             cmp dword ptr [edi + 0x2c], 0x17
// 009f63f6  763f                 jbe 0x9f6437
// 009f63f8  8d4c2418             lea ecx, [esp + 0x18]
// 009f63fc  51                   push ecx
// 009f63fd  68fc32b600           push 0xb632fc
// 009f6402  56                   push esi
// 009f6403  e8d81ffeff           call 0x9d83e0
// 009f6408  83c40c               add esp, 0xc
// 009f640b  8d4c2418             lea ecx, [esp + 0x18]
// 009f640f  ff156046b200         call dword ptr [0xb24660]
// 009f6415  84c0                 test al, al
// 009f6417  751e                 jne 0x9f6437
// 009f6419  8d542418             lea edx, [esp + 0x18]
// 009f641d  52                   push edx
// 009f641e  8bcb                 mov ecx, ebx
// 009f6420  e8cbfaffff           call 0x9f5ef0
// 009f6425  8bf8                 mov edi, eax
// 009f6427  85ff                 test edi, edi
// 009f6429  7522                 jne 0x9f644d
// 009f642b  56                   push esi
// 009f642c  8d4c2434             lea ecx, [esp + 0x34]
// 009f6430  e83b1efbff           call 0x9a8270
// 009f6435  eb3a                 jmp 0x9f6471
// 009f6437  8b442420             mov eax, dword ptr [esp + 0x20]
// 009f643b  50                   push eax
// 009f643c  8bcb                 mov ecx, ebx
// 009f643e  e84dfaffff           call 0x9f5e90
// 009f6443  8bf8                 mov edi, eax
// 009f6445  85ff                 test edi, edi
// 009f6447  0f8409010000         je 0x9f6556
// 009f644d  8b17                 mov edx, dword ptr [edi]
// 009f644f  8b4258               mov eax, dword ptr [edx + 0x58]
// 009f6452  56                   push esi
// 009f6453  8bcf                 mov ecx, edi
// 009f6455  ffd0                 call eax
// 009f6457  57                   push edi
// 009f6458  8bcb                 mov ecx, ebx
// 009f645a  e8b1f9ffff           call 0x9f5e10
// 009f645f  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 009f6463  50                   push eax
// 009f6464  57                   push edi
// 009f6465  8bcb                 mov ecx, ebx
// 009f6467  e8e4fcffff           call 0x9f6150
// 009f646c  47                   inc edi
// 009f646d  897c241c             mov dword ptr [esp + 0x1c], edi
// 009f6471  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 009f6479  85f6                 test esi, esi
// 009f647b  7407                 je 0x9f6484
// 009f647d  8bce                 mov ecx, esi
// 009f647f  e806c2f8ff           call 0x98268a
// 009f6484  837c241400           cmp dword ptr [esp + 0x14], 0
// 009f6489  8bbc2404010000       mov edi, dword ptr [esp + 0x104]
// 009f6490  0f852affffff         jne 0x9f63c0
// 009f6496  8d4c2430             lea ecx, [esp + 0x30]
// 009f649a  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 009f64a2  e8a920fbff           call 0x9a8550
// 009f64a7  8b5500               mov edx, dword ptr [ebp]
// 009f64aa  8b02                 mov eax, dword ptr [edx]
// 009f64ac  6a01                 push 1
// 009f64ae  8bcd                 mov ecx, ebp
// 009f64b0  c684240001000000     mov byte ptr [esp + 0x100], 0
// 009f64b8  ffd0                 call eax
// 009f64ba  8b17                 mov edx, dword ptr [edi]
// 009f64bc  8b4270               mov eax, dword ptr [edx + 0x70]
// 009f64bf  6828a4c100           push 0xc1a428
// 009f64c4  8bcf                 mov ecx, edi
// 009f64c6  ffd0                 call eax
// 009f64c8  8be8                 mov ebp, eax
// 009f64ca  896c2428             mov dword ptr [esp + 0x28], ebp
// 009f64ce  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 009f64d1  8b11                 mov edx, dword ptr [ecx]
// 009f64d3  8b4258               mov eax, dword ptr [edx + 0x58]
// 009f64d6  55                   push ebp
// 009f64d7  c684240001000006     mov byte ptr [esp + 0x100], 6
// 009f64df  ffd0                 call eax
// 009f64e1  8b17                 mov edx, dword ptr [edi]
// 009f64e3  8b4270               mov eax, dword ptr [edx + 0x70]
// 009f64e6  681ca4c100           push 0xc1a41c
// 009f64eb  8bcf                 mov ecx, edi
// 009f64ed  ffd0                 call eax
// 009f64ef  8bf0                 mov esi, eax
// 009f64f1  89742424             mov dword ptr [esp + 0x24], esi
// 009f64f5  8b5b24               mov ebx, dword ptr [ebx + 0x24]
// 009f64f8  8b13                 mov edx, dword ptr [ebx]
// 009f64fa  8b4258               mov eax, dword ptr [edx + 0x58]
// 009f64fd  56                   push esi
// 009f64fe  8bcb                 mov ecx, ebx
// 009f6500  c684240001000007     mov byte ptr [esp + 0x100], 7
// 009f6508  ffd0                 call eax
// 009f650a  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 009f6512  85f6                 test esi, esi
// 009f6514  7407                 je 0x9f651d
// 009f6516  8bce                 mov ecx, esi
// 009f6518  e86dc1f8ff           call 0x98268a
// 009f651d  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 009f6525  85ed                 test ebp, ebp
// 009f6527  7407                 je 0x9f6530
// 009f6529  8bcd                 mov ecx, ebp
// 009f652b  e85ac1f8ff           call 0x98268a
// 009f6530  8d4c2418             lea ecx, [esp + 0x18]
// 009f6534  ff15d047b200         call dword ptr [0xb247d0]
// 009f653a  8b8c24f4000000       mov ecx, dword ptr [esp + 0xf4]
// 009f6541  64890d00000000       mov dword ptr fs:[0], ecx
// 009f6548  59                   pop ecx
// 009f6549  5f                   pop edi
// 009f654a  5e                   pop esi
// 009f654b  5d                   pop ebp
// 009f654c  5b                   pop ebx
// 009f654d  81c4ec000000         add esp, 0xec
// 009f6553  c20400               ret 4
// 009f6556  6a00                 push 0
// 009f6558  6a05                 push 5
// 009f655a  e8fbc6f8ff           call 0x982c5a
// copied from an identical function in another client (function ?DoPropExchange@CXTPReportColumns@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportColumns.cpp