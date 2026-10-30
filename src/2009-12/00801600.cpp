// roc 2009-12 00801600  unit: CXTPPaintManager  size: 1820 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00801600
//
// 00801600  6aff                 push -1
// 00801602  6855939500           push 0x959355
// 00801607  64a100000000         mov eax, dword ptr fs:[0]
// 0080160d  50                   push eax
// 0080160e  83ec6c               sub esp, 0x6c
// 00801611  53                   push ebx
// 00801612  55                   push ebp
// 00801613  56                   push esi
// 00801614  57                   push edi
// 00801615  a10052b600           mov eax, dword ptr [0xb65200]
// 0080161a  33c4                 xor eax, esp
// 0080161c  50                   push eax
// 0080161d  8d842480000000       lea eax, [esp + 0x80]
// 00801624  64a300000000         mov dword ptr fs:[0], eax
// 0080162a  8bd9                 mov ebx, ecx
// 0080162c  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00801633  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00801639  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0080163f  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00801645  33ed                 xor ebp, ebp
// 00801647  894c2460             mov dword ptr [esp + 0x60], ecx
// 0080164b  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00801651  8944242c             mov dword ptr [esp + 0x2c], eax
// 00801655  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0080165b  89542464             mov dword ptr [esp + 0x64], edx
// 0080165f  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00801665  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00801669  8bce                 mov ecx, esi
// 0080166b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0080166f  896c2450             mov dword ptr [esp + 0x50], ebp
// 00801673  896c2454             mov dword ptr [esp + 0x54], ebp
// 00801677  896c2458             mov dword ptr [esp + 0x58], ebp
// 0080167b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0080167f  896c2470             mov dword ptr [esp + 0x70], ebp
// 00801683  896c2474             mov dword ptr [esp + 0x74], ebp
// 00801687  896c2478             mov dword ptr [esp + 0x78], ebp
// 0080168b  896c247c             mov dword ptr [esp + 0x7c], ebp
// 0080168f  89442468             mov dword ptr [esp + 0x68], eax
// 00801693  89542424             mov dword ptr [esp + 0x24], edx
// 00801697  e8f445ffff           call 0x7f5c90
// 0080169c  8bf8                 mov edi, eax
// 0080169e  8b06                 mov eax, dword ptr [esi]
// 008016a0  8b5058               mov edx, dword ptr [eax + 0x58]
// 008016a3  8d4c2420             lea ecx, [esp + 0x20]
// 008016a7  51                   push ecx
// 008016a8  8bce                 mov ecx, esi
// 008016aa  897c2434             mov dword ptr [esp + 0x34], edi
// 008016ae  ffd2                 call edx
// 008016b0  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 008016b7  3bfd                 cmp edi, ebp
// 008016b9  740c                 je 0x8016c7
// 008016bb  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 008016c2  83ff01               cmp edi, 1
// 008016c5  740b                 je 0x8016d2
// 008016c7  c784249800000001000000 mov dword ptr [esp + 0x98], 1
// 008016d2  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008016d6  8b03                 mov eax, dword ptr [ebx]
// 008016d8  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 008016de  57                   push edi
// 008016df  8d4c243c             lea ecx, [esp + 0x3c]
// 008016e3  51                   push ecx
// 008016e4  8bcb                 mov ecx, ebx
// 008016e6  ffd2                 call edx
// 008016e8  8b07                 mov eax, dword ptr [edi]
// 008016ea  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 008016f0  8bcf                 mov ecx, edi
// 008016f2  ffd2                 call edx
// 008016f4  85c0                 test eax, eax
// 008016f6  7415                 je 0x80170d
// 008016f8  39af10020000         cmp dword ptr [edi + 0x210], ebp
// 008016fe  740d                 je 0x80170d
// 00801700  8b442438             mov eax, dword ptr [esp + 0x38]
// 00801704  8d0c00               lea ecx, [eax + eax]
// 00801707  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0080170b  eb08                 jmp 0x801715
// 0080170d  8b542438             mov edx, dword ptr [esp + 0x38]
// 00801711  8954241c             mov dword ptr [esp + 0x1c], edx
// 00801715  8b06                 mov eax, dword ptr [esi]
// 00801717  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0080171a  8bce                 mov ecx, esi
// 0080171c  ffd2                 call edx
// 0080171e  89442428             mov dword ptr [esp + 0x28], eax
// 00801722  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00801728  83f8ff               cmp eax, -1
// 0080172b  750f                 jne 0x80173c
// 0080172d  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00801733  3bcd                 cmp ecx, ebp
// 00801735  7405                 je 0x80173c
// 00801737  e8744effff           call 0x7f65b0
// 0080173c  89442418             mov dword ptr [esp + 0x18], eax
// 00801740  b804000000           mov eax, 4
// 00801745  39442424             cmp dword ptr [esp + 0x24], eax
// 00801749  750a                 jne 0x801755
// 0080174b  39442418             cmp dword ptr [esp + 0x18], eax
// 0080174f  7504                 jne 0x801755
// 00801751  896c2418             mov dword ptr [esp + 0x18], ebp
// 00801755  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0080175b  83f808               cmp eax, 8
// 0080175e  7524                 jne 0x801784
// 00801760  39ab90000000         cmp dword ptr [ebx + 0x90], ebp
// 00801766  7504                 jne 0x80176c
// 00801768  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0080176c  83f808               cmp eax, 8
// 0080176f  7513                 jne 0x801784
// 00801771  39ac2498000000       cmp dword ptr [esp + 0x98], ebp
// 00801778  750a                 jne 0x801784
// 0080177a  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 00801780  8944243c             mov dword ptr [esp + 0x3c], eax
// 00801784  39ac249c000000       cmp dword ptr [esp + 0x9c], ebp
// 0080178b  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 00801792  0f84e9000000         je 0x801881
// 00801798  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0080179e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008017a2  03442460             add eax, dword ptr [esp + 0x60]
// 008017a6  8b542468             mov edx, dword ptr [esp + 0x68]
// 008017aa  0344241c             add eax, dword ptr [esp + 0x1c]
// 008017ae  8b3d38ca9800         mov edi, dword ptr [0x98ca38]
// 008017b4  51                   push ecx
// 008017b5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008017b9  52                   push edx
// 008017ba  51                   push ecx
// 008017bb  50                   push eax
// 008017bc  8d542460             lea edx, [esp + 0x60]
// 008017c0  52                   push edx
// 008017c1  ffd7                 call edi
// 008017c3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008017c7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008017cb  8b442468             mov eax, dword ptr [esp + 0x68]
// 008017cf  8d4c1108             lea ecx, [ecx + edx + 8]
// 008017d3  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008017d7  52                   push edx
// 008017d8  83c0ed               add eax, -0x13
// 008017db  50                   push eax
// 008017dc  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008017e0  50                   push eax
// 008017e1  51                   push ecx
// 008017e2  8d8c2480000000       lea ecx, [esp + 0x80]
// 008017e9  51                   push ecx
// 008017ea  ffd7                 call edi
// 008017ec  bf01000000           mov edi, 1
// 008017f1  397c2424             cmp dword ptr [esp + 0x24], edi
// 008017f5  7527                 jne 0x80181e
// 008017f7  8d942494000000       lea edx, [esp + 0x94]
// 008017fe  52                   push edx
// 008017ff  8bce                 mov ecx, esi
// 00801801  e87a42ffff           call 0x7f5a80
// 00801806  8bc8                 mov ecx, eax
// 00801808  897c2414             mov dword ptr [esp + 0x14], edi
// 0080180c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00801812  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0080181a  85c0                 test eax, eax
// 0080181c  7508                 jne 0x801826
// 0080181e  c684249800000000     mov byte ptr [esp + 0x98], 0
// 00801826  f644241401           test byte ptr [esp + 0x14], 1
// 0080182b  7412                 je 0x80183f
// 0080182d  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 00801832  8d8c2494000000       lea ecx, [esp + 0x94]
// 00801839  ff15c0de9800         call dword ptr [0x98dec0]
// 0080183f  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 00801847  7434                 je 0x80187d
// 00801849  8d842498000000       lea eax, [esp + 0x98]
// 00801850  50                   push eax
// 00801851  8bce                 mov ecx, esi
// 00801853  e82842ffff           call 0x7f5a80
// 00801858  50                   push eax
// 00801859  8d4c2444             lea ecx, [esp + 0x44]
// 0080185d  51                   push ecx
// 0080185e  8bcd                 mov ecx, ebp
// 00801860  e84b9bc6ff           call 0x46b3b0
// 00801865  baedffffff           mov edx, 0xffffffed
// 0080186a  2b10                 sub edx, dword ptr [eax]
// 0080186c  8d8c2498000000       lea ecx, [esp + 0x98]
// 00801873  01542458             add dword ptr [esp + 0x58], edx
// 00801877  ff15c0de9800         call dword ptr [0x98dec0]
// 0080187d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00801881  8b07                 mov eax, dword ptr [edi]
// 00801883  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 00801889  8bcf                 mov ecx, edi
// 0080188b  ffd2                 call edx
// 0080188d  8bf8                 mov edi, eax
// 0080188f  85ff                 test edi, edi
// 00801891  750d                 jne 0x8018a0
// 00801893  8d442420             lea eax, [esp + 0x20]
// 00801897  50                   push eax
// 00801898  e833c0ffff           call 0x7fd8d0
// 0080189d  83c404               add esp, 4
// 008018a0  837c243005           cmp dword ptr [esp + 0x30], 5
// 008018a5  752a                 jne 0x8018d1
// 008018a7  8b16                 mov edx, dword ptr [esi]
// 008018a9  8b525c               mov edx, dword ptr [edx + 0x5c]
// 008018ac  8d842494000000       lea eax, [esp + 0x94]
// 008018b3  50                   push eax
// 008018b4  8bce                 mov ecx, esi
// 008018b6  ffd2                 call edx
// 008018b8  834c241402           or dword ptr [esp + 0x14], 2
// 008018bd  8bc8                 mov ecx, eax
// 008018bf  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008018c5  c684249800000001     mov byte ptr [esp + 0x98], 1
// 008018cd  84c0                 test al, al
// 008018cf  7408                 je 0x8018d9
// 008018d1  c684249800000000     mov byte ptr [esp + 0x98], 0
// 008018d9  f644241402           test byte ptr [esp + 0x14], 2
// 008018de  7412                 je 0x8018f2
// 008018e0  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 008018e5  8d8c2494000000       lea ecx, [esp + 0x94]
// 008018ec  ff15c0de9800         call dword ptr [0x98dec0]
// 008018f2  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 008018fa  0f84de020000         je 0x801bde
// 00801900  8d83f8000000         lea eax, [ebx + 0xf8]
// 00801906  50                   push eax
// 00801907  55                   push ebp
// 00801908  8d4c2448             lea ecx, [esp + 0x48]
// 0080190c  e84f9d0400           call 0x84b660
// 00801911  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 00801919  c684248800000001     mov byte ptr [esp + 0x88], 1
// 00801921  742a                 je 0x80194d
// 00801923  8b5508               mov edx, dword ptr [ebp + 8]
// 00801926  8d4c2430             lea ecx, [esp + 0x30]
// 0080192a  51                   push ecx
// 0080192b  6a01                 push 1
// 0080192d  6868619a00           push 0x9a6168
// 00801932  52                   push edx
// 00801933  ff156cb19800         call dword ptr [0x98b16c]
// 00801939  8b442454             mov eax, dword ptr [esp + 0x54]
// 0080193d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00801941  8d44010a             lea eax, [ecx + eax + 0xa]
// 00801945  8944245c             mov dword ptr [esp + 0x5c], eax
// 00801949  8944247c             mov dword ptr [esp + 0x7c], eax
// 0080194d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00801951  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00801955  8b13                 mov edx, dword ptr [ebx]
// 00801957  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 0080195d  50                   push eax
// 0080195e  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00801965  f7df                 neg edi
// 00801967  51                   push ecx
// 00801968  1bff                 sbb edi, edi
// 0080196a  50                   push eax
// 0080196b  81e700f8ffff         and edi, 0xfffff800
// 00801971  81c700080000         add edi, 0x800
// 00801977  81cf00800000         or edi, 0x8000
// 0080197d  57                   push edi
// 0080197e  8d4c2460             lea ecx, [esp + 0x60]
// 00801982  51                   push ecx
// 00801983  8d442434             lea eax, [esp + 0x34]
// 00801987  50                   push eax
// 00801988  55                   push ebp
// 00801989  8bcb                 mov ecx, ebx
// 0080198b  ffd2                 call edx
// 0080198d  837c242401           cmp dword ptr [esp + 0x24], 1
// 00801992  7528                 jne 0x8019bc
// 00801994  8d842494000000       lea eax, [esp + 0x94]
// 0080199b  50                   push eax
// 0080199c  8bce                 mov ecx, esi
// 0080199e  e8dd40ffff           call 0x7f5a80
// 008019a3  834c241404           or dword ptr [esp + 0x14], 4
// 008019a8  8bc8                 mov ecx, eax
// 008019aa  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008019b0  c684249800000001     mov byte ptr [esp + 0x98], 1
// 008019b8  85c0                 test eax, eax
// 008019ba  7508                 jne 0x8019c4
// 008019bc  c684249800000000     mov byte ptr [esp + 0x98], 0
// 008019c4  f644241404           test byte ptr [esp + 0x14], 4
// 008019c9  740d                 je 0x8019d8
// 008019cb  8d8c2494000000       lea ecx, [esp + 0x94]
// 008019d2  ff15c0de9800         call dword ptr [0x98dec0]
// 008019d8  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 008019e0  744e                 je 0x801a30
// 008019e2  8d8c2498000000       lea ecx, [esp + 0x98]
// 008019e9  51                   push ecx
// 008019ea  8bce                 mov ecx, esi
// 008019ec  e88f40ffff           call 0x7f5a80
// 008019f1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008019f5  8b13                 mov edx, dword ptr [ebx]
// 008019f7  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 008019fd  51                   push ecx
// 008019fe  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00801a02  51                   push ecx
// 00801a03  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00801a0a  51                   push ecx
// 00801a0b  6a02                 push 2
// 00801a0d  8d8c2480000000       lea ecx, [esp + 0x80]
// 00801a14  51                   push ecx
// 00801a15  50                   push eax
// 00801a16  55                   push ebp
// 00801a17  8bcb                 mov ecx, ebx
// 00801a19  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 00801a21  ffd2                 call edx
// 00801a23  8d8c2498000000       lea ecx, [esp + 0x98]
// 00801a2a  ff15c0de9800         call dword ptr [0x98dec0]
// 00801a30  8d4c2440             lea ecx, [esp + 0x40]
// 00801a34  c684248800000000     mov byte ptr [esp + 0x88], 0
// 00801a3c  e89f9c0400           call 0x84b6e0
// 00801a41  33ff                 xor edi, edi
// 00801a43  39bc249c000000       cmp dword ptr [esp + 0x9c], edi
// 00801a4a  0f8485000000         je 0x801ad5
// 00801a50  8b442468             mov eax, dword ptr [esp + 0x68]
// 00801a54  8b542450             mov edx, dword ptr [esp + 0x50]
// 00801a58  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00801a5c  83c0f6               add eax, -0xa
// 00801a5f  89442448             mov dword ptr [esp + 0x48], eax
// 00801a63  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00801a67  83c1fe               add ecx, -2
// 00801a6a  89542440             mov dword ptr [esp + 0x40], edx
// 00801a6e  8b16                 mov edx, dword ptr [esi]
// 00801a70  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00801a73  8944244c             mov dword ptr [esp + 0x4c], eax
// 00801a77  8d84249c000000       lea eax, [esp + 0x9c]
// 00801a7e  894c2444             mov dword ptr [esp + 0x44], ecx
// 00801a82  50                   push eax
// 00801a83  8bce                 mov ecx, esi
// 00801a85  ffd2                 call edx
// 00801a87  8bf0                 mov esi, eax
// 00801a89  8b5d00               mov ebx, dword ptr [ebp]
// 00801a8c  6810080000           push 0x810
// 00801a91  8d442444             lea eax, [esp + 0x44]
// 00801a95  50                   push eax
// 00801a96  8bce                 mov ecx, esi
// 00801a98  c684249000000003     mov byte ptr [esp + 0x90], 3
// 00801aa0  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00801aa6  50                   push eax
// 00801aa7  8bce                 mov ecx, esi
// 00801aa9  ff1580de9800         call dword ptr [0x98de80]
// 00801aaf  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00801ab2  50                   push eax
// 00801ab3  8bcd                 mov ecx, ebp
// 00801ab5  ffd2                 call edx
// 00801ab7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00801abe  ff15c0de9800         call dword ptr [0x98dec0]
// 00801ac4  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 00801acb  893e                 mov dword ptr [esi], edi
// 00801acd  897e04               mov dword ptr [esi + 4], edi
// 00801ad0  e922020000           jmp 0x801cf7
// 00801ad5  8b06                 mov eax, dword ptr [esi]
// 00801ad7  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00801ada  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00801ae1  51                   push ecx
// 00801ae2  8bce                 mov ecx, esi
// 00801ae4  ffd2                 call edx
// 00801ae6  50                   push eax
// 00801ae7  8d442434             lea eax, [esp + 0x34]
// 00801aeb  50                   push eax
// 00801aec  8bcd                 mov ecx, ebp
// 00801aee  e8bd98c6ff           call 0x46b3b0
// 00801af3  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00801afa  ff15c0de9800         call dword ptr [0x98dec0]
// 00801b00  8b442430             mov eax, dword ptr [esp + 0x30]
// 00801b04  83c014               add eax, 0x14
// 00801b07  99                   cdq 
// 00801b08  2bc2                 sub eax, edx
// 00801b0a  d1f8                 sar eax, 1
// 00801b0c  68b42a9f00           push 0x9f2ab4
// 00801b11  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00801b18  897c2464             mov dword ptr [esp + 0x64], edi
// 00801b1c  897c2468             mov dword ptr [esp + 0x68], edi
// 00801b20  8944246c             mov dword ptr [esp + 0x6c], eax
// 00801b24  897c2470             mov dword ptr [esp + 0x70], edi
// 00801b28  ff15b8de9800         call dword ptr [0x98deb8]
// 00801b2e  8b7d00               mov edi, dword ptr [ebp]
// 00801b31  6810040000           push 0x410
// 00801b36  8d4c2464             lea ecx, [esp + 0x64]
// 00801b3a  51                   push ecx
// 00801b3b  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00801b42  c684249000000004     mov byte ptr [esp + 0x90], 4
// 00801b4a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00801b50  50                   push eax
// 00801b51  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00801b58  ff1580de9800         call dword ptr [0x98de80]
// 00801b5e  8b5770               mov edx, dword ptr [edi + 0x70]
// 00801b61  50                   push eax
// 00801b62  8bcd                 mov ecx, ebp
// 00801b64  ffd2                 call edx
// 00801b66  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00801b6d  ff15c0de9800         call dword ptr [0x98dec0]
// 00801b73  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 00801b79  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00801b7d  2b542464             sub edx, dword ptr [esp + 0x64]
// 00801b81  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00801b85  2b542454             sub edx, dword ptr [esp + 0x54]
// 00801b89  8bc1                 mov eax, ecx
// 00801b8b  2b442470             sub eax, dword ptr [esp + 0x70]
// 00801b8f  2b442450             sub eax, dword ptr [esp + 0x50]
// 00801b93  03442478             add eax, dword ptr [esp + 0x78]
// 00801b97  03442458             add eax, dword ptr [esp + 0x58]
// 00801b9b  8d7c2820             lea edi, [eax + ebp + 0x20]
// 00801b9f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00801ba3  8d440213             lea eax, [edx + eax + 0x13]
// 00801ba7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00801bab  3bd0                 cmp edx, eax
// 00801bad  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 00801bb4  7f07                 jg 0x801bbd
// 00801bb6  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 00801bbd  8b442430             mov eax, dword ptr [esp + 0x30]
// 00801bc1  99                   cdq 
// 00801bc2  2bc2                 sub eax, edx
// 00801bc4  d1f8                 sar eax, 1
// 00801bc6  03c1                 add eax, ecx
// 00801bc8  8d442820             lea eax, [eax + ebp + 0x20]
// 00801bcc  3bf8                 cmp edi, eax
// 00801bce  7e02                 jle 0x801bd2
// 00801bd0  8bc7                 mov eax, edi
// 00801bd2  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00801bd9  e905010000           jmp 0x801ce3
// 00801bde  8b442418             mov eax, dword ptr [esp + 0x18]
// 00801be2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00801be6  8b13                 mov edx, dword ptr [ebx]
// 00801be8  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 00801bee  50                   push eax
// 00801bef  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00801bf6  f7df                 neg edi
// 00801bf8  51                   push ecx
// 00801bf9  1bff                 sbb edi, edi
// 00801bfb  50                   push eax
// 00801bfc  81e700f8ffff         and edi, 0xfffff800
// 00801c02  81c700080000         add edi, 0x800
// 00801c08  81cf00800000         or edi, 0x8000
// 00801c0e  57                   push edi
// 00801c0f  8d4c2460             lea ecx, [esp + 0x60]
// 00801c13  51                   push ecx
// 00801c14  8d442434             lea eax, [esp + 0x34]
// 00801c18  50                   push eax
// 00801c19  55                   push ebp
// 00801c1a  8bcb                 mov ecx, ebx
// 00801c1c  ffd2                 call edx
// 00801c1e  837c242401           cmp dword ptr [esp + 0x24], 1
// 00801c23  7528                 jne 0x801c4d
// 00801c25  8d842494000000       lea eax, [esp + 0x94]
// 00801c2c  50                   push eax
// 00801c2d  8bce                 mov ecx, esi
// 00801c2f  e84c3effff           call 0x7f5a80
// 00801c34  834c241408           or dword ptr [esp + 0x14], 8
// 00801c39  8bc8                 mov ecx, eax
// 00801c3b  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00801c41  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00801c49  85c0                 test eax, eax
// 00801c4b  7508                 jne 0x801c55
// 00801c4d  c684249800000000     mov byte ptr [esp + 0x98], 0
// 00801c55  f644241408           test byte ptr [esp + 0x14], 8
// 00801c5a  740d                 je 0x801c69
// 00801c5c  8d8c2494000000       lea ecx, [esp + 0x94]
// 00801c63  ff15c0de9800         call dword ptr [0x98dec0]
// 00801c69  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 00801c71  744e                 je 0x801cc1
// 00801c73  8d8c2498000000       lea ecx, [esp + 0x98]
// 00801c7a  51                   push ecx
// 00801c7b  8bce                 mov ecx, esi
// 00801c7d  e8fe3dffff           call 0x7f5a80
// 00801c82  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00801c86  8b13                 mov edx, dword ptr [ebx]
// 00801c88  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 00801c8e  51                   push ecx
// 00801c8f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00801c93  51                   push ecx
// 00801c94  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00801c9b  51                   push ecx
// 00801c9c  6a02                 push 2
// 00801c9e  8d8c2480000000       lea ecx, [esp + 0x80]
// 00801ca5  51                   push ecx
// 00801ca6  50                   push eax
// 00801ca7  55                   push ebp
// 00801ca8  8bcb                 mov ecx, ebx
// 00801caa  c68424a400000005     mov byte ptr [esp + 0xa4], 5
// 00801cb2  ffd2                 call edx
// 00801cb4  8d8c2498000000       lea ecx, [esp + 0x98]
// 00801cbb  ff15c0de9800         call dword ptr [0x98dec0]
// 00801cc1  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 00801cc7  2b442470             sub eax, dword ptr [esp + 0x70]
// 00801ccb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00801ccf  2b442450             sub eax, dword ptr [esp + 0x50]
// 00801cd3  03442478             add eax, dword ptr [esp + 0x78]
// 00801cd7  03442458             add eax, dword ptr [esp + 0x58]
// 00801cdb  8d440820             lea eax, [eax + ecx + 0x20]
// 00801cdf  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00801ce3  6a00                 push 0
// 00801ce5  51                   push ecx
// 00801ce6  50                   push eax
// 00801ce7  56                   push esi
// 00801ce8  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 00801cef  56                   push esi
// 00801cf0  8bcb                 mov ecx, ebx
// 00801cf2  e869c1ffff           call 0x7fde60
// 00801cf7  8d4c2420             lea ecx, [esp + 0x20]
// 00801cfb  ff15c0de9800         call dword ptr [0x98dec0]
// 00801d01  8bc6                 mov eax, esi
// 00801d03  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00801d0a  64890d00000000       mov dword ptr fs:[0], ecx
// 00801d11  59                   pop ecx
// 00801d12  5f                   pop edi
// 00801d13  5e                   pop esi
// 00801d14  5d                   pop ebp
// 00801d15  5b                   pop ebx
// 00801d16  83c478               add esp, 0x78
// 00801d19  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlPopupParent@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp