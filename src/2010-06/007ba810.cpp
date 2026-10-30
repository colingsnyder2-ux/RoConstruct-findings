// roc 2010-06 007ba810  unit: CXTPCommandBar  size: 1336 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ba810
//
// 007ba810  83ec40               sub esp, 0x40
// 007ba813  53                   push ebx
// 007ba814  55                   push ebp
// 007ba815  56                   push esi
// 007ba816  8bf1                 mov esi, ecx
// 007ba818  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 007ba81f  57                   push edi
// 007ba820  750d                 jne 0x7ba82f
// 007ba822  bf01000000           mov edi, 1
// 007ba827  39bef8000000         cmp dword ptr [esi + 0xf8], edi
// 007ba82d  7402                 je 0x7ba831
// 007ba82f  33ff                 xor edi, edi
// 007ba831  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 007ba835  85db                 test ebx, ebx
// 007ba837  7405                 je 0x7ba83e
// 007ba839  83fb01               cmp ebx, 1
// 007ba83c  7505                 jne 0x7ba843
// 007ba83e  e8fdeaffff           call 0x7b9340
// 007ba843  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007ba849  83cdff               or ebp, 0xffffffff
// 007ba84c  3bc5                 cmp eax, ebp
// 007ba84e  741e                 je 0x7ba86e
// 007ba850  3b86d0000000         cmp eax, dword ptr [esi + 0xd0]
// 007ba856  7516                 jne 0x7ba86e
// 007ba858  85ff                 test edi, edi
// 007ba85a  7412                 je 0x7ba86e
// 007ba85c  85db                 test ebx, ebx
// 007ba85e  0f84b5040000         je 0x7bad19
// 007ba864  83fb01               cmp ebx, 1
// 007ba867  7561                 jne 0x7ba8ca
// 007ba869  8d5d03               lea ebx, [ebp + 3]
// 007ba86c  eb6a                 jmp 0x7ba8d8
// 007ba86e  83fb02               cmp ebx, 2
// 007ba871  7557                 jne 0x7ba8ca
// 007ba873  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 007ba879  0f85a8020000         jne 0x7bab27
// 007ba87f  3bc5                 cmp eax, ebp
// 007ba881  7455                 je 0x7ba8d8
// 007ba883  85ff                 test edi, edi
// 007ba885  7510                 jne 0x7ba897
// 007ba887  8b06                 mov eax, dword ptr [esi]
// 007ba889  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 007ba88f  8bce                 mov ecx, esi
// 007ba891  ffd2                 call edx
// 007ba893  85c0                 test eax, eax
// 007ba895  7541                 jne 0x7ba8d8
// 007ba897  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007ba89d  50                   push eax
// 007ba89e  8bce                 mov ecx, esi
// 007ba8a0  e82bebffff           call 0x7b93d0
// 007ba8a5  50                   push eax
// 007ba8a6  e865430300           call 0x7eec10
// 007ba8ab  50                   push eax
// 007ba8ac  e8cdd4feff           call 0x7a7d7e
// 007ba8b1  83c408               add esp, 8
// 007ba8b4  85c0                 test eax, eax
// 007ba8b6  7420                 je 0x7ba8d8
// 007ba8b8  8bc8                 mov ecx, eax
// 007ba8ba  e8118ec9ff           call 0x4536d0
// 007ba8bf  85c0                 test eax, eax
// 007ba8c1  7415                 je 0x7ba8d8
// 007ba8c3  bb03000000           mov ebx, 3
// 007ba8c8  eb0e                 jmp 0x7ba8d8
// 007ba8ca  83fb03               cmp ebx, 3
// 007ba8cd  7409                 je 0x7ba8d8
// 007ba8cf  83fb02               cmp ebx, 2
// 007ba8d2  0f854f020000         jne 0x7bab27
// 007ba8d8  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 007ba8de  0f8543020000         jne 0x7bab27
// 007ba8e4  85ff                 test edi, edi
// 007ba8e6  750d                 jne 0x7ba8f5
// 007ba8e8  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 007ba8ef  0f8532020000         jne 0x7bab27
// 007ba8f5  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007ba8fb  33c9                 xor ecx, ecx
// 007ba8fd  83fb03               cmp ebx, 3
// 007ba900  0f94c1               sete cl
// 007ba903  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 007ba907  8bf9                 mov edi, ecx
// 007ba909  897c2454             mov dword ptr [esp + 0x54], edi
// 007ba90d  3bc5                 cmp eax, ebp
// 007ba90f  753b                 jne 0x7ba94c
// 007ba911  8b1e                 mov ebx, dword ptr [esi]
// 007ba913  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007ba919  8bd7                 mov edx, edi
// 007ba91b  81c350010000         add ebx, 0x150
// 007ba921  f7da                 neg edx
// 007ba923  1bd2                 sbb edx, edx
// 007ba925  83c203               add edx, 3
// 007ba928  52                   push edx
// 007ba929  6a01                 push 1
// 007ba92b  6a00                 push 0
// 007ba92d  6a01                 push 1
// 007ba92f  57                   push edi
// 007ba930  55                   push ebp
// 007ba931  e83aec0300           call 0x7f9570
// 007ba936  50                   push eax
// 007ba937  8b03                 mov eax, dword ptr [ebx]
// 007ba939  8bce                 mov ecx, esi
// 007ba93b  ffd0                 call eax
// 007ba93d  5f                   pop edi
// 007ba93e  5e                   pop esi
// 007ba93f  5d                   pop ebp
// 007ba940  b801000000           mov eax, 1
// 007ba945  5b                   pop ebx
// 007ba946  83c440               add esp, 0x40
// 007ba949  c20400               ret 4
// 007ba94c  50                   push eax
// 007ba94d  8bce                 mov ecx, esi
// 007ba94f  e87ceaffff           call 0x7b93d0
// 007ba954  50                   push eax
// 007ba955  e8b6420300           call 0x7eec10
// 007ba95a  50                   push eax
// 007ba95b  e81ed4feff           call 0x7a7d7e
// 007ba960  83c408               add esp, 8
// 007ba963  85c0                 test eax, eax
// 007ba965  7427                 je 0x7ba98e
// 007ba967  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 007ba96d  3bcd                 cmp ecx, ebp
// 007ba96f  7513                 jne 0x7ba984
// 007ba971  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 007ba977  85c0                 test eax, eax
// 007ba979  7409                 je 0x7ba984
// 007ba97b  8bc8                 mov ecx, eax
// 007ba97d  e80efdfeff           call 0x7aa690
// 007ba982  eb02                 jmp 0x7ba986
// 007ba984  8bc1                 mov eax, ecx
// 007ba986  85c0                 test eax, eax
// 007ba988  0f8599010000         jne 0x7bab27
// 007ba98e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007ba994  51                   push ecx
// 007ba995  8bce                 mov ecx, esi
// 007ba997  e834eaffff           call 0x7b93d0
// 007ba99c  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 007ba9a2  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 007ba9a8  8baecc000000         mov ebp, dword ptr [esi + 0xcc]
// 007ba9ae  89542410             mov dword ptr [esp + 0x10], edx
// 007ba9b2  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 007ba9b8  894c2414             mov dword ptr [esp + 0x14], ecx
// 007ba9bc  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 007ba9c2  89542418             mov dword ptr [esp + 0x18], edx
// 007ba9c6  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 007ba9cc  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007ba9d0  8b88b4000000         mov ecx, dword ptr [eax + 0xb4]
// 007ba9d6  89542420             mov dword ptr [esp + 0x20], edx
// 007ba9da  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 007ba9e0  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 007ba9e6  33db                 xor ebx, ebx
// 007ba9e8  894c2424             mov dword ptr [esp + 0x24], ecx
// 007ba9ec  89542428             mov dword ptr [esp + 0x28], edx
// 007ba9f0  8944242c             mov dword ptr [esp + 0x2c], eax
// 007ba9f4  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007ba9fa  6a01                 push 1
// 007ba9fc  6a00                 push 0
// 007ba9fe  6a01                 push 1
// 007baa00  57                   push edi
// 007baa01  55                   push ebp
// 007baa02  e869eb0300           call 0x7f9570
// 007baa07  8be8                 mov ebp, eax
// 007baa09  55                   push ebp
// 007baa0a  8bce                 mov ecx, esi
// 007baa0c  e8bfe9ffff           call 0x7b93d0
// 007baa11  8bf8                 mov edi, eax
// 007baa13  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 007baa19  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 007baa1f  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 007baa25  89542448             mov dword ptr [esp + 0x48], edx
// 007baa29  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 007baa2f  894c2444             mov dword ptr [esp + 0x44], ecx
// 007baa33  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 007baa39  89542430             mov dword ptr [esp + 0x30], edx
// 007baa3d  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007baa41  8b8fb4000000         mov ecx, dword ptr [edi + 0xb4]
// 007baa47  894c2434             mov dword ptr [esp + 0x34], ecx
// 007baa4b  8b97b8000000         mov edx, dword ptr [edi + 0xb8]
// 007baa51  89542438             mov dword ptr [esp + 0x38], edx
// 007baa55  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 007baa5b  8954243c             mov dword ptr [esp + 0x3c], edx
// 007baa5f  85db                 test ebx, ebx
// 007baa61  0f8493000000         je 0x7baafa
// 007baa67  398bb4000000         cmp dword ptr [ebx + 0xb4], ecx
// 007baa6d  755c                 jne 0x7baacb
// 007baa6f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007baa73  7f2e                 jg 0x7baaa3
// 007baa75  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 007baa7b  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 007baa81  3bc1                 cmp eax, ecx
// 007baa83  89542444             mov dword ptr [esp + 0x44], edx
// 007baa87  8b93c8000000         mov edx, dword ptr [ebx + 0xc8]
// 007baa8d  89542448             mov dword ptr [esp + 0x48], edx
// 007baa91  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 007baa97  8954244c             mov dword ptr [esp + 0x4c], edx
// 007baa9b  7f72                 jg 0x7bab0f
// 007baa9d  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007baaa1  7c28                 jl 0x7baacb
// 007baaa3  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 007baaa9  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 007baaaf  3bc8                 cmp ecx, eax
// 007baab1  89542444             mov dword ptr [esp + 0x44], edx
// 007baab5  8b93c8000000         mov edx, dword ptr [ebx + 0xc8]
// 007baabb  89542448             mov dword ptr [esp + 0x48], edx
// 007baabf  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 007baac5  8954244c             mov dword ptr [esp + 0x4c], edx
// 007baac9  7f44                 jg 0x7bab0f
// 007baacb  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 007baad1  8b16                 mov edx, dword ptr [esi]
// 007baad3  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 007baad9  33c0                 xor eax, eax
// 007baadb  39442454             cmp dword ptr [esp + 0x54], eax
// 007baadf  0f9ec0               setle al
// 007baae2  83c002               add eax, 2
// 007baae5  50                   push eax
// 007baae6  51                   push ecx
// 007baae7  8bce                 mov ecx, esi
// 007baae9  ffd2                 call edx
// 007baaeb  5f                   pop edi
// 007baaec  5e                   pop esi
// 007baaed  5d                   pop ebp
// 007baaee  b801000000           mov eax, 1
// 007baaf3  5b                   pop ebx
// 007baaf4  83c440               add esp, 0x40
// 007baaf7  c20400               ret 4
// 007baafa  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 007baafe  7411                 je 0x7bab11
// 007bab00  8d442430             lea eax, [esp + 0x30]
// 007bab04  50                   push eax
// 007bab05  ff1544bc9e00         call dword ptr [0x9ebc44]
// 007bab0b  85c0                 test eax, eax
// 007bab0d  7502                 jne 0x7bab11
// 007bab0f  8bdf                 mov ebx, edi
// 007bab11  3baecc000000         cmp ebp, dword ptr [esi + 0xcc]
// 007bab17  74d2                 je 0x7baaeb
// 007bab19  83fdff               cmp ebp, -1
// 007bab1c  74cd                 je 0x7baaeb
// 007bab1e  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007bab22  e9cdfeffff           jmp 0x7ba9f4
// 007bab27  83fb07               cmp ebx, 7
// 007bab2a  0f87e9010000         ja 0x7bad19
// 007bab30  ff249d28ad7b00       jmp dword ptr [ebx*4 + 0x7bad28]
// 007bab37  6a02                 push 2
// 007bab39  6a01                 push 1
// 007bab3b  6a00                 push 0
// 007bab3d  6a01                 push 1
// 007bab3f  6a01                 push 1
// 007bab41  8b3e                 mov edi, dword ptr [esi]
// 007bab43  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007bab49  81c750010000         add edi, 0x150
// 007bab4f  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007bab55  50                   push eax
// 007bab56  e815ea0300           call 0x7f9570
// 007bab5b  8b17                 mov edx, dword ptr [edi]
// 007bab5d  50                   push eax
// 007bab5e  8bce                 mov ecx, esi
// 007bab60  ffd2                 call edx
// 007bab62  5f                   pop edi
// 007bab63  5e                   pop esi
// 007bab64  5d                   pop ebp
// 007bab65  b801000000           mov eax, 1
// 007bab6a  5b                   pop ebx
// 007bab6b  83c440               add esp, 0x40
// 007bab6e  c20400               ret 4
// 007bab71  6a03                 push 3
// 007bab73  6a01                 push 1
// 007bab75  6a00                 push 0
// 007bab77  6a01                 push 1
// 007bab79  55                   push ebp
// 007bab7a  ebc5                 jmp 0x7bab41
// 007bab7c  8b3e                 mov edi, dword ptr [esi]
// 007bab7e  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007bab84  6a02                 push 2
// 007bab86  6a01                 push 1
// 007bab88  6a00                 push 0
// 007bab8a  6a01                 push 1
// 007bab8c  6a01                 push 1
// 007bab8e  55                   push ebp
// 007bab8f  81c750010000         add edi, 0x150
// 007bab95  e8d6e90300           call 0x7f9570
// 007bab9a  50                   push eax
// 007bab9b  8b07                 mov eax, dword ptr [edi]
// 007bab9d  8bce                 mov ecx, esi
// 007bab9f  ffd0                 call eax
// 007baba1  5f                   pop edi
// 007baba2  5e                   pop esi
// 007baba3  5d                   pop ebp
// 007baba4  b801000000           mov eax, 1
// 007baba9  5b                   pop ebx
// 007babaa  83c440               add esp, 0x40
// 007babad  c20400               ret 4
// 007babb0  8b3e                 mov edi, dword ptr [esi]
// 007babb2  6a03                 push 3
// 007babb4  6a01                 push 1
// 007babb6  6a00                 push 0
// 007babb8  6a01                 push 1
// 007babba  55                   push ebp
// 007babbb  8bce                 mov ecx, esi
// 007babbd  81c750010000         add edi, 0x150
// 007babc3  e8f8e7ffff           call 0x7b93c0
// 007babc8  eb85                 jmp 0x7bab4f
// 007babca  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007babd0  3bc5                 cmp eax, ebp
// 007babd2  0f8441010000         je 0x7bad19
// 007babd8  3b86d0000000         cmp eax, dword ptr [esi + 0xd0]
// 007babde  0f8435010000         je 0x7bad19
// 007babe4  50                   push eax
// 007babe5  8bce                 mov ecx, esi
// 007babe7  e8e4e7ffff           call 0x7b93d0
// 007babec  8b10                 mov edx, dword ptr [eax]
// 007babee  8bc8                 mov ecx, eax
// 007babf0  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 007babf6  6a02                 push 2
// 007babf8  ffd0                 call eax
// 007babfa  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007bac00  6a00                 push 0
// 007bac02  51                   push ecx
// 007bac03  8bce                 mov ecx, esi
// 007bac05  e806fbffff           call 0x7ba710
// 007bac0a  5f                   pop edi
// 007bac0b  5e                   pop esi
// 007bac0c  5d                   pop ebp
// 007bac0d  5b                   pop ebx
// 007bac0e  83c440               add esp, 0x40
// 007bac11  c20400               ret 4
// 007bac14  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 007bac1a  0f84f9000000         je 0x7bad19
// 007bac20  6a00                 push 0
// 007bac22  55                   push ebp
// 007bac23  8bce                 mov ecx, esi
// 007bac25  e8e6faffff           call 0x7ba710
// 007bac2a  8b16                 mov edx, dword ptr [esi]
// 007bac2c  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 007bac32  6a00                 push 0
// 007bac34  6a00                 push 0
// 007bac36  6a01                 push 1
// 007bac38  8bce                 mov ecx, esi
// 007bac3a  ffd0                 call eax
// 007bac3c  5f                   pop edi
// 007bac3d  5e                   pop esi
// 007bac3e  5d                   pop ebp
// 007bac3f  b801000000           mov eax, 1
// 007bac44  5b                   pop ebx
// 007bac45  83c440               add esp, 0x40
// 007bac48  c20400               ret 4
// 007bac4b  8bce                 mov ecx, esi
// 007bac4d  e80ed80000           call 0x7c8460
// 007bac52  83f801               cmp eax, 1
// 007bac55  8bce                 mov ecx, esi
// 007bac57  7e1e                 jle 0x7bac77
// 007bac59  48                   dec eax
// 007bac5a  50                   push eax
// 007bac5b  56                   push esi
// 007bac5c  e86fd9ffff           call 0x7b85d0
// 007bac61  8bc8                 mov ecx, eax
// 007bac63  e848030100           call 0x7cafb0
// 007bac68  5f                   pop edi
// 007bac69  5e                   pop esi
// 007bac6a  5d                   pop ebp
// 007bac6b  b801000000           mov eax, 1
// 007bac70  5b                   pop ebx
// 007bac71  83c440               add esp, 0x40
// 007bac74  c20400               ret 4
// 007bac77  8b16                 mov edx, dword ptr [esi]
// 007bac79  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 007bac7f  ffd0                 call eax
// 007bac81  85c0                 test eax, eax
// 007bac83  741e                 je 0x7baca3
// 007bac85  8b16                 mov edx, dword ptr [esi]
// 007bac87  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 007bac8d  8bce                 mov ecx, esi
// 007bac8f  ffd0                 call eax
// 007bac91  8b10                 mov edx, dword ptr [eax]
// 007bac93  6a00                 push 0
// 007bac95  6a00                 push 0
// 007bac97  8bc8                 mov ecx, eax
// 007bac99  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 007bac9f  6a01                 push 1
// 007baca1  ffd0                 call eax
// 007baca3  8b16                 mov edx, dword ptr [esi]
// 007baca5  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 007bacab  6a00                 push 0
// 007bacad  6a01                 push 1
// 007bacaf  6a00                 push 0
// 007bacb1  8bce                 mov ecx, esi
// 007bacb3  ffd0                 call eax
// 007bacb5  5f                   pop edi
// 007bacb6  5e                   pop esi
// 007bacb7  5d                   pop ebp
// 007bacb8  b801000000           mov eax, 1
// 007bacbd  5b                   pop ebx
// 007bacbe  83c440               add esp, 0x40
// 007bacc1  c20400               ret 4
// 007bacc4  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 007bacca  3bc5                 cmp eax, ebp
// 007baccc  0f8490feffff         je 0x7bab62
// 007bacd2  50                   push eax
// 007bacd3  8bce                 mov ecx, esi
// 007bacd5  e8f6e6ffff           call 0x7b93d0
// 007bacda  8b10                 mov edx, dword ptr [eax]
// 007bacdc  8bc8                 mov ecx, eax
// 007bacde  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 007bace4  6a02                 push 2
// 007bace6  ffd0                 call eax
// 007bace8  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007bacee  51                   push ecx
// 007bacef  8bce                 mov ecx, esi
// 007bacf1  e8dae6ffff           call 0x7b93d0
// 007bacf6  8b30                 mov esi, dword ptr [eax]
// 007bacf8  33d2                 xor edx, edx
// 007bacfa  52                   push edx
// 007bacfb  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 007bad01  33c9                 xor ecx, ecx
// 007bad03  51                   push ecx
// 007bad04  6a01                 push 1
// 007bad06  8bc8                 mov ecx, eax
// 007bad08  ffd2                 call edx
// 007bad0a  5f                   pop edi
// 007bad0b  5e                   pop esi
// 007bad0c  5d                   pop ebp
// 007bad0d  b801000000           mov eax, 1
// 007bad12  5b                   pop ebx
// 007bad13  83c440               add esp, 0x40
// 007bad16  c20400               ret 4
// 007bad19  5f                   pop edi
// 007bad1a  5e                   pop esi
// 007bad1b  5d                   pop ebp
// 007bad1c  33c0                 xor eax, eax
// 007bad1e  5b                   pop ebx
// 007bad1f  83c440               add esp, 0x40
// 007bad22  c20400               ret 4
// 007bad25  8d4900               lea ecx, [ecx]
// 007bad28  37                   aaa 
// 007bad29  ab                   stosd dword ptr es:[edi], eax
// 007bad2a  7b00                 jnp 0x7bad2c
// 007bad2c  71ab                 jno 0x7bacd9
// 007bad2e  7b00                 jnp 0x7bad30
// 007bad30  14ac                 adc al, 0xac
// 007bad32  7b00                 jnp 0x7bad34
// 007bad34  caab7b               retf 0x7bab
// 007bad37  004bac               add byte ptr [ebx - 0x54], cl
// 007bad3a  7b00                 jnp 0x7bad3c
// 007bad3c  c4ac7b007cab7b       les ebp, ptr [ebx + edi*2 + 0x7bab7c00]
// copied from an identical function in another client (function ?ProcessSpecialKey@CXTPCommandBar@@MAEHW4XTPSpecialKey@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp