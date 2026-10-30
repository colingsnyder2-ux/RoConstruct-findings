// roc 2012-06 0098b810  unit: CXTPPaintManager  size: 1820 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098b810
//
// 0098b810  6aff                 push -1
// 0098b812  68b5c1ad00           push 0xadc1b5
// 0098b817  64a100000000         mov eax, dword ptr fs:[0]
// 0098b81d  50                   push eax
// 0098b81e  83ec6c               sub esp, 0x6c
// 0098b821  53                   push ebx
// 0098b822  55                   push ebp
// 0098b823  56                   push esi
// 0098b824  57                   push edi
// 0098b825  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098b82a  33c4                 xor eax, esp
// 0098b82c  50                   push eax
// 0098b82d  8d842480000000       lea eax, [esp + 0x80]
// 0098b834  64a300000000         mov dword ptr fs:[0], eax
// 0098b83a  8bd9                 mov ebx, ecx
// 0098b83c  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0098b843  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0098b849  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0098b84f  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0098b855  33ed                 xor ebp, ebp
// 0098b857  894c2460             mov dword ptr [esp + 0x60], ecx
// 0098b85b  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0098b861  8944242c             mov dword ptr [esp + 0x2c], eax
// 0098b865  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0098b86b  89542464             mov dword ptr [esp + 0x64], edx
// 0098b86f  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0098b875  894c246c             mov dword ptr [esp + 0x6c], ecx
// 0098b879  8bce                 mov ecx, esi
// 0098b87b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0098b87f  896c2450             mov dword ptr [esp + 0x50], ebp
// 0098b883  896c2454             mov dword ptr [esp + 0x54], ebp
// 0098b887  896c2458             mov dword ptr [esp + 0x58], ebp
// 0098b88b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0098b88f  896c2470             mov dword ptr [esp + 0x70], ebp
// 0098b893  896c2474             mov dword ptr [esp + 0x74], ebp
// 0098b897  896c2478             mov dword ptr [esp + 0x78], ebp
// 0098b89b  896c247c             mov dword ptr [esp + 0x7c], ebp
// 0098b89f  89442468             mov dword ptr [esp + 0x68], eax
// 0098b8a3  89542424             mov dword ptr [esp + 0x24], edx
// 0098b8a7  e8a48effff           call 0x984750
// 0098b8ac  8bf8                 mov edi, eax
// 0098b8ae  8b06                 mov eax, dword ptr [esi]
// 0098b8b0  8b5058               mov edx, dword ptr [eax + 0x58]
// 0098b8b3  8d4c2420             lea ecx, [esp + 0x20]
// 0098b8b7  51                   push ecx
// 0098b8b8  8bce                 mov ecx, esi
// 0098b8ba  897c2434             mov dword ptr [esp + 0x34], edi
// 0098b8be  ffd2                 call edx
// 0098b8c0  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 0098b8c7  3bfd                 cmp edi, ebp
// 0098b8c9  740c                 je 0x98b8d7
// 0098b8cb  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 0098b8d2  83ff01               cmp edi, 1
// 0098b8d5  740b                 je 0x98b8e2
// 0098b8d7  c784249800000001000000 mov dword ptr [esp + 0x98], 1
// 0098b8e2  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0098b8e6  8b03                 mov eax, dword ptr [ebx]
// 0098b8e8  8b9010010000         mov edx, dword ptr [eax + 0x110]
// 0098b8ee  57                   push edi
// 0098b8ef  8d4c243c             lea ecx, [esp + 0x3c]
// 0098b8f3  51                   push ecx
// 0098b8f4  8bcb                 mov ecx, ebx
// 0098b8f6  ffd2                 call edx
// 0098b8f8  8b07                 mov eax, dword ptr [edi]
// 0098b8fa  8b90a0010000         mov edx, dword ptr [eax + 0x1a0]
// 0098b900  8bcf                 mov ecx, edi
// 0098b902  ffd2                 call edx
// 0098b904  85c0                 test eax, eax
// 0098b906  7415                 je 0x98b91d
// 0098b908  39af10020000         cmp dword ptr [edi + 0x210], ebp
// 0098b90e  740d                 je 0x98b91d
// 0098b910  8b442438             mov eax, dword ptr [esp + 0x38]
// 0098b914  8d0c00               lea ecx, [eax + eax]
// 0098b917  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0098b91b  eb08                 jmp 0x98b925
// 0098b91d  8b542438             mov edx, dword ptr [esp + 0x38]
// 0098b921  8954241c             mov dword ptr [esp + 0x1c], edx
// 0098b925  8b06                 mov eax, dword ptr [esi]
// 0098b927  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0098b92a  8bce                 mov ecx, esi
// 0098b92c  ffd2                 call edx
// 0098b92e  89442428             mov dword ptr [esp + 0x28], eax
// 0098b932  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0098b938  83f8ff               cmp eax, -1
// 0098b93b  750f                 jne 0x98b94c
// 0098b93d  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0098b943  3bcd                 cmp ecx, ebp
// 0098b945  7405                 je 0x98b94c
// 0098b947  e8d495ffff           call 0x984f20
// 0098b94c  89442418             mov dword ptr [esp + 0x18], eax
// 0098b950  b804000000           mov eax, 4
// 0098b955  39442424             cmp dword ptr [esp + 0x24], eax
// 0098b959  750a                 jne 0x98b965
// 0098b95b  39442418             cmp dword ptr [esp + 0x18], eax
// 0098b95f  7504                 jne 0x98b965
// 0098b961  896c2418             mov dword ptr [esp + 0x18], ebp
// 0098b965  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0098b96b  83f808               cmp eax, 8
// 0098b96e  7524                 jne 0x98b994
// 0098b970  39ab90000000         cmp dword ptr [ebx + 0x90], ebp
// 0098b976  7504                 jne 0x98b97c
// 0098b978  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0098b97c  83f808               cmp eax, 8
// 0098b97f  7513                 jne 0x98b994
// 0098b981  39ac2498000000       cmp dword ptr [esp + 0x98], ebp
// 0098b988  750a                 jne 0x98b994
// 0098b98a  8b8310010000         mov eax, dword ptr [ebx + 0x110]
// 0098b990  8944243c             mov dword ptr [esp + 0x3c], eax
// 0098b994  39ac249c000000       cmp dword ptr [esp + 0x9c], ebp
// 0098b99b  8bac2494000000       mov ebp, dword ptr [esp + 0x94]
// 0098b9a2  0f84e9000000         je 0x98ba91
// 0098b9a8  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0098b9ae  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0098b9b2  03442460             add eax, dword ptr [esp + 0x60]
// 0098b9b6  8b542468             mov edx, dword ptr [esp + 0x68]
// 0098b9ba  0344241c             add eax, dword ptr [esp + 0x1c]
// 0098b9be  8b3d6c3bb200         mov edi, dword ptr [0xb23b6c]
// 0098b9c4  51                   push ecx
// 0098b9c5  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0098b9c9  52                   push edx
// 0098b9ca  51                   push ecx
// 0098b9cb  50                   push eax
// 0098b9cc  8d542460             lea edx, [esp + 0x60]
// 0098b9d0  52                   push edx
// 0098b9d1  ffd7                 call edi
// 0098b9d3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0098b9d7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0098b9db  8b442468             mov eax, dword ptr [esp + 0x68]
// 0098b9df  8d4c1108             lea ecx, [ecx + edx + 8]
// 0098b9e3  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0098b9e7  52                   push edx
// 0098b9e8  83c0ed               add eax, -0x13
// 0098b9eb  50                   push eax
// 0098b9ec  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0098b9f0  50                   push eax
// 0098b9f1  51                   push ecx
// 0098b9f2  8d8c2480000000       lea ecx, [esp + 0x80]
// 0098b9f9  51                   push ecx
// 0098b9fa  ffd7                 call edi
// 0098b9fc  bf01000000           mov edi, 1
// 0098ba01  397c2424             cmp dword ptr [esp + 0x24], edi
// 0098ba05  7527                 jne 0x98ba2e
// 0098ba07  8d942494000000       lea edx, [esp + 0x94]
// 0098ba0e  52                   push edx
// 0098ba0f  8bce                 mov ecx, esi
// 0098ba11  e82a8bffff           call 0x984540
// 0098ba16  8bc8                 mov ecx, eax
// 0098ba18  897c2414             mov dword ptr [esp + 0x14], edi
// 0098ba1c  ff155846b200         call dword ptr [0xb24658]
// 0098ba22  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0098ba2a  85c0                 test eax, eax
// 0098ba2c  7508                 jne 0x98ba36
// 0098ba2e  c684249800000000     mov byte ptr [esp + 0x98], 0
// 0098ba36  f644241401           test byte ptr [esp + 0x14], 1
// 0098ba3b  7412                 je 0x98ba4f
// 0098ba3d  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 0098ba42  8d8c2494000000       lea ecx, [esp + 0x94]
// 0098ba49  ff15d047b200         call dword ptr [0xb247d0]
// 0098ba4f  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 0098ba57  7434                 je 0x98ba8d
// 0098ba59  8d842498000000       lea eax, [esp + 0x98]
// 0098ba60  50                   push eax
// 0098ba61  8bce                 mov ecx, esi
// 0098ba63  e8d88affff           call 0x984540
// 0098ba68  50                   push eax
// 0098ba69  8d4c2444             lea ecx, [esp + 0x44]
// 0098ba6d  51                   push ecx
// 0098ba6e  8bcd                 mov ecx, ebp
// 0098ba70  e86b2ab1ff           call 0x49e4e0
// 0098ba75  baedffffff           mov edx, 0xffffffed
// 0098ba7a  2b10                 sub edx, dword ptr [eax]
// 0098ba7c  8d8c2498000000       lea ecx, [esp + 0x98]
// 0098ba83  01542458             add dword ptr [esp + 0x58], edx
// 0098ba87  ff15d047b200         call dword ptr [0xb247d0]
// 0098ba8d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0098ba91  8b07                 mov eax, dword ptr [edi]
// 0098ba93  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0098ba99  8bcf                 mov ecx, edi
// 0098ba9b  ffd2                 call edx
// 0098ba9d  8bf8                 mov edi, eax
// 0098ba9f  85ff                 test edi, edi
// 0098baa1  750d                 jne 0x98bab0
// 0098baa3  8d442420             lea eax, [esp + 0x20]
// 0098baa7  50                   push eax
// 0098baa8  e873c0ffff           call 0x987b20
// 0098baad  83c404               add esp, 4
// 0098bab0  837c243005           cmp dword ptr [esp + 0x30], 5
// 0098bab5  752a                 jne 0x98bae1
// 0098bab7  8b16                 mov edx, dword ptr [esi]
// 0098bab9  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0098babc  8d842494000000       lea eax, [esp + 0x94]
// 0098bac3  50                   push eax
// 0098bac4  8bce                 mov ecx, esi
// 0098bac6  ffd2                 call edx
// 0098bac8  834c241402           or dword ptr [esp + 0x14], 2
// 0098bacd  8bc8                 mov ecx, eax
// 0098bacf  ff156046b200         call dword ptr [0xb24660]
// 0098bad5  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0098badd  84c0                 test al, al
// 0098badf  7408                 je 0x98bae9
// 0098bae1  c684249800000000     mov byte ptr [esp + 0x98], 0
// 0098bae9  f644241402           test byte ptr [esp + 0x14], 2
// 0098baee  7412                 je 0x98bb02
// 0098baf0  83642414fd           and dword ptr [esp + 0x14], 0xfffffffd
// 0098baf5  8d8c2494000000       lea ecx, [esp + 0x94]
// 0098bafc  ff15d047b200         call dword ptr [0xb247d0]
// 0098bb02  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 0098bb0a  0f84de020000         je 0x98bdee
// 0098bb10  8d83f8000000         lea eax, [ebx + 0xf8]
// 0098bb16  50                   push eax
// 0098bb17  55                   push ebp
// 0098bb18  8d4c2448             lea ecx, [esp + 0x48]
// 0098bb1c  e80f9a0400           call 0x9d5530
// 0098bb21  83bc249c00000000     cmp dword ptr [esp + 0x9c], 0
// 0098bb29  c684248800000001     mov byte ptr [esp + 0x88], 1
// 0098bb31  742a                 je 0x98bb5d
// 0098bb33  8b5508               mov edx, dword ptr [ebp + 8]
// 0098bb36  8d4c2430             lea ecx, [esp + 0x30]
// 0098bb3a  51                   push ecx
// 0098bb3b  6a01                 push 1
// 0098bb3d  68ecf3b400           push 0xb4f3ec
// 0098bb42  52                   push edx
// 0098bb43  ff154021b200         call dword ptr [0xb22140]
// 0098bb49  8b442454             mov eax, dword ptr [esp + 0x54]
// 0098bb4d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098bb51  8d44010a             lea eax, [ecx + eax + 0xa]
// 0098bb55  8944245c             mov dword ptr [esp + 0x5c], eax
// 0098bb59  8944247c             mov dword ptr [esp + 0x7c], eax
// 0098bb5d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0098bb61  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098bb65  8b13                 mov edx, dword ptr [ebx]
// 0098bb67  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 0098bb6d  50                   push eax
// 0098bb6e  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0098bb75  f7df                 neg edi
// 0098bb77  51                   push ecx
// 0098bb78  1bff                 sbb edi, edi
// 0098bb7a  50                   push eax
// 0098bb7b  81e700f8ffff         and edi, 0xfffff800
// 0098bb81  81c700080000         add edi, 0x800
// 0098bb87  81cf00800000         or edi, 0x8000
// 0098bb8d  57                   push edi
// 0098bb8e  8d4c2460             lea ecx, [esp + 0x60]
// 0098bb92  51                   push ecx
// 0098bb93  8d442434             lea eax, [esp + 0x34]
// 0098bb97  50                   push eax
// 0098bb98  55                   push ebp
// 0098bb99  8bcb                 mov ecx, ebx
// 0098bb9b  ffd2                 call edx
// 0098bb9d  837c242401           cmp dword ptr [esp + 0x24], 1
// 0098bba2  7528                 jne 0x98bbcc
// 0098bba4  8d842494000000       lea eax, [esp + 0x94]
// 0098bbab  50                   push eax
// 0098bbac  8bce                 mov ecx, esi
// 0098bbae  e88d89ffff           call 0x984540
// 0098bbb3  834c241404           or dword ptr [esp + 0x14], 4
// 0098bbb8  8bc8                 mov ecx, eax
// 0098bbba  ff155846b200         call dword ptr [0xb24658]
// 0098bbc0  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0098bbc8  85c0                 test eax, eax
// 0098bbca  7508                 jne 0x98bbd4
// 0098bbcc  c684249800000000     mov byte ptr [esp + 0x98], 0
// 0098bbd4  f644241404           test byte ptr [esp + 0x14], 4
// 0098bbd9  740d                 je 0x98bbe8
// 0098bbdb  8d8c2494000000       lea ecx, [esp + 0x94]
// 0098bbe2  ff15d047b200         call dword ptr [0xb247d0]
// 0098bbe8  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 0098bbf0  744e                 je 0x98bc40
// 0098bbf2  8d8c2498000000       lea ecx, [esp + 0x98]
// 0098bbf9  51                   push ecx
// 0098bbfa  8bce                 mov ecx, esi
// 0098bbfc  e83f89ffff           call 0x984540
// 0098bc01  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0098bc05  8b13                 mov edx, dword ptr [ebx]
// 0098bc07  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 0098bc0d  51                   push ecx
// 0098bc0e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0098bc12  51                   push ecx
// 0098bc13  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0098bc1a  51                   push ecx
// 0098bc1b  6a02                 push 2
// 0098bc1d  8d8c2480000000       lea ecx, [esp + 0x80]
// 0098bc24  51                   push ecx
// 0098bc25  50                   push eax
// 0098bc26  55                   push ebp
// 0098bc27  8bcb                 mov ecx, ebx
// 0098bc29  c68424a400000002     mov byte ptr [esp + 0xa4], 2
// 0098bc31  ffd2                 call edx
// 0098bc33  8d8c2498000000       lea ecx, [esp + 0x98]
// 0098bc3a  ff15d047b200         call dword ptr [0xb247d0]
// 0098bc40  8d4c2440             lea ecx, [esp + 0x40]
// 0098bc44  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0098bc4c  e85f990400           call 0x9d55b0
// 0098bc51  33ff                 xor edi, edi
// 0098bc53  39bc249c000000       cmp dword ptr [esp + 0x9c], edi
// 0098bc5a  0f8485000000         je 0x98bce5
// 0098bc60  8b442468             mov eax, dword ptr [esp + 0x68]
// 0098bc64  8b542450             mov edx, dword ptr [esp + 0x50]
// 0098bc68  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0098bc6c  83c0f6               add eax, -0xa
// 0098bc6f  89442448             mov dword ptr [esp + 0x48], eax
// 0098bc73  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0098bc77  83c1fe               add ecx, -2
// 0098bc7a  89542440             mov dword ptr [esp + 0x40], edx
// 0098bc7e  8b16                 mov edx, dword ptr [esi]
// 0098bc80  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0098bc83  8944244c             mov dword ptr [esp + 0x4c], eax
// 0098bc87  8d84249c000000       lea eax, [esp + 0x9c]
// 0098bc8e  894c2444             mov dword ptr [esp + 0x44], ecx
// 0098bc92  50                   push eax
// 0098bc93  8bce                 mov ecx, esi
// 0098bc95  ffd2                 call edx
// 0098bc97  8bf0                 mov esi, eax
// 0098bc99  8b5d00               mov ebx, dword ptr [ebp]
// 0098bc9c  6810080000           push 0x810
// 0098bca1  8d442444             lea eax, [esp + 0x44]
// 0098bca5  50                   push eax
// 0098bca6  8bce                 mov ecx, esi
// 0098bca8  c684249000000003     mov byte ptr [esp + 0x90], 3
// 0098bcb0  ff155846b200         call dword ptr [0xb24658]
// 0098bcb6  50                   push eax
// 0098bcb7  8bce                 mov ecx, esi
// 0098bcb9  ff159847b200         call dword ptr [0xb24798]
// 0098bcbf  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0098bcc2  50                   push eax
// 0098bcc3  8bcd                 mov ecx, ebp
// 0098bcc5  ffd2                 call edx
// 0098bcc7  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0098bcce  ff15d047b200         call dword ptr [0xb247d0]
// 0098bcd4  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 0098bcdb  893e                 mov dword ptr [esi], edi
// 0098bcdd  897e04               mov dword ptr [esi + 4], edi
// 0098bce0  e922020000           jmp 0x98bf07
// 0098bce5  8b06                 mov eax, dword ptr [esi]
// 0098bce7  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0098bcea  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0098bcf1  51                   push ecx
// 0098bcf2  8bce                 mov ecx, esi
// 0098bcf4  ffd2                 call edx
// 0098bcf6  50                   push eax
// 0098bcf7  8d442434             lea eax, [esp + 0x34]
// 0098bcfb  50                   push eax
// 0098bcfc  8bcd                 mov ecx, ebp
// 0098bcfe  e8dd27b1ff           call 0x49e4e0
// 0098bd03  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0098bd0a  ff15d047b200         call dword ptr [0xb247d0]
// 0098bd10  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098bd14  83c014               add eax, 0x14
// 0098bd17  99                   cdq 
// 0098bd18  2bc2                 sub eax, edx
// 0098bd1a  d1f8                 sar eax, 1
// 0098bd1c  685cd2c000           push 0xc0d25c
// 0098bd21  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0098bd28  897c2464             mov dword ptr [esp + 0x64], edi
// 0098bd2c  897c2468             mov dword ptr [esp + 0x68], edi
// 0098bd30  8944246c             mov dword ptr [esp + 0x6c], eax
// 0098bd34  897c2470             mov dword ptr [esp + 0x70], edi
// 0098bd38  ff15c847b200         call dword ptr [0xb247c8]
// 0098bd3e  8b7d00               mov edi, dword ptr [ebp]
// 0098bd41  6810040000           push 0x410
// 0098bd46  8d4c2464             lea ecx, [esp + 0x64]
// 0098bd4a  51                   push ecx
// 0098bd4b  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0098bd52  c684249000000004     mov byte ptr [esp + 0x90], 4
// 0098bd5a  ff155846b200         call dword ptr [0xb24658]
// 0098bd60  50                   push eax
// 0098bd61  8d8c24a8000000       lea ecx, [esp + 0xa8]
// 0098bd68  ff159847b200         call dword ptr [0xb24798]
// 0098bd6e  8b5770               mov edx, dword ptr [edi + 0x70]
// 0098bd71  50                   push eax
// 0098bd72  8bcd                 mov ecx, ebp
// 0098bd74  ffd2                 call edx
// 0098bd76  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0098bd7d  ff15d047b200         call dword ptr [0xb247d0]
// 0098bd83  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 0098bd89  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0098bd8d  2b542464             sub edx, dword ptr [esp + 0x64]
// 0098bd91  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0098bd95  2b542454             sub edx, dword ptr [esp + 0x54]
// 0098bd99  8bc1                 mov eax, ecx
// 0098bd9b  2b442470             sub eax, dword ptr [esp + 0x70]
// 0098bd9f  2b442450             sub eax, dword ptr [esp + 0x50]
// 0098bda3  03442478             add eax, dword ptr [esp + 0x78]
// 0098bda7  03442458             add eax, dword ptr [esp + 0x58]
// 0098bdab  8d7c2820             lea edi, [eax + ebp + 0x20]
// 0098bdaf  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0098bdb3  8d440213             lea eax, [edx + eax + 0x13]
// 0098bdb7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0098bdbb  3bd0                 cmp edx, eax
// 0098bdbd  8994249c000000       mov dword ptr [esp + 0x9c], edx
// 0098bdc4  7f07                 jg 0x98bdcd
// 0098bdc6  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 0098bdcd  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098bdd1  99                   cdq 
// 0098bdd2  2bc2                 sub eax, edx
// 0098bdd4  d1f8                 sar eax, 1
// 0098bdd6  03c1                 add eax, ecx
// 0098bdd8  8d442820             lea eax, [eax + ebp + 0x20]
// 0098bddc  3bf8                 cmp edi, eax
// 0098bdde  7e02                 jle 0x98bde2
// 0098bde0  8bc7                 mov eax, edi
// 0098bde2  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0098bde9  e905010000           jmp 0x98bef3
// 0098bdee  8b442418             mov eax, dword ptr [esp + 0x18]
// 0098bdf2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098bdf6  8b13                 mov edx, dword ptr [ebx]
// 0098bdf8  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 0098bdfe  50                   push eax
// 0098bdff  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0098be06  f7df                 neg edi
// 0098be08  51                   push ecx
// 0098be09  1bff                 sbb edi, edi
// 0098be0b  50                   push eax
// 0098be0c  81e700f8ffff         and edi, 0xfffff800
// 0098be12  81c700080000         add edi, 0x800
// 0098be18  81cf00800000         or edi, 0x8000
// 0098be1e  57                   push edi
// 0098be1f  8d4c2460             lea ecx, [esp + 0x60]
// 0098be23  51                   push ecx
// 0098be24  8d442434             lea eax, [esp + 0x34]
// 0098be28  50                   push eax
// 0098be29  55                   push ebp
// 0098be2a  8bcb                 mov ecx, ebx
// 0098be2c  ffd2                 call edx
// 0098be2e  837c242401           cmp dword ptr [esp + 0x24], 1
// 0098be33  7528                 jne 0x98be5d
// 0098be35  8d842494000000       lea eax, [esp + 0x94]
// 0098be3c  50                   push eax
// 0098be3d  8bce                 mov ecx, esi
// 0098be3f  e8fc86ffff           call 0x984540
// 0098be44  834c241408           or dword ptr [esp + 0x14], 8
// 0098be49  8bc8                 mov ecx, eax
// 0098be4b  ff155846b200         call dword ptr [0xb24658]
// 0098be51  c684249800000001     mov byte ptr [esp + 0x98], 1
// 0098be59  85c0                 test eax, eax
// 0098be5b  7508                 jne 0x98be65
// 0098be5d  c684249800000000     mov byte ptr [esp + 0x98], 0
// 0098be65  f644241408           test byte ptr [esp + 0x14], 8
// 0098be6a  740d                 je 0x98be79
// 0098be6c  8d8c2494000000       lea ecx, [esp + 0x94]
// 0098be73  ff15d047b200         call dword ptr [0xb247d0]
// 0098be79  80bc249800000000     cmp byte ptr [esp + 0x98], 0
// 0098be81  744e                 je 0x98bed1
// 0098be83  8d8c2498000000       lea ecx, [esp + 0x98]
// 0098be8a  51                   push ecx
// 0098be8b  8bce                 mov ecx, esi
// 0098be8d  e8ae86ffff           call 0x984540
// 0098be92  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0098be96  8b13                 mov edx, dword ptr [ebx]
// 0098be98  8b9214010000         mov edx, dword ptr [edx + 0x114]
// 0098be9e  51                   push ecx
// 0098be9f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0098bea3  51                   push ecx
// 0098bea4  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 0098beab  51                   push ecx
// 0098beac  6a02                 push 2
// 0098beae  8d8c2480000000       lea ecx, [esp + 0x80]
// 0098beb5  51                   push ecx
// 0098beb6  50                   push eax
// 0098beb7  55                   push ebp
// 0098beb8  8bcb                 mov ecx, ebx
// 0098beba  c68424a400000005     mov byte ptr [esp + 0xa4], 5
// 0098bec2  ffd2                 call edx
// 0098bec4  8d8c2498000000       lea ecx, [esp + 0x98]
// 0098becb  ff15d047b200         call dword ptr [0xb247d0]
// 0098bed1  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 0098bed7  2b442470             sub eax, dword ptr [esp + 0x70]
// 0098bedb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0098bedf  2b442450             sub eax, dword ptr [esp + 0x50]
// 0098bee3  03442478             add eax, dword ptr [esp + 0x78]
// 0098bee7  03442458             add eax, dword ptr [esp + 0x58]
// 0098beeb  8d440820             lea eax, [eax + ecx + 0x20]
// 0098beef  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0098bef3  6a00                 push 0
// 0098bef5  51                   push ecx
// 0098bef6  50                   push eax
// 0098bef7  56                   push esi
// 0098bef8  8bb424a0000000       mov esi, dword ptr [esp + 0xa0]
// 0098beff  56                   push esi
// 0098bf00  8bcb                 mov ecx, ebx
// 0098bf02  e8a9c1ffff           call 0x9880b0
// 0098bf07  8d4c2420             lea ecx, [esp + 0x20]
// 0098bf0b  ff15d047b200         call dword ptr [0xb247d0]
// 0098bf11  8bc6                 mov eax, esi
// 0098bf13  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0098bf1a  64890d00000000       mov dword ptr fs:[0], ecx
// 0098bf21  59                   pop ecx
// 0098bf22  5f                   pop edi
// 0098bf23  5e                   pop esi
// 0098bf24  5d                   pop ebp
// 0098bf25  5b                   pop ebx
// 0098bf26  83c478               add esp, 0x78
// 0098bf29  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlPopupParent@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp