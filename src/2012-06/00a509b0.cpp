// roc 2012-06 00a509b0  unit: CXTPTabPaintManager  size: 1724 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a509b0
//
// 00a509b0  83ec28               sub esp, 0x28
// 00a509b3  53                   push ebx
// 00a509b4  55                   push ebp
// 00a509b5  56                   push esi
// 00a509b6  8b742438             mov esi, dword ptr [esp + 0x38]
// 00a509ba  8b06                 mov eax, dword ptr [esi]
// 00a509bc  8b5040               mov edx, dword ptr [eax + 0x40]
// 00a509bf  8be9                 mov ebp, ecx
// 00a509c1  57                   push edi
// 00a509c2  8bce                 mov ecx, esi
// 00a509c4  896c2414             mov dword ptr [esp + 0x14], ebp
// 00a509c8  ffd2                 call edx
// 00a509ca  85c0                 test eax, eax
// 00a509cc  7437                 je 0xa50a05
// 00a509ce  8b06                 mov eax, dword ptr [esi]
// 00a509d0  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a509d3  bf02000000           mov edi, 2
// 00a509d8  8bce                 mov ecx, esi
// 00a509da  8d5fff               lea ebx, [edi - 1]
// 00a509dd  8bef                 mov ebp, edi
// 00a509df  ffd2                 call edx
// 00a509e1  50                   push eax
// 00a509e2  83ec10               sub esp, 0x10
// 00a509e5  8bc4                 mov eax, esp
// 00a509e7  8938                 mov dword ptr [eax], edi
// 00a509e9  895804               mov dword ptr [eax + 4], ebx
// 00a509ec  896808               mov dword ptr [eax + 8], ebp
// 00a509ef  8bcf                 mov ecx, edi
// 00a509f1  89480c               mov dword ptr [eax + 0xc], ecx
// 00a509f4  8d442458             lea eax, [esp + 0x58]
// 00a509f8  50                   push eax
// 00a509f9  e882110000           call 0xa51b80
// 00a509fe  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a50a02  83c418               add esp, 0x18
// 00a50a05  8b16                 mov edx, dword ptr [esi]
// 00a50a07  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a50a0a  8bce                 mov ecx, esi
// 00a50a0c  ffd0                 call eax
// 00a50a0e  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 00a50a11  8b5554               mov edx, dword ptr [ebp + 0x54]
// 00a50a14  50                   push eax
// 00a50a15  83ec10               sub esp, 0x10
// 00a50a18  8bc4                 mov eax, esp
// 00a50a1a  8908                 mov dword ptr [eax], ecx
// 00a50a1c  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 00a50a1f  895004               mov dword ptr [eax + 4], edx
// 00a50a22  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 00a50a25  894808               mov dword ptr [eax + 8], ecx
// 00a50a28  89500c               mov dword ptr [eax + 0xc], edx
// 00a50a2b  8d442458             lea eax, [esp + 0x58]
// 00a50a2f  50                   push eax
// 00a50a30  e84b110000           call 0xa51b80
// 00a50a35  83c418               add esp, 0x18
// 00a50a38  8bce                 mov ecx, esi
// 00a50a3a  e841adffff           call 0xa4b780
// 00a50a3f  83f804               cmp eax, 4
// 00a50a42  7537                 jne 0xa50a7b
// 00a50a44  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a50a48  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a50a4c  83ec10               sub esp, 0x10
// 00a50a4f  8bc4                 mov eax, esp
// 00a50a51  8908                 mov dword ptr [eax], ecx
// 00a50a53  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a50a57  895004               mov dword ptr [eax + 4], edx
// 00a50a5a  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a50a5e  894808               mov dword ptr [eax + 8], ecx
// 00a50a61  89500c               mov dword ptr [eax + 0xc], edx
// 00a50a64  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a50a68  50                   push eax
// 00a50a69  56                   push esi
// 00a50a6a  8bcd                 mov ecx, ebp
// 00a50a6c  e8fff5ffff           call 0xa50070
// 00a50a71  5f                   pop edi
// 00a50a72  5e                   pop esi
// 00a50a73  5d                   pop ebp
// 00a50a74  5b                   pop ebx
// 00a50a75  83c428               add esp, 0x28
// 00a50a78  c21800               ret 0x18
// 00a50a7b  33db                 xor ebx, ebx
// 00a50a7d  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 00a50a80  7e55                 jle 0xa50ad7
// 00a50a82  85db                 test ebx, ebx
// 00a50a84  7c0d                 jl 0xa50a93
// 00a50a86  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 00a50a89  7d08                 jge 0xa50a93
// 00a50a8b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00a50a8e  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 00a50a91  eb02                 jmp 0xa50a95
// 00a50a93  33ff                 xor edi, edi
// 00a50a95  8bcf                 mov ecx, edi
// 00a50a97  e8e463f9ff           call 0x9e6e80
// 00a50a9c  85c0                 test eax, eax
// 00a50a9e  7415                 je 0xa50ab5
// 00a50aa0  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00a50aa6  8b11                 mov edx, dword ptr [ecx]
// 00a50aa8  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a50aac  8b5218               mov edx, dword ptr [edx + 0x18]
// 00a50aaf  57                   push edi
// 00a50ab0  50                   push eax
// 00a50ab1  ffd2                 call edx
// 00a50ab3  eb02                 jmp 0xa50ab7
// 00a50ab5  33c0                 xor eax, eax
// 00a50ab7  8bcf                 mov ecx, edi
// 00a50ab9  894724               mov dword ptr [edi + 0x24], eax
// 00a50abc  894720               mov dword ptr [edi + 0x20], eax
// 00a50abf  e8bc63f9ff           call 0x9e6e80
// 00a50ac4  85c0                 test eax, eax
// 00a50ac6  7409                 je 0xa50ad1
// 00a50ac8  8b85b4000000         mov eax, dword ptr [ebp + 0xb4]
// 00a50ace  014720               add dword ptr [edi + 0x20], eax
// 00a50ad1  43                   inc ebx
// 00a50ad2  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 00a50ad5  7cab                 jl 0xa50a82
// 00a50ad7  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a50adb  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00a50ae1  8b11                 mov edx, dword ptr [ecx]
// 00a50ae3  8b5208               mov edx, dword ptr [edx + 8]
// 00a50ae6  56                   push esi
// 00a50ae7  83ec10               sub esp, 0x10
// 00a50aea  8bc4                 mov eax, esp
// 00a50aec  8938                 mov dword ptr [eax], edi
// 00a50aee  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00a50af2  897804               mov dword ptr [eax + 4], edi
// 00a50af5  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00a50af9  897808               mov dword ptr [eax + 8], edi
// 00a50afc  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 00a50b00  89780c               mov dword ptr [eax + 0xc], edi
// 00a50b03  8d44243c             lea eax, [esp + 0x3c]
// 00a50b07  50                   push eax
// 00a50b08  ffd2                 call edx
// 00a50b0a  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00a50b0e  8b08                 mov ecx, dword ptr [eax]
// 00a50b10  894e24               mov dword ptr [esi + 0x24], ecx
// 00a50b13  8b5004               mov edx, dword ptr [eax + 4]
// 00a50b16  895628               mov dword ptr [esi + 0x28], edx
// 00a50b19  8b4808               mov ecx, dword ptr [eax + 8]
// 00a50b1c  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00a50b1f  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a50b22  895630               mov dword ptr [esi + 0x30], edx
// 00a50b25  7537                 jne 0xa50b5e
// 00a50b27  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a50b2b  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a50b2f  83ec10               sub esp, 0x10
// 00a50b32  8bc4                 mov eax, esp
// 00a50b34  8908                 mov dword ptr [eax], ecx
// 00a50b36  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a50b3a  895004               mov dword ptr [eax + 4], edx
// 00a50b3d  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a50b41  894808               mov dword ptr [eax + 8], ecx
// 00a50b44  89500c               mov dword ptr [eax + 0xc], edx
// 00a50b47  56                   push esi
// 00a50b48  8d44243c             lea eax, [esp + 0x3c]
// 00a50b4c  50                   push eax
// 00a50b4d  8bcd                 mov ecx, ebp
// 00a50b4f  e89cf1ffff           call 0xa4fcf0
// 00a50b54  5f                   pop edi
// 00a50b55  5e                   pop esi
// 00a50b56  5d                   pop ebp
// 00a50b57  5b                   pop ebx
// 00a50b58  83c428               add esp, 0x28
// 00a50b5b  c21800               ret 0x18
// 00a50b5e  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00a50b64  8b11                 mov edx, dword ptr [ecx]
// 00a50b66  8b5210               mov edx, dword ptr [edx + 0x10]
// 00a50b69  8d442418             lea eax, [esp + 0x18]
// 00a50b6d  50                   push eax
// 00a50b6e  ffd2                 call edx
// 00a50b70  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00a50b76  8b01                 mov eax, dword ptr [ecx]
// 00a50b78  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00a50b7b  56                   push esi
// 00a50b7c  ffd2                 call edx
// 00a50b7e  8bd8                 mov ebx, eax
// 00a50b80  8b06                 mov eax, dword ptr [esi]
// 00a50b82  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a50b85  8bce                 mov ecx, esi
// 00a50b87  895c2414             mov dword ptr [esp + 0x14], ebx
// 00a50b8b  ffd2                 call edx
// 00a50b8d  83f802               cmp eax, 2
// 00a50b90  7411                 je 0xa50ba3
// 00a50b92  8b06                 mov eax, dword ptr [esi]
// 00a50b94  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a50b97  8bce                 mov ecx, esi
// 00a50b99  ffd2                 call edx
// 00a50b9b  85c0                 test eax, eax
// 00a50b9d  0f8568020000         jne 0xa50e0b
// 00a50ba3  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a50ba7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a50bab  8b16                 mov edx, dword ptr [esi]
// 00a50bad  8d3c01               lea edi, [ecx + eax]
// 00a50bb0  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a50bb3  8bce                 mov ecx, esi
// 00a50bb5  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a50bb9  ffd0                 call eax
// 00a50bbb  83f802               cmp eax, 2
// 00a50bbe  750e                 jne 0xa50bce
// 00a50bc0  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00a50bc4  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 00a50bc8  2bfb                 sub edi, ebx
// 00a50bca  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a50bce  03fb                 add edi, ebx
// 00a50bd0  8bce                 mov ecx, esi
// 00a50bd2  897c2410             mov dword ptr [esp + 0x10], edi
// 00a50bd6  e8a5abffff           call 0xa4b780
// 00a50bdb  83f801               cmp eax, 1
// 00a50bde  7551                 jne 0xa50c31
// 00a50be0  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a50be4  2b442444             sub eax, dword ptr [esp + 0x44]
// 00a50be8  8b7e70               mov edi, dword ptr [esi + 0x70]
// 00a50beb  2b442418             sub eax, dword ptr [esp + 0x18]
// 00a50bef  2b442420             sub eax, dword ptr [esp + 0x20]
// 00a50bf3  83ef01               sub edi, 1
// 00a50bf6  89442440             mov dword ptr [esp + 0x40], eax
// 00a50bfa  782c                 js 0xa50c28
// 00a50bfc  8d642400             lea esp, [esp]
// 00a50c00  85ff                 test edi, edi
// 00a50c02  7c0d                 jl 0xa50c11
// 00a50c04  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 00a50c07  7d08                 jge 0xa50c11
// 00a50c09  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00a50c0c  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 00a50c0f  eb02                 jmp 0xa50c13
// 00a50c11  33c9                 xor ecx, ecx
// 00a50c13  8b11                 mov edx, dword ptr [ecx]
// 00a50c15  8b5204               mov edx, dword ptr [edx + 4]
// 00a50c18  8d442440             lea eax, [esp + 0x40]
// 00a50c1c  50                   push eax
// 00a50c1d  ffd2                 call edx
// 00a50c1f  83ef01               sub edi, 1
// 00a50c22  79dc                 jns 0xa50c00
// 00a50c24  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a50c28  50                   push eax
// 00a50c29  56                   push esi
// 00a50c2a  8bcd                 mov ecx, ebp
// 00a50c2c  e8aff9ffff           call 0xa505e0
// 00a50c31  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a50c35  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a50c39  83ec10               sub esp, 0x10
// 00a50c3c  8bc4                 mov eax, esp
// 00a50c3e  8908                 mov dword ptr [eax], ecx
// 00a50c40  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a50c44  895004               mov dword ptr [eax + 4], edx
// 00a50c47  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a50c4b  894808               mov dword ptr [eax + 8], ecx
// 00a50c4e  89500c               mov dword ptr [eax + 0xc], edx
// 00a50c51  56                   push esi
// 00a50c52  8d44243c             lea eax, [esp + 0x3c]
// 00a50c56  50                   push eax
// 00a50c57  8bcd                 mov ecx, ebp
// 00a50c59  e892f0ffff           call 0xa4fcf0
// 00a50c5e  837e1400             cmp dword ptr [esi + 0x14], 0
// 00a50c62  8b08                 mov ecx, dword ptr [eax]
// 00a50c64  894e24               mov dword ptr [esi + 0x24], ecx
// 00a50c67  8b5004               mov edx, dword ptr [eax + 4]
// 00a50c6a  895628               mov dword ptr [esi + 0x28], edx
// 00a50c6d  8b4808               mov ecx, dword ptr [eax + 8]
// 00a50c70  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00a50c73  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a50c76  895630               mov dword ptr [esi + 0x30], edx
// 00a50c79  7d71                 jge 0xa50cec
// 00a50c7b  8bce                 mov ecx, esi
// 00a50c7d  e8aebbffff           call 0xa4c830
// 00a50c82  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00a50c85  2b4e24               sub ecx, dword ptr [esi + 0x24]
// 00a50c88  8b5614               mov edx, dword ptr [esi + 0x14]
// 00a50c8b  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00a50c8f  03d0                 add edx, eax
// 00a50c91  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 00a50c95  3bd1                 cmp edx, ecx
// 00a50c97  7d53                 jge 0xa50cec
// 00a50c99  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a50c9d  2bc8                 sub ecx, eax
// 00a50c9f  33c0                 xor eax, eax
// 00a50ca1  85c9                 test ecx, ecx
// 00a50ca3  0f9fc0               setg al
// 00a50ca6  83ec10               sub esp, 0x10
// 00a50ca9  48                   dec eax
// 00a50caa  23c1                 and eax, ecx
// 00a50cac  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a50cb0  894614               mov dword ptr [esi + 0x14], eax
// 00a50cb3  8bc4                 mov eax, esp
// 00a50cb5  8908                 mov dword ptr [eax], ecx
// 00a50cb7  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a50cbb  895004               mov dword ptr [eax + 4], edx
// 00a50cbe  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a50cc2  894808               mov dword ptr [eax + 8], ecx
// 00a50cc5  89500c               mov dword ptr [eax + 0xc], edx
// 00a50cc8  56                   push esi
// 00a50cc9  8d44243c             lea eax, [esp + 0x3c]
// 00a50ccd  50                   push eax
// 00a50cce  8bcd                 mov ecx, ebp
// 00a50cd0  e81bf0ffff           call 0xa4fcf0
// 00a50cd5  8b08                 mov ecx, dword ptr [eax]
// 00a50cd7  894e24               mov dword ptr [esi + 0x24], ecx
// 00a50cda  8b5004               mov edx, dword ptr [eax + 4]
// 00a50cdd  895628               mov dword ptr [esi + 0x28], edx
// 00a50ce0  8b4808               mov ecx, dword ptr [eax + 8]
// 00a50ce3  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00a50ce6  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a50ce9  895630               mov dword ptr [esi + 0x30], edx
// 00a50cec  8b7e24               mov edi, dword ptr [esi + 0x24]
// 00a50cef  037e14               add edi, dword ptr [esi + 0x14]
// 00a50cf2  8bce                 mov ecx, esi
// 00a50cf4  037c2418             add edi, dword ptr [esp + 0x18]
// 00a50cf8  e883aaffff           call 0xa4b780
// 00a50cfd  83f805               cmp eax, 5
// 00a50d00  0f85b0000000         jne 0xa50db6
// 00a50d06  8b06                 mov eax, dword ptr [esi]
// 00a50d08  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a50d0b  8bce                 mov ecx, esi
// 00a50d0d  ffd2                 call edx
// 00a50d0f  85c0                 test eax, eax
// 00a50d11  750d                 jne 0xa50d20
// 00a50d13  8b4630               mov eax, dword ptr [esi + 0x30]
// 00a50d16  2b442424             sub eax, dword ptr [esp + 0x24]
// 00a50d1a  89442410             mov dword ptr [esp + 0x10], eax
// 00a50d1e  eb0b                 jmp 0xa50d2b
// 00a50d20  8b4628               mov eax, dword ptr [esi + 0x28]
// 00a50d23  03442424             add eax, dword ptr [esp + 0x24]
// 00a50d27  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a50d2b  33ed                 xor ebp, ebp
// 00a50d2d  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00a50d30  0f8e2c030000         jle 0xa51062
// 00a50d36  8d041f               lea eax, [edi + ebx]
// 00a50d39  89442440             mov dword ptr [esp + 0x40], eax
// 00a50d3d  8d4900               lea ecx, [ecx]
// 00a50d40  85ed                 test ebp, ebp
// 00a50d42  7c0d                 jl 0xa50d51
// 00a50d44  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00a50d47  7d08                 jge 0xa50d51
// 00a50d49  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00a50d4c  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 00a50d4f  eb02                 jmp 0xa50d53
// 00a50d51  33db                 xor ebx, ebx
// 00a50d53  8b16                 mov edx, dword ptr [esi]
// 00a50d55  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a50d58  8bce                 mov ecx, esi
// 00a50d5a  ffd0                 call eax
// 00a50d5c  83ec10               sub esp, 0x10
// 00a50d5f  85c0                 test eax, eax
// 00a50d61  8bc4                 mov eax, esp
// 00a50d63  8938                 mov dword ptr [eax], edi
// 00a50d65  7518                 jne 0xa50d7f
// 00a50d67  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a50d6b  8bca                 mov ecx, edx
// 00a50d6d  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 00a50d70  894804               mov dword ptr [eax + 4], ecx
// 00a50d73  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a50d77  894808               mov dword ptr [eax + 8], ecx
// 00a50d7a  89500c               mov dword ptr [eax + 0xc], edx
// 00a50d7d  eb16                 jmp 0xa50d95
// 00a50d7f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a50d83  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00a50d86  895004               mov dword ptr [eax + 4], edx
// 00a50d89  03ca                 add ecx, edx
// 00a50d8b  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a50d8f  895008               mov dword ptr [eax + 8], edx
// 00a50d92  89480c               mov dword ptr [eax + 0xc], ecx
// 00a50d95  8bcb                 mov ecx, ebx
// 00a50d97  e884aeffff           call 0xa4bc20
// 00a50d9c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a50da0  01442440             add dword ptr [esp + 0x40], eax
// 00a50da4  45                   inc ebp
// 00a50da5  03f8                 add edi, eax
// 00a50da7  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00a50daa  7c94                 jl 0xa50d40
// 00a50dac  5f                   pop edi
// 00a50dad  5e                   pop esi
// 00a50dae  5d                   pop ebp
// 00a50daf  5b                   pop ebx
// 00a50db0  83c428               add esp, 0x28
// 00a50db3  c21800               ret 0x18
// 00a50db6  33ed                 xor ebp, ebp
// 00a50db8  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00a50dbb  0f8ea1020000         jle 0xa51062
// 00a50dc1  85ed                 test ebp, ebp
// 00a50dc3  7c0d                 jl 0xa50dd2
// 00a50dc5  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00a50dc8  7d08                 jge 0xa50dd2
// 00a50dca  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a50dcd  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 00a50dd0  eb02                 jmp 0xa50dd4
// 00a50dd2  33db                 xor ebx, ebx
// 00a50dd4  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00a50dd7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a50ddb  83ec10               sub esp, 0x10
// 00a50dde  8bc4                 mov eax, esp
// 00a50de0  03cf                 add ecx, edi
// 00a50de2  8938                 mov dword ptr [eax], edi
// 00a50de4  895004               mov dword ptr [eax + 4], edx
// 00a50de7  894808               mov dword ptr [eax + 8], ecx
// 00a50dea  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a50dee  89480c               mov dword ptr [eax + 0xc], ecx
// 00a50df1  8bcb                 mov ecx, ebx
// 00a50df3  e828aeffff           call 0xa4bc20
// 00a50df8  037b20               add edi, dword ptr [ebx + 0x20]
// 00a50dfb  45                   inc ebp
// 00a50dfc  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00a50dff  7cc0                 jl 0xa50dc1
// 00a50e01  5f                   pop edi
// 00a50e02  5e                   pop esi
// 00a50e03  5d                   pop ebp
// 00a50e04  5b                   pop ebx
// 00a50e05  83c428               add esp, 0x28
// 00a50e08  c21800               ret 0x18
// 00a50e0b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a50e0f  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a50e13  8d3c10               lea edi, [eax + edx]
// 00a50e16  8b16                 mov edx, dword ptr [esi]
// 00a50e18  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a50e1b  8bce                 mov ecx, esi
// 00a50e1d  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a50e21  ffd0                 call eax
// 00a50e23  83f803               cmp eax, 3
// 00a50e26  750e                 jne 0xa50e36
// 00a50e28  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00a50e2c  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 00a50e30  2bfb                 sub edi, ebx
// 00a50e32  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a50e36  03fb                 add edi, ebx
// 00a50e38  8bce                 mov ecx, esi
// 00a50e3a  897c2410             mov dword ptr [esp + 0x10], edi
// 00a50e3e  e83da9ffff           call 0xa4b780
// 00a50e43  83f801               cmp eax, 1
// 00a50e46  754d                 jne 0xa50e95
// 00a50e48  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a50e4c  2b442418             sub eax, dword ptr [esp + 0x18]
// 00a50e50  8b7e70               mov edi, dword ptr [esi + 0x70]
// 00a50e53  2b442420             sub eax, dword ptr [esp + 0x20]
// 00a50e57  2b442448             sub eax, dword ptr [esp + 0x48]
// 00a50e5b  83ef01               sub edi, 1
// 00a50e5e  89442440             mov dword ptr [esp + 0x40], eax
// 00a50e62  7828                 js 0xa50e8c
// 00a50e64  85ff                 test edi, edi
// 00a50e66  7c0d                 jl 0xa50e75
// 00a50e68  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 00a50e6b  7d08                 jge 0xa50e75
// 00a50e6d  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00a50e70  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 00a50e73  eb02                 jmp 0xa50e77
// 00a50e75  33c9                 xor ecx, ecx
// 00a50e77  8b11                 mov edx, dword ptr [ecx]
// 00a50e79  8b5204               mov edx, dword ptr [edx + 4]
// 00a50e7c  8d442440             lea eax, [esp + 0x40]
// 00a50e80  50                   push eax
// 00a50e81  ffd2                 call edx
// 00a50e83  83ef01               sub edi, 1
// 00a50e86  79dc                 jns 0xa50e64
// 00a50e88  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a50e8c  50                   push eax
// 00a50e8d  56                   push esi
// 00a50e8e  8bcd                 mov ecx, ebp
// 00a50e90  e84bf7ffff           call 0xa505e0
// 00a50e95  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a50e99  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a50e9d  83ec10               sub esp, 0x10
// 00a50ea0  8bc4                 mov eax, esp
// 00a50ea2  8908                 mov dword ptr [eax], ecx
// 00a50ea4  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a50ea8  895004               mov dword ptr [eax + 4], edx
// 00a50eab  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a50eaf  894808               mov dword ptr [eax + 8], ecx
// 00a50eb2  89500c               mov dword ptr [eax + 0xc], edx
// 00a50eb5  56                   push esi
// 00a50eb6  8d44243c             lea eax, [esp + 0x3c]
// 00a50eba  50                   push eax
// 00a50ebb  8bcd                 mov ecx, ebp
// 00a50ebd  e82eeeffff           call 0xa4fcf0
// 00a50ec2  837e1400             cmp dword ptr [esi + 0x14], 0
// 00a50ec6  8b08                 mov ecx, dword ptr [eax]
// 00a50ec8  894e24               mov dword ptr [esi + 0x24], ecx
// 00a50ecb  8b5004               mov edx, dword ptr [eax + 4]
// 00a50ece  895628               mov dword ptr [esi + 0x28], edx
// 00a50ed1  8b4808               mov ecx, dword ptr [eax + 8]
// 00a50ed4  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00a50ed7  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a50eda  895630               mov dword ptr [esi + 0x30], edx
// 00a50edd  7d71                 jge 0xa50f50
// 00a50edf  8bce                 mov ecx, esi
// 00a50ee1  e84ab9ffff           call 0xa4c830
// 00a50ee6  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00a50ee9  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 00a50eec  8b5614               mov edx, dword ptr [esi + 0x14]
// 00a50eef  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00a50ef3  03d0                 add edx, eax
// 00a50ef5  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 00a50ef9  3bd1                 cmp edx, ecx
// 00a50efb  7d53                 jge 0xa50f50
// 00a50efd  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a50f01  2bc8                 sub ecx, eax
// 00a50f03  33c0                 xor eax, eax
// 00a50f05  85c9                 test ecx, ecx
// 00a50f07  0f9fc0               setg al
// 00a50f0a  83ec10               sub esp, 0x10
// 00a50f0d  48                   dec eax
// 00a50f0e  23c1                 and eax, ecx
// 00a50f10  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a50f14  894614               mov dword ptr [esi + 0x14], eax
// 00a50f17  8bc4                 mov eax, esp
// 00a50f19  8908                 mov dword ptr [eax], ecx
// 00a50f1b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a50f1f  895004               mov dword ptr [eax + 4], edx
// 00a50f22  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a50f26  894808               mov dword ptr [eax + 8], ecx
// 00a50f29  89500c               mov dword ptr [eax + 0xc], edx
// 00a50f2c  56                   push esi
// 00a50f2d  8d44243c             lea eax, [esp + 0x3c]
// 00a50f31  50                   push eax
// 00a50f32  8bcd                 mov ecx, ebp
// 00a50f34  e8b7edffff           call 0xa4fcf0
// 00a50f39  8b08                 mov ecx, dword ptr [eax]
// 00a50f3b  894e24               mov dword ptr [esi + 0x24], ecx
// 00a50f3e  8b5004               mov edx, dword ptr [eax + 4]
// 00a50f41  895628               mov dword ptr [esi + 0x28], edx
// 00a50f44  8b4808               mov ecx, dword ptr [eax + 8]
// 00a50f47  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00a50f4a  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a50f4d  895630               mov dword ptr [esi + 0x30], edx
// 00a50f50  8b7e28               mov edi, dword ptr [esi + 0x28]
// 00a50f53  037e14               add edi, dword ptr [esi + 0x14]
// 00a50f56  8bce                 mov ecx, esi
// 00a50f58  037c2418             add edi, dword ptr [esp + 0x18]
// 00a50f5c  e81fa8ffff           call 0xa4b780
// 00a50f61  83f805               cmp eax, 5
// 00a50f64  0f85b1000000         jne 0xa5101b
// 00a50f6a  8b06                 mov eax, dword ptr [esi]
// 00a50f6c  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a50f6f  8bce                 mov ecx, esi
// 00a50f71  ffd2                 call edx
// 00a50f73  83f801               cmp eax, 1
// 00a50f76  750d                 jne 0xa50f85
// 00a50f78  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a50f7b  2b442424             sub eax, dword ptr [esp + 0x24]
// 00a50f7f  89442410             mov dword ptr [esp + 0x10], eax
// 00a50f83  eb0b                 jmp 0xa50f90
// 00a50f85  8b4624               mov eax, dword ptr [esi + 0x24]
// 00a50f88  03442424             add eax, dword ptr [esp + 0x24]
// 00a50f8c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a50f90  33ed                 xor ebp, ebp
// 00a50f92  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00a50f95  0f8ec7000000         jle 0xa51062
// 00a50f9b  8d041f               lea eax, [edi + ebx]
// 00a50f9e  89442440             mov dword ptr [esp + 0x40], eax
// 00a50fa2  85ed                 test ebp, ebp
// 00a50fa4  7c0d                 jl 0xa50fb3
// 00a50fa6  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00a50fa9  7d08                 jge 0xa50fb3
// 00a50fab  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00a50fae  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 00a50fb1  eb02                 jmp 0xa50fb5
// 00a50fb3  33db                 xor ebx, ebx
// 00a50fb5  8b16                 mov edx, dword ptr [esi]
// 00a50fb7  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a50fba  8bce                 mov ecx, esi
// 00a50fbc  ffd0                 call eax
// 00a50fbe  83ec10               sub esp, 0x10
// 00a50fc1  83f801               cmp eax, 1
// 00a50fc4  8bc4                 mov eax, esp
// 00a50fc6  751a                 jne 0xa50fe2
// 00a50fc8  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a50fcc  8bca                 mov ecx, edx
// 00a50fce  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 00a50fd1  8908                 mov dword ptr [eax], ecx
// 00a50fd3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a50fd7  897804               mov dword ptr [eax + 4], edi
// 00a50fda  895008               mov dword ptr [eax + 8], edx
// 00a50fdd  89480c               mov dword ptr [eax + 0xc], ecx
// 00a50fe0  eb18                 jmp 0xa50ffa
// 00a50fe2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a50fe6  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00a50fe9  8910                 mov dword ptr [eax], edx
// 00a50feb  03ca                 add ecx, edx
// 00a50fed  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a50ff1  897804               mov dword ptr [eax + 4], edi
// 00a50ff4  894808               mov dword ptr [eax + 8], ecx
// 00a50ff7  89500c               mov dword ptr [eax + 0xc], edx
// 00a50ffa  8bcb                 mov ecx, ebx
// 00a50ffc  e81facffff           call 0xa4bc20
// 00a51001  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a51005  01442440             add dword ptr [esp + 0x40], eax
// 00a51009  45                   inc ebp
// 00a5100a  03f8                 add edi, eax
// 00a5100c  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00a5100f  7c91                 jl 0xa50fa2
// 00a51011  5f                   pop edi
// 00a51012  5e                   pop esi
// 00a51013  5d                   pop ebp
// 00a51014  5b                   pop ebx
// 00a51015  83c428               add esp, 0x28
// 00a51018  c21800               ret 0x18
// 00a5101b  33ed                 xor ebp, ebp
// 00a5101d  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00a51020  7e40                 jle 0xa51062
// 00a51022  85ed                 test ebp, ebp
// 00a51024  7c0d                 jl 0xa51033
// 00a51026  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00a51029  7d08                 jge 0xa51033
// 00a5102b  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a5102e  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 00a51031  eb02                 jmp 0xa51035
// 00a51033  33db                 xor ebx, ebx
// 00a51035  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a51039  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00a5103c  83ec10               sub esp, 0x10
// 00a5103f  8bc4                 mov eax, esp
// 00a51041  8910                 mov dword ptr [eax], edx
// 00a51043  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a51047  03cf                 add ecx, edi
// 00a51049  897804               mov dword ptr [eax + 4], edi
// 00a5104c  895008               mov dword ptr [eax + 8], edx
// 00a5104f  89480c               mov dword ptr [eax + 0xc], ecx
// 00a51052  8bcb                 mov ecx, ebx
// 00a51054  e8c7abffff           call 0xa4bc20
// 00a51059  037b20               add edi, dword ptr [ebx + 0x20]
// 00a5105c  45                   inc ebp
// 00a5105d  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00a51060  7cc0                 jl 0xa51022
// 00a51062  5f                   pop edi
// 00a51063  5e                   pop esi
// 00a51064  5d                   pop ebp
// 00a51065  5b                   pop ebx
// 00a51066  83c428               add esp, 0x28
// 00a51069  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlEx@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
