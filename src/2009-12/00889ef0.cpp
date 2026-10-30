// roc 2009-12 00889ef0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 1589 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00889ef0
//
// 00889ef0  6aff                 push -1
// 00889ef2  68b10c9600           push 0x960cb1
// 00889ef7  64a100000000         mov eax, dword ptr fs:[0]
// 00889efd  50                   push eax
// 00889efe  83ec54               sub esp, 0x54
// 00889f01  53                   push ebx
// 00889f02  55                   push ebp
// 00889f03  56                   push esi
// 00889f04  57                   push edi
// 00889f05  a10052b600           mov eax, dword ptr [0xb65200]
// 00889f0a  33c4                 xor eax, esp
// 00889f0c  50                   push eax
// 00889f0d  8d442468             lea eax, [esp + 0x68]
// 00889f11  64a300000000         mov dword ptr fs:[0], eax
// 00889f17  8be9                 mov ebp, ecx
// 00889f19  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 00889f20  85c0                 test eax, eax
// 00889f22  7414                 je 0x889f38
// 00889f24  8b4074               mov eax, dword ptr [eax + 0x74]
// 00889f27  83787400             cmp dword ptr [eax + 0x74], 0
// 00889f2b  7506                 jne 0x889f33
// 00889f2d  83787800             cmp dword ptr [eax + 0x78], 0
// 00889f31  7405                 je 0x889f38
// 00889f33  83c074               add eax, 0x74
// 00889f36  eb0c                 jmp 0x889f44
// 00889f38  6a00                 push 0
// 00889f3a  8d44241c             lea eax, [esp + 0x1c]
// 00889f3e  50                   push eax
// 00889f3f  e80c41f7ff           call 0x7fe050
// 00889f44  8b10                 mov edx, dword ptr [eax]
// 00889f46  8b4004               mov eax, dword ptr [eax + 4]
// 00889f49  8d4806               lea ecx, [eax + 6]
// 00889f4c  8b8510010000         mov eax, dword ptr [ebp + 0x110]
// 00889f52  3bc8                 cmp ecx, eax
// 00889f54  89542428             mov dword ptr [esp + 0x28], edx
// 00889f58  894c2418             mov dword ptr [esp + 0x18], ecx
// 00889f5c  7f04                 jg 0x889f62
// 00889f5e  89442418             mov dword ptr [esp + 0x18], eax
// 00889f62  8d4a04               lea ecx, [edx + 4]
// 00889f65  83c004               add eax, 4
// 00889f68  3bc8                 cmp ecx, eax
// 00889f6a  894c2414             mov dword ptr [esp + 0x14], ecx
// 00889f6e  7f04                 jg 0x889f74
// 00889f70  89442414             mov dword ptr [esp + 0x14], eax
// 00889f74  83bc249800000000     cmp dword ptr [esp + 0x98], 0
// 00889f7c  0f847c050000         je 0x88a4fe
// 00889f82  6a29                 push 0x29
// 00889f84  8bcd                 mov ecx, ebp
// 00889f86  e8b536f7ff           call 0x7fd640
// 00889f8b  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 00889f8f  50                   push eax
// 00889f90  8d8c2488000000       lea ecx, [esp + 0x88]
// 00889f97  51                   push ecx
// 00889f98  8bce                 mov ecx, esi
// 00889f9a  e85fa6f6ff           call 0x7f45fe
// 00889f9f  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00889fa6  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00889fad  8b5500               mov edx, dword ptr [ebp]
// 00889fb0  8b92d8000000         mov edx, dword ptr [edx + 0xd8]
// 00889fb6  6a00                 push 0
// 00889fb8  2bc8                 sub ecx, eax
// 00889fba  51                   push ecx
// 00889fbb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00889fbf  41                   inc ecx
// 00889fc0  51                   push ecx
// 00889fc1  50                   push eax
// 00889fc2  6a00                 push 0
// 00889fc4  56                   push esi
// 00889fc5  8bcd                 mov ecx, ebp
// 00889fc7  ffd2                 call edx
// 00889fc9  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 00889fd0  85db                 test ebx, ebx
// 00889fd2  750e                 jne 0x889fe2
// 00889fd4  8b442478             mov eax, dword ptr [esp + 0x78]
// 00889fd8  8918                 mov dword ptr [eax], ebx
// 00889fda  895804               mov dword ptr [eax + 4], ebx
// 00889fdd  e92d050000           jmp 0x88a50f
// 00889fe2  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 00889fe8  8bcb                 mov ecx, ebx
// 00889fea  8944247c             mov dword ptr [esp + 0x7c], eax
// 00889fee  e89dbcf6ff           call 0x7f5c90
// 00889ff3  8bbc2494000000       mov edi, dword ptr [esp + 0x94]
// 00889ffa  89442420             mov dword ptr [esp + 0x20], eax
// 00889ffe  85ff                 test edi, edi
// 0088a000  744b                 je 0x88a04d
// 0088a002  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0088a009  6a05                 push 5
// 0088a00b  8b5500               mov edx, dword ptr [ebp]
// 0088a00e  6a02                 push 2
// 0088a010  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0088a016  6a00                 push 0
// 0088a018  6a00                 push 0
// 0088a01a  6a01                 push 1
// 0088a01c  6a00                 push 0
// 0088a01e  57                   push edi
// 0088a01f  83ec10               sub esp, 0x10
// 0088a022  8bc4                 mov eax, esp
// 0088a024  8908                 mov dword ptr [eax], ecx
// 0088a026  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 0088a02d  894804               mov dword ptr [eax + 4], ecx
// 0088a030  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0088a037  894808               mov dword ptr [eax + 8], ecx
// 0088a03a  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 0088a041  89480c               mov dword ptr [eax + 0xc], ecx
// 0088a044  56                   push esi
// 0088a045  8bcd                 mov ecx, ebp
// 0088a047  ffd2                 call edx
// 0088a049  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088a04d  85c0                 test eax, eax
// 0088a04f  7536                 jne 0x88a087
// 0088a051  837c247c02           cmp dword ptr [esp + 0x7c], 2
// 0088a056  7439                 je 0x88a091
// 0088a058  ba01000000           mov edx, 1
// 0088a05d  8b8390000000         mov eax, dword ptr [ebx + 0x90]
// 0088a063  85c0                 test eax, eax
// 0088a065  753c                 jne 0x88a0a3
// 0088a067  8b8388000000         mov eax, dword ptr [ebx + 0x88]
// 0088a06d  85c0                 test eax, eax
// 0088a06f  7f32                 jg 0x88a0a3
// 0088a071  8b8b5c010000         mov ecx, dword ptr [ebx + 0x15c]
// 0088a077  85c9                 test ecx, ecx
// 0088a079  741a                 je 0x88a095
// 0088a07b  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0088a07e  85c0                 test eax, eax
// 0088a080  7f21                 jg 0x88a0a3
// 0088a082  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0088a085  eb14                 jmp 0x88a09b
// 0088a087  83f802               cmp eax, 2
// 0088a08a  74cc                 je 0x88a058
// 0088a08c  83f803               cmp eax, 3
// 0088a08f  74c7                 je 0x88a058
// 0088a091  33d2                 xor edx, edx
// 0088a093  ebc8                 jmp 0x88a05d
// 0088a095  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 0088a09b  85c0                 test eax, eax
// 0088a09d  0f84c5000000         je 0x88a168
// 0088a0a3  85d2                 test edx, edx
// 0088a0a5  0f84bd000000         je 0x88a168
// 0088a0ab  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088a0af  8b03                 mov eax, dword ptr [ebx]
// 0088a0b1  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0088a0b7  51                   push ecx
// 0088a0b8  8bcb                 mov ecx, ebx
// 0088a0ba  ffd2                 call edx
// 0088a0bc  89842494000000       mov dword ptr [esp + 0x94], eax
// 0088a0c3  85c0                 test eax, eax
// 0088a0c5  0f849d000000         je 0x88a168
// 0088a0cb  8bc8                 mov ecx, eax
// 0088a0cd  e89eb7c4ff           call 0x4d5870
// 0088a0d2  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0088a0d9  8bd8                 mov ebx, eax
// 0088a0db  0faf5c2428           imul ebx, dword ptr [esp + 0x28]
// 0088a0e0  e89b3bfcff           call 0x84dc80
// 0088a0e5  8bc8                 mov ecx, eax
// 0088a0e7  8bc3                 mov eax, ebx
// 0088a0e9  99                   cdq 
// 0088a0ea  f7f9                 idiv ecx
// 0088a0ec  6a00                 push 0
// 0088a0ee  6a00                 push 0
// 0088a0f0  6a00                 push 0
// 0088a0f2  6a01                 push 1
// 0088a0f4  6a00                 push 0
// 0088a0f6  57                   push edi
// 0088a0f7  8bd8                 mov ebx, eax
// 0088a0f9  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 0088a100  2b8424a0000000       sub eax, dword ptr [esp + 0xa0]
// 0088a107  895c2444             mov dword ptr [esp + 0x44], ebx
// 0088a10b  99                   cdq 
// 0088a10c  2bc2                 sub eax, edx
// 0088a10e  8bc8                 mov ecx, eax
// 0088a110  8bc3                 mov eax, ebx
// 0088a112  99                   cdq 
// 0088a113  2bc2                 sub eax, edx
// 0088a115  d1f8                 sar eax, 1
// 0088a117  d1f9                 sar ecx, 1
// 0088a119  2bc8                 sub ecx, eax
// 0088a11b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088a11f  038c24a0000000       add ecx, dword ptr [esp + 0xa0]
// 0088a126  99                   cdq 
// 0088a127  2bc2                 sub eax, edx
// 0088a129  8bd8                 mov ebx, eax
// 0088a12b  8b442440             mov eax, dword ptr [esp + 0x40]
// 0088a12f  99                   cdq 
// 0088a130  2bc2                 sub eax, edx
// 0088a132  8b5500               mov edx, dword ptr [ebp]
// 0088a135  8b92c0000000         mov edx, dword ptr [edx + 0xc0]
// 0088a13b  d1f8                 sar eax, 1
// 0088a13d  d1fb                 sar ebx, 1
// 0088a13f  2bd8                 sub ebx, eax
// 0088a141  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 0088a148  039c249c000000       add ebx, dword ptr [esp + 0x9c]
// 0088a14f  50                   push eax
// 0088a150  8b442448             mov eax, dword ptr [esp + 0x48]
// 0088a154  50                   push eax
// 0088a155  8b442448             mov eax, dword ptr [esp + 0x48]
// 0088a159  50                   push eax
// 0088a15a  51                   push ecx
// 0088a15b  53                   push ebx
// 0088a15c  56                   push esi
// 0088a15d  8bcd                 mov ecx, ebp
// 0088a15f  ffd2                 call edx
// 0088a161  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0088a168  8bcd                 mov ecx, ebp
// 0088a16a  85ff                 test edi, edi
// 0088a16c  7404                 je 0x88a172
// 0088a16e  6a2d                 push 0x2d
// 0088a170  eb02                 jmp 0x88a174
// 0088a172  6a2c                 push 0x2c
// 0088a174  e8c734f7ff           call 0x7fd640
// 0088a179  8b16                 mov edx, dword ptr [esi]
// 0088a17b  89842480000000       mov dword ptr [esp + 0x80], eax
// 0088a182  50                   push eax
// 0088a183  8b4238               mov eax, dword ptr [edx + 0x38]
// 0088a186  8bce                 mov ecx, esi
// 0088a188  ffd0                 call eax
// 0088a18a  6a01                 push 1
// 0088a18c  8bce                 mov ecx, esi
// 0088a18e  e8fdc20900           call 0x926490
// 0088a193  8b13                 mov edx, dword ptr [ebx]
// 0088a195  8b5258               mov edx, dword ptr [edx + 0x58]
// 0088a198  8d842498000000       lea eax, [esp + 0x98]
// 0088a19f  50                   push eax
// 0088a1a0  8bcb                 mov ecx, ebx
// 0088a1a2  ffd2                 call edx
// 0088a1a4  8d842498000000       lea eax, [esp + 0x98]
// 0088a1ab  33db                 xor ebx, ebx
// 0088a1ad  50                   push eax
// 0088a1ae  895c2474             mov dword ptr [esp + 0x74], ebx
// 0088a1b2  e81937f7ff           call 0x7fd8d0
// 0088a1b7  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0088a1be  83c404               add esp, 4
// 0088a1c1  3bcb                 cmp ecx, ebx
// 0088a1c3  741e                 je 0x88a1e3
// 0088a1c5  e8d6a1f8ff           call 0x8143a0
// 0088a1ca  85c0                 test eax, eax
// 0088a1cc  7415                 je 0x88a1e3
// 0088a1ce  8b5500               mov edx, dword ptr [ebp]
// 0088a1d1  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 0088a1d7  8d842498000000       lea eax, [esp + 0x98]
// 0088a1de  50                   push eax
// 0088a1df  8bcd                 mov ecx, ebp
// 0088a1e1  ffd2                 call edx
// 0088a1e3  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0088a1ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088a1ee  8d540108             lea edx, [ecx + eax + 8]
// 0088a1f2  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0088a1f9  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0088a200  89542438             mov dword ptr [esp + 0x38], edx
// 0088a204  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0088a20b  89542444             mov dword ptr [esp + 0x44], edx
// 0088a20f  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0088a213  8944243c             mov dword ptr [esp + 0x3c], eax
// 0088a217  894c2440             mov dword ptr [esp + 0x40], ecx
// 0088a21b  83fa02               cmp edx, 2
// 0088a21e  740e                 je 0x88a22e
// 0088a220  83fa03               cmp edx, 3
// 0088a223  7409                 je 0x88a22e
// 0088a225  83fa04               cmp edx, 4
// 0088a228  0f85a3000000         jne 0x88a2d1
// 0088a22e  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0088a235  03c2                 add eax, edx
// 0088a237  99                   cdq 
// 0088a238  2bc2                 sub eax, edx
// 0088a23a  d1f8                 sar eax, 1
// 0088a23c  8d58fb               lea ebx, [eax - 5]
// 0088a23f  8d5005               lea edx, [eax + 5]
// 0088a242  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 0088a249  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 0088a250  53                   push ebx
// 0088a251  899424a0000000       mov dword ptr [esp + 0xa0], edx
// 0088a258  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 0088a25f  53                   push ebx
// 0088a260  8b9c249c000000       mov ebx, dword ptr [esp + 0x9c]
// 0088a267  83c1f9               add ecx, -7
// 0088a26a  8d51fb               lea edx, [ecx - 5]
// 0088a26d  52                   push edx
// 0088a26e  53                   push ebx
// 0088a26f  52                   push edx
// 0088a270  50                   push eax
// 0088a271  51                   push ecx
// 0088a272  56                   push esi
// 0088a273  e81844f7ff           call 0x7fe690
// 0088a278  836c246007           sub dword ptr [esp + 0x60], 7
// 0088a27d  83c420               add esp, 0x20
// 0088a280  837c247c04           cmp dword ptr [esp + 0x7c], 4
// 0088a285  7544                 jne 0x88a2cb
// 0088a287  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0088a28e  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0088a295  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0088a29c  83c0ec               add eax, -0x14
// 0088a29f  f7df                 neg edi
// 0088a2a1  1bff                 sbb edi, edi
// 0088a2a3  83e710               and edi, 0x10
// 0088a2a6  83c710               add edi, 0x10
// 0088a2a9  57                   push edi
// 0088a2aa  49                   dec ecx
// 0088a2ab  51                   push ecx
// 0088a2ac  50                   push eax
// 0088a2ad  42                   inc edx
// 0088a2ae  52                   push edx
// 0088a2af  50                   push eax
// 0088a2b0  56                   push esi
// 0088a2b1  8bcd                 mov ecx, ebp
// 0088a2b3  e8e848f7ff           call 0x7feba0
// 0088a2b8  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0088a2bf  83c0ec               add eax, -0x14
// 0088a2c2  89442440             mov dword ptr [esp + 0x40], eax
// 0088a2c6  e9d3010000           jmp 0x88a49e
// 0088a2cb  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 0088a2cf  33db                 xor ebx, ebx
// 0088a2d1  83fa05               cmp edx, 5
// 0088a2d4  7409                 je 0x88a2df
// 0088a2d6  83fa06               cmp edx, 6
// 0088a2d9  0f85bf010000         jne 0x88a49e
// 0088a2df  6820040000           push 0x420
// 0088a2e4  8d4c244c             lea ecx, [esp + 0x4c]
// 0088a2e8  51                   push ecx
// 0088a2e9  895c2450             mov dword ptr [esp + 0x50], ebx
// 0088a2ed  895c2454             mov dword ptr [esp + 0x54], ebx
// 0088a2f1  895c2458             mov dword ptr [esp + 0x58], ebx
// 0088a2f5  895c245c             mov dword ptr [esp + 0x5c], ebx
// 0088a2f9  8b1e                 mov ebx, dword ptr [esi]
// 0088a2fb  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0088a302  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0088a308  50                   push eax
// 0088a309  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0088a310  ff1580de9800         call dword ptr [0x98de80]
// 0088a316  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0088a319  50                   push eax
// 0088a31a  8bce                 mov ecx, esi
// 0088a31c  ffd2                 call edx
// 0088a31e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0088a321  8d442420             lea eax, [esp + 0x20]
// 0088a325  50                   push eax
// 0088a326  6a01                 push 1
// 0088a328  6868619a00           push 0x9a6168
// 0088a32d  51                   push ecx
// 0088a32e  ff156cb19800         call dword ptr [0x98b16c]
// 0088a334  8b542450             mov edx, dword ptr [esp + 0x50]
// 0088a338  2b542448             sub edx, dword ptr [esp + 0x48]
// 0088a33c  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0088a343  03542414             add edx, dword ptr [esp + 0x14]
// 0088a347  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088a34b  83c002               add eax, 2
// 0088a34e  8d540a0d             lea edx, [edx + ecx + 0xd]
// 0088a352  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0088a359  8bd9                 mov ebx, ecx
// 0088a35b  2bd8                 sub ebx, eax
// 0088a35d  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0088a364  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088a368  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 0088a36f  89442434             mov dword ptr [esp + 0x34], eax
// 0088a373  8bc7                 mov eax, edi
// 0088a375  f7d8                 neg eax
// 0088a377  1bc0                 sbb eax, eax
// 0088a379  83e011               and eax, 0x11
// 0088a37c  6a05                 push 5
// 0088a37e  83c00f               add eax, 0xf
// 0088a381  50                   push eax
// 0088a382  83ec10               sub esp, 0x10
// 0088a385  8bc4                 mov eax, esp
// 0088a387  8910                 mov dword ptr [eax], edx
// 0088a389  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 0088a390  895004               mov dword ptr [eax + 4], edx
// 0088a393  894808               mov dword ptr [eax + 8], ecx
// 0088a396  894c2448             mov dword ptr [esp + 0x48], ecx
// 0088a39a  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 0088a3a1  89480c               mov dword ptr [eax + 0xc], ecx
// 0088a3a4  56                   push esi
// 0088a3a5  8bcd                 mov ecx, ebp
// 0088a3a7  e8b443f7ff           call 0x7fe760
// 0088a3ac  837c247c05           cmp dword ptr [esp + 0x7c], 5
// 0088a3b1  0f85e7000000         jne 0x88a49e
// 0088a3b7  85ff                 test edi, edi
// 0088a3b9  7551                 jne 0x88a40c
// 0088a3bb  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088a3bf  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0088a3c3  6a0f                 push 0xf
// 0088a3c5  89842484000000       mov dword ptr [esp + 0x84], eax
// 0088a3cc  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088a3d0  2bc3                 sub eax, ebx
// 0088a3d2  8bcd                 mov ecx, ebp
// 0088a3d4  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 0088a3db  e86032f7ff           call 0x7fd640
// 0088a3e0  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 0088a3e7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088a3eb  50                   push eax
// 0088a3ec  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0088a3f3  83c2fc               add edx, -4
// 0088a3f6  52                   push edx
// 0088a3f7  83c0fc               add eax, -4
// 0088a3fa  50                   push eax
// 0088a3fb  83c102               add ecx, 2
// 0088a3fe  51                   push ecx
// 0088a3ff  8d5302               lea edx, [ebx + 2]
// 0088a402  52                   push edx
// 0088a403  8bce                 mov ecx, esi
// 0088a405  e88cc00900           call 0x926496
// 0088a40a  eb37                 jmp 0x88a443
// 0088a40c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088a410  8b5500               mov edx, dword ptr [ebp]
// 0088a413  6a05                 push 5
// 0088a415  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0088a41b  6a02                 push 2
// 0088a41d  6a00                 push 0
// 0088a41f  6a00                 push 0
// 0088a421  6a01                 push 1
// 0088a423  6a00                 push 0
// 0088a425  57                   push edi
// 0088a426  83ec10               sub esp, 0x10
// 0088a429  8bc4                 mov eax, esp
// 0088a42b  8918                 mov dword ptr [eax], ebx
// 0088a42d  894804               mov dword ptr [eax + 4], ecx
// 0088a430  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0088a434  894808               mov dword ptr [eax + 8], ecx
// 0088a437  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0088a43b  89480c               mov dword ptr [eax + 0xc], ecx
// 0088a43e  56                   push esi
// 0088a43f  8bcd                 mov ecx, ebp
// 0088a441  ffd2                 call edx
// 0088a443  b801000000           mov eax, 1
// 0088a448  0144242c             add dword ptr [esp + 0x2c], eax
// 0088a44c  29442430             sub dword ptr [esp + 0x30], eax
// 0088a450  29442434             sub dword ptr [esp + 0x34], eax
// 0088a454  03d8                 add ebx, eax
// 0088a456  8b4500               mov eax, dword ptr [ebp]
// 0088a459  f7df                 neg edi
// 0088a45b  1bff                 sbb edi, edi
// 0088a45d  83c72e               add edi, 0x2e
// 0088a460  57                   push edi
// 0088a461  8bcd                 mov ecx, ebp
// 0088a463  89842484000000       mov dword ptr [esp + 0x84], eax
// 0088a46a  e8d131f7ff           call 0x7fd640
// 0088a46f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088a473  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088a477  50                   push eax
// 0088a478  83ec10               sub esp, 0x10
// 0088a47b  8bc4                 mov eax, esp
// 0088a47d  8918                 mov dword ptr [eax], ebx
// 0088a47f  894804               mov dword ptr [eax + 4], ecx
// 0088a482  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088a486  895008               mov dword ptr [eax + 8], edx
// 0088a489  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 0088a490  89480c               mov dword ptr [eax + 0xc], ecx
// 0088a493  8b82f0000000         mov eax, dword ptr [edx + 0xf0]
// 0088a499  56                   push esi
// 0088a49a  8bcd                 mov ecx, ebp
// 0088a49c  ffd0                 call eax
// 0088a49e  81c5f0000000         add ebp, 0xf0
// 0088a4a4  55                   push ebp
// 0088a4a5  56                   push esi
// 0088a4a6  8d4c2460             lea ecx, [esp + 0x60]
// 0088a4aa  e8b111fcff           call 0x84b660
// 0088a4af  8b3e                 mov edi, dword ptr [esi]
// 0088a4b1  6824880000           push 0x8824
// 0088a4b6  8d4c243c             lea ecx, [esp + 0x3c]
// 0088a4ba  51                   push ecx
// 0088a4bb  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0088a4c2  c644247801           mov byte ptr [esp + 0x78], 1
// 0088a4c7  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0088a4cd  50                   push eax
// 0088a4ce  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0088a4d5  ff1580de9800         call dword ptr [0x98de80]
// 0088a4db  8b5770               mov edx, dword ptr [edi + 0x70]
// 0088a4de  50                   push eax
// 0088a4df  8bce                 mov ecx, esi
// 0088a4e1  ffd2                 call edx
// 0088a4e3  8d4c2458             lea ecx, [esp + 0x58]
// 0088a4e7  c644247000           mov byte ptr [esp + 0x70], 0
// 0088a4ec  e8ef11fcff           call 0x84b6e0
// 0088a4f1  8d8c2498000000       lea ecx, [esp + 0x98]
// 0088a4f8  ff15c0de9800         call dword ptr [0x98dec0]
// 0088a4fe  8b442478             mov eax, dword ptr [esp + 0x78]
// 0088a502  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088a506  8b542418             mov edx, dword ptr [esp + 0x18]
// 0088a50a  8908                 mov dword ptr [eax], ecx
// 0088a50c  895004               mov dword ptr [eax + 4], edx
// 0088a50f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0088a513  64890d00000000       mov dword ptr fs:[0], ecx
// 0088a51a  59                   pop ecx
// 0088a51b  5f                   pop edi
// 0088a51c  5e                   pop esi
// 0088a51d  5d                   pop ebp
// 0088a51e  5b                   pop ebx
// 0088a51f  83c460               add esp, 0x60
// 0088a522  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawListBoxControl@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHPAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOfficeTheme.cpp