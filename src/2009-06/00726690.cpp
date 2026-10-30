// roc 2009-06 00726690  unit: CXTPPaintManager  size: 1820 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00726690
//
// 00726690  6aff                 push -1
// 00726692  6865508700           push 0x875065
// 00726697  64a100000000         mov eax, dword ptr fs:[0]
// 0072669d  50                   push eax
// 0072669e  83ec6c               sub esp, 0x6c
// 007266a1  53                   push ebx
// 007266a2  55                   push ebp
// 007266a3  56                   push esi
// 007266a4  57                   push edi
// 007266a5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007266aa  33c4                 xor eax, esp
// 007266ac  50                   push eax
// 007266ad  8d842480000000       lea eax, [esp + 0x80]
// 007266b4  64a300000000         mov dword ptr fs:[0], eax
// 007266ba  8bd9                 mov ebx, ecx
// 007266bc  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 007266c3  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007266c9  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007266cf  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 007266d5  33ed                 xor ebp, ebp
// 007266d7  894c2460             mov dword ptr [esp + 0x60], ecx
// 007266db  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007266e1  8944242c             mov dword ptr [esp + 0x2c], eax
// 007266e5  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007266eb  89542464             mov dword ptr [esp + 0x64], edx
// 007266ef  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 007266f5  894c246c             mov dword ptr [esp + 0x6c], ecx
// 007266f9  8bce                 mov ecx, esi
// 007266fb  896c2414             mov dword ptr [esp + 0x14], ebp
// 007266ff  896c2450             mov dword ptr [esp + 0x50], ebp
// 00726703  896c2454             mov dword ptr [esp + 0x54], ebp
// 00726707  896c2458             mov dword ptr [esp + 0x58], ebp
// 0072670b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0072670f  896c2470             mov dword ptr [esp + 0x70], ebp
// 00726713  896c2474             mov dword ptr [esp + 0x74], ebp
// 00726717  896c2478             mov dword ptr [esp + 0x78], ebp
// 0072671b  896c247c             mov dword ptr [esp + 0x7c], ebp
// 0072671f  89442468             mov dword ptr [esp + 0x68], eax
// 00726723  89542424             mov dword ptr [esp + 0x24], edx
// 00726727  e8448fffff           call 0x71f670
// 0072672c  8bf8                 mov edi, eax
// 0072672e  8b06                 mov eax, dword ptr [esi]
// 00726730  8b5058               mov edx, dword ptr [eax + 0x58]
// 00726733  8d4c2420             lea ecx, [esp + 0x20]
// 00726737  51                   push ecx
// 00726738  8bce                 mov ecx, esi
// 0072673a  897c2434             mov dword ptr [esp + 0x34], edi
// 0072673e  ffd2                 call edx
// 00726740  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 00726747  3bfd                 cmp edi, ebp
// 00726749  740c                 je 0x726757
// 0072674b  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 00726752  83ff01               cmp edi, 1
// 00726755  740b                 je 0x726762
// 00726757  c784249800000001000000 mov dword ptr [esp + 0x98], 1
// 00726762  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00726766  8b03                 mov eax, dword ptr [ebx]
// 00726768  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 0072676e  57                   push edi
// 0072676f  8d4c243c             lea ecx, [esp + 0x3c]
// 00726773  51                   push ecx
// 00726774  8bcb                 mov ecx, ebx
// 00726776  ffd2                 call edx
// 00726778  8b07                 mov eax, dword ptr [edi]
// 0072677a  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 00726780  8bcf                 mov ecx, edi
// 00726782  ffd2                 call edx
// 00726784  85c0                 test eax, eax
// 00726786  7415                 je 0x72679d
// 00726788  39af10020000         cmp dword ptr [edi + 0x210], ebp
// 0072678e  740d                 je 0x72679d
// 00726790  8b442438             mov eax, dword ptr [esp + 0x38]
// 00726794  8d0c00               lea ecx, [eax + eax]
// 00726797  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0072679b  eb08                 jmp 0x7267a5
// 0072679d  8b542438             mov edx, dword ptr [esp + 0x38]
// 007267a1  8954241c             mov dword ptr [esp + 0x1c], edx
// 007267a5  8b06                 mov eax, dword ptr [esi]
// 007267a7  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007267aa  8bce                 mov ecx, esi
// 007267ac  ffd2                 call edx
// 007267ae  89442428             mov dword ptr [esp + 0x28], eax
// 007267b2  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007267b8  83f8ff               cmp eax, -1
// 007267bb  750f                 jne 0x7267cc
// 007267bd  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007267c3  3bcd                 cmp ecx, ebp
// 007267c5  7405                 je 0x7267cc
// 007267c7  e8d496ffff           call 0x71fea0
// 007267cc  89442418             mov dword ptr [esp + 0x18], eax
// 007267d0  b804000000           mov eax, 4
// 007267d5  39442424             cmp dword ptr [esp + 0x24], eax
// 007267d9  750a                 jne 0x7267e5
// 007267db  39442418             cmp dword ptr [esp + 0x18], eax
// 007267df  7504                 jne 0x7267e5
// 007267e1  896c2418             mov dword ptr [esp + 0x18], ebp
// 007267e5  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 007267eb  83f808               cmp eax, 8
// 007267ee  7524                 jne 0x726814
// 007267f0  39ab90000000         cmp dword ptr [ebx + 0x90], ebp
// 007267f6  7504                 jne 0x7267fc
// 007267f8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 007267fc  83f808               cmp eax, 8
// 007267ff  7513                 jne 0x726814
// 00726801  39ac2498000000       cmp dword ptr [esp + 0x98], ebp
// 00726808  750a                 jne 0x726814
// 0072680a  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 00726810  8944243c             mov dword ptr [esp + 0x3c], eax
// 00726814  39ac249c000000       cmp dword ptr [esp + 0x9c], ebp
// 0072681b  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 00726822  0f84e9000000         je 0x726911
// 00726828  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0072682e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00726832  03442460             add eax, dword ptr [esp + 0x60]
// 00726836  8b542468             mov edx, dword ptr [esp + 0x68]
// 0072683a  0344241c             add eax, dword ptr [esp + 0x1c]
// 0072683e  8b3da4ed8900         mov edi, dword ptr [0x89eda4]
// 00726844  51                   push ecx
// 00726845  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00726849  52                   push edx
// 0072684a  51                   push ecx
// 0072684b  50                   push eax
// 0072684c  8d542460             lea edx, [esp + 0x60]
// 00726850  52                   push edx
// 00726851  ffd7                 call edi
// 00726853  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00726857  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0072685b  8b442468             mov eax, dword ptr [esp + 0x68]
// 0072685f  8d4c1108             lea ecx, [ecx + edx + 8]
// 00726863  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00726867  52                   push edx
// 00726868  83c0ed               add eax, -0x13
// 0072686b  50                   push eax
// 0072686c  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00726870  50                   push eax
// 00726871  51                   push ecx
// 00726872  8d8c2480000000       lea ecx, [esp + 0x80]
// 00726879  51                   push ecx
// 0072687a  ffd7                 call edi
// 0072687c  bf01000000           mov edi, 1
// 00726881  397c2424             cmp dword ptr [esp + 0x24], edi
// 00726885  7527                 jne 0x7268ae
// 00726887  8d942494000000       lea edx, [esp + 0x94]
// 0072688e  52                   push edx
// 0072688f  8bce                 mov ecx, esi
// 00726891  e8fa8bffff           call 0x71f490
// 00726896  8bc8                 mov ecx, eax
// 00726898  897c2414             mov dword ptr [esp + 0x14], edi
// 0072689c  ff1554fb8900         call dword ptr [0x89fb54]
// 007268a2  c684249800000001     mov byte ptr [esp + 0x98], 1
// 007268aa  85c0                 test eax, eax
// 007268ac  7508                 jne 0x7268b6
// 007268ae  c684249800000000     mov byte ptr [esp + 0x98], 0
// 007268b6  f644241401           test byte ptr [esp + 0x14], 1
// 007268bb  7412                 je 0x7268cf
// 007268bd  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 007268c2  8d8c2494000000       lea ecx, [esp + 0x94]
// 007268c9  ff1510fd8900         call dword ptr [0x89fd10]
// 007268cf  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 007268d7  7434                 je 0x72690d
// 007268d9  8d842498000000       lea eax, [esp + 0x98]
// 007268e0  50                   push eax
// 007268e1  8bce                 mov ecx, esi
// 007268e3  e8a88bffff           call 0x71f490
// 007268e8  50                   push eax
// 007268e9  8d4c2444             lea ecx, [esp + 0x44]
// 007268ed  51                   push ecx
// 007268ee  8bcd                 mov ecx, ebp
// 007268f0  e80bbfd3ff           call 0x462800
// 007268f5  baedffffff           mov edx, 0xffffffed
// 007268fa  2b10                 sub edx, dword ptr [eax]
// 007268fc  8d8c2498000000       lea ecx, [esp + 0x98]
// 00726903  01542458             add dword ptr [esp + 0x58], edx
// 00726907  ff1510fd8900         call dword ptr [0x89fd10]
// 0072690d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00726911  8b07                 mov eax, dword ptr [edi]
// 00726913  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 00726919  8bcf                 mov ecx, edi
// 0072691b  ffd2                 call edx
// 0072691d  8bf8                 mov edi, eax
// 0072691f  85ff                 test edi, edi
// 00726921  750d                 jne 0x726930
// 00726923  8d442420             lea eax, [esp + 0x20]
// 00726927  50                   push eax
// 00726928  e8e3c0ffff           call 0x722a10
// 0072692d  83c404               add esp, 4
// 00726930  837c243005           cmp dword ptr [esp + 0x30], 5
// 00726935  752a                 jne 0x726961
// 00726937  8b16                 mov edx, dword ptr [esi]
// 00726939  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0072693c  8d842494000000       lea eax, [esp + 0x94]
// 00726943  50                   push eax
// 00726944  8bce                 mov ecx, esi
// 00726946  ffd2                 call edx
// 00726948  834c241402           or dword ptr [esp + 0x14], 2
// 0072694d  8bc8                 mov ecx, eax
// 0072694f  ff155cfb8900         call dword ptr [0x89fb5c]
// 00726955  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0072695d  84c0                 test al, al
// 0072695f  7408                 je 0x726969
// 00726961  c684249800000000     mov byte ptr [esp + 0x98], 0
// 00726969  f644241402           test byte ptr [esp + 0x14], 2
// 0072696e  7412                 je 0x726982
// 00726970  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 00726975  8d8c2494000000       lea ecx, [esp + 0x94]
// 0072697c  ff1510fd8900         call dword ptr [0x89fd10]
// 00726982  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 0072698a  0f84de020000         je 0x726c6e
// 00726990  8d83f8000000         lea eax, [ebx + 0xf8]
// 00726996  50                   push eax
// 00726997  55                   push ebp
// 00726998  8d4c2448             lea ecx, [esp + 0x48]
// 0072699c  e8bf9e0400           call 0x770860
// 007269a1  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 007269a9  c684248800000001     mov byte ptr [esp + 0x88], 1
// 007269b1  742a                 je 0x7269dd
// 007269b3  8b5508               mov edx, dword ptr [ebp + 8]
// 007269b6  8d4c2430             lea ecx, [esp + 0x30]
// 007269ba  51                   push ecx
// 007269bb  6a01                 push 1
// 007269bd  68f8338b00           push 0x8b33f8
// 007269c2  52                   push edx
// 007269c3  ff1550e18900         call dword ptr [0x89e150]
// 007269c9  8b442454             mov eax, dword ptr [esp + 0x54]
// 007269cd  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007269d1  8d44010a             lea eax, [ecx + eax + 0xa]
// 007269d5  8944245c             mov dword ptr [esp + 0x5c], eax
// 007269d9  8944247c             mov dword ptr [esp + 0x7c], eax
// 007269dd  8b442418             mov eax, dword ptr [esp + 0x18]
// 007269e1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007269e5  8b13                 mov edx, dword ptr [ebx]
// 007269e7  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 007269ed  50                   push eax
// 007269ee  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 007269f5  f7df                 neg edi
// 007269f7  51                   push ecx
// 007269f8  1bff                 sbb edi, edi
// 007269fa  50                   push eax
// 007269fb  81e700f8ffff         and edi, 0xfffff800
// 00726a01  81c700080000         add edi, 0x800
// 00726a07  81cf00800000         or edi, 0x8000
// 00726a0d  57                   push edi
// 00726a0e  8d4c2460             lea ecx, [esp + 0x60]
// 00726a12  51                   push ecx
// 00726a13  8d442434             lea eax, [esp + 0x34]
// 00726a17  50                   push eax
// 00726a18  55                   push ebp
// 00726a19  8bcb                 mov ecx, ebx
// 00726a1b  ffd2                 call edx
// 00726a1d  837c242401           cmp dword ptr [esp + 0x24], 1
// 00726a22  7528                 jne 0x726a4c
// 00726a24  8d842494000000       lea eax, [esp + 0x94]
// 00726a2b  50                   push eax
// 00726a2c  8bce                 mov ecx, esi
// 00726a2e  e85d8affff           call 0x71f490
// 00726a33  834c241404           or dword ptr [esp + 0x14], 4
// 00726a38  8bc8                 mov ecx, eax
// 00726a3a  ff1554fb8900         call dword ptr [0x89fb54]
// 00726a40  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00726a48  85c0                 test eax, eax
// 00726a4a  7508                 jne 0x726a54
// 00726a4c  c684249800000000     mov byte ptr [esp + 0x98], 0
// 00726a54  f644241404           test byte ptr [esp + 0x14], 4
// 00726a59  740d                 je 0x726a68
// 00726a5b  8d8c2494000000       lea ecx, [esp + 0x94]
// 00726a62  ff1510fd8900         call dword ptr [0x89fd10]
// 00726a68  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 00726a70  744e                 je 0x726ac0
// 00726a72  8d8c2498000000       lea ecx, [esp + 0x98]
// 00726a79  51                   push ecx
// 00726a7a  8bce                 mov ecx, esi
// 00726a7c  e80f8affff           call 0x71f490
// 00726a81  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00726a85  8b13                 mov edx, dword ptr [ebx]
// 00726a87  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 00726a8d  51                   push ecx
// 00726a8e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00726a92  51                   push ecx
// 00726a93  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00726a9a  51                   push ecx
// 00726a9b  6a02                 push 2
// 00726a9d  8d8c2480000000       lea ecx, [esp + 0x80]
// 00726aa4  51                   push ecx
// 00726aa5  50                   push eax
// 00726aa6  55                   push ebp
// 00726aa7  8bcb                 mov ecx, ebx
// 00726aa9  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 00726ab1  ffd2                 call edx
// 00726ab3  8d8c2498000000       lea ecx, [esp + 0x98]
// 00726aba  ff1510fd8900         call dword ptr [0x89fd10]
// 00726ac0  8d4c2440             lea ecx, [esp + 0x40]
// 00726ac4  c684248800000000     mov byte ptr [esp + 0x88], 0
// 00726acc  e80f9e0400           call 0x7708e0
// 00726ad1  33ff                 xor edi, edi
// 00726ad3  39bc249c000000       cmp dword ptr [esp + 0x9c], edi
// 00726ada  0f8485000000         je 0x726b65
// 00726ae0  8b442468             mov eax, dword ptr [esp + 0x68]
// 00726ae4  8b542450             mov edx, dword ptr [esp + 0x50]
// 00726ae8  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00726aec  83c0f6               add eax, -0xa
// 00726aef  89442448             mov dword ptr [esp + 0x48], eax
// 00726af3  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00726af7  83c1fe               add ecx, -2
// 00726afa  89542440             mov dword ptr [esp + 0x40], edx
// 00726afe  8b16                 mov edx, dword ptr [esi]
// 00726b00  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00726b03  8944244c             mov dword ptr [esp + 0x4c], eax
// 00726b07  8d84249c000000       lea eax, [esp + 0x9c]
// 00726b0e  894c2444             mov dword ptr [esp + 0x44], ecx
// 00726b12  50                   push eax
// 00726b13  8bce                 mov ecx, esi
// 00726b15  ffd2                 call edx
// 00726b17  8bf0                 mov esi, eax
// 00726b19  8b5d00               mov ebx, dword ptr [ebp]
// 00726b1c  6810080000           push 0x810
// 00726b21  8d442444             lea eax, [esp + 0x44]
// 00726b25  50                   push eax
// 00726b26  8bce                 mov ecx, esi
// 00726b28  c684249000000003     mov byte ptr [esp + 0x90], 3
// 00726b30  ff1554fb8900         call dword ptr [0x89fb54]
// 00726b36  50                   push eax
// 00726b37  8bce                 mov ecx, esi
// 00726b39  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00726b3f  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00726b42  50                   push eax
// 00726b43  8bcd                 mov ecx, ebp
// 00726b45  ffd2                 call edx
// 00726b47  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00726b4e  ff1510fd8900         call dword ptr [0x89fd10]
// 00726b54  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 00726b5b  893e                 mov dword ptr [esi], edi
// 00726b5d  897e04               mov dword ptr [esi + 4], edi
// 00726b60  e922020000           jmp 0x726d87
// 00726b65  8b06                 mov eax, dword ptr [esi]
// 00726b67  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00726b6a  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00726b71  51                   push ecx
// 00726b72  8bce                 mov ecx, esi
// 00726b74  ffd2                 call edx
// 00726b76  50                   push eax
// 00726b77  8d442434             lea eax, [esp + 0x34]
// 00726b7b  50                   push eax
// 00726b7c  8bcd                 mov ecx, ebp
// 00726b7e  e87dbcd3ff           call 0x462800
// 00726b83  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00726b8a  ff1510fd8900         call dword ptr [0x89fd10]
// 00726b90  8b442430             mov eax, dword ptr [esp + 0x30]
// 00726b94  83c014               add eax, 0x14
// 00726b97  99                   cdq 
// 00726b98  2bc2                 sub eax, edx
// 00726b9a  d1f8                 sar eax, 1
// 00726b9c  68d4258f00           push 0x8f25d4
// 00726ba1  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00726ba8  897c2464             mov dword ptr [esp + 0x64], edi
// 00726bac  897c2468             mov dword ptr [esp + 0x68], edi
// 00726bb0  8944246c             mov dword ptr [esp + 0x6c], eax
// 00726bb4  897c2470             mov dword ptr [esp + 0x70], edi
// 00726bb8  ff1508fd8900         call dword ptr [0x89fd08]
// 00726bbe  8b7d00               mov edi, dword ptr [ebp]
// 00726bc1  6810040000           push 0x410
// 00726bc6  8d4c2464             lea ecx, [esp + 0x64]
// 00726bca  51                   push ecx
// 00726bcb  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00726bd2  c684249000000004     mov byte ptr [esp + 0x90], 4
// 00726bda  ff1554fb8900         call dword ptr [0x89fb54]
// 00726be0  50                   push eax
// 00726be1  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 00726be8  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00726bee  8b5770               mov edx, dword ptr [edi + 0x70]
// 00726bf1  50                   push eax
// 00726bf2  8bcd                 mov ecx, ebp
// 00726bf4  ffd2                 call edx
// 00726bf6  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00726bfd  ff1510fd8900         call dword ptr [0x89fd10]
// 00726c03  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 00726c09  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00726c0d  2b542464             sub edx, dword ptr [esp + 0x64]
// 00726c11  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00726c15  2b542454             sub edx, dword ptr [esp + 0x54]
// 00726c19  8bc1                 mov eax, ecx
// 00726c1b  2b442470             sub eax, dword ptr [esp + 0x70]
// 00726c1f  2b442450             sub eax, dword ptr [esp + 0x50]
// 00726c23  03442478             add eax, dword ptr [esp + 0x78]
// 00726c27  03442458             add eax, dword ptr [esp + 0x58]
// 00726c2b  8d7c2820             lea edi, [eax + ebp + 0x20]
// 00726c2f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00726c33  8d440213             lea eax, [edx + eax + 0x13]
// 00726c37  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00726c3b  3bd0                 cmp edx, eax
// 00726c3d  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 00726c44  7f07                 jg 0x726c4d
// 00726c46  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 00726c4d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00726c51  99                   cdq 
// 00726c52  2bc2                 sub eax, edx
// 00726c54  d1f8                 sar eax, 1
// 00726c56  03c1                 add eax, ecx
// 00726c58  8d442820             lea eax, [eax + ebp + 0x20]
// 00726c5c  3bf8                 cmp edi, eax
// 00726c5e  7e02                 jle 0x726c62
// 00726c60  8bc7                 mov eax, edi
// 00726c62  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00726c69  e905010000           jmp 0x726d73
// 00726c6e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00726c72  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00726c76  8b13                 mov edx, dword ptr [ebx]
// 00726c78  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 00726c7e  50                   push eax
// 00726c7f  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 00726c86  f7df                 neg edi
// 00726c88  51                   push ecx
// 00726c89  1bff                 sbb edi, edi
// 00726c8b  50                   push eax
// 00726c8c  81e700f8ffff         and edi, 0xfffff800
// 00726c92  81c700080000         add edi, 0x800
// 00726c98  81cf00800000         or edi, 0x8000
// 00726c9e  57                   push edi
// 00726c9f  8d4c2460             lea ecx, [esp + 0x60]
// 00726ca3  51                   push ecx
// 00726ca4  8d442434             lea eax, [esp + 0x34]
// 00726ca8  50                   push eax
// 00726ca9  55                   push ebp
// 00726caa  8bcb                 mov ecx, ebx
// 00726cac  ffd2                 call edx
// 00726cae  837c242401           cmp dword ptr [esp + 0x24], 1
// 00726cb3  7528                 jne 0x726cdd
// 00726cb5  8d842494000000       lea eax, [esp + 0x94]
// 00726cbc  50                   push eax
// 00726cbd  8bce                 mov ecx, esi
// 00726cbf  e8cc87ffff           call 0x71f490
// 00726cc4  834c241408           or dword ptr [esp + 0x14], 8
// 00726cc9  8bc8                 mov ecx, eax
// 00726ccb  ff1554fb8900         call dword ptr [0x89fb54]
// 00726cd1  c684249800000001     mov byte ptr [esp + 0x98], 1
// 00726cd9  85c0                 test eax, eax
// 00726cdb  7508                 jne 0x726ce5
// 00726cdd  c684249800000000     mov byte ptr [esp + 0x98], 0
// 00726ce5  f644241408           test byte ptr [esp + 0x14], 8
// 00726cea  740d                 je 0x726cf9
// 00726cec  8d8c2494000000       lea ecx, [esp + 0x94]
// 00726cf3  ff1510fd8900         call dword ptr [0x89fd10]
// 00726cf9  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 00726d01  744e                 je 0x726d51
// 00726d03  8d8c2498000000       lea ecx, [esp + 0x98]
// 00726d0a  51                   push ecx
// 00726d0b  8bce                 mov ecx, esi
// 00726d0d  e87e87ffff           call 0x71f490
// 00726d12  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00726d16  8b13                 mov edx, dword ptr [ebx]
// 00726d18  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 00726d1e  51                   push ecx
// 00726d1f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00726d23  51                   push ecx
// 00726d24  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00726d2b  51                   push ecx
// 00726d2c  6a02                 push 2
// 00726d2e  8d8c2480000000       lea ecx, [esp + 0x80]
// 00726d35  51                   push ecx
// 00726d36  50                   push eax
// 00726d37  55                   push ebp
// 00726d38  8bcb                 mov ecx, ebx
// 00726d3a  c68424a400000005     mov byte ptr [esp + 0xa4], 5
// 00726d42  ffd2                 call edx
// 00726d44  8d8c2498000000       lea ecx, [esp + 0x98]
// 00726d4b  ff1510fd8900         call dword ptr [0x89fd10]
// 00726d51  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 00726d57  2b442470             sub eax, dword ptr [esp + 0x70]
// 00726d5b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00726d5f  2b442450             sub eax, dword ptr [esp + 0x50]
// 00726d63  03442478             add eax, dword ptr [esp + 0x78]
// 00726d67  03442458             add eax, dword ptr [esp + 0x58]
// 00726d6b  8d440820             lea eax, [eax + ecx + 0x20]
// 00726d6f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00726d73  6a00                 push 0
// 00726d75  51                   push ecx
// 00726d76  50                   push eax
// 00726d77  56                   push esi
// 00726d78  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 00726d7f  56                   push esi
// 00726d80  8bcb                 mov ecx, ebx
// 00726d82  e819c2ffff           call 0x722fa0
// 00726d87  8d4c2420             lea ecx, [esp + 0x20]
// 00726d8b  ff1510fd8900         call dword ptr [0x89fd10]
// 00726d91  8bc6                 mov eax, esi
// 00726d93  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00726d9a  64890d00000000       mov dword ptr fs:[0], ecx
// 00726da1  59                   pop ecx
// 00726da2  5f                   pop edi
// 00726da3  5e                   pop esi
// 00726da4  5d                   pop ebp
// 00726da5  5b                   pop ebx
// 00726da6  83c478               add esp, 0x78
// 00726da9  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlPopupParent@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp