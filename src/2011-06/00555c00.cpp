// from server: 100% by auto
// roc 2011-06 00555c00  unit: G3D::LineSegment  size: 758 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00555c00
//
// 00555c00  81ec28010000         sub esp, 0x128
// 00555c06  53                   push ebx
// 00555c07  55                   push ebp
// 00555c08  8bac2434010000       mov ebp, dword ptr [esp + 0x134]
// 00555c0f  56                   push esi
// 00555c10  57                   push edi
// 00555c11  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 00555c14  8b7704               mov esi, dword ptr [edi + 4]
// 00555c17  8b1f                 mov ebx, dword ptr [edi]
// 00555c19  897c2430             mov dword ptr [esp + 0x30], edi
// 00555c1d  85f6                 test esi, esi
// 00555c1f  7521                 jne 0x555c42
// 00555c21  8b470c               mov eax, dword ptr [edi + 0xc]
// 00555c24  55                   push ebp
// 00555c25  ffd0                 call eax
// 00555c27  83c404               add esp, 4
// 00555c2a  84c0                 test al, al
// 00555c2c  750d                 jne 0x555c3b
// 00555c2e  5f                   pop edi
// 00555c2f  5e                   pop esi
// 00555c30  5d                   pop ebp
// 00555c31  32c0                 xor al, al
// 00555c33  5b                   pop ebx
// 00555c34  81c428010000         add esp, 0x128
// 00555c3a  c3                   ret 
// 00555c3b  8b4f04               mov ecx, dword ptr [edi + 4]
// 00555c3e  8b1f                 mov ebx, dword ptr [edi]
// 00555c40  8bf1                 mov esi, ecx
// 00555c42  0fb603               movzx eax, byte ptr [ebx]
// 00555c45  4e                   dec esi
// 00555c46  c1e008               shl eax, 8
// 00555c49  43                   inc ebx
// 00555c4a  89442414             mov dword ptr [esp + 0x14], eax
// 00555c4e  85f6                 test esi, esi
// 00555c50  7518                 jne 0x555c6a
// 00555c52  8b570c               mov edx, dword ptr [edi + 0xc]
// 00555c55  55                   push ebp
// 00555c56  ffd2                 call edx
// 00555c58  83c404               add esp, 4
// 00555c5b  84c0                 test al, al
// 00555c5d  74cf                 je 0x555c2e
// 00555c5f  8b4704               mov eax, dword ptr [edi + 4]
// 00555c62  8b1f                 mov ebx, dword ptr [edi]
// 00555c64  8bf0                 mov esi, eax
// 00555c66  8b442414             mov eax, dword ptr [esp + 0x14]
// 00555c6a  0fb60b               movzx ecx, byte ptr [ebx]
// 00555c6d  03c1                 add eax, ecx
// 00555c6f  83e802               sub eax, 2
// 00555c72  4e                   dec esi
// 00555c73  43                   inc ebx
// 00555c74  83f810               cmp eax, 0x10
// 00555c77  89442414             mov dword ptr [esp + 0x14], eax
// 00555c7b  0f8e4a020000         jle 0x555ecb
// 00555c81  85f6                 test esi, esi
// 00555c83  7518                 jne 0x555c9d
// 00555c85  8b570c               mov edx, dword ptr [edi + 0xc]
// 00555c88  55                   push ebp
// 00555c89  ffd2                 call edx
// 00555c8b  83c404               add esp, 4
// 00555c8e  84c0                 test al, al
// 00555c90  749c                 je 0x555c2e
// 00555c92  8b4704               mov eax, dword ptr [edi + 4]
// 00555c95  8b1f                 mov ebx, dword ptr [edi]
// 00555c97  89442410             mov dword ptr [esp + 0x10], eax
// 00555c9b  8bf0                 mov esi, eax
// 00555c9d  0fb603               movzx eax, byte ptr [ebx]
// 00555ca0  8b4d00               mov ecx, dword ptr [ebp]
// 00555ca3  c7411450000000       mov dword ptr [ecx + 0x14], 0x50
// 00555caa  8b5500               mov edx, dword ptr [ebp]
// 00555cad  894218               mov dword ptr [edx + 0x18], eax
// 00555cb0  89442434             mov dword ptr [esp + 0x34], eax
// 00555cb4  8b4500               mov eax, dword ptr [ebp]
// 00555cb7  8b4804               mov ecx, dword ptr [eax + 4]
// 00555cba  6a01                 push 1
// 00555cbc  55                   push ebp
// 00555cbd  4e                   dec esi
// 00555cbe  43                   inc ebx
// 00555cbf  ffd1                 call ecx
// 00555cc1  83c408               add esp, 8
// 00555cc4  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00555cc9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00555cd1  bf01000000           mov edi, 1
// 00555cd6  85f6                 test esi, esi
// 00555cd8  751c                 jne 0x555cf6
// 00555cda  8b742430             mov esi, dword ptr [esp + 0x30]
// 00555cde  8b560c               mov edx, dword ptr [esi + 0xc]
// 00555ce1  55                   push ebp
// 00555ce2  ffd2                 call edx
// 00555ce4  83c404               add esp, 4
// 00555ce7  84c0                 test al, al
// 00555ce9  0f843fffffff         je 0x555c2e
// 00555cef  8b4604               mov eax, dword ptr [esi + 4]
// 00555cf2  8b1e                 mov ebx, dword ptr [esi]
// 00555cf4  8bf0                 mov esi, eax
// 00555cf6  8a0b                 mov cl, byte ptr [ebx]
// 00555cf8  0fb6d1               movzx edx, cl
// 00555cfb  01542418             add dword ptr [esp + 0x18], edx
// 00555cff  884c3c1c             mov byte ptr [esp + edi + 0x1c], cl
// 00555d03  4e                   dec esi
// 00555d04  47                   inc edi
// 00555d05  43                   inc ebx
// 00555d06  83ff10               cmp edi, 0x10
// 00555d09  89742410             mov dword ptr [esp + 0x10], esi
// 00555d0d  7ec7                 jle 0x555cd6
// 00555d0f  8b4500               mov eax, dword ptr [ebp]
// 00555d12  0fb64c241d           movzx ecx, byte ptr [esp + 0x1d]
// 00555d17  0fb654241e           movzx edx, byte ptr [esp + 0x1e]
// 00555d1c  83c018               add eax, 0x18
// 00555d1f  836c241411           sub dword ptr [esp + 0x14], 0x11
// 00555d24  8908                 mov dword ptr [eax], ecx
// 00555d26  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 00555d2b  895004               mov dword ptr [eax + 4], edx
// 00555d2e  0fb6542420           movzx edx, byte ptr [esp + 0x20]
// 00555d33  894808               mov dword ptr [eax + 8], ecx
// 00555d36  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 00555d3b  89500c               mov dword ptr [eax + 0xc], edx
// 00555d3e  0fb6542422           movzx edx, byte ptr [esp + 0x22]
// 00555d43  894810               mov dword ptr [eax + 0x10], ecx
// 00555d46  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00555d4b  895014               mov dword ptr [eax + 0x14], edx
// 00555d4e  0fb6542424           movzx edx, byte ptr [esp + 0x24]
// 00555d53  894818               mov dword ptr [eax + 0x18], ecx
// 00555d56  89501c               mov dword ptr [eax + 0x1c], edx
// 00555d59  8b4500               mov eax, dword ptr [ebp]
// 00555d5c  bf56000000           mov edi, 0x56
// 00555d61  897814               mov dword ptr [eax + 0x14], edi
// 00555d64  8b4d00               mov ecx, dword ptr [ebp]
// 00555d67  8b5104               mov edx, dword ptr [ecx + 4]
// 00555d6a  6a02                 push 2
// 00555d6c  55                   push ebp
// 00555d6d  ffd2                 call edx
// 00555d6f  8b4500               mov eax, dword ptr [ebp]
// 00555d72  0fb64c242d           movzx ecx, byte ptr [esp + 0x2d]
// 00555d77  0fb654242e           movzx edx, byte ptr [esp + 0x2e]
// 00555d7c  83c018               add eax, 0x18
// 00555d7f  8908                 mov dword ptr [eax], ecx
// 00555d81  0fb64c242f           movzx ecx, byte ptr [esp + 0x2f]
// 00555d86  895004               mov dword ptr [eax + 4], edx
// 00555d89  0fb6542430           movzx edx, byte ptr [esp + 0x30]
// 00555d8e  894808               mov dword ptr [eax + 8], ecx
// 00555d91  0fb64c2431           movzx ecx, byte ptr [esp + 0x31]
// 00555d96  89500c               mov dword ptr [eax + 0xc], edx
// 00555d99  0fb6542432           movzx edx, byte ptr [esp + 0x32]
// 00555d9e  894810               mov dword ptr [eax + 0x10], ecx
// 00555da1  0fb64c2433           movzx ecx, byte ptr [esp + 0x33]
// 00555da6  895014               mov dword ptr [eax + 0x14], edx
// 00555da9  0fb6542434           movzx edx, byte ptr [esp + 0x34]
// 00555dae  894818               mov dword ptr [eax + 0x18], ecx
// 00555db1  89501c               mov dword ptr [eax + 0x1c], edx
// 00555db4  8b4500               mov eax, dword ptr [ebp]
// 00555db7  897814               mov dword ptr [eax + 0x14], edi
// 00555dba  8b4d00               mov ecx, dword ptr [ebp]
// 00555dbd  8b5104               mov edx, dword ptr [ecx + 4]
// 00555dc0  6a02                 push 2
// 00555dc2  55                   push ebp
// 00555dc3  ffd2                 call edx
// 00555dc5  8b442428             mov eax, dword ptr [esp + 0x28]
// 00555dc9  83c410               add esp, 0x10
// 00555dcc  3d00010000           cmp eax, 0x100
// 00555dd1  7f06                 jg 0x555dd9
// 00555dd3  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00555dd7  7e15                 jle 0x555dee
// 00555dd9  8b4500               mov eax, dword ptr [ebp]
// 00555ddc  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00555de3  8b4d00               mov ecx, dword ptr [ebp]
// 00555de6  8b11                 mov edx, dword ptr [ecx]
// 00555de8  55                   push ebp
// 00555de9  ffd2                 call edx
// 00555deb  83c404               add esp, 4
// 00555dee  8b442418             mov eax, dword ptr [esp + 0x18]
// 00555df2  33ff                 xor edi, edi
// 00555df4  85c0                 test eax, eax
// 00555df6  7e35                 jle 0x555e2d
// 00555df8  85f6                 test esi, esi
// 00555dfa  7520                 jne 0x555e1c
// 00555dfc  8b742430             mov esi, dword ptr [esp + 0x30]
// 00555e00  8b460c               mov eax, dword ptr [esi + 0xc]
// 00555e03  55                   push ebp
// 00555e04  ffd0                 call eax
// 00555e06  83c404               add esp, 4
// 00555e09  84c0                 test al, al
// 00555e0b  0f841dfeffff         je 0x555c2e
// 00555e11  8b4e04               mov ecx, dword ptr [esi + 4]
// 00555e14  8b1e                 mov ebx, dword ptr [esi]
// 00555e16  8b442418             mov eax, dword ptr [esp + 0x18]
// 00555e1a  8bf1                 mov esi, ecx
// 00555e1c  8a13                 mov dl, byte ptr [ebx]
// 00555e1e  88543c38             mov byte ptr [esp + edi + 0x38], dl
// 00555e22  4e                   dec esi
// 00555e23  47                   inc edi
// 00555e24  43                   inc ebx
// 00555e25  3bf8                 cmp edi, eax
// 00555e27  89742410             mov dword ptr [esp + 0x10], esi
// 00555e2b  7ccb                 jl 0x555df8
// 00555e2d  29442414             sub dword ptr [esp + 0x14], eax
// 00555e31  8b442434             mov eax, dword ptr [esp + 0x34]
// 00555e35  a810                 test al, 0x10
// 00555e37  740c                 je 0x555e45
// 00555e39  83e810               sub eax, 0x10
// 00555e3c  8db485b0000000       lea esi, [ebp + eax*4 + 0xb0]
// 00555e43  eb07                 jmp 0x555e4c
// 00555e45  8db485a0000000       lea esi, [ebp + eax*4 + 0xa0]
// 00555e4c  85c0                 test eax, eax
// 00555e4e  7c05                 jl 0x555e55
// 00555e50  83f804               cmp eax, 4
// 00555e53  7c1b                 jl 0x555e70
// 00555e55  8b4d00               mov ecx, dword ptr [ebp]
// 00555e58  c741141e000000       mov dword ptr [ecx + 0x14], 0x1e
// 00555e5f  8b5500               mov edx, dword ptr [ebp]
// 00555e62  894218               mov dword ptr [edx + 0x18], eax
// 00555e65  8b4500               mov eax, dword ptr [ebp]
// 00555e68  8b08                 mov ecx, dword ptr [eax]
// 00555e6a  55                   push ebp
// 00555e6b  ffd1                 call ecx
// 00555e6d  83c404               add esp, 4
// 00555e70  833e00               cmp dword ptr [esi], 0
// 00555e73  750b                 jne 0x555e80
// 00555e75  55                   push ebp
// 00555e76  e8051f0100           call 0x567d80
// 00555e7b  83c404               add esp, 4
// 00555e7e  8906                 mov dword ptr [esi], eax
// 00555e80  8b06                 mov eax, dword ptr [esi]
// 00555e82  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00555e86  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00555e8a  8910                 mov dword ptr [eax], edx
// 00555e8c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00555e90  894804               mov dword ptr [eax + 4], ecx
// 00555e93  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00555e97  895008               mov dword ptr [eax + 8], edx
// 00555e9a  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 00555e9e  89480c               mov dword ptr [eax + 0xc], ecx
// 00555ea1  885010               mov byte ptr [eax + 0x10], dl
// 00555ea4  8b3e                 mov edi, dword ptr [esi]
// 00555ea6  83c711               add edi, 0x11
// 00555ea9  837c241410           cmp dword ptr [esp + 0x14], 0x10
// 00555eae  b940000000           mov ecx, 0x40
// 00555eb3  8d742438             lea esi, [esp + 0x38]
// 00555eb7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00555eb9  8b742410             mov esi, dword ptr [esp + 0x10]
// 00555ebd  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00555ec1  0f8fbafdffff         jg 0x555c81
// 00555ec7  8b442414             mov eax, dword ptr [esp + 0x14]
// 00555ecb  85c0                 test eax, eax
// 00555ecd  7415                 je 0x555ee4
// 00555ecf  8b4500               mov eax, dword ptr [ebp]
// 00555ed2  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00555ed9  8b4d00               mov ecx, dword ptr [ebp]
// 00555edc  8b11                 mov edx, dword ptr [ecx]
// 00555ede  55                   push ebp
// 00555edf  ffd2                 call edx
// 00555ee1  83c404               add esp, 4
// 00555ee4  891f                 mov dword ptr [edi], ebx
// 00555ee6  897704               mov dword ptr [edi + 4], esi
// 00555ee9  5f                   pop edi
// 00555eea  5e                   pop esi
// 00555eeb  5d                   pop ebp
// 00555eec  b001                 mov al, 1
// 00555eee  5b                   pop ebx
// 00555eef  81c428010000         add esp, 0x128
// 00555ef5  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
