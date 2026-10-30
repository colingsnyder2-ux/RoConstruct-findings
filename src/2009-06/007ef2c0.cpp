// roc 2009-06 007ef2c0  unit: CXTPPropertyGridPaintManager  size: 1667 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ef2c0
//
// 007ef2c0  6aff                 push -1
// 007ef2c2  6816098800           push 0x880916
// 007ef2c7  64a100000000         mov eax, dword ptr fs:[0]
// 007ef2cd  50                   push eax
// 007ef2ce  81ec80000000         sub esp, 0x80
// 007ef2d4  53                   push ebx
// 007ef2d5  55                   push ebp
// 007ef2d6  56                   push esi
// 007ef2d7  57                   push edi
// 007ef2d8  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007ef2dd  33c4                 xor eax, esp
// 007ef2df  50                   push eax
// 007ef2e0  8d842494000000       lea eax, [esp + 0x94]
// 007ef2e7  64a300000000         mov dword ptr fs:[0], eax
// 007ef2ed  8bf9                 mov edi, ecx
// 007ef2ef  897c2424             mov dword ptr [esp + 0x24], edi
// 007ef2f3  33db                 xor ebx, ebx
// 007ef2f5  399c24b8000000       cmp dword ptr [esp + 0xb8], ebx
// 007ef2fc  7511                 jne 0x7ef30f
// 007ef2fe  c744242801000000     mov dword ptr [esp + 0x28], 1
// 007ef306  399c24bc000000       cmp dword ptr [esp + 0xbc], ebx
// 007ef30d  7404                 je 0x7ef313
// 007ef30f  895c2428             mov dword ptr [esp + 0x28], ebx
// 007ef313  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 007ef31a  8d4764               lea eax, [edi + 0x64]
// 007ef31d  50                   push eax
// 007ef31e  56                   push esi
// 007ef31f  8d4c247c             lea ecx, [esp + 0x7c]
// 007ef323  e83815f8ff           call 0x770860
// 007ef328  6afc                 push -4
// 007ef32a  6afa                 push -6
// 007ef32c  8d8424b0000000       lea eax, [esp + 0xb0]
// 007ef333  50                   push eax
// 007ef334  899c24a8000000       mov dword ptr [esp + 0xa8], ebx
// 007ef33b  ff15bced8900         call dword ptr [0x89edbc]
// 007ef341  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 007ef344  8b8938010000         mov ecx, dword ptr [ecx + 0x138]
// 007ef34a  e8d18efdff           call 0x7c8220
// 007ef34f  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 007ef356  8b4e08               mov ecx, dword ptr [esi + 8]
// 007ef359  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 007ef360  8bd8                 mov ebx, eax
// 007ef362  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 007ef369  2bc5                 sub eax, ebp
// 007ef36b  89442434             mov dword ptr [esp + 0x34], eax
// 007ef36f  8d44243c             lea eax, [esp + 0x3c]
// 007ef373  50                   push eax
// 007ef374  6a03                 push 3
// 007ef376  68bc149000           push 0x9014bc
// 007ef37b  51                   push ecx
// 007ef37c  895c243c             mov dword ptr [esp + 0x3c], ebx
// 007ef380  89542428             mov dword ptr [esp + 0x28], edx
// 007ef384  ff1550e18900         call dword ptr [0x89e150]
// 007ef38a  33c0                 xor eax, eax
// 007ef38c  8944241c             mov dword ptr [esp + 0x1c], eax
// 007ef390  85db                 test ebx, ebx
// 007ef392  7f40                 jg 0x7ef3d4
// 007ef394  8d4c2474             lea ecx, [esp + 0x74]
// 007ef398  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 007ef3a3  e83815f8ff           call 0x7708e0
// 007ef3a8  83c8ff               or eax, 0xffffffff
// 007ef3ab  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007ef3b2  64890d00000000       mov dword ptr fs:[0], ecx
// 007ef3b9  59                   pop ecx
// 007ef3ba  5f                   pop edi
// 007ef3bb  5e                   pop esi
// 007ef3bc  5d                   pop ebp
// 007ef3bd  5b                   pop ebx
// 007ef3be  81c48c000000         add esp, 0x8c
// 007ef3c4  c21c00               ret 0x1c
// 007ef3c7  eb07                 jmp 0x7ef3d0
// 007ef3c9  8da42400000000       lea esp, [esp]
// 007ef3d0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ef3d4  8b5760               mov edx, dword ptr [edi + 0x60]
// 007ef3d7  8b8a38010000         mov ecx, dword ptr [edx + 0x138]
// 007ef3dd  85c0                 test eax, eax
// 007ef3df  0f8c59050000         jl 0x7ef93e
// 007ef3e5  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 007ef3e8  0f8d50050000         jge 0x7ef93e
// 007ef3ee  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 007ef3f1  8b1c81               mov ebx, dword ptr [ecx + eax*4]
// 007ef3f4  8d0481               lea eax, [ecx + eax*4]
// 007ef3f7  8d542414             lea edx, [esp + 0x14]
// 007ef3fb  52                   push edx
// 007ef3fc  8bcb                 mov ecx, ebx
// 007ef3fe  e81df6ffff           call 0x7eea20
// 007ef403  8d4c2414             lea ecx, [esp + 0x14]
// 007ef407  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 007ef40f  ff155cfb8900         call dword ptr [0x89fb5c]
// 007ef415  84c0                 test al, al
// 007ef417  0f8531040000         jne 0x7ef84e
// 007ef41d  8d442444             lea eax, [esp + 0x44]
// 007ef421  50                   push eax
// 007ef422  8d4c2418             lea ecx, [esp + 0x18]
// 007ef426  ff1554fb8900         call dword ptr [0x89fb54]
// 007ef42c  50                   push eax
// 007ef42d  8d4c241c             lea ecx, [esp + 0x1c]
// 007ef431  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ef437  8b4e08               mov ecx, dword ptr [esi + 8]
// 007ef43a  50                   push eax
// 007ef43b  51                   push ecx
// 007ef43c  ff1550e18900         call dword ptr [0x89e150]
// 007ef442  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 007ef446  8d142f               lea edx, [edi + ebp]
// 007ef449  3b542434             cmp edx, dword ptr [esp + 0x34]
// 007ef44d  0f8cb6020000         jl 0x7ef709
// 007ef453  8d4c2414             lea ecx, [esp + 0x14]
// 007ef457  ff1554fb8900         call dword ptr [0x89fb54]
// 007ef45d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007ef461  48                   dec eax
// 007ef462  2bcd                 sub ecx, ebp
// 007ef464  0fafc1               imul eax, ecx
// 007ef467  99                   cdq 
// 007ef468  f7ff                 idiv edi
// 007ef46a  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 007ef471  83f801               cmp eax, 1
// 007ef474  89442438             mov dword ptr [esp + 0x38], eax
// 007ef478  8bf8                 mov edi, eax
// 007ef47a  7d08                 jge 0x7ef484
// 007ef47c  3be9                 cmp ebp, ecx
// 007ef47e  0f84bd030000         je 0x7ef841
// 007ef484  85c0                 test eax, eax
// 007ef486  7c45                 jl 0x7ef4cd
// 007ef488  eb06                 jmp 0x7ef490
// 007ef48a  8d9b00000000         lea ebx, [ebx]
// 007ef490  57                   push edi
// 007ef491  8d4c2418             lea ecx, [esp + 0x18]
// 007ef495  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ef49b  3c20                 cmp al, 0x20
// 007ef49d  7423                 je 0x7ef4c2
// 007ef49f  57                   push edi
// 007ef4a0  8d4c2418             lea ecx, [esp + 0x18]
// 007ef4a4  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ef4aa  3c2c                 cmp al, 0x2c
// 007ef4ac  7414                 je 0x7ef4c2
// 007ef4ae  57                   push edi
// 007ef4af  8d4c2418             lea ecx, [esp + 0x18]
// 007ef4b3  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ef4b9  3c2d                 cmp al, 0x2d
// 007ef4bb  7405                 je 0x7ef4c2
// 007ef4bd  83ef01               sub edi, 1
// 007ef4c0  79ce                 jns 0x7ef490
// 007ef4c2  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 007ef4c9  8b442438             mov eax, dword ptr [esp + 0x38]
// 007ef4cd  85ff                 test edi, edi
// 007ef4cf  7f15                 jg 0x7ef4e6
// 007ef4d1  3be9                 cmp ebp, ecx
// 007ef4d3  740f                 je 0x7ef4e4
// 007ef4d5  8b542440             mov edx, dword ptr [esp + 0x40]
// 007ef4d9  01542418             add dword ptr [esp + 0x18], edx
// 007ef4dd  8be9                 mov ebp, ecx
// 007ef4df  e9a3010000           jmp 0x7ef687
// 007ef4e4  8bf8                 mov edi, eax
// 007ef4e6  47                   inc edi
// 007ef4e7  57                   push edi
// 007ef4e8  8d442424             lea eax, [esp + 0x24]
// 007ef4ec  50                   push eax
// 007ef4ed  8d4c241c             lea ecx, [esp + 0x1c]
// 007ef4f1  ff1510f48900         call dword ptr [0x89f410]
// 007ef4f7  57                   push edi
// 007ef4f8  8d4c2434             lea ecx, [esp + 0x34]
// 007ef4fc  51                   push ecx
// 007ef4fd  8d4c241c             lea ecx, [esp + 0x1c]
// 007ef501  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 007ef509  ff1504008a00         call dword ptr [0x8a0004]
// 007ef50f  8d54244c             lea edx, [esp + 0x4c]
// 007ef513  52                   push edx
// 007ef514  8d4c2424             lea ecx, [esp + 0x24]
// 007ef518  c68424a000000003     mov byte ptr [esp + 0xa0], 3
// 007ef520  ff1554fb8900         call dword ptr [0x89fb54]
// 007ef526  50                   push eax
// 007ef527  8d4c2428             lea ecx, [esp + 0x28]
// 007ef52b  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ef531  50                   push eax
// 007ef532  8b4608               mov eax, dword ptr [esi + 8]
// 007ef535  50                   push eax
// 007ef536  ff1550e18900         call dword ptr [0x89e150]
// 007ef53c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007ef540  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ef544  8d3c01               lea edi, [ecx + eax]
// 007ef547  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007ef54e  3bf9                 cmp edi, ecx
// 007ef550  897c2418             mov dword ptr [esp + 0x18], edi
// 007ef554  8bd7                 mov edx, edi
// 007ef556  7c02                 jl 0x7ef55a
// 007ef558  8bd1                 mov edx, ecx
// 007ef55a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007ef55e  03cd                 add ecx, ebp
// 007ef560  3b8c24b0000000       cmp ecx, dword ptr [esp + 0xb0]
// 007ef567  7c07                 jl 0x7ef570
// 007ef569  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 007ef570  837c242800           cmp dword ptr [esp + 0x28], 0
// 007ef575  896c2454             mov dword ptr [esp + 0x54], ebp
// 007ef579  89442458             mov dword ptr [esp + 0x58], eax
// 007ef57d  894c245c             mov dword ptr [esp + 0x5c], ecx
// 007ef581  89542460             mov dword ptr [esp + 0x60], edx
// 007ef585  0f8424010000         je 0x7ef6af
// 007ef58b  896b2c               mov dword ptr [ebx + 0x2c], ebp
// 007ef58e  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007ef592  894330               mov dword ptr [ebx + 0x30], eax
// 007ef595  894b34               mov dword ptr [ebx + 0x34], ecx
// 007ef598  895338               mov dword ptr [ebx + 0x38], edx
// 007ef59b  8b4574               mov eax, dword ptr [ebp + 0x74]
// 007ef59e  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 007ef5a4  0588000000           add eax, 0x88
// 007ef5a9  83f9ff               cmp ecx, -1
// 007ef5ac  7505                 jne 0x7ef5b3
// 007ef5ae  8b4004               mov eax, dword ptr [eax + 4]
// 007ef5b1  eb02                 jmp 0x7ef5b5
// 007ef5b3  8bc1                 mov eax, ecx
// 007ef5b5  8b16                 mov edx, dword ptr [esi]
// 007ef5b7  50                   push eax
// 007ef5b8  8b4238               mov eax, dword ptr [edx + 0x38]
// 007ef5bb  8bce                 mov ecx, esi
// 007ef5bd  ffd0                 call eax
// 007ef5bf  8b3e                 mov edi, dword ptr [esi]
// 007ef5c1  6820080000           push 0x820
// 007ef5c6  8d4c2458             lea ecx, [esp + 0x58]
// 007ef5ca  51                   push ecx
// 007ef5cb  8d4c2428             lea ecx, [esp + 0x28]
// 007ef5cf  83c770               add edi, 0x70
// 007ef5d2  ff1554fb8900         call dword ptr [0x89fb54]
// 007ef5d8  50                   push eax
// 007ef5d9  8d4c242c             lea ecx, [esp + 0x2c]
// 007ef5dd  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ef5e3  8b17                 mov edx, dword ptr [edi]
// 007ef5e5  50                   push eax
// 007ef5e6  8bce                 mov ecx, esi
// 007ef5e8  ffd2                 call edx
// 007ef5ea  8b4344               mov eax, dword ptr [ebx + 0x44]
// 007ef5ed  8b4034               mov eax, dword ptr [eax + 0x34]
// 007ef5f0  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 007ef5f3  3b8848010000         cmp ecx, dword ptr [eax + 0x148]
// 007ef5f9  7552                 jne 0x7ef64d
// 007ef5fb  85c0                 test eax, eax
// 007ef5fd  7504                 jne 0x7ef603
// 007ef5ff  33ff                 xor edi, edi
// 007ef601  eb03                 jmp 0x7ef606
// 007ef603  8b7820               mov edi, dword ptr [eax + 0x20]
// 007ef606  ff1578ee8900         call dword ptr [0x89ee78]
// 007ef60c  3bc7                 cmp eax, edi
// 007ef60e  753d                 jne 0x7ef64d
// 007ef610  8b4574               mov eax, dword ptr [ebp + 0x74]
// 007ef613  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 007ef616  83c034               add eax, 0x34
// 007ef619  83f9ff               cmp ecx, -1
// 007ef61c  7505                 jne 0x7ef623
// 007ef61e  8b4004               mov eax, dword ptr [eax + 4]
// 007ef621  eb02                 jmp 0x7ef625
// 007ef623  8bc1                 mov eax, ecx
// 007ef625  8b16                 mov edx, dword ptr [esi]
// 007ef627  50                   push eax
// 007ef628  8b4238               mov eax, dword ptr [edx + 0x38]
// 007ef62b  8bce                 mov ecx, esi
// 007ef62d  ffd0                 call eax
// 007ef62f  8b16                 mov edx, dword ptr [esi]
// 007ef631  8b4234               mov eax, dword ptr [edx + 0x34]
// 007ef634  6a00                 push 0
// 007ef636  8bce                 mov ecx, esi
// 007ef638  ffd0                 call eax
// 007ef63a  8b5604               mov edx, dword ptr [esi + 4]
// 007ef63d  ff442460             inc dword ptr [esp + 0x60]
// 007ef641  8d4c2454             lea ecx, [esp + 0x54]
// 007ef645  51                   push ecx
// 007ef646  52                   push edx
// 007ef647  ff15e0ee8900         call dword ptr [0x89eee0]
// 007ef64d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007ef651  8bac24a8000000       mov ebp, dword ptr [esp + 0xa8]
// 007ef658  8d442430             lea eax, [esp + 0x30]
// 007ef65c  50                   push eax
// 007ef65d  8d4c2418             lea ecx, [esp + 0x18]
// 007ef661  897c241c             mov dword ptr [esp + 0x1c], edi
// 007ef665  ff1508fa8900         call dword ptr [0x89fa08]
// 007ef66b  8d4c2430             lea ecx, [esp + 0x30]
// 007ef66f  ff1510fd8900         call dword ptr [0x89fd10]
// 007ef675  8d4c2420             lea ecx, [esp + 0x20]
// 007ef679  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 007ef681  ff1510fd8900         call dword ptr [0x89fd10]
// 007ef687  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ef68b  3b8c24b4000000       cmp ecx, dword ptr [esp + 0xb4]
// 007ef692  0f8d97020000         jge 0x7ef92f
// 007ef698  8d4c2414             lea ecx, [esp + 0x14]
// 007ef69c  ff155cfb8900         call dword ptr [0x89fb5c]
// 007ef6a2  84c0                 test al, al
// 007ef6a4  0f8473fdffff         je 0x7ef41d
// 007ef6aa  e99b010000           jmp 0x7ef84a
// 007ef6af  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 007ef6b6  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 007ef6bd  50                   push eax
// 007ef6be  51                   push ecx
// 007ef6bf  8d54245c             lea edx, [esp + 0x5c]
// 007ef6c3  52                   push edx
// 007ef6c4  ff15c0ed8900         call dword ptr [0x89edc0]
// 007ef6ca  85c0                 test eax, eax
// 007ef6cc  7483                 je 0x7ef651
// 007ef6ce  8d4c2430             lea ecx, [esp + 0x30]
// 007ef6d2  ff1510fd8900         call dword ptr [0x89fd10]
// 007ef6d8  8d4c2420             lea ecx, [esp + 0x20]
// 007ef6dc  ff1510fd8900         call dword ptr [0x89fd10]
// 007ef6e2  8d4c2414             lea ecx, [esp + 0x14]
// 007ef6e6  ff1510fd8900         call dword ptr [0x89fd10]
// 007ef6ec  8d4c2474             lea ecx, [esp + 0x74]
// 007ef6f0  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 007ef6fb  e8e011f8ff           call 0x7708e0
// 007ef700  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ef704  e9a2fcffff           jmp 0x7ef3ab
// 007ef709  8b542440             mov edx, dword ptr [esp + 0x40]
// 007ef70d  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ef711  8d0c02               lea ecx, [edx + eax]
// 007ef714  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 007ef71b  3bca                 cmp ecx, edx
// 007ef71d  7d02                 jge 0x7ef721
// 007ef71f  8bd1                 mov edx, ecx
// 007ef721  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 007ef728  03fd                 add edi, ebp
// 007ef72a  3bf9                 cmp edi, ecx
// 007ef72c  897c2438             mov dword ptr [esp + 0x38], edi
// 007ef730  7d02                 jge 0x7ef734
// 007ef732  8bcf                 mov ecx, edi
// 007ef734  837c242800           cmp dword ptr [esp + 0x28], 0
// 007ef739  896c2464             mov dword ptr [esp + 0x64], ebp
// 007ef73d  89442468             mov dword ptr [esp + 0x68], eax
// 007ef741  894c246c             mov dword ptr [esp + 0x6c], ecx
// 007ef745  89542470             mov dword ptr [esp + 0x70], edx
// 007ef749  0f84cb000000         je 0x7ef81a
// 007ef74f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007ef753  896b2c               mov dword ptr [ebx + 0x2c], ebp
// 007ef756  894330               mov dword ptr [ebx + 0x30], eax
// 007ef759  894b34               mov dword ptr [ebx + 0x34], ecx
// 007ef75c  895338               mov dword ptr [ebx + 0x38], edx
// 007ef75f  8b4774               mov eax, dword ptr [edi + 0x74]
// 007ef762  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 007ef768  0588000000           add eax, 0x88
// 007ef76d  83f9ff               cmp ecx, -1
// 007ef770  7505                 jne 0x7ef777
// 007ef772  8b4004               mov eax, dword ptr [eax + 4]
// 007ef775  eb02                 jmp 0x7ef779
// 007ef777  8bc1                 mov eax, ecx
// 007ef779  8b16                 mov edx, dword ptr [esi]
// 007ef77b  50                   push eax
// 007ef77c  8b4238               mov eax, dword ptr [edx + 0x38]
// 007ef77f  8bce                 mov ecx, esi
// 007ef781  ffd0                 call eax
// 007ef783  8b2e                 mov ebp, dword ptr [esi]
// 007ef785  6820080000           push 0x820
// 007ef78a  8d4c2468             lea ecx, [esp + 0x68]
// 007ef78e  51                   push ecx
// 007ef78f  8d4c241c             lea ecx, [esp + 0x1c]
// 007ef793  83c570               add ebp, 0x70
// 007ef796  ff1554fb8900         call dword ptr [0x89fb54]
// 007ef79c  50                   push eax
// 007ef79d  8d4c2420             lea ecx, [esp + 0x20]
// 007ef7a1  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ef7a7  8b5500               mov edx, dword ptr [ebp]
// 007ef7aa  50                   push eax
// 007ef7ab  8bce                 mov ecx, esi
// 007ef7ad  ffd2                 call edx
// 007ef7af  8b4344               mov eax, dword ptr [ebx + 0x44]
// 007ef7b2  8b4034               mov eax, dword ptr [eax + 0x34]
// 007ef7b5  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 007ef7b8  3b8848010000         cmp ecx, dword ptr [eax + 0x148]
// 007ef7be  7552                 jne 0x7ef812
// 007ef7c0  85c0                 test eax, eax
// 007ef7c2  7504                 jne 0x7ef7c8
// 007ef7c4  33db                 xor ebx, ebx
// 007ef7c6  eb03                 jmp 0x7ef7cb
// 007ef7c8  8b5820               mov ebx, dword ptr [eax + 0x20]
// 007ef7cb  ff1578ee8900         call dword ptr [0x89ee78]
// 007ef7d1  3bc3                 cmp eax, ebx
// 007ef7d3  753d                 jne 0x7ef812
// 007ef7d5  8b4774               mov eax, dword ptr [edi + 0x74]
// 007ef7d8  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 007ef7db  83c034               add eax, 0x34
// 007ef7de  83f9ff               cmp ecx, -1
// 007ef7e1  7505                 jne 0x7ef7e8
// 007ef7e3  8b4004               mov eax, dword ptr [eax + 4]
// 007ef7e6  eb02                 jmp 0x7ef7ea
// 007ef7e8  8bc1                 mov eax, ecx
// 007ef7ea  8b16                 mov edx, dword ptr [esi]
// 007ef7ec  50                   push eax
// 007ef7ed  8b4238               mov eax, dword ptr [edx + 0x38]
// 007ef7f0  8bce                 mov ecx, esi
// 007ef7f2  ffd0                 call eax
// 007ef7f4  8b16                 mov edx, dword ptr [esi]
// 007ef7f6  8b4234               mov eax, dword ptr [edx + 0x34]
// 007ef7f9  6a00                 push 0
// 007ef7fb  8bce                 mov ecx, esi
// 007ef7fd  ffd0                 call eax
// 007ef7ff  8b5604               mov edx, dword ptr [esi + 4]
// 007ef802  ff442470             inc dword ptr [esp + 0x70]
// 007ef806  8d4c2464             lea ecx, [esp + 0x64]
// 007ef80a  51                   push ecx
// 007ef80b  52                   push edx
// 007ef80c  ff15e0ee8900         call dword ptr [0x89eee0]
// 007ef812  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007ef816  8bef                 mov ebp, edi
// 007ef818  eb30                 jmp 0x7ef84a
// 007ef81a  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 007ef821  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 007ef828  50                   push eax
// 007ef829  51                   push ecx
// 007ef82a  8d54246c             lea edx, [esp + 0x6c]
// 007ef82e  52                   push edx
// 007ef82f  ff15c0ed8900         call dword ptr [0x89edc0]
// 007ef835  85c0                 test eax, eax
// 007ef837  0f85a5feffff         jne 0x7ef6e2
// 007ef83d  8bef                 mov ebp, edi
// 007ef83f  eb09                 jmp 0x7ef84a
// 007ef841  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007ef845  48                   dec eax
// 007ef846  8944241c             mov dword ptr [esp + 0x1c], eax
// 007ef84a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007ef84e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007ef852  3b9c24b4000000       cmp ebx, dword ptr [esp + 0xb4]
// 007ef859  0f8dd0000000         jge 0x7ef92f
// 007ef85f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007ef863  49                   dec ecx
// 007ef864  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 007ef868  0f84c1000000         je 0x7ef92f
// 007ef86e  837c242800           cmp dword ptr [esp + 0x28], 0
// 007ef873  0f8489000000         je 0x7ef902
// 007ef879  8d576c               lea edx, [edi + 0x6c]
// 007ef87c  52                   push edx
// 007ef87d  8d4c2478             lea ecx, [esp + 0x78]
// 007ef881  e86afbf7ff           call 0x76f3f0
// 007ef886  8b4774               mov eax, dword ptr [edi + 0x74]
// 007ef889  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007ef88c  83c040               add eax, 0x40
// 007ef88f  83f9ff               cmp ecx, -1
// 007ef892  7505                 jne 0x7ef899
// 007ef894  8b4004               mov eax, dword ptr [eax + 4]
// 007ef897  eb02                 jmp 0x7ef89b
// 007ef899  8bc1                 mov eax, ecx
// 007ef89b  8b16                 mov edx, dword ptr [esi]
// 007ef89d  50                   push eax
// 007ef89e  8b4238               mov eax, dword ptr [edx + 0x38]
// 007ef8a1  8bce                 mov ecx, esi
// 007ef8a3  ffd0                 call eax
// 007ef8a5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007ef8a9  8d0419               lea eax, [ecx + ebx]
// 007ef8ac  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007ef8b3  3bc1                 cmp eax, ecx
// 007ef8b5  7c02                 jl 0x7ef8b9
// 007ef8b7  8bc1                 mov eax, ecx
// 007ef8b9  6820080000           push 0x820
// 007ef8be  8d8c2488000000       lea ecx, [esp + 0x88]
// 007ef8c5  51                   push ecx
// 007ef8c6  8d5508               lea edx, [ebp + 8]
// 007ef8c9  89842498000000       mov dword ptr [esp + 0x98], eax
// 007ef8d0  8b06                 mov eax, dword ptr [esi]
// 007ef8d2  6a01                 push 1
// 007ef8d4  89942498000000       mov dword ptr [esp + 0x98], edx
// 007ef8db  8b5070               mov edx, dword ptr [eax + 0x70]
// 007ef8de  688cda8b00           push 0x8bda8c
// 007ef8e3  8bce                 mov ecx, esi
// 007ef8e5  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 007ef8ec  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 007ef8f3  ffd2                 call edx
// 007ef8f5  8d4764               lea eax, [edi + 0x64]
// 007ef8f8  50                   push eax
// 007ef8f9  8d4c2478             lea ecx, [esp + 0x78]
// 007ef8fd  e8eefaf7ff           call 0x76f3f0
// 007ef902  8d4c2414             lea ecx, [esp + 0x14]
// 007ef906  83c508               add ebp, 8
// 007ef909  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 007ef911  ff1510fd8900         call dword ptr [0x89fd10]
// 007ef917  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ef91b  40                   inc eax
// 007ef91c  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 007ef920  8944241c             mov dword ptr [esp + 0x1c], eax
// 007ef924  0f8ca6faffff         jl 0x7ef3d0
// 007ef92a  e965faffff           jmp 0x7ef394
// 007ef92f  8d4c2414             lea ecx, [esp + 0x14]
// 007ef933  ff1510fd8900         call dword ptr [0x89fd10]
// 007ef939  e956faffff           jmp 0x7ef394
// 007ef93e  e8a193f2ff           call 0x718ce4
// copied from an identical function in another client (function ?HitTestVerbs@CXTPPropertyGridPaintManager@@QAEHPAVCDC@@VCRect@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp