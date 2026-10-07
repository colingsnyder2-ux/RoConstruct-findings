// roc 2012-06 00642a80  unit: G3D::Sphere  size: 758 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00642a80
//
// 00642a80  81ec28010000         sub esp, 0x128
// 00642a86  53                   push ebx
// 00642a87  55                   push ebp
// 00642a88  8bac2434010000       mov ebp, dword ptr [esp + 0x134]
// 00642a8f  56                   push esi
// 00642a90  57                   push edi
// 00642a91  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 00642a94  8b7704               mov esi, dword ptr [edi + 4]
// 00642a97  8b1f                 mov ebx, dword ptr [edi]
// 00642a99  897c2430             mov dword ptr [esp + 0x30], edi
// 00642a9d  85f6                 test esi, esi
// 00642a9f  7521                 jne 0x642ac2
// 00642aa1  8b470c               mov eax, dword ptr [edi + 0xc]
// 00642aa4  55                   push ebp
// 00642aa5  ffd0                 call eax
// 00642aa7  83c404               add esp, 4
// 00642aaa  84c0                 test al, al
// 00642aac  750d                 jne 0x642abb
// 00642aae  5f                   pop edi
// 00642aaf  5e                   pop esi
// 00642ab0  5d                   pop ebp
// 00642ab1  32c0                 xor al, al
// 00642ab3  5b                   pop ebx
// 00642ab4  81c428010000         add esp, 0x128
// 00642aba  c3                   ret 
// 00642abb  8b4f04               mov ecx, dword ptr [edi + 4]
// 00642abe  8b1f                 mov ebx, dword ptr [edi]
// 00642ac0  8bf1                 mov esi, ecx
// 00642ac2  0fb603               movzx eax, byte ptr [ebx]
// 00642ac5  4e                   dec esi
// 00642ac6  c1e008               shl eax, 8
// 00642ac9  43                   inc ebx
// 00642aca  89442414             mov dword ptr [esp + 0x14], eax
// 00642ace  85f6                 test esi, esi
// 00642ad0  7518                 jne 0x642aea
// 00642ad2  8b570c               mov edx, dword ptr [edi + 0xc]
// 00642ad5  55                   push ebp
// 00642ad6  ffd2                 call edx
// 00642ad8  83c404               add esp, 4
// 00642adb  84c0                 test al, al
// 00642add  74cf                 je 0x642aae
// 00642adf  8b4704               mov eax, dword ptr [edi + 4]
// 00642ae2  8b1f                 mov ebx, dword ptr [edi]
// 00642ae4  8bf0                 mov esi, eax
// 00642ae6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00642aea  0fb60b               movzx ecx, byte ptr [ebx]
// 00642aed  03c1                 add eax, ecx
// 00642aef  83e802               sub eax, 2
// 00642af2  4e                   dec esi
// 00642af3  43                   inc ebx
// 00642af4  83f810               cmp eax, 0x10
// 00642af7  89442414             mov dword ptr [esp + 0x14], eax
// 00642afb  0f8e4a020000         jle 0x642d4b
// 00642b01  85f6                 test esi, esi
// 00642b03  7518                 jne 0x642b1d
// 00642b05  8b570c               mov edx, dword ptr [edi + 0xc]
// 00642b08  55                   push ebp
// 00642b09  ffd2                 call edx
// 00642b0b  83c404               add esp, 4
// 00642b0e  84c0                 test al, al
// 00642b10  749c                 je 0x642aae
// 00642b12  8b4704               mov eax, dword ptr [edi + 4]
// 00642b15  8b1f                 mov ebx, dword ptr [edi]
// 00642b17  89442410             mov dword ptr [esp + 0x10], eax
// 00642b1b  8bf0                 mov esi, eax
// 00642b1d  0fb603               movzx eax, byte ptr [ebx]
// 00642b20  8b4d00               mov ecx, dword ptr [ebp]
// 00642b23  c7411450000000       mov dword ptr [ecx + 0x14], 0x50
// 00642b2a  8b5500               mov edx, dword ptr [ebp]
// 00642b2d  894218               mov dword ptr [edx + 0x18], eax
// 00642b30  89442434             mov dword ptr [esp + 0x34], eax
// 00642b34  8b4500               mov eax, dword ptr [ebp]
// 00642b37  8b4804               mov ecx, dword ptr [eax + 4]
// 00642b3a  6a01                 push 1
// 00642b3c  55                   push ebp
// 00642b3d  4e                   dec esi
// 00642b3e  43                   inc ebx
// 00642b3f  ffd1                 call ecx
// 00642b41  83c408               add esp, 8
// 00642b44  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00642b49  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00642b51  bf01000000           mov edi, 1
// 00642b56  85f6                 test esi, esi
// 00642b58  751c                 jne 0x642b76
// 00642b5a  8b742430             mov esi, dword ptr [esp + 0x30]
// 00642b5e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00642b61  55                   push ebp
// 00642b62  ffd2                 call edx
// 00642b64  83c404               add esp, 4
// 00642b67  84c0                 test al, al
// 00642b69  0f843fffffff         je 0x642aae
// 00642b6f  8b4604               mov eax, dword ptr [esi + 4]
// 00642b72  8b1e                 mov ebx, dword ptr [esi]
// 00642b74  8bf0                 mov esi, eax
// 00642b76  8a0b                 mov cl, byte ptr [ebx]
// 00642b78  0fb6d1               movzx edx, cl
// 00642b7b  01542418             add dword ptr [esp + 0x18], edx
// 00642b7f  884c3c1c             mov byte ptr [esp + edi + 0x1c], cl
// 00642b83  4e                   dec esi
// 00642b84  47                   inc edi
// 00642b85  43                   inc ebx
// 00642b86  83ff10               cmp edi, 0x10
// 00642b89  89742410             mov dword ptr [esp + 0x10], esi
// 00642b8d  7ec7                 jle 0x642b56
// 00642b8f  8b4500               mov eax, dword ptr [ebp]
// 00642b92  0fb64c241d           movzx ecx, byte ptr [esp + 0x1d]
// 00642b97  0fb654241e           movzx edx, byte ptr [esp + 0x1e]
// 00642b9c  83c018               add eax, 0x18
// 00642b9f  836c241411           sub dword ptr [esp + 0x14], 0x11
// 00642ba4  8908                 mov dword ptr [eax], ecx
// 00642ba6  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 00642bab  895004               mov dword ptr [eax + 4], edx
// 00642bae  0fb6542420           movzx edx, byte ptr [esp + 0x20]
// 00642bb3  894808               mov dword ptr [eax + 8], ecx
// 00642bb6  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 00642bbb  89500c               mov dword ptr [eax + 0xc], edx
// 00642bbe  0fb6542422           movzx edx, byte ptr [esp + 0x22]
// 00642bc3  894810               mov dword ptr [eax + 0x10], ecx
// 00642bc6  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00642bcb  895014               mov dword ptr [eax + 0x14], edx
// 00642bce  0fb6542424           movzx edx, byte ptr [esp + 0x24]
// 00642bd3  894818               mov dword ptr [eax + 0x18], ecx
// 00642bd6  89501c               mov dword ptr [eax + 0x1c], edx
// 00642bd9  8b4500               mov eax, dword ptr [ebp]
// 00642bdc  bf56000000           mov edi, 0x56
// 00642be1  897814               mov dword ptr [eax + 0x14], edi
// 00642be4  8b4d00               mov ecx, dword ptr [ebp]
// 00642be7  8b5104               mov edx, dword ptr [ecx + 4]
// 00642bea  6a02                 push 2
// 00642bec  55                   push ebp
// 00642bed  ffd2                 call edx
// 00642bef  8b4500               mov eax, dword ptr [ebp]
// 00642bf2  0fb64c242d           movzx ecx, byte ptr [esp + 0x2d]
// 00642bf7  0fb654242e           movzx edx, byte ptr [esp + 0x2e]
// 00642bfc  83c018               add eax, 0x18
// 00642bff  8908                 mov dword ptr [eax], ecx
// 00642c01  0fb64c242f           movzx ecx, byte ptr [esp + 0x2f]
// 00642c06  895004               mov dword ptr [eax + 4], edx
// 00642c09  0fb6542430           movzx edx, byte ptr [esp + 0x30]
// 00642c0e  894808               mov dword ptr [eax + 8], ecx
// 00642c11  0fb64c2431           movzx ecx, byte ptr [esp + 0x31]
// 00642c16  89500c               mov dword ptr [eax + 0xc], edx
// 00642c19  0fb6542432           movzx edx, byte ptr [esp + 0x32]
// 00642c1e  894810               mov dword ptr [eax + 0x10], ecx
// 00642c21  0fb64c2433           movzx ecx, byte ptr [esp + 0x33]
// 00642c26  895014               mov dword ptr [eax + 0x14], edx
// 00642c29  0fb6542434           movzx edx, byte ptr [esp + 0x34]
// 00642c2e  894818               mov dword ptr [eax + 0x18], ecx
// 00642c31  89501c               mov dword ptr [eax + 0x1c], edx
// 00642c34  8b4500               mov eax, dword ptr [ebp]
// 00642c37  897814               mov dword ptr [eax + 0x14], edi
// 00642c3a  8b4d00               mov ecx, dword ptr [ebp]
// 00642c3d  8b5104               mov edx, dword ptr [ecx + 4]
// 00642c40  6a02                 push 2
// 00642c42  55                   push ebp
// 00642c43  ffd2                 call edx
// 00642c45  8b442428             mov eax, dword ptr [esp + 0x28]
// 00642c49  83c410               add esp, 0x10
// 00642c4c  3d00010000           cmp eax, 0x100
// 00642c51  7f06                 jg 0x642c59
// 00642c53  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00642c57  7e15                 jle 0x642c6e
// 00642c59  8b4500               mov eax, dword ptr [ebp]
// 00642c5c  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00642c63  8b4d00               mov ecx, dword ptr [ebp]
// 00642c66  8b11                 mov edx, dword ptr [ecx]
// 00642c68  55                   push ebp
// 00642c69  ffd2                 call edx
// 00642c6b  83c404               add esp, 4
// 00642c6e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00642c72  33ff                 xor edi, edi
// 00642c74  85c0                 test eax, eax
// 00642c76  7e35                 jle 0x642cad
// 00642c78  85f6                 test esi, esi
// 00642c7a  7520                 jne 0x642c9c
// 00642c7c  8b742430             mov esi, dword ptr [esp + 0x30]
// 00642c80  8b460c               mov eax, dword ptr [esi + 0xc]
// 00642c83  55                   push ebp
// 00642c84  ffd0                 call eax
// 00642c86  83c404               add esp, 4
// 00642c89  84c0                 test al, al
// 00642c8b  0f841dfeffff         je 0x642aae
// 00642c91  8b4e04               mov ecx, dword ptr [esi + 4]
// 00642c94  8b1e                 mov ebx, dword ptr [esi]
// 00642c96  8b442418             mov eax, dword ptr [esp + 0x18]
// 00642c9a  8bf1                 mov esi, ecx
// 00642c9c  8a13                 mov dl, byte ptr [ebx]
// 00642c9e  88543c38             mov byte ptr [esp + edi + 0x38], dl
// 00642ca2  4e                   dec esi
// 00642ca3  47                   inc edi
// 00642ca4  43                   inc ebx
// 00642ca5  3bf8                 cmp edi, eax
// 00642ca7  89742410             mov dword ptr [esp + 0x10], esi
// 00642cab  7ccb                 jl 0x642c78
// 00642cad  29442414             sub dword ptr [esp + 0x14], eax
// 00642cb1  8b442434             mov eax, dword ptr [esp + 0x34]
// 00642cb5  a810                 test al, 0x10
// 00642cb7  740c                 je 0x642cc5
// 00642cb9  83e810               sub eax, 0x10
// 00642cbc  8db485b0000000       lea esi, [ebp + eax*4 + 0xb0]
// 00642cc3  eb07                 jmp 0x642ccc
// 00642cc5  8db485a0000000       lea esi, [ebp + eax*4 + 0xa0]
// 00642ccc  85c0                 test eax, eax
// 00642cce  7c05                 jl 0x642cd5
// 00642cd0  83f804               cmp eax, 4
// 00642cd3  7c1b                 jl 0x642cf0
// 00642cd5  8b4d00               mov ecx, dword ptr [ebp]
// 00642cd8  c741141e000000       mov dword ptr [ecx + 0x14], 0x1e
// 00642cdf  8b5500               mov edx, dword ptr [ebp]
// 00642ce2  894218               mov dword ptr [edx + 0x18], eax
// 00642ce5  8b4500               mov eax, dword ptr [ebp]
// 00642ce8  8b08                 mov ecx, dword ptr [eax]
// 00642cea  55                   push ebp
// 00642ceb  ffd1                 call ecx
// 00642ced  83c404               add esp, 4
// 00642cf0  833e00               cmp dword ptr [esi], 0
// 00642cf3  750b                 jne 0x642d00
// 00642cf5  55                   push ebp
// 00642cf6  e895070100           call 0x653490
// 00642cfb  83c404               add esp, 4
// 00642cfe  8906                 mov dword ptr [esi], eax
// 00642d00  8b06                 mov eax, dword ptr [esi]
// 00642d02  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00642d06  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00642d0a  8910                 mov dword ptr [eax], edx
// 00642d0c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00642d10  894804               mov dword ptr [eax + 4], ecx
// 00642d13  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00642d17  895008               mov dword ptr [eax + 8], edx
// 00642d1a  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 00642d1e  89480c               mov dword ptr [eax + 0xc], ecx
// 00642d21  885010               mov byte ptr [eax + 0x10], dl
// 00642d24  8b3e                 mov edi, dword ptr [esi]
// 00642d26  83c711               add edi, 0x11
// 00642d29  837c241410           cmp dword ptr [esp + 0x14], 0x10
// 00642d2e  b940000000           mov ecx, 0x40
// 00642d33  8d742438             lea esi, [esp + 0x38]
// 00642d37  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00642d39  8b742410             mov esi, dword ptr [esp + 0x10]
// 00642d3d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00642d41  0f8fbafdffff         jg 0x642b01
// 00642d47  8b442414             mov eax, dword ptr [esp + 0x14]
// 00642d4b  85c0                 test eax, eax
// 00642d4d  7415                 je 0x642d64
// 00642d4f  8b4500               mov eax, dword ptr [ebp]
// 00642d52  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00642d59  8b4d00               mov ecx, dword ptr [ebp]
// 00642d5c  8b11                 mov edx, dword ptr [ecx]
// 00642d5e  55                   push ebp
// 00642d5f  ffd2                 call edx
// 00642d61  83c404               add esp, 4
// 00642d64  891f                 mov dword ptr [edi], ebx
// 00642d66  897704               mov dword ptr [edi + 4], esi
// 00642d69  5f                   pop edi
// 00642d6a  5e                   pop esi
// 00642d6b  5d                   pop ebp
// 00642d6c  b001                 mov al, 1
// 00642d6e  5b                   pop ebx
// 00642d6f  81c428010000         add esp, 0x128
// 00642d75  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
