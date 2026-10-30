// roc 2009-12 008066a0  unit: CXTPCommandBar  size: 1336 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008066a0
//
// 008066a0  83ec40               sub esp, 0x40
// 008066a3  53                   push ebx
// 008066a4  55                   push ebp
// 008066a5  56                   push esi
// 008066a6  8bf1                 mov esi, ecx
// 008066a8  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 008066af  57                   push edi
// 008066b0  750d                 jne 0x8066bf
// 008066b2  bf01000000           mov edi, 1
// 008066b7  39bef8000000         cmp dword ptr [esi + 0xf8], edi
// 008066bd  7402                 je 0x8066c1
// 008066bf  33ff                 xor edi, edi
// 008066c1  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008066c5  85db                 test ebx, ebx
// 008066c7  7405                 je 0x8066ce
// 008066c9  83fb01               cmp ebx, 1
// 008066cc  7505                 jne 0x8066d3
// 008066ce  e8fdeaffff           call 0x8051d0
// 008066d3  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 008066d9  83cdff               or ebp, 0xffffffff
// 008066dc  3bc5                 cmp eax, ebp
// 008066de  741e                 je 0x8066fe
// 008066e0  3b86d0000000         cmp eax, dword ptr [esi + 0xd0]
// 008066e6  7516                 jne 0x8066fe
// 008066e8  85ff                 test edi, edi
// 008066ea  7412                 je 0x8066fe
// 008066ec  85db                 test ebx, ebx
// 008066ee  0f84b5040000         je 0x806ba9
// 008066f4  83fb01               cmp ebx, 1
// 008066f7  7561                 jne 0x80675a
// 008066f9  8d5d03               lea ebx, [ebp + 3]
// 008066fc  eb6a                 jmp 0x806768
// 008066fe  83fb02               cmp ebx, 2
// 00806701  7557                 jne 0x80675a
// 00806703  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 00806709  0f85a8020000         jne 0x8069b7
// 0080670f  3bc5                 cmp eax, ebp
// 00806711  7455                 je 0x806768
// 00806713  85ff                 test edi, edi
// 00806715  7510                 jne 0x806727
// 00806717  8b06                 mov eax, dword ptr [esi]
// 00806719  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0080671f  8bce                 mov ecx, esi
// 00806721  ffd2                 call edx
// 00806723  85c0                 test eax, eax
// 00806725  7541                 jne 0x806768
// 00806727  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0080672d  50                   push eax
// 0080672e  8bce                 mov ecx, esi
// 00806730  e82bebffff           call 0x805260
// 00806735  50                   push eax
// 00806736  e885430300           call 0x83aac0
// 0080673b  50                   push eax
// 0080673c  e8fdd4feff           call 0x7f3c3e
// 00806741  83c408               add esp, 8
// 00806744  85c0                 test eax, eax
// 00806746  7420                 je 0x806768
// 00806748  8bc8                 mov ecx, eax
// 0080674a  e881bfc4ff           call 0x4526d0
// 0080674f  85c0                 test eax, eax
// 00806751  7415                 je 0x806768
// 00806753  bb03000000           mov ebx, 3
// 00806758  eb0e                 jmp 0x806768
// 0080675a  83fb03               cmp ebx, 3
// 0080675d  7409                 je 0x806768
// 0080675f  83fb02               cmp ebx, 2
// 00806762  0f854f020000         jne 0x8069b7
// 00806768  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 0080676e  0f8543020000         jne 0x8069b7
// 00806774  85ff                 test edi, edi
// 00806776  750d                 jne 0x806785
// 00806778  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 0080677f  0f8532020000         jne 0x8069b7
// 00806785  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0080678b  33c9                 xor ecx, ecx
// 0080678d  83fb03               cmp ebx, 3
// 00806790  0f94c1               sete cl
// 00806793  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 00806797  8bf9                 mov edi, ecx
// 00806799  897c2454             mov dword ptr [esp + 0x54], edi
// 0080679d  3bc5                 cmp eax, ebp
// 0080679f  753b                 jne 0x8067dc
// 008067a1  8b1e                 mov ebx, dword ptr [esi]
// 008067a3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008067a9  8bd7                 mov edx, edi
// 008067ab  81c350010000         add ebx, 0x150
// 008067b1  f7da                 neg edx
// 008067b3  1bd2                 sbb edx, edx
// 008067b5  83c203               add edx, 3
// 008067b8  52                   push edx
// 008067b9  6a01                 push 1
// 008067bb  6a00                 push 0
// 008067bd  6a01                 push 1
// 008067bf  57                   push edi
// 008067c0  55                   push ebp
// 008067c1  e80aed0300           call 0x8454d0
// 008067c6  50                   push eax
// 008067c7  8b03                 mov eax, dword ptr [ebx]
// 008067c9  8bce                 mov ecx, esi
// 008067cb  ffd0                 call eax
// 008067cd  5f                   pop edi
// 008067ce  5e                   pop esi
// 008067cf  5d                   pop ebp
// 008067d0  b801000000           mov eax, 1
// 008067d5  5b                   pop ebx
// 008067d6  83c440               add esp, 0x40
// 008067d9  c20400               ret 4
// 008067dc  50                   push eax
// 008067dd  8bce                 mov ecx, esi
// 008067df  e87ceaffff           call 0x805260
// 008067e4  50                   push eax
// 008067e5  e8d6420300           call 0x83aac0
// 008067ea  50                   push eax
// 008067eb  e84ed4feff           call 0x7f3c3e
// 008067f0  83c408               add esp, 8
// 008067f3  85c0                 test eax, eax
// 008067f5  7427                 je 0x80681e
// 008067f7  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 008067fd  3bcd                 cmp ecx, ebp
// 008067ff  7513                 jne 0x806814
// 00806801  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 00806807  85c0                 test eax, eax
// 00806809  7409                 je 0x806814
// 0080680b  8bc8                 mov ecx, eax
// 0080680d  e89efdfeff           call 0x7f65b0
// 00806812  eb02                 jmp 0x806816
// 00806814  8bc1                 mov eax, ecx
// 00806816  85c0                 test eax, eax
// 00806818  0f8599010000         jne 0x8069b7
// 0080681e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00806824  51                   push ecx
// 00806825  8bce                 mov ecx, esi
// 00806827  e834eaffff           call 0x805260
// 0080682c  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 00806832  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 00806838  8baecc000000         mov ebp, dword ptr [esi + 0xcc]
// 0080683e  89542410             mov dword ptr [esp + 0x10], edx
// 00806842  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 00806848  894c2414             mov dword ptr [esp + 0x14], ecx
// 0080684c  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 00806852  89542418             mov dword ptr [esp + 0x18], edx
// 00806856  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 0080685c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00806860  8b88b4000000         mov ecx, dword ptr [eax + 0xb4]
// 00806866  89542420             mov dword ptr [esp + 0x20], edx
// 0080686a  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00806870  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00806876  33db                 xor ebx, ebx
// 00806878  894c2424             mov dword ptr [esp + 0x24], ecx
// 0080687c  89542428             mov dword ptr [esp + 0x28], edx
// 00806880  8944242c             mov dword ptr [esp + 0x2c], eax
// 00806884  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0080688a  6a01                 push 1
// 0080688c  6a00                 push 0
// 0080688e  6a01                 push 1
// 00806890  57                   push edi
// 00806891  55                   push ebp
// 00806892  e839ec0300           call 0x8454d0
// 00806897  8be8                 mov ebp, eax
// 00806899  55                   push ebp
// 0080689a  8bce                 mov ecx, esi
// 0080689c  e8bfe9ffff           call 0x805260
// 008068a1  8bf8                 mov edi, eax
// 008068a3  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 008068a9  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 008068af  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 008068b5  89542448             mov dword ptr [esp + 0x48], edx
// 008068b9  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 008068bf  894c2444             mov dword ptr [esp + 0x44], ecx
// 008068c3  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 008068c9  89542430             mov dword ptr [esp + 0x30], edx
// 008068cd  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008068d1  8b8fb4000000         mov ecx, dword ptr [edi + 0xb4]
// 008068d7  894c2434             mov dword ptr [esp + 0x34], ecx
// 008068db  8b97b8000000         mov edx, dword ptr [edi + 0xb8]
// 008068e1  89542438             mov dword ptr [esp + 0x38], edx
// 008068e5  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 008068eb  8954243c             mov dword ptr [esp + 0x3c], edx
// 008068ef  85db                 test ebx, ebx
// 008068f1  0f8493000000         je 0x80698a
// 008068f7  398bb4000000         cmp dword ptr [ebx + 0xb4], ecx
// 008068fd  755c                 jne 0x80695b
// 008068ff  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00806903  7f2e                 jg 0x806933
// 00806905  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 0080690b  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 00806911  3bc1                 cmp eax, ecx
// 00806913  89542444             mov dword ptr [esp + 0x44], edx
// 00806917  8b93c8000000         mov edx, dword ptr [ebx + 0xc8]
// 0080691d  89542448             mov dword ptr [esp + 0x48], edx
// 00806921  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 00806927  8954244c             mov dword ptr [esp + 0x4c], edx
// 0080692b  7f72                 jg 0x80699f
// 0080692d  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00806931  7c28                 jl 0x80695b
// 00806933  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 00806939  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 0080693f  3bc8                 cmp ecx, eax
// 00806941  89542444             mov dword ptr [esp + 0x44], edx
// 00806945  8b93c8000000         mov edx, dword ptr [ebx + 0xc8]
// 0080694b  89542448             mov dword ptr [esp + 0x48], edx
// 0080694f  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 00806955  8954244c             mov dword ptr [esp + 0x4c], edx
// 00806959  7f44                 jg 0x80699f
// 0080695b  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 00806961  8b16                 mov edx, dword ptr [esi]
// 00806963  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 00806969  33c0                 xor eax, eax
// 0080696b  39442454             cmp dword ptr [esp + 0x54], eax
// 0080696f  0f9ec0               setle al
// 00806972  83c002               add eax, 2
// 00806975  50                   push eax
// 00806976  51                   push ecx
// 00806977  8bce                 mov ecx, esi
// 00806979  ffd2                 call edx
// 0080697b  5f                   pop edi
// 0080697c  5e                   pop esi
// 0080697d  5d                   pop ebp
// 0080697e  b801000000           mov eax, 1
// 00806983  5b                   pop ebx
// 00806984  83c440               add esp, 0x40
// 00806987  c20400               ret 4
// 0080698a  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 0080698e  7411                 je 0x8069a1
// 00806990  8d442430             lea eax, [esp + 0x30]
// 00806994  50                   push eax
// 00806995  ff1568cc9800         call dword ptr [0x98cc68]
// 0080699b  85c0                 test eax, eax
// 0080699d  7502                 jne 0x8069a1
// 0080699f  8bdf                 mov ebx, edi
// 008069a1  3baecc000000         cmp ebp, dword ptr [esi + 0xcc]
// 008069a7  74d2                 je 0x80697b
// 008069a9  83fdff               cmp ebp, -1
// 008069ac  74cd                 je 0x80697b
// 008069ae  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 008069b2  e9cdfeffff           jmp 0x806884
// 008069b7  83fb07               cmp ebx, 7
// 008069ba  0f87e9010000         ja 0x806ba9
// 008069c0  ff249db86b8000       jmp dword ptr [ebx*4 + 0x806bb8]
// 008069c7  6a02                 push 2
// 008069c9  6a01                 push 1
// 008069cb  6a00                 push 0
// 008069cd  6a01                 push 1
// 008069cf  6a01                 push 1
// 008069d1  8b3e                 mov edi, dword ptr [esi]
// 008069d3  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 008069d9  81c750010000         add edi, 0x150
// 008069df  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008069e5  50                   push eax
// 008069e6  e8e5ea0300           call 0x8454d0
// 008069eb  8b17                 mov edx, dword ptr [edi]
// 008069ed  50                   push eax
// 008069ee  8bce                 mov ecx, esi
// 008069f0  ffd2                 call edx
// 008069f2  5f                   pop edi
// 008069f3  5e                   pop esi
// 008069f4  5d                   pop ebp
// 008069f5  b801000000           mov eax, 1
// 008069fa  5b                   pop ebx
// 008069fb  83c440               add esp, 0x40
// 008069fe  c20400               ret 4
// 00806a01  6a03                 push 3
// 00806a03  6a01                 push 1
// 00806a05  6a00                 push 0
// 00806a07  6a01                 push 1
// 00806a09  55                   push ebp
// 00806a0a  ebc5                 jmp 0x8069d1
// 00806a0c  8b3e                 mov edi, dword ptr [esi]
// 00806a0e  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00806a14  6a02                 push 2
// 00806a16  6a01                 push 1
// 00806a18  6a00                 push 0
// 00806a1a  6a01                 push 1
// 00806a1c  6a01                 push 1
// 00806a1e  55                   push ebp
// 00806a1f  81c750010000         add edi, 0x150
// 00806a25  e8a6ea0300           call 0x8454d0
// 00806a2a  50                   push eax
// 00806a2b  8b07                 mov eax, dword ptr [edi]
// 00806a2d  8bce                 mov ecx, esi
// 00806a2f  ffd0                 call eax
// 00806a31  5f                   pop edi
// 00806a32  5e                   pop esi
// 00806a33  5d                   pop ebp
// 00806a34  b801000000           mov eax, 1
// 00806a39  5b                   pop ebx
// 00806a3a  83c440               add esp, 0x40
// 00806a3d  c20400               ret 4
// 00806a40  8b3e                 mov edi, dword ptr [esi]
// 00806a42  6a03                 push 3
// 00806a44  6a01                 push 1
// 00806a46  6a00                 push 0
// 00806a48  6a01                 push 1
// 00806a4a  55                   push ebp
// 00806a4b  8bce                 mov ecx, esi
// 00806a4d  81c750010000         add edi, 0x150
// 00806a53  e8f8e7ffff           call 0x805250
// 00806a58  eb85                 jmp 0x8069df
// 00806a5a  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00806a60  3bc5                 cmp eax, ebp
// 00806a62  0f8441010000         je 0x806ba9
// 00806a68  3b86d0000000         cmp eax, dword ptr [esi + 0xd0]
// 00806a6e  0f8435010000         je 0x806ba9
// 00806a74  50                   push eax
// 00806a75  8bce                 mov ecx, esi
// 00806a77  e8e4e7ffff           call 0x805260
// 00806a7c  8b10                 mov edx, dword ptr [eax]
// 00806a7e  8bc8                 mov ecx, eax
// 00806a80  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00806a86  6a02                 push 2
// 00806a88  ffd0                 call eax
// 00806a8a  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00806a90  6a00                 push 0
// 00806a92  51                   push ecx
// 00806a93  8bce                 mov ecx, esi
// 00806a95  e806fbffff           call 0x8065a0
// 00806a9a  5f                   pop edi
// 00806a9b  5e                   pop esi
// 00806a9c  5d                   pop ebp
// 00806a9d  5b                   pop ebx
// 00806a9e  83c440               add esp, 0x40
// 00806aa1  c20400               ret 4
// 00806aa4  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 00806aaa  0f84f9000000         je 0x806ba9
// 00806ab0  6a00                 push 0
// 00806ab2  55                   push ebp
// 00806ab3  8bce                 mov ecx, esi
// 00806ab5  e8e6faffff           call 0x8065a0
// 00806aba  8b16                 mov edx, dword ptr [esi]
// 00806abc  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00806ac2  6a00                 push 0
// 00806ac4  6a00                 push 0
// 00806ac6  6a01                 push 1
// 00806ac8  8bce                 mov ecx, esi
// 00806aca  ffd0                 call eax
// 00806acc  5f                   pop edi
// 00806acd  5e                   pop esi
// 00806ace  5d                   pop ebp
// 00806acf  b801000000           mov eax, 1
// 00806ad4  5b                   pop ebx
// 00806ad5  83c440               add esp, 0x40
// 00806ad8  c20400               ret 4
// 00806adb  8bce                 mov ecx, esi
// 00806add  e89ed80000           call 0x814380
// 00806ae2  83f801               cmp eax, 1
// 00806ae5  8bce                 mov ecx, esi
// 00806ae7  7e1e                 jle 0x806b07
// 00806ae9  48                   dec eax
// 00806aea  50                   push eax
// 00806aeb  56                   push esi
// 00806aec  e8dfd9ffff           call 0x8044d0
// 00806af1  8bc8                 mov ecx, eax
// 00806af3  e8e8030100           call 0x816ee0
// 00806af8  5f                   pop edi
// 00806af9  5e                   pop esi
// 00806afa  5d                   pop ebp
// 00806afb  b801000000           mov eax, 1
// 00806b00  5b                   pop ebx
// 00806b01  83c440               add esp, 0x40
// 00806b04  c20400               ret 4
// 00806b07  8b16                 mov edx, dword ptr [esi]
// 00806b09  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00806b0f  ffd0                 call eax
// 00806b11  85c0                 test eax, eax
// 00806b13  741e                 je 0x806b33
// 00806b15  8b16                 mov edx, dword ptr [esi]
// 00806b17  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 00806b1d  8bce                 mov ecx, esi
// 00806b1f  ffd0                 call eax
// 00806b21  8b10                 mov edx, dword ptr [eax]
// 00806b23  6a00                 push 0
// 00806b25  6a00                 push 0
// 00806b27  8bc8                 mov ecx, eax
// 00806b29  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00806b2f  6a01                 push 1
// 00806b31  ffd0                 call eax
// 00806b33  8b16                 mov edx, dword ptr [esi]
// 00806b35  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00806b3b  6a00                 push 0
// 00806b3d  6a01                 push 1
// 00806b3f  6a00                 push 0
// 00806b41  8bce                 mov ecx, esi
// 00806b43  ffd0                 call eax
// 00806b45  5f                   pop edi
// 00806b46  5e                   pop esi
// 00806b47  5d                   pop ebp
// 00806b48  b801000000           mov eax, 1
// 00806b4d  5b                   pop ebx
// 00806b4e  83c440               add esp, 0x40
// 00806b51  c20400               ret 4
// 00806b54  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00806b5a  3bc5                 cmp eax, ebp
// 00806b5c  0f8490feffff         je 0x8069f2
// 00806b62  50                   push eax
// 00806b63  8bce                 mov ecx, esi
// 00806b65  e8f6e6ffff           call 0x805260
// 00806b6a  8b10                 mov edx, dword ptr [eax]
// 00806b6c  8bc8                 mov ecx, eax
// 00806b6e  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00806b74  6a02                 push 2
// 00806b76  ffd0                 call eax
// 00806b78  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00806b7e  51                   push ecx
// 00806b7f  8bce                 mov ecx, esi
// 00806b81  e8dae6ffff           call 0x805260
// 00806b86  8b30                 mov esi, dword ptr [eax]
// 00806b88  33d2                 xor edx, edx
// 00806b8a  52                   push edx
// 00806b8b  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 00806b91  33c9                 xor ecx, ecx
// 00806b93  51                   push ecx
// 00806b94  6a01                 push 1
// 00806b96  8bc8                 mov ecx, eax
// 00806b98  ffd2                 call edx
// 00806b9a  5f                   pop edi
// 00806b9b  5e                   pop esi
// 00806b9c  5d                   pop ebp
// 00806b9d  b801000000           mov eax, 1
// 00806ba2  5b                   pop ebx
// 00806ba3  83c440               add esp, 0x40
// 00806ba6  c20400               ret 4
// 00806ba9  5f                   pop edi
// 00806baa  5e                   pop esi
// 00806bab  5d                   pop ebp
// 00806bac  33c0                 xor eax, eax
// 00806bae  5b                   pop ebx
// 00806baf  83c440               add esp, 0x40
// 00806bb2  c20400               ret 4
// 00806bb5  8d4900               lea ecx, [ecx]
// copied from an identical function in another client (function ?ProcessSpecialKey@CXTPCommandBar@@MAEHW4XTPSpecialKey@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp