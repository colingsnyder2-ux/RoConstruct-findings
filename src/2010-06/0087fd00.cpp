// roc 2010-06 0087fd00  unit: CXTPPropertyGridPaintManager  size: 1081 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087fd00
//
// 0087fd00  6aff                 push -1
// 0087fd02  684eab9b00           push 0x9bab4e
// 0087fd07  64a100000000         mov eax, dword ptr fs:[0]
// 0087fd0d  50                   push eax
// 0087fd0e  81ec80000000         sub esp, 0x80
// 0087fd14  53                   push ebx
// 0087fd15  55                   push ebp
// 0087fd16  56                   push esi
// 0087fd17  57                   push edi
// 0087fd18  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087fd1d  33c4                 xor eax, esp
// 0087fd1f  50                   push eax
// 0087fd20  8d842494000000       lea eax, [esp + 0x94]
// 0087fd27  64a300000000         mov dword ptr fs:[0], eax
// 0087fd2d  8bf9                 mov edi, ecx
// 0087fd2f  8b4760               mov eax, dword ptr [edi + 0x60]
// 0087fd32  50                   push eax
// 0087fd33  8d4c2438             lea ecx, [esp + 0x38]
// 0087fd37  e8d4f5f7ff           call 0x7ff310
// 0087fd3c  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 0087fd40  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 0087fd47  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0087fd4f  7521                 jne 0x87fd72
// 0087fd51  8b4738               mov eax, dword ptr [edi + 0x38]
// 0087fd54  83f8ff               cmp eax, -1
// 0087fd57  7505                 jne 0x87fd5e
// 0087fd59  8b5f34               mov ebx, dword ptr [edi + 0x34]
// 0087fd5c  eb02                 jmp 0x87fd60
// 0087fd5e  8bd8                 mov ebx, eax
// 0087fd60  e8bb3df6ff           call 0x7e3b20
// 0087fd65  6a0f                 push 0xf
// 0087fd67  8bc8                 mov ecx, eax
// 0087fd69  e84235f6ff           call 0x7e32b0
// 0087fd6e  3bd8                 cmp ebx, eax
// 0087fd70  756c                 jne 0x87fdde
// 0087fd72  85f6                 test esi, esi
// 0087fd74  7504                 jne 0x87fd7a
// 0087fd76  33db                 xor ebx, ebx
// 0087fd78  eb03                 jmp 0x87fd7d
// 0087fd7a  8b5e04               mov ebx, dword ptr [esi + 4]
// 0087fd7d  8b4760               mov eax, dword ptr [edi + 0x60]
// 0087fd80  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0087fd83  51                   push ecx
// 0087fd84  ff154cba9e00         call dword ptr [0x9eba4c]
// 0087fd8a  50                   push eax
// 0087fd8b  e8da7ef2ff           call 0x7a7c6a
// 0087fd90  8b5760               mov edx, dword ptr [edi + 0x60]
// 0087fd93  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0087fd96  8b4020               mov eax, dword ptr [eax + 0x20]
// 0087fd99  51                   push ecx
// 0087fd9a  53                   push ebx
// 0087fd9b  6838010000           push 0x138
// 0087fda0  50                   push eax
// 0087fda1  ff1554ba9e00         call dword ptr [0x9eba54]
// 0087fda7  89442418             mov dword ptr [esp + 0x18], eax
// 0087fdab  85c0                 test eax, eax
// 0087fdad  742f                 je 0x87fdde
// 0087fdaf  85f6                 test esi, esi
// 0087fdb1  7515                 jne 0x87fdc8
// 0087fdb3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087fdb7  51                   push ecx
// 0087fdb8  8d542438             lea edx, [esp + 0x38]
// 0087fdbc  33c0                 xor eax, eax
// 0087fdbe  52                   push edx
// 0087fdbf  50                   push eax
// 0087fdc0  ff151cba9e00         call dword ptr [0x9eba1c]
// 0087fdc6  eb2e                 jmp 0x87fdf6
// 0087fdc8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087fdcc  8b4604               mov eax, dword ptr [esi + 4]
// 0087fdcf  51                   push ecx
// 0087fdd0  8d542438             lea edx, [esp + 0x38]
// 0087fdd4  52                   push edx
// 0087fdd5  50                   push eax
// 0087fdd6  ff151cba9e00         call dword ptr [0x9eba1c]
// 0087fddc  eb18                 jmp 0x87fdf6
// 0087fdde  8b4738               mov eax, dword ptr [edi + 0x38]
// 0087fde1  83f8ff               cmp eax, -1
// 0087fde4  7503                 jne 0x87fde9
// 0087fde6  8b4734               mov eax, dword ptr [edi + 0x34]
// 0087fde9  50                   push eax
// 0087fdea  8d442438             lea eax, [esp + 0x38]
// 0087fdee  50                   push eax
// 0087fdef  8bce                 mov ecx, esi
// 0087fdf1  e84889f2ff           call 0x7a873e
// 0087fdf6  6a01                 push 1
// 0087fdf8  8bce                 mov ecx, esi
// 0087fdfa  e8b5cf0f00           call 0x97cdb4
// 0087fdff  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0087fe02  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0087fe05  85c0                 test eax, eax
// 0087fe07  0f8468020000         je 0x880075
// 0087fe0d  e85e1ef8ff           call 0x801c70
// 0087fe12  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087fe16  8b542438             mov edx, dword ptr [esp + 0x38]
// 0087fe1a  8be8                 mov ebp, eax
// 0087fe1c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0087fe20  8944242c             mov dword ptr [esp + 0x2c], eax
// 0087fe24  8b442440             mov eax, dword ptr [esp + 0x40]
// 0087fe28  894c2424             mov dword ptr [esp + 0x24], ecx
// 0087fe2c  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 0087fe2f  89542428             mov dword ptr [esp + 0x28], edx
// 0087fe33  89442430             mov dword ptr [esp + 0x30], eax
// 0087fe37  2b4154               sub eax, dword ptr [ecx + 0x54]
// 0087fe3a  837c241800           cmp dword ptr [esp + 0x18], 0
// 0087fe3f  89442428             mov dword ptr [esp + 0x28], eax
// 0087fe43  7406                 je 0x87fe4b
// 0087fe45  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 0087fe49  7522                 jne 0x87fe6d
// 0087fe4b  8b4774               mov eax, dword ptr [edi + 0x74]
// 0087fe4e  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0087fe51  83c034               add eax, 0x34
// 0087fe54  83f9ff               cmp ecx, -1
// 0087fe57  7505                 jne 0x87fe5e
// 0087fe59  8b4004               mov eax, dword ptr [eax + 4]
// 0087fe5c  eb02                 jmp 0x87fe60
// 0087fe5e  8bc1                 mov eax, ecx
// 0087fe60  50                   push eax
// 0087fe61  8d542428             lea edx, [esp + 0x28]
// 0087fe65  52                   push edx
// 0087fe66  8bce                 mov ecx, esi
// 0087fe68  e8d188f2ff           call 0x7a873e
// 0087fe6d  8b07                 mov eax, dword ptr [edi]
// 0087fe6f  8b5018               mov edx, dword ptr [eax + 0x18]
// 0087fe72  6a00                 push 0
// 0087fe74  8d4c2428             lea ecx, [esp + 0x28]
// 0087fe78  51                   push ecx
// 0087fe79  56                   push esi
// 0087fe7a  8bcf                 mov ecx, edi
// 0087fe7c  ffd2                 call edx
// 0087fe7e  8b4774               mov eax, dword ptr [edi + 0x74]
// 0087fe81  83c028               add eax, 0x28
// 0087fe84  50                   push eax
// 0087fe85  56                   push esi
// 0087fe86  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0087fe8d  e80ef8f7ff           call 0x7ff6a0
// 0087fe92  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 0087fe9d  85ed                 test ebp, ebp
// 0087fe9f  0f84aa010000         je 0x88004f
// 0087fea5  8b4774               mov eax, dword ptr [edi + 0x74]
// 0087fea8  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0087feab  83c040               add eax, 0x40
// 0087feae  83f9ff               cmp ecx, -1
// 0087feb1  7505                 jne 0x87feb8
// 0087feb3  8b4004               mov eax, dword ptr [eax + 4]
// 0087feb6  eb02                 jmp 0x87feba
// 0087feb8  8bc1                 mov eax, ecx
// 0087feba  8b16                 mov edx, dword ptr [esi]
// 0087febc  50                   push eax
// 0087febd  8b4238               mov eax, dword ptr [edx + 0x38]
// 0087fec0  8bce                 mov ecx, esi
// 0087fec2  ffd0                 call eax
// 0087fec4  6a01                 push 1
// 0087fec6  8bce                 mov ecx, esi
// 0087fec8  e8e7ce0f00           call 0x97cdb4
// 0087fecd  8b542428             mov edx, dword ptr [esp + 0x28]
// 0087fed1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087fed5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087fed9  6afd                 push -3
// 0087fedb  8954244c             mov dword ptr [esp + 0x4c], edx
// 0087fedf  894c2448             mov dword ptr [esp + 0x48], ecx
// 0087fee3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0087fee7  6afa                 push -6
// 0087fee9  8d54244c             lea edx, [esp + 0x4c]
// 0087feed  52                   push edx
// 0087feee  89442458             mov dword ptr [esp + 0x58], eax
// 0087fef2  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0087fef6  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0087fefc  8d442420             lea eax, [esp + 0x20]
// 0087ff00  50                   push eax
// 0087ff01  8bcd                 mov ecx, ebp
// 0087ff03  e8b83abbff           call 0x4339c0
// 0087ff08  8bd8                 mov ebx, eax
// 0087ff0a  8b0e                 mov ecx, dword ptr [esi]
// 0087ff0c  6820080000           push 0x820
// 0087ff11  8d542448             lea edx, [esp + 0x48]
// 0087ff15  894c2420             mov dword ptr [esp + 0x20], ecx
// 0087ff19  52                   push edx
// 0087ff1a  8bcb                 mov ecx, ebx
// 0087ff1c  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 0087ff24  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087ff2a  50                   push eax
// 0087ff2b  8bcb                 mov ecx, ebx
// 0087ff2d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087ff33  50                   push eax
// 0087ff34  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0087ff38  8b5070               mov edx, dword ptr [eax + 0x70]
// 0087ff3b  8bce                 mov ecx, esi
// 0087ff3d  ffd2                 call edx
// 0087ff3f  8d4c2420             lea ecx, [esp + 0x20]
// 0087ff43  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 0087ff4b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ff51  8d442414             lea eax, [esp + 0x14]
// 0087ff55  50                   push eax
// 0087ff56  8bcd                 mov ecx, ebp
// 0087ff58  e8d385f9ff           call 0x818530
// 0087ff5d  8d4c2414             lea ecx, [esp + 0x14]
// 0087ff61  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 0087ff69  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0087ff6f  84c0                 test al, al
// 0087ff71  0f85ce000000         jne 0x880045
// 0087ff77  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 0087ff7a  83c120               add ecx, 0x20
// 0087ff7d  51                   push ecx
// 0087ff7e  56                   push esi
// 0087ff7f  8d4c247c             lea ecx, [esp + 0x7c]
// 0087ff83  e818f7f7ff           call 0x7ff6a0
// 0087ff88  8d4c2464             lea ecx, [esp + 0x64]
// 0087ff8c  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 0087ff94  e8d7f2f7ff           call 0x7ff270
// 0087ff99  8d542420             lea edx, [esp + 0x20]
// 0087ff9d  52                   push edx
// 0087ff9e  8bcd                 mov ecx, ebp
// 0087ffa0  e81b3abbff           call 0x4339c0
// 0087ffa5  68200c0000           push 0xc20
// 0087ffaa  8d4c2468             lea ecx, [esp + 0x68]
// 0087ffae  51                   push ecx
// 0087ffaf  50                   push eax
// 0087ffb0  8bce                 mov ecx, esi
// 0087ffb2  c68424a800000004     mov byte ptr [esp + 0xa8], 4
// 0087ffba  e821ddf2ff           call 0x7adce0
// 0087ffbf  8d4c2420             lea ecx, [esp + 0x20]
// 0087ffc3  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 0087ffcb  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ffd1  8b442470             mov eax, dword ptr [esp + 0x70]
// 0087ffd5  2b442468             sub eax, dword ptr [esp + 0x68]
// 0087ffd9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087ffdd  8b542428             mov edx, dword ptr [esp + 0x28]
// 0087ffe1  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0087ffe5  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0087ffe9  83c006               add eax, 6
// 0087ffec  894c2454             mov dword ptr [esp + 0x54], ecx
// 0087fff0  03d0                 add edx, eax
// 0087fff2  83c106               add ecx, 6
// 0087fff5  89542458             mov dword ptr [esp + 0x58], edx
// 0087fff9  83eb03               sub ebx, 3
// 0087fffc  6810080000           push 0x810
// 00880001  8d542458             lea edx, [esp + 0x58]
// 00880005  894c2458             mov dword ptr [esp + 0x58], ecx
// 00880009  83ed06               sub ebp, 6
// 0088000c  895c2464             mov dword ptr [esp + 0x64], ebx
// 00880010  8b1e                 mov ebx, dword ptr [esi]
// 00880012  52                   push edx
// 00880013  8d4c241c             lea ecx, [esp + 0x1c]
// 00880017  896c2464             mov dword ptr [esp + 0x64], ebp
// 0088001b  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00880021  50                   push eax
// 00880022  8d4c2420             lea ecx, [esp + 0x20]
// 00880026  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0088002c  50                   push eax
// 0088002d  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00880030  8bce                 mov ecx, esi
// 00880032  ffd0                 call eax
// 00880034  8d4c2474             lea ecx, [esp + 0x74]
// 00880038  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 00880040  e8dbf6f7ff           call 0x7ff720
// 00880045  8d4c2414             lea ecx, [esp + 0x14]
// 00880049  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0088004f  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00880052  bafdffffff           mov edx, 0xfffffffd
// 00880057  2b5154               sub edx, dword ptr [ecx + 0x54]
// 0088005a  8d8c2484000000       lea ecx, [esp + 0x84]
// 00880061  01542440             add dword ptr [esp + 0x40], edx
// 00880065  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00880070  e8abf6f7ff           call 0x7ff720
// 00880075  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 00880078  8b8138010000         mov eax, dword ptr [ecx + 0x138]
// 0088007e  83782800             cmp dword ptr [eax + 0x28], 0
// 00880082  0f8495000000         je 0x88011d
// 00880088  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088008c  8b442438             mov eax, dword ptr [esp + 0x38]
// 00880090  89442448             mov dword ptr [esp + 0x48], eax
// 00880094  8b442440             mov eax, dword ptr [esp + 0x40]
// 00880098  89542444             mov dword ptr [esp + 0x44], edx
// 0088009c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008800a0  8954244c             mov dword ptr [esp + 0x4c], edx
// 008800a4  89442450             mov dword ptr [esp + 0x50], eax
// 008800a8  2b4158               sub eax, dword ptr [ecx + 0x58]
// 008800ab  837c241800           cmp dword ptr [esp + 0x18], 0
// 008800b0  89442448             mov dword ptr [esp + 0x48], eax
// 008800b4  7406                 je 0x8800bc
// 008800b6  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 008800ba  7522                 jne 0x8800de
// 008800bc  8b4774               mov eax, dword ptr [edi + 0x74]
// 008800bf  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 008800c2  83c034               add eax, 0x34
// 008800c5  83f9ff               cmp ecx, -1
// 008800c8  7505                 jne 0x8800cf
// 008800ca  8b4004               mov eax, dword ptr [eax + 4]
// 008800cd  eb02                 jmp 0x8800d1
// 008800cf  8bc1                 mov eax, ecx
// 008800d1  50                   push eax
// 008800d2  8d442448             lea eax, [esp + 0x48]
// 008800d6  50                   push eax
// 008800d7  8bce                 mov ecx, esi
// 008800d9  e86086f2ff           call 0x7a873e
// 008800de  8b17                 mov edx, dword ptr [edi]
// 008800e0  8b5218               mov edx, dword ptr [edx + 0x18]
// 008800e3  6a00                 push 0
// 008800e5  8d442448             lea eax, [esp + 0x48]
// 008800e9  50                   push eax
// 008800ea  56                   push esi
// 008800eb  8bcf                 mov ecx, edi
// 008800ed  ffd2                 call edx
// 008800ef  8b542448             mov edx, dword ptr [esp + 0x48]
// 008800f3  33c9                 xor ecx, ecx
// 008800f5  51                   push ecx
// 008800f6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008800fa  33c0                 xor eax, eax
// 008800fc  50                   push eax
// 008800fd  83ec10               sub esp, 0x10
// 00880100  8bc4                 mov eax, esp
// 00880102  8908                 mov dword ptr [eax], ecx
// 00880104  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00880108  895004               mov dword ptr [eax + 4], edx
// 0088010b  8b542468             mov edx, dword ptr [esp + 0x68]
// 0088010f  894808               mov dword ptr [eax + 8], ecx
// 00880112  56                   push esi
// 00880113  8bcf                 mov ecx, edi
// 00880115  89500c               mov dword ptr [eax + 0xc], edx
// 00880118  e8f3deffff           call 0x87e010
// 0088011d  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00880124  64890d00000000       mov dword ptr fs:[0], ecx
// 0088012b  59                   pop ecx
// 0088012c  5f                   pop edi
// 0088012d  5e                   pop esi
// 0088012e  5d                   pop ebp
// 0088012f  5b                   pop ebx
// 00880130  81c48c000000         add esp, 0x8c
// 00880136  c20400               ret 4
// copied from an identical function in another client (function ?FillPropertyGrid@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp