// roc 2009-12 008cd7e0  unit: CXTPPropertyGridInplaceList  size: 1202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cd7e0
//
// 008cd7e0  6aff                 push -1
// 008cd7e2  68754d9600           push 0x964d75
// 008cd7e7  64a100000000         mov eax, dword ptr fs:[0]
// 008cd7ed  50                   push eax
// 008cd7ee  81ec80000000         sub esp, 0x80
// 008cd7f4  53                   push ebx
// 008cd7f5  55                   push ebp
// 008cd7f6  56                   push esi
// 008cd7f7  57                   push edi
// 008cd7f8  a10052b600           mov eax, dword ptr [0xb65200]
// 008cd7fd  33c4                 xor eax, esp
// 008cd7ff  50                   push eax
// 008cd800  8d842494000000       lea eax, [esp + 0x94]
// 008cd807  64a300000000         mov dword ptr fs:[0], eax
// 008cd80d  8bf1                 mov esi, ecx
// 008cd80f  8b9c24a4000000       mov ebx, dword ptr [esp + 0xa4]
// 008cd816  33ed                 xor ebp, ebp
// 008cd818  3bdd                 cmp ebx, ebp
// 008cd81a  0f8456040000         je 0x8cdc76
// 008cd820  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 008cd827  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 008cd82e  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 008cd835  89442440             mov dword ptr [esp + 0x40], eax
// 008cd839  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 008cd840  894c2444             mov dword ptr [esp + 0x44], ecx
// 008cd844  8b8bbc000000         mov ecx, dword ptr [ebx + 0xbc]
// 008cd84a  89542448             mov dword ptr [esp + 0x48], edx
// 008cd84e  8944244c             mov dword ptr [esp + 0x4c], eax
// 008cd852  e809aff9ff           call 0x868760
// 008cd857  8bbbbc000000         mov edi, dword ptr [ebx + 0xbc]
// 008cd85d  8b16                 mov edx, dword ptr [esi]
// 008cd85f  40                   inc eax
// 008cd860  89442440             mov dword ptr [esp + 0x40], eax
// 008cd864  8b4268               mov eax, dword ptr [edx + 0x68]
// 008cd867  8bce                 mov ecx, esi
// 008cd869  897c2428             mov dword ptr [esp + 0x28], edi
// 008cd86d  895e54               mov dword ptr [esi + 0x54], ebx
// 008cd870  ffd0                 call eax
// 008cd872  396e20               cmp dword ptr [esi + 0x20], ebp
// 008cd875  754e                 jne 0x8cd8c5
// 008cd877  55                   push ebp
// 008cd878  55                   push ebp
// 008cd879  57                   push edi
// 008cd87a  8d4c245c             lea ecx, [esp + 0x5c]
// 008cd87e  51                   push ecx
// 008cd87f  685100a040           push 0x40a00051
// 008cd884  6856fd9900           push 0x99fd56
// 008cd889  6888269f00           push 0x9f2688
// 008cd88e  8bcf                 mov ecx, edi
// 008cd890  896c246c             mov dword ptr [esp + 0x6c], ebp
// 008cd894  896c2470             mov dword ptr [esp + 0x70], ebp
// 008cd898  896c2474             mov dword ptr [esp + 0x74], ebp
// 008cd89c  896c2478             mov dword ptr [esp + 0x78], ebp
// 008cd8a0  e8d38b0500           call 0x926478
// 008cd8a5  2500004000           and eax, 0x400000
// 008cd8aa  0d80000000           or eax, 0x80
// 008cd8af  50                   push eax
// 008cd8b0  8bce                 mov ecx, esi
// 008cd8b2  e81b60f2ff           call 0x7f38d2
// 008cd8b7  3bfd                 cmp edi, ebp
// 008cd8b9  7405                 je 0x8cd8c0
// 008cd8bb  8b4720               mov eax, dword ptr [edi + 0x20]
// 008cd8be  eb02                 jmp 0x8cd8c2
// 008cd8c0  33c0                 xor eax, eax
// 008cd8c2  894638               mov dword ptr [esi + 0x38], eax
// 008cd8c5  8b5720               mov edx, dword ptr [edi + 0x20]
// 008cd8c8  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008cd8ce  55                   push ebp
// 008cd8cf  55                   push ebp
// 008cd8d0  6a31                 push 0x31
// 008cd8d2  52                   push edx
// 008cd8d3  ffd7                 call edi
// 008cd8d5  50                   push eax
// 008cd8d6  e8896af2ff           call 0x7f4364
// 008cd8db  3bc5                 cmp eax, ebp
// 008cd8dd  7504                 jne 0x8cd8e3
// 008cd8df  33c0                 xor eax, eax
// 008cd8e1  eb03                 jmp 0x8cd8e6
// 008cd8e3  8b4004               mov eax, dword ptr [eax + 4]
// 008cd8e6  6a01                 push 1
// 008cd8e8  50                   push eax
// 008cd8e9  8b4620               mov eax, dword ptr [esi + 0x20]
// 008cd8ec  6a30                 push 0x30
// 008cd8ee  50                   push eax
// 008cd8ef  ffd7                 call edi
// 008cd8f1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008cd8f4  55                   push ebp
// 008cd8f5  55                   push ebp
// 008cd8f6  6884010000           push 0x184
// 008cd8fb  51                   push ecx
// 008cd8fc  ffd7                 call edi
// 008cd8fe  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 008cd905  2b442440             sub eax, dword ptr [esp + 0x40]
// 008cd909  8b542428             mov edx, dword ptr [esp + 0x28]
// 008cd90d  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 008cd913  52                   push edx
// 008cd914  8d8c2484000000       lea ecx, [esp + 0x84]
// 008cd91b  896c2430             mov dword ptr [esp + 0x30], ebp
// 008cd91f  89442428             mov dword ptr [esp + 0x28], eax
// 008cd923  e8628b0500           call 0x92648a
// 008cd928  8b442428             mov eax, dword ptr [esp + 0x28]
// 008cd92c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008cd92f  6a00                 push 0
// 008cd931  6a00                 push 0
// 008cd933  6a31                 push 0x31
// 008cd935  51                   push ecx
// 008cd936  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 008cd941  ffd7                 call edi
// 008cd943  50                   push eax
// 008cd944  e81b6af2ff           call 0x7f4364
// 008cd949  50                   push eax
// 008cd94a  8d942484000000       lea edx, [esp + 0x84]
// 008cd951  52                   push edx
// 008cd952  8d4c2478             lea ecx, [esp + 0x78]
// 008cd956  e805ddf7ff           call 0x84b660
// 008cd95b  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008cd962  8d442438             lea eax, [esp + 0x38]
// 008cd966  50                   push eax
// 008cd967  6a01                 push 1
// 008cd969  6868619a00           push 0x9a6168
// 008cd96e  51                   push ecx
// 008cd96f  c68424ac00000001     mov byte ptr [esp + 0xac], 1
// 008cd977  ff156cb19800         call dword ptr [0x98b16c]
// 008cd97d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008cd981  83c203               add edx, 3
// 008cd984  837d2800             cmp dword ptr [ebp + 0x28], 0
// 008cd988  89542418             mov dword ptr [esp + 0x18], edx
// 008cd98c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008cd994  0f8e03010000         jle 0x8cda9d
// 008cd99a  eb06                 jmp 0x8cd9a2
// 008cd99c  8d642400             lea esp, [esp]
// 008cd9a0  8be9                 mov ebp, ecx
// 008cd9a2  8b442420             mov eax, dword ptr [esp + 0x20]
// 008cd9a6  50                   push eax
// 008cd9a7  8bcd                 mov ecx, ebp
// 008cd9a9  e88255fdff           call 0x8a2f30
// 008cd9ae  8be8                 mov ebp, eax
// 008cd9b0  8d4d20               lea ecx, [ebp + 0x20]
// 008cd9b3  51                   push ecx
// 008cd9b4  8d4c2420             lea ecx, [esp + 0x20]
// 008cd9b8  ff1594de9800         call dword ptr [0x98de94]
// 008cd9be  8d4c241c             lea ecx, [esp + 0x1c]
// 008cd9c2  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 008cd9ca  ff1580de9800         call dword ptr [0x98de80]
// 008cd9d0  8b5620               mov edx, dword ptr [esi + 0x20]
// 008cd9d3  50                   push eax
// 008cd9d4  6a00                 push 0
// 008cd9d6  6880010000           push 0x180
// 008cd9db  52                   push edx
// 008cd9dc  ffd7                 call edi
// 008cd9de  55                   push ebp
// 008cd9df  50                   push eax
// 008cd9e0  8944243c             mov dword ptr [esp + 0x3c], eax
// 008cd9e4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008cd9e7  689a010000           push 0x19a
// 008cd9ec  50                   push eax
// 008cd9ed  ffd7                 call edi
// 008cd9ef  8b13                 mov edx, dword ptr [ebx]
// 008cd9f1  8b5270               mov edx, dword ptr [edx + 0x70]
// 008cd9f4  55                   push ebp
// 008cd9f5  8d842484000000       lea eax, [esp + 0x84]
// 008cd9fc  50                   push eax
// 008cd9fd  8d4c2440             lea ecx, [esp + 0x40]
// 008cda01  51                   push ecx
// 008cda02  8bcb                 mov ecx, ebx
// 008cda04  ffd2                 call edx
// 008cda06  8b442438             mov eax, dword ptr [esp + 0x38]
// 008cda0a  39442424             cmp dword ptr [esp + 0x24], eax
// 008cda0e  7f04                 jg 0x8cda14
// 008cda10  89442424             mov dword ptr [esp + 0x24], eax
// 008cda14  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008cda18  39442418             cmp dword ptr [esp + 0x18], eax
// 008cda1c  7f04                 jg 0x8cda22
// 008cda1e  89442418             mov dword ptr [esp + 0x18], eax
// 008cda22  8d442430             lea eax, [esp + 0x30]
// 008cda26  50                   push eax
// 008cda27  8bcb                 mov ecx, ebx
// 008cda29  e8f24bb6ff           call 0x432620
// 008cda2e  8be8                 mov ebp, eax
// 008cda30  8d4c241c             lea ecx, [esp + 0x1c]
// 008cda34  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 008cda3c  ff1580de9800         call dword ptr [0x98de80]
// 008cda42  50                   push eax
// 008cda43  8bcd                 mov ecx, ebp
// 008cda45  ff1584de9800         call dword ptr [0x98de84]
// 008cda4b  85c0                 test eax, eax
// 008cda4d  8d4c2430             lea ecx, [esp + 0x30]
// 008cda51  0f94442417           sete byte ptr [esp + 0x17]
// 008cda56  ff15c0de9800         call dword ptr [0x98dec0]
// 008cda5c  807c241700           cmp byte ptr [esp + 0x17], 0
// 008cda61  7412                 je 0x8cda75
// 008cda63  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008cda67  8b5620               mov edx, dword ptr [esi + 0x20]
// 008cda6a  6a00                 push 0
// 008cda6c  51                   push ecx
// 008cda6d  6886010000           push 0x186
// 008cda72  52                   push edx
// 008cda73  ffd7                 call edi
// 008cda75  8d4c241c             lea ecx, [esp + 0x1c]
// 008cda79  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 008cda81  ff15c0de9800         call dword ptr [0x98dec0]
// 008cda87  8b442420             mov eax, dword ptr [esp + 0x20]
// 008cda8b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008cda8f  40                   inc eax
// 008cda90  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 008cda93  89442420             mov dword ptr [esp + 0x20], eax
// 008cda97  0f8c03ffffff         jl 0x8cd9a0
// 008cda9d  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 008cdaa2  8b4620               mov eax, dword ptr [esi + 0x20]
// 008cdaa5  52                   push edx
// 008cdaa6  6a00                 push 0
// 008cdaa8  68a0010000           push 0x1a0
// 008cdaad  50                   push eax
// 008cdaae  ffd7                 call edi
// 008cdab0  8b5620               mov edx, dword ptr [esi + 0x20]
// 008cdab3  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008cdaba  8babdc000000         mov ebp, dword ptr [ebx + 0xdc]
// 008cdac0  6a00                 push 0
// 008cdac2  6a00                 push 0
// 008cdac4  688b010000           push 0x18b
// 008cdac9  52                   push edx
// 008cdaca  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 008cdad1  ffd7                 call edi
// 008cdad3  3be8                 cmp ebp, eax
// 008cdad5  7d08                 jge 0x8cdadf
// 008cdad7  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 008cdadd  eb0f                 jmp 0x8cdaee
// 008cdadf  8b4620               mov eax, dword ptr [esi + 0x20]
// 008cdae2  6a00                 push 0
// 008cdae4  6a00                 push 0
// 008cdae6  688b010000           push 0x18b
// 008cdaeb  50                   push eax
// 008cdaec  ffd7                 call edi
// 008cdaee  0faf442418           imul eax, dword ptr [esp + 0x18]
// 008cdaf3  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008cdafa  8d540102             lea edx, [ecx + eax + 2]
// 008cdafe  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 008cdb05  8bc8                 mov ecx, eax
// 008cdb07  2b8c24a8000000       sub ecx, dword ptr [esp + 0xa8]
// 008cdb0e  899424b4000000       mov dword ptr [esp + 0xb4], edx
// 008cdb15  8b542424             mov edx, dword ptr [esp + 0x24]
// 008cdb19  83c1f2               add ecx, -0xe
// 008cdb1c  3bd1                 cmp edx, ecx
// 008cdb1e  7d02                 jge 0x8cdb22
// 008cdb20  8bca                 mov ecx, edx
// 008cdb22  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008cdb26  2bc1                 sub eax, ecx
// 008cdb28  8d9424a8000000       lea edx, [esp + 0xa8]
// 008cdb2f  52                   push edx
// 008cdb30  8bcd                 mov ecx, ebp
// 008cdb32  898424ac000000       mov dword ptr [esp + 0xac], eax
// 008cdb39  e8bc62f2ff           call 0x7f3dfa
// 008cdb3e  8d8424a8000000       lea eax, [esp + 0xa8]
// 008cdb45  50                   push eax
// 008cdb46  8d4c2464             lea ecx, [esp + 0x64]
// 008cdb4a  51                   push ecx
// 008cdb4b  e820ecf6ff           call 0x83c770
// 008cdb50  8bc8                 mov ecx, eax
// 008cdb52  e879e7f6ff           call 0x83c2d0
// 008cdb57  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 008cdb5e  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008cdb62  3bd8                 cmp ebx, eax
// 008cdb64  8b3d6ccc9800         mov edi, dword ptr [0x98cc6c]
// 008cdb6a  7e31                 jle 0x8cdb9d
// 008cdb6c  8b542464             mov edx, dword ptr [esp + 0x64]
// 008cdb70  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 008cdb77  03c2                 add eax, edx
// 008cdb79  99                   cdq 
// 008cdb7a  2bc2                 sub eax, edx
// 008cdb7c  d1f8                 sar eax, 1
// 008cdb7e  3bc8                 cmp ecx, eax
// 008cdb80  7e1b                 jle 0x8cdb9d
// 008cdb82  8b442444             mov eax, dword ptr [esp + 0x44]
// 008cdb86  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 008cdb8a  2bc3                 sub eax, ebx
// 008cdb8c  8d4408ff             lea eax, [eax + ecx - 1]
// 008cdb90  50                   push eax
// 008cdb91  6a00                 push 0
// 008cdb93  8d8424b0000000       lea eax, [esp + 0xb0]
// 008cdb9a  50                   push eax
// 008cdb9b  ffd7                 call edi
// 008cdb9d  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 008cdba4  8b442460             mov eax, dword ptr [esp + 0x60]
// 008cdba8  3bc8                 cmp ecx, eax
// 008cdbaa  7d0f                 jge 0x8cdbbb
// 008cdbac  2bc1                 sub eax, ecx
// 008cdbae  6a00                 push 0
// 008cdbb0  50                   push eax
// 008cdbb1  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 008cdbb8  51                   push ecx
// 008cdbb9  ffd7                 call edi
// 008cdbbb  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008cdbc2  8b442468             mov eax, dword ptr [esp + 0x68]
// 008cdbc6  3bc8                 cmp ecx, eax
// 008cdbc8  7e0f                 jle 0x8cdbd9
// 008cdbca  6a00                 push 0
// 008cdbcc  2bc1                 sub eax, ecx
// 008cdbce  50                   push eax
// 008cdbcf  8d9424b0000000       lea edx, [esp + 0xb0]
// 008cdbd6  52                   push edx
// 008cdbd7  ffd7                 call edi
// 008cdbd9  8bce                 mov ecx, esi
// 008cdbdb  e82260f2ff           call 0x7f3c02
// 008cdbe0  8b4620               mov eax, dword ptr [esi + 0x20]
// 008cdbe3  8b3dc0c99800         mov edi, dword ptr [0x98c9c0]
// 008cdbe9  6a00                 push 0
// 008cdbeb  6af8                 push -8
// 008cdbed  50                   push eax
// 008cdbee  ffd7                 call edi
// 008cdbf0  6a00                 push 0
// 008cdbf2  6800000080           push 0x80000000
// 008cdbf7  6800000040           push 0x40000000
// 008cdbfc  8bce                 mov ecx, esi
// 008cdbfe  e8d763f2ff           call 0x7f3fda
// 008cdc03  8b4520               mov eax, dword ptr [ebp + 0x20]
// 008cdc06  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008cdc09  50                   push eax
// 008cdc0a  6af8                 push -8
// 008cdc0c  51                   push ecx
// 008cdc0d  ffd7                 call edi
// 008cdc0f  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 008cdc16  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008cdc1d  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 008cdc24  6850020000           push 0x250
// 008cdc29  2bc8                 sub ecx, eax
// 008cdc2b  51                   push ecx
// 008cdc2c  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 008cdc33  2bd1                 sub edx, ecx
// 008cdc35  52                   push edx
// 008cdc36  50                   push eax
// 008cdc37  a110da9800           mov eax, dword ptr [0x98da10]
// 008cdc3c  51                   push ecx
// 008cdc3d  50                   push eax
// 008cdc3e  8bce                 mov ecx, esi
// 008cdc40  e8e75ff2ff           call 0x7f3c2c
// 008cdc45  56                   push esi
// 008cdc46  e855fbf7ff           call 0x84d7a0
// 008cdc4b  83c404               add esp, 4
// 008cdc4e  8d4c2470             lea ecx, [esp + 0x70]
// 008cdc52  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 008cdc5a  e881daf7ff           call 0x84b6e0
// 008cdc5f  8d8c2480000000       lea ecx, [esp + 0x80]
// 008cdc66  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 008cdc71  e80e880500           call 0x926484
// 008cdc76  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008cdc7d  64890d00000000       mov dword ptr fs:[0], ecx
// 008cdc84  59                   pop ecx
// 008cdc85  5f                   pop edi
// 008cdc86  5e                   pop esi
// 008cdc87  5d                   pop ebp
// 008cdc88  5b                   pop ebx
// 008cdc89  81c48c000000         add esp, 0x8c
// 008cdc8f  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTPPropertyGridInplaceList@@UAEXPAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\PropertyGrid\XTPPropertyGridInplaceList.cpp