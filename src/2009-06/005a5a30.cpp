// from server: 100% by auto
// roc 2009-06 005a5a30  unit: seg_005a0000  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a5a30
//
// 005a5a30  837e2000             cmp dword ptr [esi + 0x20], 0
// 005a5a34  7612                 jbe 0x5a5a48
// 005a5a36  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 005a5a3a  760c                 jbe 0x5a5a48
// 005a5a3c  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 005a5a40  7e06                 jle 0x5a5a48
// 005a5a42  837e2400             cmp dword ptr [esi + 0x24], 0
// 005a5a46  7f13                 jg 0x5a5a5b
// 005a5a48  8b06                 mov eax, dword ptr [esi]
// 005a5a4a  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 005a5a51  8b0e                 mov ecx, dword ptr [esi]
// 005a5a53  8b11                 mov edx, dword ptr [ecx]
// 005a5a55  56                   push esi
// 005a5a56  ffd2                 call edx
// 005a5a58  83c404               add esp, 4
// 005a5a5b  b8dcff0000           mov eax, 0xffdc
// 005a5a60  394620               cmp dword ptr [esi + 0x20], eax
// 005a5a63  7f05                 jg 0x5a5a6a
// 005a5a65  39461c               cmp dword ptr [esi + 0x1c], eax
// 005a5a68  7e18                 jle 0x5a5a82
// 005a5a6a  8b0e                 mov ecx, dword ptr [esi]
// 005a5a6c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 005a5a73  8b16                 mov edx, dword ptr [esi]
// 005a5a75  894218               mov dword ptr [edx + 0x18], eax
// 005a5a78  8b06                 mov eax, dword ptr [esi]
// 005a5a7a  8b08                 mov ecx, dword ptr [eax]
// 005a5a7c  56                   push esi
// 005a5a7d  ffd1                 call ecx
// 005a5a7f  83c404               add esp, 4
// 005a5a82  837e3808             cmp dword ptr [esi + 0x38], 8
// 005a5a86  741b                 je 0x5a5aa3
// 005a5a88  8b16                 mov edx, dword ptr [esi]
// 005a5a8a  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 005a5a91  8b06                 mov eax, dword ptr [esi]
// 005a5a93  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005a5a96  894818               mov dword ptr [eax + 0x18], ecx
// 005a5a99  8b16                 mov edx, dword ptr [esi]
// 005a5a9b  8b02                 mov eax, dword ptr [edx]
// 005a5a9d  56                   push esi
// 005a5a9e  ffd0                 call eax
// 005a5aa0  83c404               add esp, 4
// 005a5aa3  b80a000000           mov eax, 0xa
// 005a5aa8  39463c               cmp dword ptr [esi + 0x3c], eax
// 005a5aab  7e20                 jle 0x5a5acd
// 005a5aad  8b0e                 mov ecx, dword ptr [esi]
// 005a5aaf  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 005a5ab6  8b16                 mov edx, dword ptr [esi]
// 005a5ab8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005a5abb  894a18               mov dword ptr [edx + 0x18], ecx
// 005a5abe  8b16                 mov edx, dword ptr [esi]
// 005a5ac0  89421c               mov dword ptr [edx + 0x1c], eax
// 005a5ac3  8b06                 mov eax, dword ptr [esi]
// 005a5ac5  8b08                 mov ecx, dword ptr [eax]
// 005a5ac7  56                   push esi
// 005a5ac8  ffd1                 call ecx
// 005a5aca  83c404               add esp, 4
// 005a5acd  8b4644               mov eax, dword ptr [esi + 0x44]
// 005a5ad0  53                   push ebx
// 005a5ad1  55                   push ebp
// 005a5ad2  bb01000000           mov ebx, 1
// 005a5ad7  33ed                 xor ebp, ebp
// 005a5ad9  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 005a5adc  57                   push edi
// 005a5add  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 005a5ae3  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 005a5ae9  7e62                 jle 0x5a5b4d
// 005a5aeb  8d780c               lea edi, [eax + 0xc]
// 005a5aee  8bff                 mov edi, edi
// 005a5af0  8b47fc               mov eax, dword ptr [edi - 4]
// 005a5af3  85c0                 test eax, eax
// 005a5af5  7e10                 jle 0x5a5b07
// 005a5af7  83f804               cmp eax, 4
// 005a5afa  7f0b                 jg 0x5a5b07
// 005a5afc  8b07                 mov eax, dword ptr [edi]
// 005a5afe  85c0                 test eax, eax
// 005a5b00  7e05                 jle 0x5a5b07
// 005a5b02  83f804               cmp eax, 4
// 005a5b05  7e13                 jle 0x5a5b1a
// 005a5b07  8b16                 mov edx, dword ptr [esi]
// 005a5b09  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 005a5b10  8b06                 mov eax, dword ptr [esi]
// 005a5b12  8b08                 mov ecx, dword ptr [eax]
// 005a5b14  56                   push esi
// 005a5b15  ffd1                 call ecx
// 005a5b17  83c404               add esp, 4
// 005a5b1a  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 005a5b20  8b4ffc               mov ecx, dword ptr [edi - 4]
// 005a5b23  3bc1                 cmp eax, ecx
// 005a5b25  7f02                 jg 0x5a5b29
// 005a5b27  8bc1                 mov eax, ecx
// 005a5b29  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 005a5b2f  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005a5b35  8b0f                 mov ecx, dword ptr [edi]
// 005a5b37  3bc1                 cmp eax, ecx
// 005a5b39  7f02                 jg 0x5a5b3d
// 005a5b3b  8bc1                 mov eax, ecx
// 005a5b3d  03eb                 add ebp, ebx
// 005a5b3f  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 005a5b45  83c754               add edi, 0x54
// 005a5b48  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 005a5b4b  7ca3                 jl 0x5a5af0
// 005a5b4d  8b4644               mov eax, dword ptr [esi + 0x44]
// 005a5b50  33ed                 xor ebp, ebp
// 005a5b52  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 005a5b55  0f8e8a000000         jle 0x5a5be5
// 005a5b5b  8d7824               lea edi, [eax + 0x24]
// 005a5b5e  8bff                 mov edi, edi
// 005a5b60  8b47e4               mov eax, dword ptr [edi - 0x1c]
// 005a5b63  896fe0               mov dword ptr [edi - 0x20], ebp
// 005a5b66  c70708000000         mov dword ptr [edi], 8
// 005a5b6c  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 005a5b70  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 005a5b76  03d2                 add edx, edx
// 005a5b78  03d2                 add edx, edx
// 005a5b7a  03d2                 add edx, edx
// 005a5b7c  52                   push edx
// 005a5b7d  50                   push eax
// 005a5b7e  e88d42feff           call 0x589e10
// 005a5b83  8b57e8               mov edx, dword ptr [edi - 0x18]
// 005a5b86  8947f8               mov dword ptr [edi - 8], eax
// 005a5b89  0faf5620             imul edx, dword ptr [esi + 0x20]
// 005a5b8d  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 005a5b93  03c9                 add ecx, ecx
// 005a5b95  03c9                 add ecx, ecx
// 005a5b97  03c9                 add ecx, ecx
// 005a5b99  51                   push ecx
// 005a5b9a  52                   push edx
// 005a5b9b  e87042feff           call 0x589e10
// 005a5ba0  8b4fe4               mov ecx, dword ptr [edi - 0x1c]
// 005a5ba3  8947fc               mov dword ptr [edi - 4], eax
// 005a5ba6  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 005a5baa  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 005a5bb0  50                   push eax
// 005a5bb1  51                   push ecx
// 005a5bb2  e85942feff           call 0x589e10
// 005a5bb7  894704               mov dword ptr [edi + 4], eax
// 005a5bba  8b47e8               mov eax, dword ptr [edi - 0x18]
// 005a5bbd  0faf4620             imul eax, dword ptr [esi + 0x20]
// 005a5bc1  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 005a5bc7  52                   push edx
// 005a5bc8  50                   push eax
// 005a5bc9  e84242feff           call 0x589e10
// 005a5bce  894708               mov dword ptr [edi + 8], eax
// 005a5bd1  885f0c               mov byte ptr [edi + 0xc], bl
// 005a5bd4  03eb                 add ebp, ebx
// 005a5bd6  83c420               add esp, 0x20
// 005a5bd9  83c754               add edi, 0x54
// 005a5bdc  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 005a5bdf  0f8c7bffffff         jl 0x5a5b60
// 005a5be5  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 005a5beb  8b5620               mov edx, dword ptr [esi + 0x20]
// 005a5bee  03c9                 add ecx, ecx
// 005a5bf0  03c9                 add ecx, ecx
// 005a5bf2  03c9                 add ecx, ecx
// 005a5bf4  51                   push ecx
// 005a5bf5  52                   push edx
// 005a5bf6  e81542feff           call 0x589e10
// 005a5bfb  83c408               add esp, 8
// 005a5bfe  5f                   pop edi
// 005a5bff  5d                   pop ebp
// 005a5c00  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 005a5c06  5b                   pop ebx
// 005a5c07  c3                   ret 
// library jpeg-6b/jcmaster.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
