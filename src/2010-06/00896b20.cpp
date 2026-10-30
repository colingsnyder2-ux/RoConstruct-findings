// roc 2010-06 00896b20  unit: CXTColorSelectorCtrl  size: 1620 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00896b20
//
// 00896b20  6aff                 push -1
// 00896b22  684dbd9b00           push 0x9bbd4d
// 00896b27  64a100000000         mov eax, dword ptr fs:[0]
// 00896b2d  50                   push eax
// 00896b2e  83ec38               sub esp, 0x38
// 00896b31  53                   push ebx
// 00896b32  55                   push ebp
// 00896b33  56                   push esi
// 00896b34  57                   push edi
// 00896b35  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00896b3a  33c4                 xor eax, esp
// 00896b3c  50                   push eax
// 00896b3d  8d44244c             lea eax, [esp + 0x4c]
// 00896b41  64a300000000         mov dword ptr fs:[0], eax
// 00896b47  8bf1                 mov esi, ecx
// 00896b49  e82214f1ff           call 0x7a7f70
// 00896b4e  83f8ff               cmp eax, -1
// 00896b51  7507                 jne 0x896b5a
// 00896b53  0bc0                 or eax, eax
// 00896b55  e904060000           jmp 0x89715e
// 00896b5a  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00896b60  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 00896b66  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00896b6c  6a00                 push 0
// 00896b6e  56                   push esi
// 00896b6f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00896b77  c644241f00           mov byte ptr [esp + 0x1f], 0
// 00896b7c  ffd2                 call edx
// 00896b7e  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00896b84  6a00                 push 0
// 00896b86  6a01                 push 1
// 00896b88  6801040000           push 0x401
// 00896b8d  50                   push eax
// 00896b8e  ff1554ba9e00         call dword ptr [0x9eba54]
// 00896b94  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00896b98  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00896b9b  2b869c000000         sub eax, dword ptr [esi + 0x9c]
// 00896ba1  8bbe94000000         mov edi, dword ptr [esi + 0x94]
// 00896ba7  8b9e98000000         mov ebx, dword ptr [esi + 0x98]
// 00896bad  8d4c241c             lea ecx, [esp + 0x1c]
// 00896bb1  897c2428             mov dword ptr [esp + 0x28], edi
// 00896bb5  89442438             mov dword ptr [esp + 0x38], eax
// 00896bb9  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00896bbf  8d4c2420             lea ecx, [esp + 0x20]
// 00896bc3  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00896bcb  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00896bd1  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00896bd7  c644245401           mov byte ptr [esp + 0x54], 1
// 00896bdc  a810                 test al, 0x10
// 00896bde  0f855c010000         jne 0x896d40
// 00896be4  2401                 and al, 1
// 00896be6  0fb6e8               movzx ebp, al
// 00896be9  f7dd                 neg ebp
// 00896beb  1bed                 sbb ebp, ebp
// 00896bed  81c5dc260000         add ebp, 0x26dc
// 00896bf3  896c2434             mov dword ptr [esp + 0x34], ebp
// 00896bf7  e8b4bcf8ff           call 0x8228b0
// 00896bfc  8b10                 mov edx, dword ptr [eax]
// 00896bfe  8b5208               mov edx, dword ptr [edx + 8]
// 00896c01  55                   push ebp
// 00896c02  8d4c2420             lea ecx, [esp + 0x20]
// 00896c06  51                   push ecx
// 00896c07  8bc8                 mov ecx, eax
// 00896c09  ffd2                 call edx
// 00896c0b  6a00                 push 0
// 00896c0d  6a0a                 push 0xa
// 00896c0f  8d4c2424             lea ecx, [esp + 0x24]
// 00896c13  ff1578c69e00         call dword ptr [0x9ec678]
// 00896c19  8bf8                 mov edi, eax
// 00896c1b  85ff                 test edi, edi
// 00896c1d  7e3f                 jle 0x896c5e
// 00896c1f  8d4701               lea eax, [edi + 1]
// 00896c22  50                   push eax
// 00896c23  8d4c2460             lea ecx, [esp + 0x60]
// 00896c27  51                   push ecx
// 00896c28  8d4c2424             lea ecx, [esp + 0x24]
// 00896c2c  ff1574c69e00         call dword ptr [0x9ec674]
// 00896c32  50                   push eax
// 00896c33  8d4c2424             lea ecx, [esp + 0x24]
// 00896c37  c644245802           mov byte ptr [esp + 0x58], 2
// 00896c3c  ff1580c59e00         call dword ptr [0x9ec580]
// 00896c42  8d4c245c             lea ecx, [esp + 0x5c]
// 00896c46  c644245401           mov byte ptr [esp + 0x54], 1
// 00896c4b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00896c51  57                   push edi
// 00896c52  8d4c2420             lea ecx, [esp + 0x20]
// 00896c56  ff1500c49e00         call dword ptr [0x9ec400]
// 00896c5c  eb0f                 jmp 0x896c6d
// 00896c5e  8d54241c             lea edx, [esp + 0x1c]
// 00896c62  52                   push edx
// 00896c63  8d4c2424             lea ecx, [esp + 0x24]
// 00896c67  ff1580c59e00         call dword ptr [0x9ec580]
// 00896c6d  6824010000           push 0x124
// 00896c72  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00896c7a  e8210df1ff           call 0x7a79a0
// 00896c7f  83c404               add esp, 4
// 00896c82  8d4c241c             lea ecx, [esp + 0x1c]
// 00896c86  8bf8                 mov edi, eax
// 00896c88  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00896c8e  50                   push eax
// 00896c8f  8d4720               lea eax, [edi + 0x20]
// 00896c92  6800010000           push 0x100
// 00896c97  50                   push eax
// 00896c98  ff1578a89e00         call dword ptr [0x9ea878]
// 00896c9e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00896ca2  8b542444             mov edx, dword ptr [esp + 0x44]
// 00896ca6  892f                 mov dword ptr [edi], ebp
// 00896ca8  894f0c               mov dword ptr [edi + 0xc], ecx
// 00896cab  8d6f0c               lea ebp, [edi + 0xc]
// 00896cae  895d04               mov dword ptr [ebp + 4], ebx
// 00896cb1  895508               mov dword ptr [ebp + 8], edx
// 00896cb4  8d4317               lea eax, [ebx + 0x17]
// 00896cb7  89450c               mov dword ptr [ebp + 0xc], eax
// 00896cba  c7470400000000       mov dword ptr [edi + 4], 0
// 00896cc1  c6470800             mov byte ptr [edi + 8], 0
// 00896cc5  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00896ccb  89471c               mov dword ptr [edi + 0x1c], eax
// 00896cce  8b8eb4000000         mov ecx, dword ptr [esi + 0xb4]
// 00896cd4  83c40c               add esp, 0xc
// 00896cd7  898f20010000         mov dword ptr [edi + 0x120], ecx
// 00896cdd  57                   push edi
// 00896cde  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00896ce4  e8b785ffff           call 0x88f2a0
// 00896ce9  8b542434             mov edx, dword ptr [esp + 0x34]
// 00896ced  52                   push edx
// 00896cee  55                   push ebp
// 00896cef  8d4c2428             lea ecx, [esp + 0x28]
// 00896cf3  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00896cf9  50                   push eax
// 00896cfa  56                   push esi
// 00896cfb  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00896d01  e8326a0e00           call 0x97d738
// 00896d06  f686a400000001       test byte ptr [esi + 0xa4], 1
// 00896d0d  750e                 jne 0x896d1d
// 00896d0f  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 00896d15  3b86b4000000         cmp eax, dword ptr [esi + 0xb4]
// 00896d1b  eb11                 jmp 0x896d2e
// 00896d1d  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00896d23  3986b0000000         cmp dword ptr [esi + 0xb0], eax
// 00896d29  750e                 jne 0x896d39
// 00896d2b  83f8ff               cmp eax, -1
// 00896d2e  7509                 jne 0x896d39
// 00896d30  c6470801             mov byte ptr [edi + 8], 1
// 00896d34  c644241701           mov byte ptr [esp + 0x17], 1
// 00896d39  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00896d3d  83c31b               add ebx, 0x1b
// 00896d40  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 00896d46  83e002               and eax, 2
// 00896d49  741a                 je 0x896d65
// 00896d4b  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00896d51  85c9                 test ecx, ecx
// 00896d53  7406                 je 0x896d5b
// 00896d55  894c2430             mov dword ptr [esp + 0x30], ecx
// 00896d59  eb12                 jmp 0x896d6d
// 00896d5b  c744243010b5be00     mov dword ptr [esp + 0x30], 0xbeb510
// 00896d63  eb08                 jmp 0x896d6d
// 00896d65  c744243090b4be00     mov dword ptr [esp + 0x30], 0xbeb490
// 00896d6d  85c0                 test eax, eax
// 00896d6f  741f                 je 0x896d90
// 00896d71  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 00896d78  740c                 je 0x896d86
// 00896d7a  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 00896d80  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00896d84  eb12                 jmp 0x896d98
// 00896d86  c744242c28000000     mov dword ptr [esp + 0x2c], 0x28
// 00896d8e  eb08                 jmp 0x896d98
// 00896d90  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 00896d98  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00896d9b  f7d8                 neg eax
// 00896d9d  1bc0                 sbb eax, eax
// 00896d9f  83e0ea               and eax, 0xffffffea
// 00896da2  83c016               add eax, 0x16
// 00896da5  03d8                 add ebx, eax
// 00896da7  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00896dad  03cf                 add ecx, edi
// 00896daf  894c2444             mov dword ptr [esp + 0x44], ecx
// 00896db3  33c9                 xor ecx, ecx
// 00896db5  03c3                 add eax, ebx
// 00896db7  394c242c             cmp dword ptr [esp + 0x2c], ecx
// 00896dbb  895c2424             mov dword ptr [esp + 0x24], ebx
// 00896dbf  897c243c             mov dword ptr [esp + 0x3c], edi
// 00896dc3  895c2440             mov dword ptr [esp + 0x40], ebx
// 00896dc7  89442448             mov dword ptr [esp + 0x48], eax
// 00896dcb  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00896dcf  0f8e1f010000         jle 0x896ef4
// 00896dd5  eb04                 jmp 0x896ddb
// 00896dd7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00896ddb  85c9                 test ecx, ecx
// 00896ddd  7e2b                 jle 0x896e0a
// 00896ddf  8bc1                 mov eax, ecx
// 00896de1  99                   cdq 
// 00896de2  f77e6c               idiv dword ptr [esi + 0x6c]
// 00896de5  85d2                 test edx, edx
// 00896de7  7521                 jne 0x896e0a
// 00896de9  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00896def  03d8                 add ebx, eax
// 00896df1  8d1418               lea edx, [eax + ebx]
// 00896df4  03c7                 add eax, edi
// 00896df6  895c2424             mov dword ptr [esp + 0x24], ebx
// 00896dfa  897c243c             mov dword ptr [esp + 0x3c], edi
// 00896dfe  895c2440             mov dword ptr [esp + 0x40], ebx
// 00896e02  89442444             mov dword ptr [esp + 0x44], eax
// 00896e06  89542448             mov dword ptr [esp + 0x48], edx
// 00896e0a  8b442430             mov eax, dword ptr [esp + 0x30]
// 00896e0e  8b14c8               mov edx, dword ptr [eax + ecx*8]
// 00896e11  ff442418             inc dword ptr [esp + 0x18]
// 00896e15  8b5cc804             mov ebx, dword ptr [eax + ecx*8 + 4]
// 00896e19  6824010000           push 0x124
// 00896e1e  89542438             mov dword ptr [esp + 0x38], edx
// 00896e22  e8790bf1ff           call 0x7a79a0
// 00896e27  8bf8                 mov edi, eax
// 00896e29  c6472000             mov byte ptr [edi + 0x20], 0
// 00896e2d  891f                 mov dword ptr [edi], ebx
// 00896e2f  8b442440             mov eax, dword ptr [esp + 0x40]
// 00896e33  89470c               mov dword ptr [edi + 0xc], eax
// 00896e36  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00896e3a  8d6f0c               lea ebp, [edi + 0xc]
// 00896e3d  894d04               mov dword ptr [ebp + 4], ecx
// 00896e40  8b542448             mov edx, dword ptr [esp + 0x48]
// 00896e44  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00896e48  895508               mov dword ptr [ebp + 8], edx
// 00896e4b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00896e4f  8b542438             mov edx, dword ptr [esp + 0x38]
// 00896e53  83c404               add esp, 4
// 00896e56  894f04               mov dword ptr [edi + 4], ecx
// 00896e59  57                   push edi
// 00896e5a  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00896e60  89450c               mov dword ptr [ebp + 0xc], eax
// 00896e63  c6470800             mov byte ptr [edi + 8], 0
// 00896e67  c7471c08000000       mov dword ptr [edi + 0x1c], 8
// 00896e6e  899720010000         mov dword ptr [edi + 0x120], edx
// 00896e74  e82784ffff           call 0x88f2a0
// 00896e79  e832baf8ff           call 0x8228b0
// 00896e7e  8b10                 mov edx, dword ptr [eax]
// 00896e80  8b5208               mov edx, dword ptr [edx + 8]
// 00896e83  53                   push ebx
// 00896e84  8d4c2424             lea ecx, [esp + 0x24]
// 00896e88  51                   push ecx
// 00896e89  8bc8                 mov ecx, eax
// 00896e8b  ffd2                 call edx
// 00896e8d  53                   push ebx
// 00896e8e  55                   push ebp
// 00896e8f  8d4c2428             lea ecx, [esp + 0x28]
// 00896e93  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00896e99  50                   push eax
// 00896e9a  56                   push esi
// 00896e9b  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00896ea1  e892680e00           call 0x97d738
// 00896ea6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00896eaa  3986b0000000         cmp dword ptr [esi + 0xb0], eax
// 00896eb0  7516                 jne 0x896ec8
// 00896eb2  807c241700           cmp byte ptr [esp + 0x17], 0
// 00896eb7  750f                 jne 0x896ec8
// 00896eb9  8b4f04               mov ecx, dword ptr [edi + 4]
// 00896ebc  c6470801             mov byte ptr [edi + 8], 1
// 00896ec0  c644241701           mov byte ptr [esp + 0x17], 1
// 00896ec5  894e70               mov dword ptr [esi + 0x70], ecx
// 00896ec8  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00896ecb  6a00                 push 0
// 00896ecd  50                   push eax
// 00896ece  8d542444             lea edx, [esp + 0x44]
// 00896ed2  52                   push edx
// 00896ed3  ff1540bc9e00         call dword ptr [0x9ebc40]
// 00896ed9  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00896edd  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00896ee1  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00896ee5  40                   inc eax
// 00896ee6  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 00896eea  8944245c             mov dword ptr [esp + 0x5c], eax
// 00896eee  0f8ce3feffff         jl 0x896dd7
// 00896ef4  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00896efa  03d8                 add ebx, eax
// 00896efc  8d0c18               lea ecx, [eax + ebx]
// 00896eff  03c7                 add eax, edi
// 00896f01  f686a400000004       test byte ptr [esi + 0xa4], 4
// 00896f08  897c243c             mov dword ptr [esp + 0x3c], edi
// 00896f0c  895c2440             mov dword ptr [esp + 0x40], ebx
// 00896f10  89442444             mov dword ptr [esp + 0x44], eax
// 00896f14  894c2448             mov dword ptr [esp + 0x48], ecx
// 00896f18  0f8423020000         je 0x897141
// 00896f1e  833dac66c20000       cmp dword ptr [0xc266ac], 0
// 00896f25  0f8e35010000         jle 0x897060
// 00896f2b  6a04                 push 4
// 00896f2d  6a00                 push 0
// 00896f2f  8d442444             lea eax, [esp + 0x44]
// 00896f33  50                   push eax
// 00896f34  ff1540bc9e00         call dword ptr [0x9ebc40]
// 00896f3a  33c0                 xor eax, eax
// 00896f3c  8944245c             mov dword ptr [esp + 0x5c], eax
// 00896f40  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00896f43  8b15ac66c200         mov edx, dword ptr [0xc266ac]
// 00896f49  3bd1                 cmp edx, ecx
// 00896f4b  7d02                 jge 0x896f4f
// 00896f4d  8bca                 mov ecx, edx
// 00896f4f  3bc1                 cmp eax, ecx
// 00896f51  0f8df7000000         jge 0x89704e
// 00896f57  ff442418             inc dword ptr [esp + 0x18]
// 00896f5b  85c0                 test eax, eax
// 00896f5d  0f8ce6000000         jl 0x897049
// 00896f63  3bc2                 cmp eax, edx
// 00896f65  0f8dde000000         jge 0x897049
// 00896f6b  8b0da866c200         mov ecx, dword ptr [0xc266a8]
// 00896f71  8b1481               mov edx, dword ptr [ecx + eax*4]
// 00896f74  6824010000           push 0x124
// 00896f79  89542434             mov dword ptr [esp + 0x34], edx
// 00896f7d  e81e0af1ff           call 0x7a79a0
// 00896f82  8bf8                 mov edi, eax
// 00896f84  c6472000             mov byte ptr [edi + 0x20], 0
// 00896f88  c70700000000         mov dword ptr [edi], 0
// 00896f8e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00896f92  89470c               mov dword ptr [edi + 0xc], eax
// 00896f95  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00896f99  8d6f0c               lea ebp, [edi + 0xc]
// 00896f9c  894d04               mov dword ptr [ebp + 4], ecx
// 00896f9f  8b542448             mov edx, dword ptr [esp + 0x48]
// 00896fa3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00896fa7  895508               mov dword ptr [ebp + 8], edx
// 00896faa  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00896fae  8b542434             mov edx, dword ptr [esp + 0x34]
// 00896fb2  83c404               add esp, 4
// 00896fb5  894f04               mov dword ptr [edi + 4], ecx
// 00896fb8  57                   push edi
// 00896fb9  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00896fbf  89450c               mov dword ptr [ebp + 0xc], eax
// 00896fc2  c6470800             mov byte ptr [edi + 8], 0
// 00896fc6  c7471c08000000       mov dword ptr [edi + 0x1c], 8
// 00896fcd  899720010000         mov dword ptr [edi + 0x120], edx
// 00896fd3  e8c882ffff           call 0x88f2a0
// 00896fd8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00896fdc  50                   push eax
// 00896fdd  8d4c2430             lea ecx, [esp + 0x30]
// 00896fe1  51                   push ecx
// 00896fe2  e8f9bff7ff           call 0x812fe0
// 00896fe7  83c408               add esp, 8
// 00896fea  6a01                 push 1
// 00896fec  55                   push ebp
// 00896fed  8bc8                 mov ecx, eax
// 00896fef  c644245c03           mov byte ptr [esp + 0x5c], 3
// 00896ff4  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00896ffa  50                   push eax
// 00896ffb  56                   push esi
// 00896ffc  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00897002  e831670e00           call 0x97d738
// 00897007  8d4c242c             lea ecx, [esp + 0x2c]
// 0089700b  c644245401           mov byte ptr [esp + 0x54], 1
// 00897010  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00897016  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089701a  3996b0000000         cmp dword ptr [esi + 0xb0], edx
// 00897020  7509                 jne 0x89702b
// 00897022  c644241701           mov byte ptr [esp + 0x17], 1
// 00897027  c6470801             mov byte ptr [edi + 8], 1
// 0089702b  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0089702e  6a00                 push 0
// 00897030  50                   push eax
// 00897031  8d4c2444             lea ecx, [esp + 0x44]
// 00897035  51                   push ecx
// 00897036  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0089703c  ff44245c             inc dword ptr [esp + 0x5c]
// 00897040  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00897044  e9f7feffff           jmp 0x896f40
// 00897049  e8fe0bf1ff           call 0x7a7c4c
// 0089704e  8b542448             mov edx, dword ptr [esp + 0x48]
// 00897052  2b542440             sub edx, dword ptr [esp + 0x40]
// 00897056  8d441304             lea eax, [ebx + edx + 4]
// 0089705a  89442424             mov dword ptr [esp + 0x24], eax
// 0089705e  8bd8                 mov ebx, eax
// 00897060  83c304               add ebx, 4
// 00897063  e848b8f8ff           call 0x8228b0
// 00897068  8b10                 mov edx, dword ptr [eax]
// 0089706a  8b5208               mov edx, dword ptr [edx + 8]
// 0089706d  68dd260000           push 0x26dd
// 00897072  8d4c2420             lea ecx, [esp + 0x20]
// 00897076  51                   push ecx
// 00897077  8bc8                 mov ecx, eax
// 00897079  ffd2                 call edx
// 0089707b  ff442418             inc dword ptr [esp + 0x18]
// 0089707f  6824010000           push 0x124
// 00897084  e81709f1ff           call 0x7a79a0
// 00897089  83c404               add esp, 4
// 0089708c  8d4c241c             lea ecx, [esp + 0x1c]
// 00897090  8bf8                 mov edi, eax
// 00897092  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00897098  50                   push eax
// 00897099  8d4720               lea eax, [edi + 0x20]
// 0089709c  6800010000           push 0x100
// 008970a1  50                   push eax
// 008970a2  ff1578a89e00         call dword ptr [0x9ea878]
// 008970a8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008970ac  8b542444             mov edx, dword ptr [esp + 0x44]
// 008970b0  8d6f0c               lea ebp, [edi + 0xc]
// 008970b3  894d00               mov dword ptr [ebp], ecx
// 008970b6  895d04               mov dword ptr [ebp + 4], ebx
// 008970b9  895508               mov dword ptr [ebp + 8], edx
// 008970bc  8d4317               lea eax, [ebx + 0x17]
// 008970bf  89450c               mov dword ptr [ebp + 0xc], eax
// 008970c2  8b442424             mov eax, dword ptr [esp + 0x24]
// 008970c6  c707dd260000         mov dword ptr [edi], 0x26dd
// 008970cc  894704               mov dword ptr [edi + 4], eax
// 008970cf  c6470800             mov byte ptr [edi + 8], 0
// 008970d3  c7471c04000000       mov dword ptr [edi + 0x1c], 4
// 008970da  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 008970e0  83c40c               add esp, 0xc
// 008970e3  8d54241c             lea edx, [esp + 0x1c]
// 008970e7  898f20010000         mov dword ptr [edi + 0x120], ecx
// 008970ed  52                   push edx
// 008970ee  8d4c2438             lea ecx, [esp + 0x38]
// 008970f2  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 008970f8  57                   push edi
// 008970f9  8d8e3c010000         lea ecx, [esi + 0x13c]
// 008970ff  c644245804           mov byte ptr [esp + 0x58], 4
// 00897104  e89781ffff           call 0x88f2a0
// 00897109  6a01                 push 1
// 0089710b  55                   push ebp
// 0089710c  8d4c243c             lea ecx, [esp + 0x3c]
// 00897110  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00897116  50                   push eax
// 00897117  56                   push esi
// 00897118  8d8eb8000000         lea ecx, [esi + 0xb8]
// 0089711e  e815660e00           call 0x97d738
// 00897123  83beb0000000ff       cmp dword ptr [esi + 0xb0], -1
// 0089712a  740b                 je 0x897137
// 0089712c  807c241700           cmp byte ptr [esp + 0x17], 0
// 00897131  7504                 jne 0x897137
// 00897133  c6470801             mov byte ptr [edi + 8], 1
// 00897137  8d4c2434             lea ecx, [esp + 0x34]
// 0089713b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00897141  8d4c2420             lea ecx, [esp + 0x20]
// 00897145  c74670ffffffff       mov dword ptr [esi + 0x70], 0xffffffff
// 0089714c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00897152  8d4c241c             lea ecx, [esp + 0x1c]
// 00897156  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0089715c  33c0                 xor eax, eax
// 0089715e  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00897162  64890d00000000       mov dword ptr fs:[0], ecx
// 00897169  59                   pop ecx
// 0089716a  5f                   pop edi
// 0089716b  5e                   pop esi
// 0089716c  5d                   pop ebp
// 0089716d  5b                   pop ebx
// 0089716e  83c444               add esp, 0x44
// 00897171  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTColorSelectorCtrl@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorSelectorCtrl.cpp