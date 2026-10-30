// roc 2012-06 00a5d9a0  unit: CXTPPropertyGridInplaceList  size: 1202 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5d9a0
//
// 00a5d9a0  6aff                 push -1
// 00a5d9a2  68b57aae00           push 0xae7ab5
// 00a5d9a7  64a100000000         mov eax, dword ptr fs:[0]
// 00a5d9ad  50                   push eax
// 00a5d9ae  81ec80000000         sub esp, 0x80
// 00a5d9b4  53                   push ebx
// 00a5d9b5  55                   push ebp
// 00a5d9b6  56                   push esi
// 00a5d9b7  57                   push edi
// 00a5d9b8  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a5d9bd  33c4                 xor eax, esp
// 00a5d9bf  50                   push eax
// 00a5d9c0  8d842494000000       lea eax, [esp + 0x94]
// 00a5d9c7  64a300000000         mov dword ptr fs:[0], eax
// 00a5d9cd  8bf1                 mov esi, ecx
// 00a5d9cf  8b9c24a4000000       mov ebx, dword ptr [esp + 0xa4]
// 00a5d9d6  33ed                 xor ebp, ebp
// 00a5d9d8  3bdd                 cmp ebx, ebp
// 00a5d9da  0f8456040000         je 0xa5de36
// 00a5d9e0  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 00a5d9e7  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00a5d9ee  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 00a5d9f5  89442440             mov dword ptr [esp + 0x40], eax
// 00a5d9f9  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 00a5da00  894c2444             mov dword ptr [esp + 0x44], ecx
// 00a5da04  8b8bbc000000         mov ecx, dword ptr [ebx + 0xbc]
// 00a5da0a  89542448             mov dword ptr [esp + 0x48], edx
// 00a5da0e  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a5da12  e80918f9ff           call 0x9ef220
// 00a5da17  8bbbbc000000         mov edi, dword ptr [ebx + 0xbc]
// 00a5da1d  8b16                 mov edx, dword ptr [esi]
// 00a5da1f  40                   inc eax
// 00a5da20  89442440             mov dword ptr [esp + 0x40], eax
// 00a5da24  8b4268               mov eax, dword ptr [edx + 0x68]
// 00a5da27  8bce                 mov ecx, esi
// 00a5da29  897c2428             mov dword ptr [esp + 0x28], edi
// 00a5da2d  895e54               mov dword ptr [esi + 0x54], ebx
// 00a5da30  ffd0                 call eax
// 00a5da32  396e20               cmp dword ptr [esi + 0x20], ebp
// 00a5da35  754e                 jne 0xa5da85
// 00a5da37  55                   push ebp
// 00a5da38  55                   push ebp
// 00a5da39  57                   push edi
// 00a5da3a  8d4c245c             lea ecx, [esp + 0x5c]
// 00a5da3e  51                   push ecx
// 00a5da3f  685100a040           push 0x40a00051
// 00a5da44  68e83bb400           push 0xb43be8
// 00a5da49  6850dec000           push 0xc0de50
// 00a5da4e  8bcf                 mov ecx, edi
// 00a5da50  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00a5da54  896c2470             mov dword ptr [esp + 0x70], ebp
// 00a5da58  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a5da5c  896c2478             mov dword ptr [esp + 0x78], ebp
// 00a5da60  e873bb0300           call 0xa995d8
// 00a5da65  2500004000           and eax, 0x400000
// 00a5da6a  0d80000000           or eax, 0x80
// 00a5da6f  50                   push eax
// 00a5da70  8bce                 mov ecx, esi
// 00a5da72  e81547f2ff           call 0x98218c
// 00a5da77  3bfd                 cmp edi, ebp
// 00a5da79  7405                 je 0xa5da80
// 00a5da7b  8b4720               mov eax, dword ptr [edi + 0x20]
// 00a5da7e  eb02                 jmp 0xa5da82
// 00a5da80  33c0                 xor eax, eax
// 00a5da82  894638               mov dword ptr [esi + 0x38], eax
// 00a5da85  8b5720               mov edx, dword ptr [edi + 0x20]
// 00a5da88  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 00a5da8e  55                   push ebp
// 00a5da8f  55                   push ebp
// 00a5da90  6a31                 push 0x31
// 00a5da92  52                   push edx
// 00a5da93  ffd7                 call edi
// 00a5da95  50                   push eax
// 00a5da96  e85351f2ff           call 0x982bee
// 00a5da9b  3bc5                 cmp eax, ebp
// 00a5da9d  7504                 jne 0xa5daa3
// 00a5da9f  33c0                 xor eax, eax
// 00a5daa1  eb03                 jmp 0xa5daa6
// 00a5daa3  8b4004               mov eax, dword ptr [eax + 4]
// 00a5daa6  6a01                 push 1
// 00a5daa8  50                   push eax
// 00a5daa9  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a5daac  6a30                 push 0x30
// 00a5daae  50                   push eax
// 00a5daaf  ffd7                 call edi
// 00a5dab1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a5dab4  55                   push ebp
// 00a5dab5  55                   push ebp
// 00a5dab6  6884010000           push 0x184
// 00a5dabb  51                   push ecx
// 00a5dabc  ffd7                 call edi
// 00a5dabe  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00a5dac5  2b442440             sub eax, dword ptr [esp + 0x40]
// 00a5dac9  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5dacd  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 00a5dad3  52                   push edx
// 00a5dad4  8d8c2484000000       lea ecx, [esp + 0x84]
// 00a5dadb  896c2430             mov dword ptr [esp + 0x30], ebp
// 00a5dadf  89442428             mov dword ptr [esp + 0x28], eax
// 00a5dae3  e8b4ba0300           call 0xa9959c
// 00a5dae8  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a5daec  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a5daef  6a00                 push 0
// 00a5daf1  6a00                 push 0
// 00a5daf3  6a31                 push 0x31
// 00a5daf5  51                   push ecx
// 00a5daf6  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 00a5db01  ffd7                 call edi
// 00a5db03  50                   push eax
// 00a5db04  e8e550f2ff           call 0x982bee
// 00a5db09  50                   push eax
// 00a5db0a  8d942484000000       lea edx, [esp + 0x84]
// 00a5db11  52                   push edx
// 00a5db12  8d4c2478             lea ecx, [esp + 0x78]
// 00a5db16  e8157af7ff           call 0x9d5530
// 00a5db1b  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00a5db22  8d442438             lea eax, [esp + 0x38]
// 00a5db26  50                   push eax
// 00a5db27  6a01                 push 1
// 00a5db29  68ecf3b400           push 0xb4f3ec
// 00a5db2e  51                   push ecx
// 00a5db2f  c68424ac00000001     mov byte ptr [esp + 0xac], 1
// 00a5db37  ff154021b200         call dword ptr [0xb22140]
// 00a5db3d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a5db41  83c203               add edx, 3
// 00a5db44  837d2800             cmp dword ptr [ebp + 0x28], 0
// 00a5db48  89542418             mov dword ptr [esp + 0x18], edx
// 00a5db4c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00a5db54  0f8e03010000         jle 0xa5dc5d
// 00a5db5a  eb06                 jmp 0xa5db62
// 00a5db5c  8d642400             lea esp, [esp]
// 00a5db60  8be9                 mov ebp, ecx
// 00a5db62  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a5db66  50                   push eax
// 00a5db67  8bcd                 mov ecx, ebp
// 00a5db69  e8122dfdff           call 0xa30880
// 00a5db6e  8be8                 mov ebp, eax
// 00a5db70  8d4d20               lea ecx, [ebp + 0x20]
// 00a5db73  51                   push ecx
// 00a5db74  8d4c2420             lea ecx, [esp + 0x20]
// 00a5db78  ff158047b200         call dword ptr [0xb24780]
// 00a5db7e  8d4c241c             lea ecx, [esp + 0x1c]
// 00a5db82  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 00a5db8a  ff159847b200         call dword ptr [0xb24798]
// 00a5db90  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a5db93  50                   push eax
// 00a5db94  6a00                 push 0
// 00a5db96  6880010000           push 0x180
// 00a5db9b  52                   push edx
// 00a5db9c  ffd7                 call edi
// 00a5db9e  55                   push ebp
// 00a5db9f  50                   push eax
// 00a5dba0  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a5dba4  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a5dba7  689a010000           push 0x19a
// 00a5dbac  50                   push eax
// 00a5dbad  ffd7                 call edi
// 00a5dbaf  8b13                 mov edx, dword ptr [ebx]
// 00a5dbb1  8b5270               mov edx, dword ptr [edx + 0x70]
// 00a5dbb4  55                   push ebp
// 00a5dbb5  8d842484000000       lea eax, [esp + 0x84]
// 00a5dbbc  50                   push eax
// 00a5dbbd  8d4c2440             lea ecx, [esp + 0x40]
// 00a5dbc1  51                   push ecx
// 00a5dbc2  8bcb                 mov ecx, ebx
// 00a5dbc4  ffd2                 call edx
// 00a5dbc6  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a5dbca  39442424             cmp dword ptr [esp + 0x24], eax
// 00a5dbce  7f04                 jg 0xa5dbd4
// 00a5dbd0  89442424             mov dword ptr [esp + 0x24], eax
// 00a5dbd4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a5dbd8  39442418             cmp dword ptr [esp + 0x18], eax
// 00a5dbdc  7f04                 jg 0xa5dbe2
// 00a5dbde  89442418             mov dword ptr [esp + 0x18], eax
// 00a5dbe2  8d442430             lea eax, [esp + 0x30]
// 00a5dbe6  50                   push eax
// 00a5dbe7  8bcb                 mov ecx, ebx
// 00a5dbe9  e8526a9fff           call 0x454640
// 00a5dbee  8be8                 mov ebp, eax
// 00a5dbf0  8d4c241c             lea ecx, [esp + 0x1c]
// 00a5dbf4  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 00a5dbfc  ff159847b200         call dword ptr [0xb24798]
// 00a5dc02  50                   push eax
// 00a5dc03  8bcd                 mov ecx, ebp
// 00a5dc05  ff159c47b200         call dword ptr [0xb2479c]
// 00a5dc0b  85c0                 test eax, eax
// 00a5dc0d  8d4c2430             lea ecx, [esp + 0x30]
// 00a5dc11  0f94442417           sete byte ptr [esp + 0x17]
// 00a5dc16  ff15d047b200         call dword ptr [0xb247d0]
// 00a5dc1c  807c241700           cmp byte ptr [esp + 0x17], 0
// 00a5dc21  7412                 je 0xa5dc35
// 00a5dc23  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a5dc27  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a5dc2a  6a00                 push 0
// 00a5dc2c  51                   push ecx
// 00a5dc2d  6886010000           push 0x186
// 00a5dc32  52                   push edx
// 00a5dc33  ffd7                 call edi
// 00a5dc35  8d4c241c             lea ecx, [esp + 0x1c]
// 00a5dc39  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 00a5dc41  ff15d047b200         call dword ptr [0xb247d0]
// 00a5dc47  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a5dc4b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5dc4f  40                   inc eax
// 00a5dc50  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00a5dc53  89442420             mov dword ptr [esp + 0x20], eax
// 00a5dc57  0f8c03ffffff         jl 0xa5db60
// 00a5dc5d  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 00a5dc62  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a5dc65  52                   push edx
// 00a5dc66  6a00                 push 0
// 00a5dc68  68a0010000           push 0x1a0
// 00a5dc6d  50                   push eax
// 00a5dc6e  ffd7                 call edi
// 00a5dc70  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a5dc73  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a5dc7a  8babdc000000         mov ebp, dword ptr [ebx + 0xdc]
// 00a5dc80  6a00                 push 0
// 00a5dc82  6a00                 push 0
// 00a5dc84  688b010000           push 0x18b
// 00a5dc89  52                   push edx
// 00a5dc8a  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 00a5dc91  ffd7                 call edi
// 00a5dc93  3be8                 cmp ebp, eax
// 00a5dc95  7d08                 jge 0xa5dc9f
// 00a5dc97  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 00a5dc9d  eb0f                 jmp 0xa5dcae
// 00a5dc9f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a5dca2  6a00                 push 0
// 00a5dca4  6a00                 push 0
// 00a5dca6  688b010000           push 0x18b
// 00a5dcab  50                   push eax
// 00a5dcac  ffd7                 call edi
// 00a5dcae  0faf442418           imul eax, dword ptr [esp + 0x18]
// 00a5dcb3  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a5dcba  8d540102             lea edx, [ecx + eax + 2]
// 00a5dcbe  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00a5dcc5  8bc8                 mov ecx, eax
// 00a5dcc7  2b8c24a8000000       sub ecx, dword ptr [esp + 0xa8]
// 00a5dcce  899424b4000000       mov dword ptr [esp + 0xb4], edx
// 00a5dcd5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a5dcd9  83c1f2               add ecx, -0xe
// 00a5dcdc  3bd1                 cmp edx, ecx
// 00a5dcde  7d02                 jge 0xa5dce2
// 00a5dce0  8bca                 mov ecx, edx
// 00a5dce2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a5dce6  2bc1                 sub eax, ecx
// 00a5dce8  8d9424a8000000       lea edx, [esp + 0xa8]
// 00a5dcef  52                   push edx
// 00a5dcf0  8bcd                 mov ecx, ebp
// 00a5dcf2  898424ac000000       mov dword ptr [esp + 0xac], eax
// 00a5dcf9  e8b049f2ff           call 0x9826ae
// 00a5dcfe  8d8424a8000000       lea eax, [esp + 0xa8]
// 00a5dd05  50                   push eax
// 00a5dd06  8d4c2464             lea ecx, [esp + 0x64]
// 00a5dd0a  51                   push ecx
// 00a5dd0b  e8c0c8f6ff           call 0x9ca5d0
// 00a5dd10  8bc8                 mov ecx, eax
// 00a5dd12  e819c4f6ff           call 0x9ca130
// 00a5dd17  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 00a5dd1e  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00a5dd22  3bd8                 cmp ebx, eax
// 00a5dd24  8b3df43ab200         mov edi, dword ptr [0xb23af4]
// 00a5dd2a  7e31                 jle 0xa5dd5d
// 00a5dd2c  8b542464             mov edx, dword ptr [esp + 0x64]
// 00a5dd30  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00a5dd37  03c2                 add eax, edx
// 00a5dd39  99                   cdq 
// 00a5dd3a  2bc2                 sub eax, edx
// 00a5dd3c  d1f8                 sar eax, 1
// 00a5dd3e  3bc8                 cmp ecx, eax
// 00a5dd40  7e1b                 jle 0xa5dd5d
// 00a5dd42  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a5dd46  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00a5dd4a  2bc3                 sub eax, ebx
// 00a5dd4c  8d4408ff             lea eax, [eax + ecx - 1]
// 00a5dd50  50                   push eax
// 00a5dd51  6a00                 push 0
// 00a5dd53  8d8424b0000000       lea eax, [esp + 0xb0]
// 00a5dd5a  50                   push eax
// 00a5dd5b  ffd7                 call edi
// 00a5dd5d  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00a5dd64  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a5dd68  3bc8                 cmp ecx, eax
// 00a5dd6a  7d0f                 jge 0xa5dd7b
// 00a5dd6c  2bc1                 sub eax, ecx
// 00a5dd6e  6a00                 push 0
// 00a5dd70  50                   push eax
// 00a5dd71  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00a5dd78  51                   push ecx
// 00a5dd79  ffd7                 call edi
// 00a5dd7b  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00a5dd82  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a5dd86  3bc8                 cmp ecx, eax
// 00a5dd88  7e0f                 jle 0xa5dd99
// 00a5dd8a  6a00                 push 0
// 00a5dd8c  2bc1                 sub eax, ecx
// 00a5dd8e  50                   push eax
// 00a5dd8f  8d9424b0000000       lea edx, [esp + 0xb0]
// 00a5dd96  52                   push edx
// 00a5dd97  ffd7                 call edi
// 00a5dd99  8bce                 mov ecx, esi
// 00a5dd9b  e80447f2ff           call 0x9824a4
// 00a5dda0  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a5dda3  8b3d943ab200         mov edi, dword ptr [0xb23a94]
// 00a5dda9  6a00                 push 0
// 00a5ddab  6af8                 push -8
// 00a5ddad  50                   push eax
// 00a5ddae  ffd7                 call edi
// 00a5ddb0  6a00                 push 0
// 00a5ddb2  6800000080           push 0x80000000
// 00a5ddb7  6800000040           push 0x40000000
// 00a5ddbc  8bce                 mov ecx, esi
// 00a5ddbe  e8954af2ff           call 0x982858
// 00a5ddc3  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00a5ddc6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a5ddc9  50                   push eax
// 00a5ddca  6af8                 push -8
// 00a5ddcc  51                   push ecx
// 00a5ddcd  ffd7                 call edi
// 00a5ddcf  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 00a5ddd6  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a5dddd  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 00a5dde4  6850020000           push 0x250
// 00a5dde9  2bc8                 sub ecx, eax
// 00a5ddeb  51                   push ecx
// 00a5ddec  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00a5ddf3  2bd1                 sub edx, ecx
// 00a5ddf5  52                   push edx
// 00a5ddf6  50                   push eax
// 00a5ddf7  a1544ab200           mov eax, dword ptr [0xb24a54]
// 00a5ddfc  51                   push ecx
// 00a5ddfd  50                   push eax
// 00a5ddfe  8bce                 mov ecx, esi
// 00a5de00  e8cf46f2ff           call 0x9824d4
// 00a5de05  56                   push esi
// 00a5de06  e88598f7ff           call 0x9d7690
// 00a5de0b  83c404               add esp, 4
// 00a5de0e  8d4c2470             lea ecx, [esp + 0x70]
// 00a5de12  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 00a5de1a  e89177f7ff           call 0x9d55b0
// 00a5de1f  8d8c2480000000       lea ecx, [esp + 0x80]
// 00a5de26  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00a5de31  e860b70300           call 0xa99596
// 00a5de36  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a5de3d  64890d00000000       mov dword ptr fs:[0], ecx
// 00a5de44  59                   pop ecx
// 00a5de45  5f                   pop edi
// 00a5de46  5e                   pop esi
// 00a5de47  5d                   pop ebp
// 00a5de48  5b                   pop ebx
// 00a5de49  81c48c000000         add esp, 0x8c
// 00a5de4f  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTPPropertyGridInplaceList@@UAEXPAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\PropertyGrid\XTPPropertyGridInplaceList.cpp