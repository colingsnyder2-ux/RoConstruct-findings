// roc 2009-12 00880800  unit: CXTPOffice2007Theme  size: 3422 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00880800
//
// 00880800  6aff                 push -1
// 00880802  68b8089600           push 0x9608b8
// 00880807  64a100000000         mov eax, dword ptr fs:[0]
// 0088080d  50                   push eax
// 0088080e  81ec38010000         sub esp, 0x138
// 00880814  53                   push ebx
// 00880815  55                   push ebp
// 00880816  56                   push esi
// 00880817  57                   push edi
// 00880818  a10052b600           mov eax, dword ptr [0xb65200]
// 0088081d  33c4                 xor eax, esp
// 0088081f  50                   push eax
// 00880820  8d84244c010000       lea eax, [esp + 0x14c]
// 00880827  64a300000000         mov dword ptr fs:[0], eax
// 0088082d  8bf9                 mov edi, ecx
// 0088082f  8bb42460010000       mov esi, dword ptr [esp + 0x160]
// 00880836  8b4608               mov eax, dword ptr [esi + 8]
// 00880839  50                   push eax
// 0088083a  e8eb32f7ff           call 0x7f3b2a
// 0088083f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00880842  8bd8                 mov ebx, eax
// 00880844  894c2418             mov dword ptr [esp + 0x18], ecx
// 00880848  53                   push ebx
// 00880849  8d8c2410010000       lea ecx, [esp + 0x110]
// 00880850  895c2440             mov dword ptr [esp + 0x40], ebx
// 00880854  e877aafcff           call 0x84b2d0
// 00880859  8d94240c010000       lea edx, [esp + 0x10c]
// 00880860  52                   push edx
// 00880861  8bcb                 mov ecx, ebx
// 00880863  e89235f7ff           call 0x7f3dfa
// 00880868  53                   push ebx
// 00880869  8d4c2420             lea ecx, [esp + 0x20]
// 0088086d  e8fea9fcff           call 0x84b270
// 00880872  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00880876  2b8c2418010000       sub ecx, dword ptr [esp + 0x118]
// 0088087d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00880881  8bac240c010000       mov ebp, dword ptr [esp + 0x10c]
// 00880888  894c2454             mov dword ptr [esp + 0x54], ecx
// 0088088c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00880890  2be8                 sub ebp, eax
// 00880892  f7d9                 neg ecx
// 00880894  f7d8                 neg eax
// 00880896  51                   push ecx
// 00880897  50                   push eax
// 00880898  8d442424             lea eax, [esp + 0x24]
// 0088089c  50                   push eax
// 0088089d  ff156ccc9800         call dword ptr [0x98cc6c]
// 008808a3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008808a7  8b542424             mov edx, dword ptr [esp + 0x24]
// 008808ab  8b442428             mov eax, dword ptr [esp + 0x28]
// 008808af  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008808b3  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 008808ba  8bce                 mov ecx, esi
// 008808bc  899424ac000000       mov dword ptr [esp + 0xac], edx
// 008808c3  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 008808ca  e8e1ae0600           call 0x8eb7b0
// 008808cf  8d4c2458             lea ecx, [esp + 0x58]
// 008808d3  51                   push ecx
// 008808d4  8bce                 mov ecx, esi
// 008808d6  89442444             mov dword ptr [esp + 0x44], eax
// 008808da  03d8                 add ebx, eax
// 008808dc  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008808e4  e887b00600           call 0x8eb970
// 008808e9  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 008808f0  85c0                 test eax, eax
// 008808f2  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 008808f9  7409                 je 0x880904
// 008808fb  2b442458             sub eax, dword ptr [esp + 0x58]
// 008808ff  2bc3                 sub eax, ebx
// 00880901  48                   dec eax
// 00880902  eb02                 jmp 0x880906
// 00880904  2bc3                 sub eax, ebx
// 00880906  89442414             mov dword ptr [esp + 0x14], eax
// 0088090a  85ed                 test ebp, ebp
// 0088090c  7e3c                 jle 0x88094a
// 0088090e  837c241800           cmp dword ptr [esp + 0x18], 0
// 00880913  7408                 je 0x88091d
// 00880915  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 0088091b  eb06                 jmp 0x880923
// 0088091d  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00880923  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 0088092a  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 00880931  50                   push eax
// 00880932  8b442420             mov eax, dword ptr [esp + 0x20]
// 00880936  2bd3                 sub edx, ebx
// 00880938  52                   push edx
// 00880939  6a01                 push 1
// 0088093b  53                   push ebx
// 0088093c  50                   push eax
// 0088093d  8bce                 mov ecx, esi
// 0088093f  e8525b0a00           call 0x926496
// 00880944  8b442414             mov eax, dword ptr [esp + 0x14]
// 00880948  eb07                 jmp 0x880951
// 0088094a  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 00880951  83fd01               cmp ebp, 1
// 00880954  7e2b                 jle 0x880981
// 00880956  837c241800           cmp dword ptr [esp + 0x18], 0
// 0088095b  7408                 je 0x880965
// 0088095d  8b8fd0050000         mov ecx, dword ptr [edi + 0x5d0]
// 00880963  eb06                 jmp 0x88096b
// 00880965  8b8fe0050000         mov ecx, dword ptr [edi + 0x5e0]
// 0088096b  51                   push ecx
// 0088096c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00880970  50                   push eax
// 00880971  6a01                 push 1
// 00880973  41                   inc ecx
// 00880974  53                   push ebx
// 00880975  51                   push ecx
// 00880976  8bce                 mov ecx, esi
// 00880978  e8195b0a00           call 0x926496
// 0088097d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00880981  83fd02               cmp ebp, 2
// 00880984  7e2d                 jle 0x8809b3
// 00880986  837c241800           cmp dword ptr [esp + 0x18], 0
// 0088098b  7408                 je 0x880995
// 0088098d  8b8fd4050000         mov ecx, dword ptr [edi + 0x5d4]
// 00880993  eb06                 jmp 0x88099b
// 00880995  8b8fe4050000         mov ecx, dword ptr [edi + 0x5e4]
// 0088099b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088099f  51                   push ecx
// 008809a0  50                   push eax
// 008809a1  6a01                 push 1
// 008809a3  53                   push ebx
// 008809a4  83c202               add edx, 2
// 008809a7  52                   push edx
// 008809a8  8bce                 mov ecx, esi
// 008809aa  e8e75a0a00           call 0x926496
// 008809af  8b442414             mov eax, dword ptr [esp + 0x14]
// 008809b3  83fd03               cmp ebp, 3
// 008809b6  7e2f                 jle 0x8809e7
// 008809b8  837c241800           cmp dword ptr [esp + 0x18], 0
// 008809bd  7408                 je 0x8809c7
// 008809bf  8b8fd8050000         mov ecx, dword ptr [edi + 0x5d8]
// 008809c5  eb06                 jmp 0x8809cd
// 008809c7  8b8fe8050000         mov ecx, dword ptr [edi + 0x5e8]
// 008809cd  51                   push ecx
// 008809ce  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008809d2  50                   push eax
// 008809d3  8d45fd               lea eax, [ebp - 3]
// 008809d6  50                   push eax
// 008809d7  83c103               add ecx, 3
// 008809da  53                   push ebx
// 008809db  51                   push ecx
// 008809dc  8bce                 mov ecx, esi
// 008809de  e8b35a0a00           call 0x926496
// 008809e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 008809e7  85ed                 test ebp, ebp
// 008809e9  7e34                 jle 0x880a1f
// 008809eb  837c241800           cmp dword ptr [esp + 0x18], 0
// 008809f0  7408                 je 0x8809fa
// 008809f2  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 008809f8  eb06                 jmp 0x880a00
// 008809fa  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00880a00  8b542424             mov edx, dword ptr [esp + 0x24]
// 00880a04  50                   push eax
// 00880a05  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 00880a0c  2bc3                 sub eax, ebx
// 00880a0e  50                   push eax
// 00880a0f  6a01                 push 1
// 00880a11  53                   push ebx
// 00880a12  4a                   dec edx
// 00880a13  52                   push edx
// 00880a14  8bce                 mov ecx, esi
// 00880a16  e87b5a0a00           call 0x926496
// 00880a1b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00880a1f  83fd01               cmp ebp, 1
// 00880a22  7e2d                 jle 0x880a51
// 00880a24  837c241800           cmp dword ptr [esp + 0x18], 0
// 00880a29  7408                 je 0x880a33
// 00880a2b  8b8fd0050000         mov ecx, dword ptr [edi + 0x5d0]
// 00880a31  eb06                 jmp 0x880a39
// 00880a33  8b8fe0050000         mov ecx, dword ptr [edi + 0x5e0]
// 00880a39  51                   push ecx
// 00880a3a  50                   push eax
// 00880a3b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00880a3f  6a01                 push 1
// 00880a41  53                   push ebx
// 00880a42  83c0fe               add eax, -2
// 00880a45  50                   push eax
// 00880a46  8bce                 mov ecx, esi
// 00880a48  e8495a0a00           call 0x926496
// 00880a4d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00880a51  83fd02               cmp ebp, 2
// 00880a54  7e2d                 jle 0x880a83
// 00880a56  837c241800           cmp dword ptr [esp + 0x18], 0
// 00880a5b  7408                 je 0x880a65
// 00880a5d  8b8fd4050000         mov ecx, dword ptr [edi + 0x5d4]
// 00880a63  eb06                 jmp 0x880a6b
// 00880a65  8b8fe4050000         mov ecx, dword ptr [edi + 0x5e4]
// 00880a6b  51                   push ecx
// 00880a6c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00880a70  50                   push eax
// 00880a71  6a01                 push 1
// 00880a73  83c1fd               add ecx, -3
// 00880a76  53                   push ebx
// 00880a77  51                   push ecx
// 00880a78  8bce                 mov ecx, esi
// 00880a7a  e8175a0a00           call 0x926496
// 00880a7f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00880a83  83fd03               cmp ebp, 3
// 00880a86  7e2a                 jle 0x880ab2
// 00880a88  837c241800           cmp dword ptr [esp + 0x18], 0
// 00880a8d  7408                 je 0x880a97
// 00880a8f  8b8fd8050000         mov ecx, dword ptr [edi + 0x5d8]
// 00880a95  eb06                 jmp 0x880a9d
// 00880a97  8b8fe8050000         mov ecx, dword ptr [edi + 0x5e8]
// 00880a9d  51                   push ecx
// 00880a9e  50                   push eax
// 00880a9f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00880aa3  8d55fd               lea edx, [ebp - 3]
// 00880aa6  52                   push edx
// 00880aa7  53                   push ebx
// 00880aa8  2bc5                 sub eax, ebp
// 00880aaa  50                   push eax
// 00880aab  8bce                 mov ecx, esi
// 00880aad  e8e4590a00           call 0x926496
// 00880ab2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00880ab6  85db                 test ebx, ebx
// 00880ab8  7420                 je 0x880ada
// 00880aba  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00880abe  e8af590a00           call 0x926472
// 00880ac3  a900000001           test eax, 0x1000000
// 00880ac8  7408                 je 0x880ad2
// 00880aca  8b87d8050000         mov eax, dword ptr [edi + 0x5d8]
// 00880ad0  eb0e                 jmp 0x880ae0
// 00880ad2  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 00880ad8  eb06                 jmp 0x880ae0
// 00880ada  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00880ae0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00880ae4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00880ae8  50                   push eax
// 00880ae9  8b442420             mov eax, dword ptr [esp + 0x20]
// 00880aed  6a01                 push 1
// 00880aef  2bc8                 sub ecx, eax
// 00880af1  51                   push ecx
// 00880af2  4a                   dec edx
// 00880af3  52                   push edx
// 00880af4  50                   push eax
// 00880af5  8bce                 mov ecx, esi
// 00880af7  e89a590a00           call 0x926496
// 00880afc  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00880b00  83f901               cmp ecx, 1
// 00880b03  7e35                 jle 0x880b3a
// 00880b05  85db                 test ebx, ebx
// 00880b07  7408                 je 0x880b11
// 00880b09  8b87d8050000         mov eax, dword ptr [edi + 0x5d8]
// 00880b0f  eb06                 jmp 0x880b17
// 00880b11  8b87e8050000         mov eax, dword ptr [edi + 0x5e8]
// 00880b17  8b542424             mov edx, dword ptr [esp + 0x24]
// 00880b1b  50                   push eax
// 00880b1c  8d41ff               lea eax, [ecx - 1]
// 00880b1f  50                   push eax
// 00880b20  8b442424             mov eax, dword ptr [esp + 0x24]
// 00880b24  2bd0                 sub edx, eax
// 00880b26  83ea02               sub edx, 2
// 00880b29  52                   push edx
// 00880b2a  8b542434             mov edx, dword ptr [esp + 0x34]
// 00880b2e  2bd1                 sub edx, ecx
// 00880b30  52                   push edx
// 00880b31  40                   inc eax
// 00880b32  50                   push eax
// 00880b33  8bce                 mov ecx, esi
// 00880b35  e85c590a00           call 0x926496
// 00880b3a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00880b3e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00880b42  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00880b46  03c8                 add ecx, eax
// 00880b48  89442470             mov dword ptr [esp + 0x70], eax
// 00880b4c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00880b50  894c2478             mov dword ptr [esp + 0x78], ecx
// 00880b54  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00880b5b  8954246c             mov dword ptr [esp + 0x6c], edx
// 00880b5f  89442474             mov dword ptr [esp + 0x74], eax
// 00880b63  e8c8ab0600           call 0x8eb730
// 00880b68  85c0                 test eax, eax
// 00880b6a  0f8481050000         je 0x8810f1
// 00880b70  85f6                 test esi, esi
// 00880b72  7403                 je 0x880b77
// 00880b74  8b7604               mov esi, dword ptr [esi + 4]
// 00880b77  8d4c246c             lea ecx, [esp + 0x6c]
// 00880b7b  51                   push ecx
// 00880b7c  56                   push esi
// 00880b7d  8d8c2424010000       lea ecx, [esp + 0x124]
// 00880b84  e8a7a7fcff           call 0x84b330
// 00880b89  689016a000           push 0xa01690
// 00880b8e  8bcf                 mov ecx, edi
// 00880b90  c784245801000000000000 mov dword ptr [esp + 0x158], 0
// 00880b9b  e860e1ffff           call 0x87ed00
// 00880ba0  33db                 xor ebx, ebx
// 00880ba2  395c2418             cmp dword ptr [esp + 0x18], ebx
// 00880ba6  6a02                 push 2
// 00880ba8  0f94c3               sete bl
// 00880bab  8bf0                 mov esi, eax
// 00880bad  8d9424b8000000       lea edx, [esp + 0xb8]
// 00880bb4  8bce                 mov ecx, esi
// 00880bb6  53                   push ebx
// 00880bb7  52                   push edx
// 00880bb8  e803fd0500           call 0x8e08c0
// 00880bbd  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 00880bc4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00880bc8  8bc1                 mov eax, ecx
// 00880bca  2b8424b4000000       sub eax, dword ptr [esp + 0xb4]
// 00880bd1  899424cc000000       mov dword ptr [esp + 0xcc], edx
// 00880bd8  03c2                 add eax, edx
// 00880bda  8b542420             mov edx, dword ptr [esp + 0x20]
// 00880bde  899424d0000000       mov dword ptr [esp + 0xd0], edx
// 00880be5  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 00880bec  8b442478             mov eax, dword ptr [esp + 0x78]
// 00880bf0  33d2                 xor edx, edx
// 00880bf2  83ec10               sub esp, 0x10
// 00880bf5  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 00880bfc  8bc4                 mov eax, esp
// 00880bfe  8910                 mov dword ptr [eax], edx
// 00880c00  89942498000000       mov dword ptr [esp + 0x98], edx
// 00880c07  ba05000000           mov edx, 5
// 00880c0c  895004               mov dword ptr [eax + 4], edx
// 00880c0f  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00880c16  895008               mov dword ptr [eax + 8], edx
// 00880c19  83ec10               sub esp, 0x10
// 00880c1c  ba03000000           mov edx, 3
// 00880c21  89500c               mov dword ptr [eax + 0xc], edx
// 00880c24  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 00880c2b  8bc4                 mov eax, esp
// 00880c2d  8910                 mov dword ptr [eax], edx
// 00880c2f  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 00880c36  895004               mov dword ptr [eax + 4], edx
// 00880c39  894808               mov dword ptr [eax + 8], ecx
// 00880c3c  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 00880c43  89480c               mov dword ptr [eax + 0xc], ecx
// 00880c46  8d9424ec000000       lea edx, [esp + 0xec]
// 00880c4d  52                   push edx
// 00880c4e  8d842440010000       lea eax, [esp + 0x140]
// 00880c55  50                   push eax
// 00880c56  8bce                 mov ecx, esi
// 00880c58  e833f50500           call 0x8e0190
// 00880c5d  688016a000           push 0xa01680
// 00880c62  8bcf                 mov ecx, edi
// 00880c64  e897e0ffff           call 0x87ed00
// 00880c69  6a02                 push 2
// 00880c6b  53                   push ebx
// 00880c6c  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00880c73  8bf0                 mov esi, eax
// 00880c75  51                   push ecx
// 00880c76  8bce                 mov ecx, esi
// 00880c78  e843fc0500           call 0x8e08c0
// 00880c7d  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00880c84  8b442424             mov eax, dword ptr [esp + 0x24]
// 00880c88  8bd1                 mov edx, ecx
// 00880c8a  2b9424ac000000       sub edx, dword ptr [esp + 0xac]
// 00880c91  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 00880c98  03d0                 add edx, eax
// 00880c9a  8b442478             mov eax, dword ptr [esp + 0x78]
// 00880c9e  89942494000000       mov dword ptr [esp + 0x94], edx
// 00880ca5  8b542420             mov edx, dword ptr [esp + 0x20]
// 00880ca9  89942498000000       mov dword ptr [esp + 0x98], edx
// 00880cb0  33d2                 xor edx, edx
// 00880cb2  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 00880cb9  89942488000000       mov dword ptr [esp + 0x88], edx
// 00880cc0  83ec10               sub esp, 0x10
// 00880cc3  8bc4                 mov eax, esp
// 00880cc5  8910                 mov dword ptr [eax], edx
// 00880cc7  ba05000000           mov edx, 5
// 00880ccc  895004               mov dword ptr [eax + 4], edx
// 00880ccf  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00880cd6  895008               mov dword ptr [eax + 8], edx
// 00880cd9  83ec10               sub esp, 0x10
// 00880cdc  ba03000000           mov edx, 3
// 00880ce1  89500c               mov dword ptr [eax + 0xc], edx
// 00880ce4  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 00880ceb  8bc4                 mov eax, esp
// 00880ced  8908                 mov dword ptr [eax], ecx
// 00880cef  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 00880cf6  894804               mov dword ptr [eax + 4], ecx
// 00880cf9  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00880d00  895008               mov dword ptr [eax + 8], edx
// 00880d03  89480c               mov dword ptr [eax + 0xc], ecx
// 00880d06  8d9424b4000000       lea edx, [esp + 0xb4]
// 00880d0d  52                   push edx
// 00880d0e  8d842440010000       lea eax, [esp + 0x140]
// 00880d15  50                   push eax
// 00880d16  8bce                 mov ecx, esi
// 00880d18  e873f40500           call 0x8e0190
// 00880d1d  685416a000           push 0xa01654
// 00880d22  8bcf                 mov ecx, edi
// 00880d24  e8d7dfffff           call 0x87ed00
// 00880d29  8b8c24d4000000       mov ecx, dword ptr [esp + 0xd4]
// 00880d30  2b8c24cc000000       sub ecx, dword ptr [esp + 0xcc]
// 00880d37  8b542420             mov edx, dword ptr [esp + 0x20]
// 00880d3b  034c241c             add ecx, dword ptr [esp + 0x1c]
// 00880d3f  8bf0                 mov esi, eax
// 00880d41  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00880d48  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 00880d4f  6a02                 push 2
// 00880d51  03442428             add eax, dword ptr [esp + 0x28]
// 00880d55  894c2460             mov dword ptr [esp + 0x60], ecx
// 00880d59  53                   push ebx
// 00880d5a  8d8c2488000000       lea ecx, [esp + 0x88]
// 00880d61  8944246c             mov dword ptr [esp + 0x6c], eax
// 00880d65  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00880d6c  51                   push ecx
// 00880d6d  8bce                 mov ecx, esi
// 00880d6f  8954246c             mov dword ptr [esp + 0x6c], edx
// 00880d73  89442474             mov dword ptr [esp + 0x74], eax
// 00880d77  e844fb0500           call 0x8e08c0
// 00880d7c  33d2                 xor edx, edx
// 00880d7e  83ec10               sub esp, 0x10
// 00880d81  8bcc                 mov ecx, esp
// 00880d83  8911                 mov dword ptr [ecx], edx
// 00880d85  ba05000000           mov edx, 5
// 00880d8a  895104               mov dword ptr [ecx + 4], edx
// 00880d8d  33d2                 xor edx, edx
// 00880d8f  895108               mov dword ptr [ecx + 8], edx
// 00880d92  83ec10               sub esp, 0x10
// 00880d95  ba03000000           mov edx, 3
// 00880d9a  89510c               mov dword ptr [ecx + 0xc], edx
// 00880d9d  8b10                 mov edx, dword ptr [eax]
// 00880d9f  8bcc                 mov ecx, esp
// 00880da1  8911                 mov dword ptr [ecx], edx
// 00880da3  8b5004               mov edx, dword ptr [eax + 4]
// 00880da6  895104               mov dword ptr [ecx + 4], edx
// 00880da9  8b5008               mov edx, dword ptr [eax + 8]
// 00880dac  8b400c               mov eax, dword ptr [eax + 0xc]
// 00880daf  895108               mov dword ptr [ecx + 8], edx
// 00880db2  89410c               mov dword ptr [ecx + 0xc], eax
// 00880db5  8d4c247c             lea ecx, [esp + 0x7c]
// 00880db9  51                   push ecx
// 00880dba  8d942440010000       lea edx, [esp + 0x140]
// 00880dc1  52                   push edx
// 00880dc2  8bce                 mov ecx, esi
// 00880dc4  e8c7f30500           call 0x8e0190
// 00880dc9  8b742470             mov esi, dword ptr [esp + 0x70]
// 00880dcd  8b942460010000       mov edx, dword ptr [esp + 0x160]
// 00880dd4  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00880dd8  037240               add esi, dword ptr [edx + 0x40]
// 00880ddb  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00880ddf  89442444             mov dword ptr [esp + 0x44], eax
// 00880de3  8b442478             mov eax, dword ptr [esp + 0x78]
// 00880de7  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00880deb  c744244407000000     mov dword ptr [esp + 0x44], 7
// 00880df3  89742448             mov dword ptr [esp + 0x48], esi
// 00880df7  83e803               sub eax, 3
// 00880dfa  89442450             mov dword ptr [esp + 0x50], eax
// 00880dfe  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00880e02  50                   push eax
// 00880e03  8bcf                 mov ecx, edi
// 00880e05  e806f9ffff           call 0x880710
// 00880e0a  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 00880e11  85c0                 test eax, eax
// 00880e13  0f84dc000000         je 0x880ef5
// 00880e19  6a32                 push 0x32
// 00880e1b  ff15dccb9800         call dword ptr [0x98cbdc]
// 00880e21  6a31                 push 0x31
// 00880e23  89442418             mov dword ptr [esp + 0x18], eax
// 00880e27  ff15dccb9800         call dword ptr [0x98cbdc]
// 00880e2d  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00880e34  8944242c             mov dword ptr [esp + 0x2c], eax
// 00880e38  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00880e3b  8d48ff               lea ecx, [eax - 1]
// 00880e3e  8b442478             mov eax, dword ptr [esp + 0x78]
// 00880e42  2b442470             sub eax, dword ptr [esp + 0x70]
// 00880e46  2bc1                 sub eax, ecx
// 00880e48  2b442414             sub eax, dword ptr [esp + 0x14]
// 00880e4c  99                   cdq 
// 00880e4d  2bc2                 sub eax, edx
// 00880e4f  d1f8                 sar eax, 1
// 00880e51  03c1                 add eax, ecx
// 00880e53  89842490000000       mov dword ptr [esp + 0x90], eax
// 00880e5a  e841c4fcff           call 0x84d2a0
// 00880e5f  8d94241c010000       lea edx, [esp + 0x11c]
// 00880e66  52                   push edx
// 00880e67  e8a4b2fcff           call 0x84c110
// 00880e6c  83c404               add esp, 4
// 00880e6f  89442440             mov dword ptr [esp + 0x40], eax
// 00880e73  83e001               and eax, 1
// 00880e76  8944247c             mov dword ptr [esp + 0x7c], eax
// 00880e7a  741d                 je 0x880e99
// 00880e7c  e81fc4fcff           call 0x84d2a0
// 00880e81  8b442440             mov eax, dword ptr [esp + 0x40]
// 00880e85  83c808               or eax, 8
// 00880e88  50                   push eax
// 00880e89  8d8c2420010000       lea ecx, [esp + 0x120]
// 00880e90  51                   push ecx
// 00880e91  e8aab2fcff           call 0x84c140
// 00880e96  83c408               add esp, 8
// 00880e99  8b542414             mov edx, dword ptr [esp + 0x14]
// 00880e9d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00880ea1  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 00880ea8  6a03                 push 3
// 00880eaa  6a00                 push 0
// 00880eac  6a00                 push 0
// 00880eae  52                   push edx
// 00880eaf  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00880eb6  50                   push eax
// 00880eb7  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 00880ebe  51                   push ecx
// 00880ebf  52                   push edx
// 00880ec0  6a07                 push 7
// 00880ec2  50                   push eax
// 00880ec3  ff1514cb9800         call dword ptr [0x98cb14]
// 00880ec9  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 00880ece  741a                 je 0x880eea
// 00880ed0  e8cbc3fcff           call 0x84d2a0
// 00880ed5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00880ed9  51                   push ecx
// 00880eda  8d942420010000       lea edx, [esp + 0x120]
// 00880ee1  52                   push edx
// 00880ee2  e859b2fcff           call 0x84c140
// 00880ee7  83c408               add esp, 8
// 00880eea  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00880eee  83c00c               add eax, 0xc
// 00880ef1  89442444             mov dword ptr [esp + 0x44], eax
// 00880ef5  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00880efc  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00880eff  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00880f02  33c9                 xor ecx, ecx
// 00880f04  89542440             mov dword ptr [esp + 0x40], edx
// 00880f08  894c2414             mov dword ptr [esp + 0x14], ecx
// 00880f0c  85c0                 test eax, eax
// 00880f0e  7f69                 jg 0x880f79
// 00880f10  8b442418             mov eax, dword ptr [esp + 0x18]
// 00880f14  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00880f18  296c244c             sub dword ptr [esp + 0x4c], ebp
// 00880f1c  8b17                 mov edx, dword ptr [edi]
// 00880f1e  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 00880f24  50                   push eax
// 00880f25  51                   push ecx
// 00880f26  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00880f2a  83ec10               sub esp, 0x10
// 00880f2d  8bc4                 mov eax, esp
// 00880f2f  8908                 mov dword ptr [eax], ecx
// 00880f31  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00880f35  897004               mov dword ptr [eax + 4], esi
// 00880f38  894808               mov dword ptr [eax + 8], ecx
// 00880f3b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00880f3f  89480c               mov dword ptr [eax + 0xc], ecx
// 00880f42  8d842434010000       lea eax, [esp + 0x134]
// 00880f49  50                   push eax
// 00880f4a  8bcf                 mov ecx, edi
// 00880f4c  ffd2                 call edx
// 00880f4e  8d8c241c010000       lea ecx, [esp + 0x11c]
// 00880f55  c7842454010000ffffffff mov dword ptr [esp + 0x154], 0xffffffff
// 00880f60  e8dba5fcff           call 0x84b540
// 00880f65  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 00880f6c  e9ec020000           jmp 0x88125d
// 00880f71  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00880f75  8b542440             mov edx, dword ptr [esp + 0x40]
// 00880f79  85c9                 test ecx, ecx
// 00880f7b  7c18                 jl 0x880f95
// 00880f7d  3bc8                 cmp ecx, eax
// 00880f7f  7d14                 jge 0x880f95
// 00880f81  3b4a2c               cmp ecx, dword ptr [edx + 0x2c]
// 00880f84  0f8d62010000         jge 0x8810ec
// 00880f8a  8b5228               mov edx, dword ptr [edx + 0x28]
// 00880f8d  8b348a               mov esi, dword ptr [edx + ecx*4]
// 00880f90  8d048a               lea eax, [edx + ecx*4]
// 00880f93  eb02                 jmp 0x880f97
// 00880f95  33f6                 xor esi, esi
// 00880f97  8b06                 mov eax, dword ptr [esi]
// 00880f99  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00880f9f  6a00                 push 0
// 00880fa1  8bce                 mov ecx, esi
// 00880fa3  ffd2                 call edx
// 00880fa5  85c0                 test eax, eax
// 00880fa7  0f841e010000         je 0x8810cb
// 00880fad  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00880fb3  83f8ff               cmp eax, -1
// 00880fb6  750f                 jne 0x880fc7
// 00880fb8  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00880fbe  85c9                 test ecx, ecx
// 00880fc0  7405                 je 0x880fc7
// 00880fc2  e8e955f7ff           call 0x7f65b0
// 00880fc7  85c0                 test eax, eax
// 00880fc9  740e                 je 0x880fd9
// 00880fcb  837c241800           cmp dword ptr [esp + 0x18], 0
// 00880fd0  7407                 je 0x880fd9
// 00880fd2  b901000000           mov ecx, 1
// 00880fd7  eb02                 jmp 0x880fdb
// 00880fd9  33c9                 xor ecx, ecx
// 00880fdb  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00880fe1  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00880fe7  8944247c             mov dword ptr [esp + 0x7c], eax
// 00880feb  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00880ff1  89442430             mov dword ptr [esp + 0x30], eax
// 00880ff5  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00880ffb  89442438             mov dword ptr [esp + 0x38], eax
// 00880fff  8b07                 mov eax, dword ptr [edi]
// 00881001  8954242c             mov dword ptr [esp + 0x2c], edx
// 00881005  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0088100b  0530010000           add eax, 0x130
// 00881010  89542434             mov dword ptr [esp + 0x34], edx
// 00881014  8b16                 mov edx, dword ptr [esi]
// 00881016  89842490000000       mov dword ptr [esp + 0x90], eax
// 0088101d  8b4278               mov eax, dword ptr [edx + 0x78]
// 00881020  51                   push ecx
// 00881021  8bce                 mov ecx, esi
// 00881023  ffd0                 call eax
// 00881025  8b16                 mov edx, dword ptr [esi]
// 00881027  50                   push eax
// 00881028  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0088102b  8bce                 mov ecx, esi
// 0088102d  ffd0                 call eax
// 0088102f  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00881036  8b542434             mov edx, dword ptr [esp + 0x34]
// 0088103a  50                   push eax
// 0088103b  51                   push ecx
// 0088103c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00881040  83ec10               sub esp, 0x10
// 00881043  8bc4                 mov eax, esp
// 00881045  8910                 mov dword ptr [eax], edx
// 00881047  8b542454             mov edx, dword ptr [esp + 0x54]
// 0088104b  894804               mov dword ptr [eax + 4], ecx
// 0088104e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00881052  895008               mov dword ptr [eax + 8], edx
// 00881055  89480c               mov dword ptr [eax + 0xc], ecx
// 00881058  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 0088105f  8d94243c010000       lea edx, [esp + 0x13c]
// 00881066  52                   push edx
// 00881067  8b10                 mov edx, dword ptr [eax]
// 00881069  8bcf                 mov ecx, edi
// 0088106b  ffd2                 call edx
// 0088106d  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00881073  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00881079  3944244c             cmp dword ptr [esp + 0x4c], eax
// 0088107d  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00881083  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0088108a  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00881090  89942488000000       mov dword ptr [esp + 0x88], edx
// 00881097  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 0088109e  7c2b                 jl 0x8810cb
// 008810a0  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 008810a6  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 008810ac  89942484000000       mov dword ptr [esp + 0x84], edx
// 008810b3  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 008810b9  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 008810c0  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 008810c7  8944244c             mov dword ptr [esp + 0x4c], eax
// 008810cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008810cf  8b442440             mov eax, dword ptr [esp + 0x40]
// 008810d3  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008810d6  41                   inc ecx
// 008810d7  3bc8                 cmp ecx, eax
// 008810d9  894c2414             mov dword ptr [esp + 0x14], ecx
// 008810dd  0f8c8efeffff         jl 0x880f71
// 008810e3  8b742448             mov esi, dword ptr [esp + 0x48]
// 008810e7  e924feffff           jmp 0x880f10
// 008810ec  e81b2af7ff           call 0x7f3b0c
// 008810f1  689016a000           push 0xa01690
// 008810f6  8bcf                 mov ecx, edi
// 008810f8  e803dcffff           call 0x87ed00
// 008810fd  33c9                 xor ecx, ecx
// 008810ff  85db                 test ebx, ebx
// 00881101  0f94c1               sete cl
// 00881104  6a02                 push 2
// 00881106  8d542448             lea edx, [esp + 0x48]
// 0088110a  89442440             mov dword ptr [esp + 0x40], eax
// 0088110e  8bd9                 mov ebx, ecx
// 00881110  53                   push ebx
// 00881111  52                   push edx
// 00881112  8bc8                 mov ecx, eax
// 00881114  e8a7f70500           call 0x8e08c0
// 00881119  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088111d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00881121  8d1428               lea edx, [eax + ebp]
// 00881124  8944245c             mov dword ptr [esp + 0x5c], eax
// 00881128  8b442478             mov eax, dword ptr [esp + 0x78]
// 0088112c  894c2460             mov dword ptr [esp + 0x60], ecx
// 00881130  33c9                 xor ecx, ecx
// 00881132  83ec10               sub esp, 0x10
// 00881135  89442478             mov dword ptr [esp + 0x78], eax
// 00881139  8bc4                 mov eax, esp
// 0088113b  8908                 mov dword ptr [eax], ecx
// 0088113d  898c24cc000000       mov dword ptr [esp + 0xcc], ecx
// 00881144  b905000000           mov ecx, 5
// 00881149  894804               mov dword ptr [eax + 4], ecx
// 0088114c  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 00881153  894808               mov dword ptr [eax + 8], ecx
// 00881156  83ec10               sub esp, 0x10
// 00881159  b903000000           mov ecx, 3
// 0088115e  89480c               mov dword ptr [eax + 0xc], ecx
// 00881161  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00881165  8bc4                 mov eax, esp
// 00881167  89942484000000       mov dword ptr [esp + 0x84], edx
// 0088116e  8b542464             mov edx, dword ptr [esp + 0x64]
// 00881172  8910                 mov dword ptr [eax], edx
// 00881174  8b542470             mov edx, dword ptr [esp + 0x70]
// 00881178  894804               mov dword ptr [eax + 4], ecx
// 0088117b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0088117f  896808               mov dword ptr [eax + 8], ebp
// 00881182  89500c               mov dword ptr [eax + 0xc], edx
// 00881185  8d44247c             lea eax, [esp + 0x7c]
// 00881189  50                   push eax
// 0088118a  56                   push esi
// 0088118b  896c2474             mov dword ptr [esp + 0x74], ebp
// 0088118f  e8fcef0500           call 0x8e0190
// 00881194  688016a000           push 0xa01680
// 00881199  8bcf                 mov ecx, edi
// 0088119b  e860dbffff           call 0x87ed00
// 008811a0  6a02                 push 2
// 008811a2  53                   push ebx
// 008811a3  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 008811aa  51                   push ecx
// 008811ab  8bc8                 mov ecx, eax
// 008811ad  89442448             mov dword ptr [esp + 0x48], eax
// 008811b1  e80af70500           call 0x8e08c0
// 008811b6  8b10                 mov edx, dword ptr [eax]
// 008811b8  89542444             mov dword ptr [esp + 0x44], edx
// 008811bc  8b4804               mov ecx, dword ptr [eax + 4]
// 008811bf  894c2448             mov dword ptr [esp + 0x48], ecx
// 008811c3  8b4808               mov ecx, dword ptr [eax + 8]
// 008811c6  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008811ca  8b500c               mov edx, dword ptr [eax + 0xc]
// 008811cd  8bc1                 mov eax, ecx
// 008811cf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008811d3  89542450             mov dword ptr [esp + 0x50], edx
// 008811d7  8bd1                 mov edx, ecx
// 008811d9  2bd5                 sub edx, ebp
// 008811db  89942494000000       mov dword ptr [esp + 0x94], edx
// 008811e2  8b542470             mov edx, dword ptr [esp + 0x70]
// 008811e6  2bc5                 sub eax, ebp
// 008811e8  89942498000000       mov dword ptr [esp + 0x98], edx
// 008811ef  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 008811f6  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008811fa  33d2                 xor edx, edx
// 008811fc  89442444             mov dword ptr [esp + 0x44], eax
// 00881200  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00881207  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 0088120e  83ec10               sub esp, 0x10
// 00881211  8bcc                 mov ecx, esp
// 00881213  8911                 mov dword ptr [ecx], edx
// 00881215  ba05000000           mov edx, 5
// 0088121a  895104               mov dword ptr [ecx + 4], edx
// 0088121d  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 00881224  895108               mov dword ptr [ecx + 8], edx
// 00881227  83ec10               sub esp, 0x10
// 0088122a  ba03000000           mov edx, 3
// 0088122f  89510c               mov dword ptr [ecx + 0xc], edx
// 00881232  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00881236  8bcc                 mov ecx, esp
// 00881238  8901                 mov dword ptr [ecx], eax
// 0088123a  8b442468             mov eax, dword ptr [esp + 0x68]
// 0088123e  894104               mov dword ptr [ecx + 4], eax
// 00881241  8b442470             mov eax, dword ptr [esp + 0x70]
// 00881245  895108               mov dword ptr [ecx + 8], edx
// 00881248  89410c               mov dword ptr [ecx + 0xc], eax
// 0088124b  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00881252  51                   push ecx
// 00881253  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00881257  56                   push esi
// 00881258  e833ef0500           call 0x8e0190
// 0088125d  83bc24c400000000     cmp dword ptr [esp + 0xc4], 0
// 00881265  0f84d7020000         je 0x881542
// 0088126b  688817a000           push 0xa01788
// 00881270  8bcf                 mov ecx, edi
// 00881272  e889daffff           call 0x87ed00
// 00881277  8bc8                 mov ecx, eax
// 00881279  89442414             mov dword ptr [esp + 0x14], eax
// 0088127d  e8bef60500           call 0x8e0940
// 00881282  89442438             mov dword ptr [esp + 0x38], eax
// 00881286  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088128a  40                   inc eax
// 0088128b  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 00881292  8b442428             mov eax, dword ptr [esp + 0x28]
// 00881296  8d55ff               lea edx, [ebp - 1]
// 00881299  89542434             mov dword ptr [esp + 0x34], edx
// 0088129d  8bd0                 mov edx, eax
// 0088129f  2b542458             sub edx, dword ptr [esp + 0x58]
// 008812a3  2b442454             sub eax, dword ptr [esp + 0x54]
// 008812a7  2b542454             sub edx, dword ptr [esp + 0x54]
// 008812ab  83ec10               sub esp, 0x10
// 008812ae  899424f0000000       mov dword ptr [esp + 0xf0], edx
// 008812b5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008812b9  03d5                 add edx, ebp
// 008812bb  899424f4000000       mov dword ptr [esp + 0xf4], edx
// 008812c2  33d2                 xor edx, edx
// 008812c4  898424f8000000       mov dword ptr [esp + 0xf8], eax
// 008812cb  8bc4                 mov eax, esp
// 008812cd  8910                 mov dword ptr [eax], edx
// 008812cf  895004               mov dword ptr [eax + 4], edx
// 008812d2  895008               mov dword ptr [eax + 8], edx
// 008812d5  89500c               mov dword ptr [eax + 0xc], edx
// 008812d8  33c9                 xor ecx, ecx
// 008812da  83ec10               sub esp, 0x10
// 008812dd  8bc4                 mov eax, esp
// 008812df  8908                 mov dword ptr [eax], ecx
// 008812e1  89942488000000       mov dword ptr [esp + 0x88], edx
// 008812e8  8b542454             mov edx, dword ptr [esp + 0x54]
// 008812ec  894804               mov dword ptr [eax + 4], ecx
// 008812ef  895008               mov dword ptr [eax + 8], edx
// 008812f2  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008812f6  894c2450             mov dword ptr [esp + 0x50], ecx
// 008812fa  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008812fe  8d9424fc000000       lea edx, [esp + 0xfc]
// 00881305  52                   push edx
// 00881306  89480c               mov dword ptr [eax + 0xc], ecx
// 00881309  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088130d  56                   push esi
// 0088130e  e87dee0500           call 0x8e0190
// 00881313  686417a000           push 0xa01764
// 00881318  8bcf                 mov ecx, edi
// 0088131a  e8e1d9ffff           call 0x87ed00
// 0088131f  8bc8                 mov ecx, eax
// 00881321  89442414             mov dword ptr [esp + 0x14], eax
// 00881325  e816f60500           call 0x8e0940
// 0088132a  50                   push eax
// 0088132b  8d45ff               lea eax, [ebp - 1]
// 0088132e  50                   push eax
// 0088132f  6a00                 push 0
// 00881331  6a00                 push 0
// 00881333  8d4c243c             lea ecx, [esp + 0x3c]
// 00881337  51                   push ecx
// 00881338  ff1538ca9800         call dword ptr [0x98ca38]
// 0088133e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00881342  8b442428             mov eax, dword ptr [esp + 0x28]
// 00881346  8bd1                 mov edx, ecx
// 00881348  2bd5                 sub edx, ebp
// 0088134a  899424ec000000       mov dword ptr [esp + 0xec], edx
// 00881351  8bd0                 mov edx, eax
// 00881353  2b542458             sub edx, dword ptr [esp + 0x58]
// 00881357  2b442454             sub eax, dword ptr [esp + 0x54]
// 0088135b  2b542454             sub edx, dword ptr [esp + 0x54]
// 0088135f  49                   dec ecx
// 00881360  899424f0000000       mov dword ptr [esp + 0xf0], edx
// 00881367  898c24f4000000       mov dword ptr [esp + 0xf4], ecx
// 0088136e  33c9                 xor ecx, ecx
// 00881370  33d2                 xor edx, edx
// 00881372  83ec10               sub esp, 0x10
// 00881375  89842408010000       mov dword ptr [esp + 0x108], eax
// 0088137c  8bc4                 mov eax, esp
// 0088137e  8908                 mov dword ptr [eax], ecx
// 00881380  895004               mov dword ptr [eax + 4], edx
// 00881383  894808               mov dword ptr [eax + 8], ecx
// 00881386  89480c               mov dword ptr [eax + 0xc], ecx
// 00881389  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088138d  8b542440             mov edx, dword ptr [esp + 0x40]
// 00881391  83ec10               sub esp, 0x10
// 00881394  8bc4                 mov eax, esp
// 00881396  8908                 mov dword ptr [eax], ecx
// 00881398  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0088139c  895004               mov dword ptr [eax + 4], edx
// 0088139f  8b542458             mov edx, dword ptr [esp + 0x58]
// 008813a3  894808               mov dword ptr [eax + 8], ecx
// 008813a6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008813aa  89500c               mov dword ptr [eax + 0xc], edx
// 008813ad  8d84240c010000       lea eax, [esp + 0x10c]
// 008813b4  50                   push eax
// 008813b5  56                   push esi
// 008813b6  e8d5ed0500           call 0x8e0190
// 008813bb  83fd03               cmp ebp, 3
// 008813be  0f8e7e010000         jle 0x881542
// 008813c4  688c25a000           push 0xa0258c
// 008813c9  8bcf                 mov ecx, edi
// 008813cb  e830d9ffff           call 0x87ed00
// 008813d0  6a02                 push 2
// 008813d2  53                   push ebx
// 008813d3  8d4c2464             lea ecx, [esp + 0x64]
// 008813d7  51                   push ecx
// 008813d8  8bc8                 mov ecx, eax
// 008813da  89442420             mov dword ptr [esp + 0x20], eax
// 008813de  e8ddf40500           call 0x8e08c0
// 008813e3  8b10                 mov edx, dword ptr [eax]
// 008813e5  8954242c             mov dword ptr [esp + 0x2c], edx
// 008813e9  8b4804               mov ecx, dword ptr [eax + 4]
// 008813ec  894c2430             mov dword ptr [esp + 0x30], ecx
// 008813f0  8b4808               mov ecx, dword ptr [eax + 8]
// 008813f3  894c2434             mov dword ptr [esp + 0x34], ecx
// 008813f7  8b400c               mov eax, dword ptr [eax + 0xc]
// 008813fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008813fe  898c2494000000       mov dword ptr [esp + 0x94], ecx
// 00881405  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00881409  2bc8                 sub ecx, eax
// 0088140b  034c2428             add ecx, dword ptr [esp + 0x28]
// 0088140f  89442438             mov dword ptr [esp + 0x38], eax
// 00881413  8b442434             mov eax, dword ptr [esp + 0x34]
// 00881417  2bc2                 sub eax, edx
// 00881419  0344241c             add eax, dword ptr [esp + 0x1c]
// 0088141d  68ff00ff00           push 0xff00ff
// 00881422  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 00881429  33c0                 xor eax, eax
// 0088142b  89442460             mov dword ptr [esp + 0x60], eax
// 0088142f  89442464             mov dword ptr [esp + 0x64], eax
// 00881433  89442468             mov dword ptr [esp + 0x68], eax
// 00881437  8944246c             mov dword ptr [esp + 0x6c], eax
// 0088143b  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 00881442  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00881446  8d442460             lea eax, [esp + 0x60]
// 0088144a  50                   push eax
// 0088144b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0088144f  83ec10               sub esp, 0x10
// 00881452  898c24b8000000       mov dword ptr [esp + 0xb8], ecx
// 00881459  8bcc                 mov ecx, esp
// 0088145b  8911                 mov dword ptr [ecx], edx
// 0088145d  8b542448             mov edx, dword ptr [esp + 0x48]
// 00881461  895104               mov dword ptr [ecx + 4], edx
// 00881464  8b542450             mov edx, dword ptr [esp + 0x50]
// 00881468  894108               mov dword ptr [ecx + 8], eax
// 0088146b  8d8424ac000000       lea eax, [esp + 0xac]
// 00881472  50                   push eax
// 00881473  89510c               mov dword ptr [ecx + 0xc], edx
// 00881476  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088147a  56                   push esi
// 0088147b  e880f90500           call 0x8e0e00
// 00881480  83fd03               cmp ebp, 3
// 00881483  0f8eb9000000         jle 0x881542
// 00881489  687825a000           push 0xa02578
// 0088148e  8bcf                 mov ecx, edi
// 00881490  e86bd8ffff           call 0x87ed00
// 00881495  6a02                 push 2
// 00881497  53                   push ebx
// 00881498  8d4c2464             lea ecx, [esp + 0x64]
// 0088149c  8bf8                 mov edi, eax
// 0088149e  51                   push ecx
// 0088149f  8bcf                 mov ecx, edi
// 008814a1  e81af40500           call 0x8e08c0
// 008814a6  8b10                 mov edx, dword ptr [eax]
// 008814a8  8954242c             mov dword ptr [esp + 0x2c], edx
// 008814ac  8b5804               mov ebx, dword ptr [eax + 4]
// 008814af  895c2430             mov dword ptr [esp + 0x30], ebx
// 008814b3  8b6808               mov ebp, dword ptr [eax + 8]
// 008814b6  8bca                 mov ecx, edx
// 008814b8  2bcd                 sub ecx, ebp
// 008814ba  034c2424             add ecx, dword ptr [esp + 0x24]
// 008814be  896c2434             mov dword ptr [esp + 0x34], ebp
// 008814c2  8b400c               mov eax, dword ptr [eax + 0xc]
// 008814c5  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008814cc  89442438             mov dword ptr [esp + 0x38], eax
// 008814d0  8bcb                 mov ecx, ebx
// 008814d2  2bc8                 sub ecx, eax
// 008814d4  8b442428             mov eax, dword ptr [esp + 0x28]
// 008814d8  03c8                 add ecx, eax
// 008814da  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 008814e1  33c0                 xor eax, eax
// 008814e3  68ff00ff00           push 0xff00ff
// 008814e8  89842400010000       mov dword ptr [esp + 0x100], eax
// 008814ef  89842404010000       mov dword ptr [esp + 0x104], eax
// 008814f6  89842408010000       mov dword ptr [esp + 0x108], eax
// 008814fd  8984240c010000       mov dword ptr [esp + 0x10c], eax
// 00881504  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 0088150b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088150f  8d842400010000       lea eax, [esp + 0x100]
// 00881516  50                   push eax
// 00881517  83ec10               sub esp, 0x10
// 0088151a  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00881521  8bcc                 mov ecx, esp
// 00881523  8911                 mov dword ptr [ecx], edx
// 00881525  8b542450             mov edx, dword ptr [esp + 0x50]
// 00881529  895904               mov dword ptr [ecx + 4], ebx
// 0088152c  8d842498000000       lea eax, [esp + 0x98]
// 00881533  896908               mov dword ptr [ecx + 8], ebp
// 00881536  50                   push eax
// 00881537  89510c               mov dword ptr [ecx + 0xc], edx
// 0088153a  56                   push esi
// 0088153b  8bcf                 mov ecx, edi
// 0088153d  e8bef80500           call 0x8e0e00
// 00881542  8b8c244c010000       mov ecx, dword ptr [esp + 0x14c]
// 00881549  64890d00000000       mov dword ptr fs:[0], ecx
// 00881550  59                   pop ecx
// 00881551  5f                   pop edi
// 00881552  5e                   pop esi
// 00881553  5d                   pop ebp
// 00881554  5b                   pop ebx
// 00881555  81c444010000         add esp, 0x144
// 0088155b  c20800               ret 8
// copied from an identical function in another client (function ?DrawRibbonFrame@CXTPOffice2007Theme@@UAEXPAVCDC@@PAVCXTPOffice2007FrameHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp