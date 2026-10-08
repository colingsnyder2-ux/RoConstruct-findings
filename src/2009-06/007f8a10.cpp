// roc 2009-06 007f8a10  unit: CXTPTabPaintManager  size: 1724 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f8a10
//
// 007f8a10  83ec28               sub esp, 0x28
// 007f8a13  53                   push ebx
// 007f8a14  55                   push ebp
// 007f8a15  56                   push esi
// 007f8a16  8b742438             mov esi, dword ptr [esp + 0x38]
// 007f8a1a  8b06                 mov eax, dword ptr [esi]
// 007f8a1c  8b5040               mov edx, dword ptr [eax + 0x40]
// 007f8a1f  8be9                 mov ebp, ecx
// 007f8a21  57                   push edi
// 007f8a22  8bce                 mov ecx, esi
// 007f8a24  896c2414             mov dword ptr [esp + 0x14], ebp
// 007f8a28  ffd2                 call edx
// 007f8a2a  85c0                 test eax, eax
// 007f8a2c  7437                 je 0x7f8a65
// 007f8a2e  8b06                 mov eax, dword ptr [esi]
// 007f8a30  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f8a33  bf02000000           mov edi, 2
// 007f8a38  8bce                 mov ecx, esi
// 007f8a3a  8d5fff               lea ebx, [edi - 1]
// 007f8a3d  8bef                 mov ebp, edi
// 007f8a3f  ffd2                 call edx
// 007f8a41  50                   push eax
// 007f8a42  83ec10               sub esp, 0x10
// 007f8a45  8bc4                 mov eax, esp
// 007f8a47  8938                 mov dword ptr [eax], edi
// 007f8a49  895804               mov dword ptr [eax + 4], ebx
// 007f8a4c  896808               mov dword ptr [eax + 8], ebp
// 007f8a4f  8bcf                 mov ecx, edi
// 007f8a51  89480c               mov dword ptr [eax + 0xc], ecx
// 007f8a54  8d442458             lea eax, [esp + 0x58]
// 007f8a58  50                   push eax
// 007f8a59  e882110000           call 0x7f9be0
// 007f8a5e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007f8a62  83c418               add esp, 0x18
// 007f8a65  8b16                 mov edx, dword ptr [esi]
// 007f8a67  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f8a6a  8bce                 mov ecx, esi
// 007f8a6c  ffd0                 call eax
// 007f8a6e  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 007f8a71  8b5554               mov edx, dword ptr [ebp + 0x54]
// 007f8a74  50                   push eax
// 007f8a75  83ec10               sub esp, 0x10
// 007f8a78  8bc4                 mov eax, esp
// 007f8a7a  8908                 mov dword ptr [eax], ecx
// 007f8a7c  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 007f8a7f  895004               mov dword ptr [eax + 4], edx
// 007f8a82  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 007f8a85  894808               mov dword ptr [eax + 8], ecx
// 007f8a88  89500c               mov dword ptr [eax + 0xc], edx
// 007f8a8b  8d442458             lea eax, [esp + 0x58]
// 007f8a8f  50                   push eax
// 007f8a90  e84b110000           call 0x7f9be0
// 007f8a95  83c418               add esp, 0x18
// 007f8a98  8bce                 mov ecx, esi
// 007f8a9a  e811adffff           call 0x7f37b0
// 007f8a9f  83f804               cmp eax, 4
// 007f8aa2  7537                 jne 0x7f8adb
// 007f8aa4  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007f8aa8  8b542448             mov edx, dword ptr [esp + 0x48]
// 007f8aac  83ec10               sub esp, 0x10
// 007f8aaf  8bc4                 mov eax, esp
// 007f8ab1  8908                 mov dword ptr [eax], ecx
// 007f8ab3  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f8ab7  895004               mov dword ptr [eax + 4], edx
// 007f8aba  8b542460             mov edx, dword ptr [esp + 0x60]
// 007f8abe  894808               mov dword ptr [eax + 8], ecx
// 007f8ac1  89500c               mov dword ptr [eax + 0xc], edx
// 007f8ac4  8b442450             mov eax, dword ptr [esp + 0x50]
// 007f8ac8  50                   push eax
// 007f8ac9  56                   push esi
// 007f8aca  8bcd                 mov ecx, ebp
// 007f8acc  e8fff5ffff           call 0x7f80d0
// 007f8ad1  5f                   pop edi
// 007f8ad2  5e                   pop esi
// 007f8ad3  5d                   pop ebp
// 007f8ad4  5b                   pop ebx
// 007f8ad5  83c428               add esp, 0x28
// 007f8ad8  c21800               ret 0x18
// 007f8adb  33db                 xor ebx, ebx
// 007f8add  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 007f8ae0  7e55                 jle 0x7f8b37
// 007f8ae2  85db                 test ebx, ebx
// 007f8ae4  7c0d                 jl 0x7f8af3
// 007f8ae6  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 007f8ae9  7d08                 jge 0x7f8af3
// 007f8aeb  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007f8aee  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 007f8af1  eb02                 jmp 0x7f8af5
// 007f8af3  33ff                 xor edi, edi
// 007f8af5  8bcf                 mov ecx, edi
// 007f8af7  e844d6eaff           call 0x6a6140
// 007f8afc  85c0                 test eax, eax
// 007f8afe  7415                 je 0x7f8b15
// 007f8b00  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 007f8b06  8b11                 mov edx, dword ptr [ecx]
// 007f8b08  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f8b0c  8b5218               mov edx, dword ptr [edx + 0x18]
// 007f8b0f  57                   push edi
// 007f8b10  50                   push eax
// 007f8b11  ffd2                 call edx
// 007f8b13  eb02                 jmp 0x7f8b17
// 007f8b15  33c0                 xor eax, eax
// 007f8b17  8bcf                 mov ecx, edi
// 007f8b19  894724               mov dword ptr [edi + 0x24], eax
// 007f8b1c  894720               mov dword ptr [edi + 0x20], eax
// 007f8b1f  e81cd6eaff           call 0x6a6140
// 007f8b24  85c0                 test eax, eax
// 007f8b26  7409                 je 0x7f8b31
// 007f8b28  8b85b4000000         mov eax, dword ptr [ebp + 0xb4]
// 007f8b2e  014720               add dword ptr [edi + 0x20], eax
// 007f8b31  43                   inc ebx
// 007f8b32  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 007f8b35  7cab                 jl 0x7f8ae2
// 007f8b37  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 007f8b3b  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 007f8b41  8b11                 mov edx, dword ptr [ecx]
// 007f8b43  8b5208               mov edx, dword ptr [edx + 8]
// 007f8b46  56                   push esi
// 007f8b47  83ec10               sub esp, 0x10
// 007f8b4a  8bc4                 mov eax, esp
// 007f8b4c  8938                 mov dword ptr [eax], edi
// 007f8b4e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 007f8b52  897804               mov dword ptr [eax + 4], edi
// 007f8b55  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 007f8b59  897808               mov dword ptr [eax + 8], edi
// 007f8b5c  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 007f8b60  89780c               mov dword ptr [eax + 0xc], edi
// 007f8b63  8d44243c             lea eax, [esp + 0x3c]
// 007f8b67  50                   push eax
// 007f8b68  ffd2                 call edx
// 007f8b6a  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 007f8b6e  8b08                 mov ecx, dword ptr [eax]
// 007f8b70  894e24               mov dword ptr [esi + 0x24], ecx
// 007f8b73  8b5004               mov edx, dword ptr [eax + 4]
// 007f8b76  895628               mov dword ptr [esi + 0x28], edx
// 007f8b79  8b4808               mov ecx, dword ptr [eax + 8]
// 007f8b7c  894e2c               mov dword ptr [esi + 0x2c], ecx
// 007f8b7f  8b500c               mov edx, dword ptr [eax + 0xc]
// 007f8b82  895630               mov dword ptr [esi + 0x30], edx
// 007f8b85  7537                 jne 0x7f8bbe
// 007f8b87  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007f8b8b  8b542448             mov edx, dword ptr [esp + 0x48]
// 007f8b8f  83ec10               sub esp, 0x10
// 007f8b92  8bc4                 mov eax, esp
// 007f8b94  8908                 mov dword ptr [eax], ecx
// 007f8b96  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f8b9a  895004               mov dword ptr [eax + 4], edx
// 007f8b9d  8b542460             mov edx, dword ptr [esp + 0x60]
// 007f8ba1  894808               mov dword ptr [eax + 8], ecx
// 007f8ba4  89500c               mov dword ptr [eax + 0xc], edx
// 007f8ba7  56                   push esi
// 007f8ba8  8d44243c             lea eax, [esp + 0x3c]
// 007f8bac  50                   push eax
// 007f8bad  8bcd                 mov ecx, ebp
// 007f8baf  e89cf1ffff           call 0x7f7d50
// 007f8bb4  5f                   pop edi
// 007f8bb5  5e                   pop esi
// 007f8bb6  5d                   pop ebp
// 007f8bb7  5b                   pop ebx
// 007f8bb8  83c428               add esp, 0x28
// 007f8bbb  c21800               ret 0x18
// 007f8bbe  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 007f8bc4  8b11                 mov edx, dword ptr [ecx]
// 007f8bc6  8b5210               mov edx, dword ptr [edx + 0x10]
// 007f8bc9  8d442418             lea eax, [esp + 0x18]
// 007f8bcd  50                   push eax
// 007f8bce  ffd2                 call edx
// 007f8bd0  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 007f8bd6  8b01                 mov eax, dword ptr [ecx]
// 007f8bd8  8b501c               mov edx, dword ptr [eax + 0x1c]
// 007f8bdb  56                   push esi
// 007f8bdc  ffd2                 call edx
// 007f8bde  8bd8                 mov ebx, eax
// 007f8be0  8b06                 mov eax, dword ptr [esi]
// 007f8be2  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f8be5  8bce                 mov ecx, esi
// 007f8be7  895c2414             mov dword ptr [esp + 0x14], ebx
// 007f8beb  ffd2                 call edx
// 007f8bed  83f802               cmp eax, 2
// 007f8bf0  7411                 je 0x7f8c03
// 007f8bf2  8b06                 mov eax, dword ptr [esi]
// 007f8bf4  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f8bf7  8bce                 mov ecx, esi
// 007f8bf9  ffd2                 call edx
// 007f8bfb  85c0                 test eax, eax
// 007f8bfd  0f8568020000         jne 0x7f8e6b
// 007f8c03  8b442448             mov eax, dword ptr [esp + 0x48]
// 007f8c07  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f8c0b  8b16                 mov edx, dword ptr [esi]
// 007f8c0d  8d3c01               lea edi, [ecx + eax]
// 007f8c10  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f8c13  8bce                 mov ecx, esi
// 007f8c15  897c243c             mov dword ptr [esp + 0x3c], edi
// 007f8c19  ffd0                 call eax
// 007f8c1b  83f802               cmp eax, 2
// 007f8c1e  750e                 jne 0x7f8c2e
// 007f8c20  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 007f8c24  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 007f8c28  2bfb                 sub edi, ebx
// 007f8c2a  897c243c             mov dword ptr [esp + 0x3c], edi
// 007f8c2e  03fb                 add edi, ebx
// 007f8c30  8bce                 mov ecx, esi
// 007f8c32  897c2410             mov dword ptr [esp + 0x10], edi
// 007f8c36  e875abffff           call 0x7f37b0
// 007f8c3b  83f801               cmp eax, 1
// 007f8c3e  7551                 jne 0x7f8c91
// 007f8c40  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007f8c44  2b442444             sub eax, dword ptr [esp + 0x44]
// 007f8c48  8b7e70               mov edi, dword ptr [esi + 0x70]
// 007f8c4b  2b442418             sub eax, dword ptr [esp + 0x18]
// 007f8c4f  2b442420             sub eax, dword ptr [esp + 0x20]
// 007f8c53  83ef01               sub edi, 1
// 007f8c56  89442440             mov dword ptr [esp + 0x40], eax
// 007f8c5a  782c                 js 0x7f8c88
// 007f8c5c  8d642400             lea esp, [esp]
// 007f8c60  85ff                 test edi, edi
// 007f8c62  7c0d                 jl 0x7f8c71
// 007f8c64  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 007f8c67  7d08                 jge 0x7f8c71
// 007f8c69  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007f8c6c  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 007f8c6f  eb02                 jmp 0x7f8c73
// 007f8c71  33c9                 xor ecx, ecx
// 007f8c73  8b11                 mov edx, dword ptr [ecx]
// 007f8c75  8b5204               mov edx, dword ptr [edx + 4]
// 007f8c78  8d442440             lea eax, [esp + 0x40]
// 007f8c7c  50                   push eax
// 007f8c7d  ffd2                 call edx
// 007f8c7f  83ef01               sub edi, 1
// 007f8c82  79dc                 jns 0x7f8c60
// 007f8c84  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f8c88  50                   push eax
// 007f8c89  56                   push esi
// 007f8c8a  8bcd                 mov ecx, ebp
// 007f8c8c  e8aff9ffff           call 0x7f8640
// 007f8c91  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007f8c95  8b542448             mov edx, dword ptr [esp + 0x48]
// 007f8c99  83ec10               sub esp, 0x10
// 007f8c9c  8bc4                 mov eax, esp
// 007f8c9e  8908                 mov dword ptr [eax], ecx
// 007f8ca0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f8ca4  895004               mov dword ptr [eax + 4], edx
// 007f8ca7  8b542460             mov edx, dword ptr [esp + 0x60]
// 007f8cab  894808               mov dword ptr [eax + 8], ecx
// 007f8cae  89500c               mov dword ptr [eax + 0xc], edx
// 007f8cb1  56                   push esi
// 007f8cb2  8d44243c             lea eax, [esp + 0x3c]
// 007f8cb6  50                   push eax
// 007f8cb7  8bcd                 mov ecx, ebp
// 007f8cb9  e892f0ffff           call 0x7f7d50
// 007f8cbe  837e1400             cmp dword ptr [esi + 0x14], 0
// 007f8cc2  8b08                 mov ecx, dword ptr [eax]
// 007f8cc4  894e24               mov dword ptr [esi + 0x24], ecx
// 007f8cc7  8b5004               mov edx, dword ptr [eax + 4]
// 007f8cca  895628               mov dword ptr [esi + 0x28], edx
// 007f8ccd  8b4808               mov ecx, dword ptr [eax + 8]
// 007f8cd0  894e2c               mov dword ptr [esi + 0x2c], ecx
// 007f8cd3  8b500c               mov edx, dword ptr [eax + 0xc]
// 007f8cd6  895630               mov dword ptr [esi + 0x30], edx
// 007f8cd9  7d71                 jge 0x7f8d4c
// 007f8cdb  8bce                 mov ecx, esi
// 007f8cdd  e87ebbffff           call 0x7f4860
// 007f8ce2  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007f8ce5  2b4e24               sub ecx, dword ptr [esi + 0x24]
// 007f8ce8  8b5614               mov edx, dword ptr [esi + 0x14]
// 007f8ceb  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 007f8cef  03d0                 add edx, eax
// 007f8cf1  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 007f8cf5  3bd1                 cmp edx, ecx
// 007f8cf7  7d53                 jge 0x7f8d4c
// 007f8cf9  8b542448             mov edx, dword ptr [esp + 0x48]
// 007f8cfd  2bc8                 sub ecx, eax
// 007f8cff  33c0                 xor eax, eax
// 007f8d01  85c9                 test ecx, ecx
// 007f8d03  0f9fc0               setg al
// 007f8d06  83ec10               sub esp, 0x10
// 007f8d09  48                   dec eax
// 007f8d0a  23c1                 and eax, ecx
// 007f8d0c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007f8d10  894614               mov dword ptr [esi + 0x14], eax
// 007f8d13  8bc4                 mov eax, esp
// 007f8d15  8908                 mov dword ptr [eax], ecx
// 007f8d17  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f8d1b  895004               mov dword ptr [eax + 4], edx
// 007f8d1e  8b542460             mov edx, dword ptr [esp + 0x60]
// 007f8d22  894808               mov dword ptr [eax + 8], ecx
// 007f8d25  89500c               mov dword ptr [eax + 0xc], edx
// 007f8d28  56                   push esi
// 007f8d29  8d44243c             lea eax, [esp + 0x3c]
// 007f8d2d  50                   push eax
// 007f8d2e  8bcd                 mov ecx, ebp
// 007f8d30  e81bf0ffff           call 0x7f7d50
// 007f8d35  8b08                 mov ecx, dword ptr [eax]
// 007f8d37  894e24               mov dword ptr [esi + 0x24], ecx
// 007f8d3a  8b5004               mov edx, dword ptr [eax + 4]
// 007f8d3d  895628               mov dword ptr [esi + 0x28], edx
// 007f8d40  8b4808               mov ecx, dword ptr [eax + 8]
// 007f8d43  894e2c               mov dword ptr [esi + 0x2c], ecx
// 007f8d46  8b500c               mov edx, dword ptr [eax + 0xc]
// 007f8d49  895630               mov dword ptr [esi + 0x30], edx
// 007f8d4c  8b7e24               mov edi, dword ptr [esi + 0x24]
// 007f8d4f  037e14               add edi, dword ptr [esi + 0x14]
// 007f8d52  8bce                 mov ecx, esi
// 007f8d54  037c2418             add edi, dword ptr [esp + 0x18]
// 007f8d58  e853aaffff           call 0x7f37b0
// 007f8d5d  83f805               cmp eax, 5
// 007f8d60  0f85b0000000         jne 0x7f8e16
// 007f8d66  8b06                 mov eax, dword ptr [esi]
// 007f8d68  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f8d6b  8bce                 mov ecx, esi
// 007f8d6d  ffd2                 call edx
// 007f8d6f  85c0                 test eax, eax
// 007f8d71  750d                 jne 0x7f8d80
// 007f8d73  8b4630               mov eax, dword ptr [esi + 0x30]
// 007f8d76  2b442424             sub eax, dword ptr [esp + 0x24]
// 007f8d7a  89442410             mov dword ptr [esp + 0x10], eax
// 007f8d7e  eb0b                 jmp 0x7f8d8b
// 007f8d80  8b4628               mov eax, dword ptr [esi + 0x28]
// 007f8d83  03442424             add eax, dword ptr [esp + 0x24]
// 007f8d87  8944243c             mov dword ptr [esp + 0x3c], eax
// 007f8d8b  33ed                 xor ebp, ebp
// 007f8d8d  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 007f8d90  0f8e2c030000         jle 0x7f90c2
// 007f8d96  8d041f               lea eax, [edi + ebx]
// 007f8d99  89442440             mov dword ptr [esp + 0x40], eax
// 007f8d9d  8d4900               lea ecx, [ecx]
// 007f8da0  85ed                 test ebp, ebp
// 007f8da2  7c0d                 jl 0x7f8db1
// 007f8da4  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007f8da7  7d08                 jge 0x7f8db1
// 007f8da9  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007f8dac  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 007f8daf  eb02                 jmp 0x7f8db3
// 007f8db1  33db                 xor ebx, ebx
// 007f8db3  8b16                 mov edx, dword ptr [esi]
// 007f8db5  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f8db8  8bce                 mov ecx, esi
// 007f8dba  ffd0                 call eax
// 007f8dbc  83ec10               sub esp, 0x10
// 007f8dbf  85c0                 test eax, eax
// 007f8dc1  8bc4                 mov eax, esp
// 007f8dc3  8938                 mov dword ptr [eax], edi
// 007f8dc5  7518                 jne 0x7f8ddf
// 007f8dc7  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f8dcb  8bca                 mov ecx, edx
// 007f8dcd  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 007f8dd0  894804               mov dword ptr [eax + 4], ecx
// 007f8dd3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007f8dd7  894808               mov dword ptr [eax + 8], ecx
// 007f8dda  89500c               mov dword ptr [eax + 0xc], edx
// 007f8ddd  eb16                 jmp 0x7f8df5
// 007f8ddf  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007f8de3  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007f8de6  895004               mov dword ptr [eax + 4], edx
// 007f8de9  03ca                 add ecx, edx
// 007f8deb  8b542450             mov edx, dword ptr [esp + 0x50]
// 007f8def  895008               mov dword ptr [eax + 8], edx
// 007f8df2  89480c               mov dword ptr [eax + 0xc], ecx
// 007f8df5  8bcb                 mov ecx, ebx
// 007f8df7  e854aeffff           call 0x7f3c50
// 007f8dfc  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f8e00  01442440             add dword ptr [esp + 0x40], eax
// 007f8e04  45                   inc ebp
// 007f8e05  03f8                 add edi, eax
// 007f8e07  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007f8e0a  7c94                 jl 0x7f8da0
// 007f8e0c  5f                   pop edi
// 007f8e0d  5e                   pop esi
// 007f8e0e  5d                   pop ebp
// 007f8e0f  5b                   pop ebx
// 007f8e10  83c428               add esp, 0x28
// 007f8e13  c21800               ret 0x18
// 007f8e16  33ed                 xor ebp, ebp
// 007f8e18  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 007f8e1b  0f8ea1020000         jle 0x7f90c2
// 007f8e21  85ed                 test ebp, ebp
// 007f8e23  7c0d                 jl 0x7f8e32
// 007f8e25  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007f8e28  7d08                 jge 0x7f8e32
// 007f8e2a  8b4658               mov eax, dword ptr [esi + 0x58]
// 007f8e2d  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 007f8e30  eb02                 jmp 0x7f8e34
// 007f8e32  33db                 xor ebx, ebx
// 007f8e34  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007f8e37  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007f8e3b  83ec10               sub esp, 0x10
// 007f8e3e  8bc4                 mov eax, esp
// 007f8e40  03cf                 add ecx, edi
// 007f8e42  8938                 mov dword ptr [eax], edi
// 007f8e44  895004               mov dword ptr [eax + 4], edx
// 007f8e47  894808               mov dword ptr [eax + 8], ecx
// 007f8e4a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f8e4e  89480c               mov dword ptr [eax + 0xc], ecx
// 007f8e51  8bcb                 mov ecx, ebx
// 007f8e53  e8f8adffff           call 0x7f3c50
// 007f8e58  037b20               add edi, dword ptr [ebx + 0x20]
// 007f8e5b  45                   inc ebp
// 007f8e5c  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007f8e5f  7cc0                 jl 0x7f8e21
// 007f8e61  5f                   pop edi
// 007f8e62  5e                   pop esi
// 007f8e63  5d                   pop ebp
// 007f8e64  5b                   pop ebx
// 007f8e65  83c428               add esp, 0x28
// 007f8e68  c21800               ret 0x18
// 007f8e6b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007f8e6f  8b442444             mov eax, dword ptr [esp + 0x44]
// 007f8e73  8d3c10               lea edi, [eax + edx]
// 007f8e76  8b16                 mov edx, dword ptr [esi]
// 007f8e78  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f8e7b  8bce                 mov ecx, esi
// 007f8e7d  897c243c             mov dword ptr [esp + 0x3c], edi
// 007f8e81  ffd0                 call eax
// 007f8e83  83f803               cmp eax, 3
// 007f8e86  750e                 jne 0x7f8e96
// 007f8e88  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 007f8e8c  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 007f8e90  2bfb                 sub edi, ebx
// 007f8e92  897c243c             mov dword ptr [esp + 0x3c], edi
// 007f8e96  03fb                 add edi, ebx
// 007f8e98  8bce                 mov ecx, esi
// 007f8e9a  897c2410             mov dword ptr [esp + 0x10], edi
// 007f8e9e  e80da9ffff           call 0x7f37b0
// 007f8ea3  83f801               cmp eax, 1
// 007f8ea6  754d                 jne 0x7f8ef5
// 007f8ea8  8b442450             mov eax, dword ptr [esp + 0x50]
// 007f8eac  2b442418             sub eax, dword ptr [esp + 0x18]
// 007f8eb0  8b7e70               mov edi, dword ptr [esi + 0x70]
// 007f8eb3  2b442420             sub eax, dword ptr [esp + 0x20]
// 007f8eb7  2b442448             sub eax, dword ptr [esp + 0x48]
// 007f8ebb  83ef01               sub edi, 1
// 007f8ebe  89442440             mov dword ptr [esp + 0x40], eax
// 007f8ec2  7828                 js 0x7f8eec
// 007f8ec4  85ff                 test edi, edi
// 007f8ec6  7c0d                 jl 0x7f8ed5
// 007f8ec8  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 007f8ecb  7d08                 jge 0x7f8ed5
// 007f8ecd  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007f8ed0  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 007f8ed3  eb02                 jmp 0x7f8ed7
// 007f8ed5  33c9                 xor ecx, ecx
// 007f8ed7  8b11                 mov edx, dword ptr [ecx]
// 007f8ed9  8b5204               mov edx, dword ptr [edx + 4]
// 007f8edc  8d442440             lea eax, [esp + 0x40]
// 007f8ee0  50                   push eax
// 007f8ee1  ffd2                 call edx
// 007f8ee3  83ef01               sub edi, 1
// 007f8ee6  79dc                 jns 0x7f8ec4
// 007f8ee8  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f8eec  50                   push eax
// 007f8eed  56                   push esi
// 007f8eee  8bcd                 mov ecx, ebp
// 007f8ef0  e84bf7ffff           call 0x7f8640
// 007f8ef5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007f8ef9  8b542448             mov edx, dword ptr [esp + 0x48]
// 007f8efd  83ec10               sub esp, 0x10
// 007f8f00  8bc4                 mov eax, esp
// 007f8f02  8908                 mov dword ptr [eax], ecx
// 007f8f04  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f8f08  895004               mov dword ptr [eax + 4], edx
// 007f8f0b  8b542460             mov edx, dword ptr [esp + 0x60]
// 007f8f0f  894808               mov dword ptr [eax + 8], ecx
// 007f8f12  89500c               mov dword ptr [eax + 0xc], edx
// 007f8f15  56                   push esi
// 007f8f16  8d44243c             lea eax, [esp + 0x3c]
// 007f8f1a  50                   push eax
// 007f8f1b  8bcd                 mov ecx, ebp
// 007f8f1d  e82eeeffff           call 0x7f7d50
// 007f8f22  837e1400             cmp dword ptr [esi + 0x14], 0
// 007f8f26  8b08                 mov ecx, dword ptr [eax]
// 007f8f28  894e24               mov dword ptr [esi + 0x24], ecx
// 007f8f2b  8b5004               mov edx, dword ptr [eax + 4]
// 007f8f2e  895628               mov dword ptr [esi + 0x28], edx
// 007f8f31  8b4808               mov ecx, dword ptr [eax + 8]
// 007f8f34  894e2c               mov dword ptr [esi + 0x2c], ecx
// 007f8f37  8b500c               mov edx, dword ptr [eax + 0xc]
// 007f8f3a  895630               mov dword ptr [esi + 0x30], edx
// 007f8f3d  7d71                 jge 0x7f8fb0
// 007f8f3f  8bce                 mov ecx, esi
// 007f8f41  e81ab9ffff           call 0x7f4860
// 007f8f46  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007f8f49  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 007f8f4c  8b5614               mov edx, dword ptr [esi + 0x14]
// 007f8f4f  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 007f8f53  03d0                 add edx, eax
// 007f8f55  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 007f8f59  3bd1                 cmp edx, ecx
// 007f8f5b  7d53                 jge 0x7f8fb0
// 007f8f5d  8b542448             mov edx, dword ptr [esp + 0x48]
// 007f8f61  2bc8                 sub ecx, eax
// 007f8f63  33c0                 xor eax, eax
// 007f8f65  85c9                 test ecx, ecx
// 007f8f67  0f9fc0               setg al
// 007f8f6a  83ec10               sub esp, 0x10
// 007f8f6d  48                   dec eax
// 007f8f6e  23c1                 and eax, ecx
// 007f8f70  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007f8f74  894614               mov dword ptr [esi + 0x14], eax
// 007f8f77  8bc4                 mov eax, esp
// 007f8f79  8908                 mov dword ptr [eax], ecx
// 007f8f7b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007f8f7f  895004               mov dword ptr [eax + 4], edx
// 007f8f82  8b542460             mov edx, dword ptr [esp + 0x60]
// 007f8f86  894808               mov dword ptr [eax + 8], ecx
// 007f8f89  89500c               mov dword ptr [eax + 0xc], edx
// 007f8f8c  56                   push esi
// 007f8f8d  8d44243c             lea eax, [esp + 0x3c]
// 007f8f91  50                   push eax
// 007f8f92  8bcd                 mov ecx, ebp
// 007f8f94  e8b7edffff           call 0x7f7d50
// 007f8f99  8b08                 mov ecx, dword ptr [eax]
// 007f8f9b  894e24               mov dword ptr [esi + 0x24], ecx
// 007f8f9e  8b5004               mov edx, dword ptr [eax + 4]
// 007f8fa1  895628               mov dword ptr [esi + 0x28], edx
// 007f8fa4  8b4808               mov ecx, dword ptr [eax + 8]
// 007f8fa7  894e2c               mov dword ptr [esi + 0x2c], ecx
// 007f8faa  8b500c               mov edx, dword ptr [eax + 0xc]
// 007f8fad  895630               mov dword ptr [esi + 0x30], edx
// 007f8fb0  8b7e28               mov edi, dword ptr [esi + 0x28]
// 007f8fb3  037e14               add edi, dword ptr [esi + 0x14]
// 007f8fb6  8bce                 mov ecx, esi
// 007f8fb8  037c2418             add edi, dword ptr [esp + 0x18]
// 007f8fbc  e8efa7ffff           call 0x7f37b0
// 007f8fc1  83f805               cmp eax, 5
// 007f8fc4  0f85b1000000         jne 0x7f907b
// 007f8fca  8b06                 mov eax, dword ptr [esi]
// 007f8fcc  8b5048               mov edx, dword ptr [eax + 0x48]
// 007f8fcf  8bce                 mov ecx, esi
// 007f8fd1  ffd2                 call edx
// 007f8fd3  83f801               cmp eax, 1
// 007f8fd6  750d                 jne 0x7f8fe5
// 007f8fd8  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007f8fdb  2b442424             sub eax, dword ptr [esp + 0x24]
// 007f8fdf  89442410             mov dword ptr [esp + 0x10], eax
// 007f8fe3  eb0b                 jmp 0x7f8ff0
// 007f8fe5  8b4624               mov eax, dword ptr [esi + 0x24]
// 007f8fe8  03442424             add eax, dword ptr [esp + 0x24]
// 007f8fec  8944243c             mov dword ptr [esp + 0x3c], eax
// 007f8ff0  33ed                 xor ebp, ebp
// 007f8ff2  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 007f8ff5  0f8ec7000000         jle 0x7f90c2
// 007f8ffb  8d041f               lea eax, [edi + ebx]
// 007f8ffe  89442440             mov dword ptr [esp + 0x40], eax
// 007f9002  85ed                 test ebp, ebp
// 007f9004  7c0d                 jl 0x7f9013
// 007f9006  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007f9009  7d08                 jge 0x7f9013
// 007f900b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007f900e  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 007f9011  eb02                 jmp 0x7f9015
// 007f9013  33db                 xor ebx, ebx
// 007f9015  8b16                 mov edx, dword ptr [esi]
// 007f9017  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f901a  8bce                 mov ecx, esi
// 007f901c  ffd0                 call eax
// 007f901e  83ec10               sub esp, 0x10
// 007f9021  83f801               cmp eax, 1
// 007f9024  8bc4                 mov eax, esp
// 007f9026  751a                 jne 0x7f9042
// 007f9028  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f902c  8bca                 mov ecx, edx
// 007f902e  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 007f9031  8908                 mov dword ptr [eax], ecx
// 007f9033  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007f9037  897804               mov dword ptr [eax + 4], edi
// 007f903a  895008               mov dword ptr [eax + 8], edx
// 007f903d  89480c               mov dword ptr [eax + 0xc], ecx
// 007f9040  eb18                 jmp 0x7f905a
// 007f9042  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007f9046  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007f9049  8910                 mov dword ptr [eax], edx
// 007f904b  03ca                 add ecx, edx
// 007f904d  8b542450             mov edx, dword ptr [esp + 0x50]
// 007f9051  897804               mov dword ptr [eax + 4], edi
// 007f9054  894808               mov dword ptr [eax + 8], ecx
// 007f9057  89500c               mov dword ptr [eax + 0xc], edx
// 007f905a  8bcb                 mov ecx, ebx
// 007f905c  e8efabffff           call 0x7f3c50
// 007f9061  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f9065  01442440             add dword ptr [esp + 0x40], eax
// 007f9069  45                   inc ebp
// 007f906a  03f8                 add edi, eax
// 007f906c  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007f906f  7c91                 jl 0x7f9002
// 007f9071  5f                   pop edi
// 007f9072  5e                   pop esi
// 007f9073  5d                   pop ebp
// 007f9074  5b                   pop ebx
// 007f9075  83c428               add esp, 0x28
// 007f9078  c21800               ret 0x18
// 007f907b  33ed                 xor ebp, ebp
// 007f907d  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 007f9080  7e40                 jle 0x7f90c2
// 007f9082  85ed                 test ebp, ebp
// 007f9084  7c0d                 jl 0x7f9093
// 007f9086  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007f9089  7d08                 jge 0x7f9093
// 007f908b  8b4658               mov eax, dword ptr [esi + 0x58]
// 007f908e  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 007f9091  eb02                 jmp 0x7f9095
// 007f9093  33db                 xor ebx, ebx
// 007f9095  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007f9099  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007f909c  83ec10               sub esp, 0x10
// 007f909f  8bc4                 mov eax, esp
// 007f90a1  8910                 mov dword ptr [eax], edx
// 007f90a3  8b542420             mov edx, dword ptr [esp + 0x20]
// 007f90a7  03cf                 add ecx, edi
// 007f90a9  897804               mov dword ptr [eax + 4], edi
// 007f90ac  895008               mov dword ptr [eax + 8], edx
// 007f90af  89480c               mov dword ptr [eax + 0xc], ecx
// 007f90b2  8bcb                 mov ecx, ebx
// 007f90b4  e897abffff           call 0x7f3c50
// 007f90b9  037b20               add edi, dword ptr [ebx + 0x20]
// 007f90bc  45                   inc ebp
// 007f90bd  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007f90c0  7cc0                 jl 0x7f9082
// 007f90c2  5f                   pop edi
// 007f90c3  5e                   pop esi
// 007f90c4  5d                   pop ebp
// 007f90c5  5b                   pop ebx
// 007f90c6  83c428               add esp, 0x28
// 007f90c9  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlEx@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
