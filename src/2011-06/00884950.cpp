// roc 2011-06 00884950  unit: CXTPControlGallery  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00884950
//
// 00884950  6aff                 push -1
// 00884952  68988ca000           push 0xa08c98
// 00884957  64a100000000         mov eax, dword ptr fs:[0]
// 0088495d  50                   push eax
// 0088495e  83ec54               sub esp, 0x54
// 00884961  53                   push ebx
// 00884962  55                   push ebp
// 00884963  56                   push esi
// 00884964  57                   push edi
// 00884965  a12058c900           mov eax, dword ptr [0xc95820]
// 0088496a  33c4                 xor eax, esp
// 0088496c  50                   push eax
// 0088496d  8d442468             lea eax, [esp + 0x68]
// 00884971  64a300000000         mov dword ptr fs:[0], eax
// 00884977  8bf1                 mov esi, ecx
// 00884979  e872ccffff           call 0x8815f0
// 0088497e  33db                 xor ebx, ebx
// 00884980  89442420             mov dword ptr [esp + 0x20], eax
// 00884984  3bc3                 cmp eax, ebx
// 00884986  0f8495020000         je 0x884c21
// 0088498c  8d442448             lea eax, [esp + 0x48]
// 00884990  50                   push eax
// 00884991  e84addffff           call 0x8826e0
// 00884996  895c2434             mov dword ptr [esp + 0x34], ebx
// 0088499a  c7442430402aac00     mov dword ptr [esp + 0x30], 0xac2a40
// 008849a2  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 008849a6  8b5708               mov edx, dword ptr [edi + 8]
// 008849a9  8d4c2428             lea ecx, [esp + 0x28]
// 008849ad  51                   push ecx
// 008849ae  52                   push edx
// 008849af  895c2478             mov dword ptr [esp + 0x78], ebx
// 008849b3  ff15b800a400         call dword ptr [0xa400b8]
// 008849b9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008849bd  8b442448             mov eax, dword ptr [esp + 0x48]
// 008849c1  8b542450             mov edx, dword ptr [esp + 0x50]
// 008849c5  89442458             mov dword ptr [esp + 0x58], eax
// 008849c9  8b442454             mov eax, dword ptr [esp + 0x54]
// 008849cd  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008849d1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008849d5  89542460             mov dword ptr [esp + 0x60], edx
// 008849d9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008849dd  51                   push ecx
// 008849de  89442468             mov dword ptr [esp + 0x68], eax
// 008849e2  52                   push edx
// 008849e3  8d442460             lea eax, [esp + 0x60]
// 008849e7  50                   push eax
// 008849e8  ff15601ca400         call dword ptr [0xa41c60]
// 008849ee  8d4c2458             lea ecx, [esp + 0x58]
// 008849f2  51                   push ecx
// 008849f3  ff154c01a400         call dword ptr [0xa4014c]
// 008849f9  50                   push eax
// 008849fa  8d4c2434             lea ecx, [esp + 0x34]
// 008849fe  e8255cf8ff           call 0x80a628
// 00884a03  8d542430             lea edx, [esp + 0x30]
// 00884a07  52                   push edx
// 00884a08  8bcf                 mov ecx, edi
// 00884a0a  e8257e1400           call 0x9cc834
// 00884a0f  399efc010000         cmp dword ptr [esi + 0x1fc], ebx
// 00884a15  740a                 je 0x884a21
// 00884a17  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00884a1f  eb0a                 jmp 0x884a2b
// 00884a21  8b86f8010000         mov eax, dword ptr [esi + 0x1f8]
// 00884a27  89442414             mov dword ptr [esp + 0x14], eax
// 00884a2b  399e54020000         cmp dword ptr [esi + 0x254], ebx
// 00884a31  895c2418             mov dword ptr [esp + 0x18], ebx
// 00884a35  0f8ec2010000         jle 0x884bfd
// 00884a3b  33ed                 xor ebp, ebp
// 00884a3d  896c2424             mov dword ptr [esp + 0x24], ebp
// 00884a41  85ed                 test ebp, ebp
// 00884a43  0f8cee010000         jl 0x884c37
// 00884a49  3b9e54020000         cmp ebx, dword ptr [esi + 0x254]
// 00884a4f  0f8de2010000         jge 0x884c37
// 00884a55  8bbe50020000         mov edi, dword ptr [esi + 0x250]
// 00884a5b  03fd                 add edi, ebp
// 00884a5d  57                   push edi
// 00884a5e  8d4c243c             lea ecx, [esp + 0x3c]
// 00884a62  51                   push ecx
// 00884a63  ff15681ca400         call dword ptr [0xa41c68]
// 00884a69  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 00884a6f  f7d8                 neg eax
// 00884a71  50                   push eax
// 00884a72  6a00                 push 0
// 00884a74  8d542440             lea edx, [esp + 0x40]
// 00884a78  52                   push edx
// 00884a79  ff15601ca400         call dword ptr [0xa41c60]
// 00884a7f  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00884a83  39442444             cmp dword ptr [esp + 0x44], eax
// 00884a87  0f8c58010000         jl 0x884be5
// 00884a8d  8d4c2438             lea ecx, [esp + 0x38]
// 00884a91  51                   push ecx
// 00884a92  ff15641ca400         call dword ptr [0xa41c64]
// 00884a98  85c0                 test eax, eax
// 00884a9a  0f8537010000         jne 0x884bd7
// 00884aa0  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00884aa4  7510                 jne 0x884ab6
// 00884aa6  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00884aae  398600020000         cmp dword ptr [esi + 0x200], eax
// 00884ab4  7508                 jne 0x884abe
// 00884ab6  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00884abe  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00884ac4  8b5710               mov edx, dword ptr [edi + 0x10]
// 00884ac7  8b6a20               mov ebp, dword ptr [edx + 0x20]
// 00884aca  83f8ff               cmp eax, -1
// 00884acd  750f                 jne 0x884ade
// 00884acf  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00884ad5  85c9                 test ecx, ecx
// 00884ad7  7405                 je 0x884ade
// 00884ad9  e88281f8ff           call 0x80cc60
// 00884ade  33c9                 xor ecx, ecx
// 00884ae0  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00884ae4  8b542420             mov edx, dword ptr [esp + 0x20]
// 00884ae8  0f94c1               sete cl
// 00884aeb  8b12                 mov edx, dword ptr [edx]
// 00884aed  8b5258               mov edx, dword ptr [edx + 0x58]
// 00884af0  8bd9                 mov ebx, ecx
// 00884af2  33c9                 xor ecx, ecx
// 00884af4  39aef4010000         cmp dword ptr [esi + 0x1f4], ebp
// 00884afa  0f94c1               sete cl
// 00884afd  51                   push ecx
// 00884afe  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00884b02  51                   push ecx
// 00884b03  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00884b07  53                   push ebx
// 00884b08  50                   push eax
// 00884b09  83ec10               sub esp, 0x10
// 00884b0c  8bc4                 mov eax, esp
// 00884b0e  8908                 mov dword ptr [eax], ecx
// 00884b10  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00884b14  894804               mov dword ptr [eax + 4], ecx
// 00884b17  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00884b1b  894808               mov dword ptr [eax + 8], ecx
// 00884b1e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00884b22  89480c               mov dword ptr [eax + 0xc], ecx
// 00884b25  8b4710               mov eax, dword ptr [edi + 0x10]
// 00884b28  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00884b2f  50                   push eax
// 00884b30  56                   push esi
// 00884b31  51                   push ecx
// 00884b32  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00884b36  ffd2                 call edx
// 00884b38  85c0                 test eax, eax
// 00884b3a  0f8593000000         jne 0x884bd3
// 00884b40  8b442418             mov eax, dword ptr [esp + 0x18]
// 00884b44  39442414             cmp dword ptr [esp + 0x14], eax
// 00884b48  7511                 jne 0x884b5b
// 00884b4a  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 00884b51  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00884b59  7508                 jne 0x884b63
// 00884b5b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00884b63  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00884b66  8bae9c000000         mov ebp, dword ptr [esi + 0x9c]
// 00884b6c  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00884b6f  89542428             mov dword ptr [esp + 0x28], edx
// 00884b73  83fdff               cmp ebp, -1
// 00884b76  7511                 jne 0x884b89
// 00884b78  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00884b7e  85c9                 test ecx, ecx
// 00884b80  7407                 je 0x884b89
// 00884b82  e8d980f8ff           call 0x80cc60
// 00884b87  8be8                 mov ebp, eax
// 00884b89  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00884b8c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00884b90  33c0                 xor eax, eax
// 00884b92  39bef4010000         cmp dword ptr [esi + 0x1f4], edi
// 00884b98  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00884b9c  0f94c0               sete al
// 00884b9f  8b11                 mov edx, dword ptr [ecx]
// 00884ba1  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00884ba4  50                   push eax
// 00884ba5  8b442420             mov eax, dword ptr [esp + 0x20]
// 00884ba9  50                   push eax
// 00884baa  53                   push ebx
// 00884bab  55                   push ebp
// 00884bac  83ec10               sub esp, 0x10
// 00884baf  8bc4                 mov eax, esp
// 00884bb1  8938                 mov dword ptr [eax], edi
// 00884bb3  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00884bb7  897804               mov dword ptr [eax + 4], edi
// 00884bba  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00884bbe  897808               mov dword ptr [eax + 8], edi
// 00884bc1  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 00884bc5  89780c               mov dword ptr [eax + 0xc], edi
// 00884bc8  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00884bcf  56                   push esi
// 00884bd0  50                   push eax
// 00884bd1  ffd2                 call edx
// 00884bd3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00884bd7  8b442454             mov eax, dword ptr [esp + 0x54]
// 00884bdb  3944243c             cmp dword ptr [esp + 0x3c], eax
// 00884bdf  7f1c                 jg 0x884bfd
// 00884be1  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00884be5  43                   inc ebx
// 00884be6  83c518               add ebp, 0x18
// 00884be9  3b9e54020000         cmp ebx, dword ptr [esi + 0x254]
// 00884bef  895c2418             mov dword ptr [esp + 0x18], ebx
// 00884bf3  896c2424             mov dword ptr [esp + 0x24], ebp
// 00884bf7  0f8c44feffff         jl 0x884a41
// 00884bfd  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00884c01  6a00                 push 0
// 00884c03  e82c7c1400           call 0x9cc834
// 00884c08  8d4c2430             lea ecx, [esp + 0x30]
// 00884c0c  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 00884c14  c7442430402aac00     mov dword ptr [esp + 0x30], 0xac2a40
// 00884c1c  e80fedb8ff           call 0x413930
// 00884c21  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00884c25  64890d00000000       mov dword ptr fs:[0], ecx
// 00884c2c  59                   pop ecx
// 00884c2d  5f                   pop edi
// 00884c2e  5e                   pop esi
// 00884c2f  5d                   pop ebp
// 00884c30  5b                   pop ebx
// 00884c31  83c460               add esp, 0x60
// 00884c34  c20400               ret 4
// 00884c37  e8ce56f8ff           call 0x80a30a
// copied from an identical function in another client (function ?DrawItems@CXTPControlGallery@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp