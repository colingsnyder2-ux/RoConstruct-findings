// roc 2011-06 008e5640  unit: CXTPPropertyGridInplaceList  size: 1202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e5640
//
// 008e5640  6aff                 push -1
// 008e5642  6885dea000           push 0xa0de85
// 008e5647  64a100000000         mov eax, dword ptr fs:[0]
// 008e564d  50                   push eax
// 008e564e  81ec80000000         sub esp, 0x80
// 008e5654  53                   push ebx
// 008e5655  55                   push ebp
// 008e5656  56                   push esi
// 008e5657  57                   push edi
// 008e5658  a12058c900           mov eax, dword ptr [0xc95820]
// 008e565d  33c4                 xor eax, esp
// 008e565f  50                   push eax
// 008e5660  8d842494000000       lea eax, [esp + 0x94]
// 008e5667  64a300000000         mov dword ptr fs:[0], eax
// 008e566d  8bf1                 mov esi, ecx
// 008e566f  8b9c24a4000000       mov ebx, dword ptr [esp + 0xa4]
// 008e5676  33ed                 xor ebp, ebp
// 008e5678  3bdd                 cmp ebx, ebp
// 008e567a  0f8456040000         je 0x8e5ad6
// 008e5680  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 008e5687  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 008e568e  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 008e5695  89442440             mov dword ptr [esp + 0x40], eax
// 008e5699  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 008e56a0  894c2444             mov dword ptr [esp + 0x44], ecx
// 008e56a4  8b8bbc000000         mov ecx, dword ptr [ebx + 0xbc]
// 008e56aa  89542448             mov dword ptr [esp + 0x48], edx
// 008e56ae  8944244c             mov dword ptr [esp + 0x4c], eax
// 008e56b2  e8e915f9ff           call 0x876ca0
// 008e56b7  8bbbbc000000         mov edi, dword ptr [ebx + 0xbc]
// 008e56bd  8b16                 mov edx, dword ptr [esi]
// 008e56bf  40                   inc eax
// 008e56c0  89442440             mov dword ptr [esp + 0x40], eax
// 008e56c4  8b4268               mov eax, dword ptr [edx + 0x68]
// 008e56c7  8bce                 mov ecx, esi
// 008e56c9  897c2428             mov dword ptr [esp + 0x28], edi
// 008e56cd  895e54               mov dword ptr [esi + 0x54], ebx
// 008e56d0  ffd0                 call eax
// 008e56d2  396e20               cmp dword ptr [esi + 0x20], ebp
// 008e56d5  754e                 jne 0x8e5725
// 008e56d7  55                   push ebp
// 008e56d8  55                   push ebp
// 008e56d9  57                   push edi
// 008e56da  8d4c245c             lea ecx, [esp + 0x5c]
// 008e56de  51                   push ecx
// 008e56df  685100a040           push 0x40a00051
// 008e56e4  68cabea500           push 0xa5beca
// 008e56e9  686827ac00           push 0xac2768
// 008e56ee  8bcf                 mov ecx, edi
// 008e56f0  896c246c             mov dword ptr [esp + 0x6c], ebp
// 008e56f4  896c2470             mov dword ptr [esp + 0x70], ebp
// 008e56f8  896c2474             mov dword ptr [esp + 0x74], ebp
// 008e56fc  896c2478             mov dword ptr [esp + 0x78], ebp
// 008e5700  e8196f0e00           call 0x9cc61e
// 008e5705  2500004000           and eax, 0x400000
// 008e570a  0d80000000           or eax, 0x80
// 008e570f  50                   push eax
// 008e5710  8bce                 mov ecx, esi
// 008e5712  e8b949f2ff           call 0x80a0d0
// 008e5717  3bfd                 cmp edi, ebp
// 008e5719  7405                 je 0x8e5720
// 008e571b  8b4720               mov eax, dword ptr [edi + 0x20]
// 008e571e  eb02                 jmp 0x8e5722
// 008e5720  33c0                 xor eax, eax
// 008e5722  894638               mov dword ptr [esi + 0x38], eax
// 008e5725  8b5720               mov edx, dword ptr [edi + 0x20]
// 008e5728  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 008e572e  55                   push ebp
// 008e572f  55                   push ebp
// 008e5730  6a31                 push 0x31
// 008e5732  52                   push edx
// 008e5733  ffd7                 call edi
// 008e5735  50                   push eax
// 008e5736  e82d54f2ff           call 0x80ab68
// 008e573b  3bc5                 cmp eax, ebp
// 008e573d  7504                 jne 0x8e5743
// 008e573f  33c0                 xor eax, eax
// 008e5741  eb03                 jmp 0x8e5746
// 008e5743  8b4004               mov eax, dword ptr [eax + 4]
// 008e5746  6a01                 push 1
// 008e5748  50                   push eax
// 008e5749  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e574c  6a30                 push 0x30
// 008e574e  50                   push eax
// 008e574f  ffd7                 call edi
// 008e5751  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e5754  55                   push ebp
// 008e5755  55                   push ebp
// 008e5756  6884010000           push 0x184
// 008e575b  51                   push ecx
// 008e575c  ffd7                 call edi
// 008e575e  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 008e5765  2b442440             sub eax, dword ptr [esp + 0x40]
// 008e5769  8b542428             mov edx, dword ptr [esp + 0x28]
// 008e576d  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 008e5773  52                   push edx
// 008e5774  8d8c2484000000       lea ecx, [esp + 0x84]
// 008e577b  896c2430             mov dword ptr [esp + 0x30], ebp
// 008e577f  89442428             mov dword ptr [esp + 0x28], eax
// 008e5783  e85a6e0e00           call 0x9cc5e2
// 008e5788  8b442428             mov eax, dword ptr [esp + 0x28]
// 008e578c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008e578f  6a00                 push 0
// 008e5791  6a00                 push 0
// 008e5793  6a31                 push 0x31
// 008e5795  51                   push ecx
// 008e5796  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 008e57a1  ffd7                 call edi
// 008e57a3  50                   push eax
// 008e57a4  e8bf53f2ff           call 0x80ab68
// 008e57a9  50                   push eax
// 008e57aa  8d942484000000       lea edx, [esp + 0x84]
// 008e57b1  52                   push edx
// 008e57b2  8d4c2478             lea ecx, [esp + 0x78]
// 008e57b6  e86579f7ff           call 0x85d120
// 008e57bb  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008e57c2  8d442438             lea eax, [esp + 0x38]
// 008e57c6  50                   push eax
// 008e57c7  6a01                 push 1
// 008e57c9  686056a600           push 0xa65660
// 008e57ce  51                   push ecx
// 008e57cf  c68424ac00000001     mov byte ptr [esp + 0xac], 1
// 008e57d7  ff153801a400         call dword ptr [0xa40138]
// 008e57dd  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008e57e1  83c203               add edx, 3
// 008e57e4  837d2800             cmp dword ptr [ebp + 0x28], 0
// 008e57e8  89542418             mov dword ptr [esp + 0x18], edx
// 008e57ec  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008e57f4  0f8e03010000         jle 0x8e58fd
// 008e57fa  eb06                 jmp 0x8e5802
// 008e57fc  8d642400             lea esp, [esp]
// 008e5800  8be9                 mov ebp, ecx
// 008e5802  8b442420             mov eax, dword ptr [esp + 0x20]
// 008e5806  50                   push eax
// 008e5807  8bcd                 mov ecx, ebp
// 008e5809  e87274f2ff           call 0x80cc80
// 008e580e  8be8                 mov ebp, eax
// 008e5810  8d4d20               lea ecx, [ebp + 0x20]
// 008e5813  51                   push ecx
// 008e5814  8d4c2420             lea ecx, [esp + 0x20]
// 008e5818  ff15e42da400         call dword ptr [0xa42de4]
// 008e581e  8d4c241c             lea ecx, [esp + 0x1c]
// 008e5822  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 008e582a  ff15c82da400         call dword ptr [0xa42dc8]
// 008e5830  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e5833  50                   push eax
// 008e5834  6a00                 push 0
// 008e5836  6880010000           push 0x180
// 008e583b  52                   push edx
// 008e583c  ffd7                 call edi
// 008e583e  55                   push ebp
// 008e583f  50                   push eax
// 008e5840  8944243c             mov dword ptr [esp + 0x3c], eax
// 008e5844  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e5847  689a010000           push 0x19a
// 008e584c  50                   push eax
// 008e584d  ffd7                 call edi
// 008e584f  8b13                 mov edx, dword ptr [ebx]
// 008e5851  8b5270               mov edx, dword ptr [edx + 0x70]
// 008e5854  55                   push ebp
// 008e5855  8d842484000000       lea eax, [esp + 0x84]
// 008e585c  50                   push eax
// 008e585d  8d4c2440             lea ecx, [esp + 0x40]
// 008e5861  51                   push ecx
// 008e5862  8bcb                 mov ecx, ebx
// 008e5864  ffd2                 call edx
// 008e5866  8b442438             mov eax, dword ptr [esp + 0x38]
// 008e586a  39442424             cmp dword ptr [esp + 0x24], eax
// 008e586e  7f04                 jg 0x8e5874
// 008e5870  89442424             mov dword ptr [esp + 0x24], eax
// 008e5874  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008e5878  39442418             cmp dword ptr [esp + 0x18], eax
// 008e587c  7f04                 jg 0x8e5882
// 008e587e  89442418             mov dword ptr [esp + 0x18], eax
// 008e5882  8d442430             lea eax, [esp + 0x30]
// 008e5886  50                   push eax
// 008e5887  8bcb                 mov ecx, ebx
// 008e5889  e862d8b5ff           call 0x4430f0
// 008e588e  8be8                 mov ebp, eax
// 008e5890  8d4c241c             lea ecx, [esp + 0x1c]
// 008e5894  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 008e589c  ff15c82da400         call dword ptr [0xa42dc8]
// 008e58a2  50                   push eax
// 008e58a3  8bcd                 mov ecx, ebp
// 008e58a5  ff15cc2da400         call dword ptr [0xa42dcc]
// 008e58ab  85c0                 test eax, eax
// 008e58ad  8d4c2430             lea ecx, [esp + 0x30]
// 008e58b1  0f94442417           sete byte ptr [esp + 0x17]
// 008e58b6  ff15082ea400         call dword ptr [0xa42e08]
// 008e58bc  807c241700           cmp byte ptr [esp + 0x17], 0
// 008e58c1  7412                 je 0x8e58d5
// 008e58c3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008e58c7  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e58ca  6a00                 push 0
// 008e58cc  51                   push ecx
// 008e58cd  6886010000           push 0x186
// 008e58d2  52                   push edx
// 008e58d3  ffd7                 call edi
// 008e58d5  8d4c241c             lea ecx, [esp + 0x1c]
// 008e58d9  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 008e58e1  ff15082ea400         call dword ptr [0xa42e08]
// 008e58e7  8b442420             mov eax, dword ptr [esp + 0x20]
// 008e58eb  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008e58ef  40                   inc eax
// 008e58f0  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008e58f3  89442420             mov dword ptr [esp + 0x20], eax
// 008e58f7  0f8c03ffffff         jl 0x8e5800
// 008e58fd  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 008e5902  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e5905  52                   push edx
// 008e5906  6a00                 push 0
// 008e5908  68a0010000           push 0x1a0
// 008e590d  50                   push eax
// 008e590e  ffd7                 call edi
// 008e5910  8b5620               mov edx, dword ptr [esi + 0x20]
// 008e5913  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008e591a  8babdc000000         mov ebp, dword ptr [ebx + 0xdc]
// 008e5920  6a00                 push 0
// 008e5922  6a00                 push 0
// 008e5924  688b010000           push 0x18b
// 008e5929  52                   push edx
// 008e592a  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 008e5931  ffd7                 call edi
// 008e5933  3be8                 cmp ebp, eax
// 008e5935  7d08                 jge 0x8e593f
// 008e5937  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 008e593d  eb0f                 jmp 0x8e594e
// 008e593f  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e5942  6a00                 push 0
// 008e5944  6a00                 push 0
// 008e5946  688b010000           push 0x18b
// 008e594b  50                   push eax
// 008e594c  ffd7                 call edi
// 008e594e  0faf442418           imul eax, dword ptr [esp + 0x18]
// 008e5953  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008e595a  8d540102             lea edx, [ecx + eax + 2]
// 008e595e  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 008e5965  8bc8                 mov ecx, eax
// 008e5967  2b8c24a8000000       sub ecx, dword ptr [esp + 0xa8]
// 008e596e  899424b4000000       mov dword ptr [esp + 0xb4], edx
// 008e5975  8b542424             mov edx, dword ptr [esp + 0x24]
// 008e5979  83c1f2               add ecx, -0xe
// 008e597c  3bd1                 cmp edx, ecx
// 008e597e  7d02                 jge 0x8e5982
// 008e5980  8bca                 mov ecx, edx
// 008e5982  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008e5986  2bc1                 sub eax, ecx
// 008e5988  8d9424a8000000       lea edx, [esp + 0xa8]
// 008e598f  52                   push edx
// 008e5990  8bcd                 mov ecx, ebp
// 008e5992  898424ac000000       mov dword ptr [esp + 0xac], eax
// 008e5999  e8604cf2ff           call 0x80a5fe
// 008e599e  8d8424a8000000       lea eax, [esp + 0xa8]
// 008e59a5  50                   push eax
// 008e59a6  8d4c2464             lea ecx, [esp + 0x64]
// 008e59aa  51                   push ecx
// 008e59ab  e860c7f6ff           call 0x852110
// 008e59b0  8bc8                 mov ecx, eax
// 008e59b2  e8b9c2f6ff           call 0x851c70
// 008e59b7  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 008e59be  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008e59c2  3bd8                 cmp ebx, eax
// 008e59c4  8b3d601ca400         mov edi, dword ptr [0xa41c60]
// 008e59ca  7e31                 jle 0x8e59fd
// 008e59cc  8b542464             mov edx, dword ptr [esp + 0x64]
// 008e59d0  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 008e59d7  03c2                 add eax, edx
// 008e59d9  99                   cdq 
// 008e59da  2bc2                 sub eax, edx
// 008e59dc  d1f8                 sar eax, 1
// 008e59de  3bc8                 cmp ecx, eax
// 008e59e0  7e1b                 jle 0x8e59fd
// 008e59e2  8b442444             mov eax, dword ptr [esp + 0x44]
// 008e59e6  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 008e59ea  2bc3                 sub eax, ebx
// 008e59ec  8d4408ff             lea eax, [eax + ecx - 1]
// 008e59f0  50                   push eax
// 008e59f1  6a00                 push 0
// 008e59f3  8d8424b0000000       lea eax, [esp + 0xb0]
// 008e59fa  50                   push eax
// 008e59fb  ffd7                 call edi
// 008e59fd  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 008e5a04  8b442460             mov eax, dword ptr [esp + 0x60]
// 008e5a08  3bc8                 cmp ecx, eax
// 008e5a0a  7d0f                 jge 0x8e5a1b
// 008e5a0c  2bc1                 sub eax, ecx
// 008e5a0e  6a00                 push 0
// 008e5a10  50                   push eax
// 008e5a11  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 008e5a18  51                   push ecx
// 008e5a19  ffd7                 call edi
// 008e5a1b  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008e5a22  8b442468             mov eax, dword ptr [esp + 0x68]
// 008e5a26  3bc8                 cmp ecx, eax
// 008e5a28  7e0f                 jle 0x8e5a39
// 008e5a2a  6a00                 push 0
// 008e5a2c  2bc1                 sub eax, ecx
// 008e5a2e  50                   push eax
// 008e5a2f  8d9424b0000000       lea edx, [esp + 0xb0]
// 008e5a36  52                   push edx
// 008e5a37  ffd7                 call edi
// 008e5a39  8bce                 mov ecx, esi
// 008e5a3b  e8c049f2ff           call 0x80a400
// 008e5a40  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e5a43  8b3d001aa400         mov edi, dword ptr [0xa41a00]
// 008e5a49  6a00                 push 0
// 008e5a4b  6af8                 push -8
// 008e5a4d  50                   push eax
// 008e5a4e  ffd7                 call edi
// 008e5a50  6a00                 push 0
// 008e5a52  6800000080           push 0x80000000
// 008e5a57  6800000040           push 0x40000000
// 008e5a5c  8bce                 mov ecx, esi
// 008e5a5e  e8754df2ff           call 0x80a7d8
// 008e5a63  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008e5a66  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008e5a69  50                   push eax
// 008e5a6a  6af8                 push -8
// 008e5a6c  51                   push ecx
// 008e5a6d  ffd7                 call edi
// 008e5a6f  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 008e5a76  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008e5a7d  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 008e5a84  6850020000           push 0x250
// 008e5a89  2bc8                 sub ecx, eax
// 008e5a8b  51                   push ecx
// 008e5a8c  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008e5a93  2bd1                 sub edx, ecx
// 008e5a95  52                   push edx
// 008e5a96  50                   push eax
// 008e5a97  a1b829a400           mov eax, dword ptr [0xa429b8]
// 008e5a9c  51                   push ecx
// 008e5a9d  50                   push eax
// 008e5a9e  8bce                 mov ecx, esi
// 008e5aa0  e88549f2ff           call 0x80a42a
// 008e5aa5  56                   push esi
// 008e5aa6  e8d597f7ff           call 0x85f280
// 008e5aab  83c404               add esp, 4
// 008e5aae  8d4c2470             lea ecx, [esp + 0x70]
// 008e5ab2  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 008e5aba  e8e176f7ff           call 0x85d1a0
// 008e5abf  8d8c2480000000       lea ecx, [esp + 0x80]
// 008e5ac6  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008e5ad1  e8066b0e00           call 0x9cc5dc
// 008e5ad6  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008e5add  64890d00000000       mov dword ptr fs:[0], ecx
// 008e5ae4  59                   pop ecx
// 008e5ae5  5f                   pop edi
// 008e5ae6  5e                   pop esi
// 008e5ae7  5d                   pop ebp
// 008e5ae8  5b                   pop ebx
// 008e5ae9  81c48c000000         add esp, 0x8c
// 008e5aef  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTPPropertyGridInplaceList@@UAEXPAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\PropertyGrid\XTPPropertyGridInplaceList.cpp