// from server: 100% by auto
// roc 2007-03 004b0ae0  unit: seg_004b0000  size: 699 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b0ae0
//
// 004b0ae0  55                   push ebp
// 004b0ae1  8bec                 mov ebp, esp
// 004b0ae3  83ec18               sub esp, 0x18
// 004b0ae6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004b0ae9  8b08                 mov ecx, dword ptr [eax]
// 004b0aeb  53                   push ebx
// 004b0aec  8b580c               mov ebx, dword ptr [eax + 0xc]
// 004b0aef  56                   push esi
// 004b0af0  8b7008               mov esi, dword ptr [eax + 8]
// 004b0af3  57                   push edi
// 004b0af4  8b7804               mov edi, dword ptr [eax + 4]
// 004b0af7  8b4508               mov eax, dword ptr [ebp + 8]
// 004b0afa  8b10                 mov edx, dword ptr [eax]
// 004b0afc  894de8               mov dword ptr [ebp - 0x18], ecx
// 004b0aff  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004b0b02  8911                 mov dword ptr [ecx], edx
// 004b0b04  8b5004               mov edx, dword ptr [eax + 4]
// 004b0b07  895104               mov dword ptr [ecx + 4], edx
// 004b0b0a  8b5008               mov edx, dword ptr [eax + 8]
// 004b0b0d  895108               mov dword ptr [ecx + 8], edx
// 004b0b10  8b400c               mov eax, dword ptr [eax + 0xc]
// 004b0b13  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004b0b16  89410c               mov dword ptr [ecx + 0xc], eax
// 004b0b19  33c0                 xor eax, eax
// 004b0b1b  85db                 test ebx, ebx
// 004b0b1d  8902                 mov dword ptr [edx], eax
// 004b0b1f  894204               mov dword ptr [edx + 4], eax
// 004b0b22  894208               mov dword ptr [edx + 8], eax
// 004b0b25  897dec               mov dword ptr [ebp - 0x14], edi
// 004b0b28  8975f0               mov dword ptr [ebp - 0x10], esi
// 004b0b2b  895df4               mov dword ptr [ebp - 0xc], ebx
// 004b0b2e  89420c               mov dword ptr [edx + 0xc], eax
// 004b0b31  c7450c01000000       mov dword ptr [ebp + 0xc], 1
// 004b0b38  0f8817010000         js 0x4b0c55
// 004b0b3e  8d55e8               lea edx, [ebp - 0x18]
// 004b0b41  52                   push edx
// 004b0b42  51                   push ecx
// 004b0b43  e808deffff           call 0x4ae950
// 004b0b48  83c408               add esp, 8
// 004b0b4b  84c0                 test al, al
// 004b0b4d  0f84ff000000         je 0x4b0c52
// 004b0b53  b803000000           mov eax, 3
// 004b0b58  eb06                 jmp 0x4b0b60
// 004b0b5a  8d9b00000000         lea ebx, [ebx]
// 004b0b60  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004b0b63  833c8100             cmp dword ptr [ecx + eax*4], 0
// 004b0b67  7505                 jne 0x4b0b6e
// 004b0b69  83e801               sub eax, 1
// 004b0b6c  79f2                 jns 0x4b0b60
// 004b0b6e  85c0                 test eax, eax
// 004b0b70  8bc8                 mov ecx, eax
// 004b0b72  7c33                 jl 0x4b0ba7
// 004b0b74  837c8de800           cmp dword ptr [ebp + ecx*4 - 0x18], 0
// 004b0b79  7505                 jne 0x4b0b80
// 004b0b7b  83e901               sub ecx, 1
// 004b0b7e  79f4                 jns 0x4b0b74
// 004b0b80  3bc1                 cmp eax, ecx
// 004b0b82  7423                 je 0x4b0ba7
// 004b0b84  2bc1                 sub eax, ecx
// 004b0b86  c1e005               shl eax, 5
// 004b0b89  8bf0                 mov esi, eax
// 004b0b8b  8d55e8               lea edx, [ebp - 0x18]
// 004b0b8e  56                   push esi
// 004b0b8f  52                   push edx
// 004b0b90  e87be3ffff           call 0x4aef10
// 004b0b95  8b5df4               mov ebx, dword ptr [ebp - 0xc]
// 004b0b98  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004b0b9b  83c408               add esp, 8
// 004b0b9e  83c601               add esi, 1
// 004b0ba1  89750c               mov dword ptr [ebp + 0xc], esi
// 004b0ba4  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004b0ba7  85db                 test ebx, ebx
// 004b0ba9  7855                 js 0x4b0c00
// 004b0bab  eb03                 jmp 0x4b0bb0
// 004b0bad  8d4900               lea ecx, [ecx]
// 004b0bb0  b803000000           mov eax, 3
// 004b0bb5  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004b0bb8  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004b0bbb  8b5485e8             mov edx, dword ptr [ebp + eax*4 - 0x18]
// 004b0bbf  3bca                 cmp ecx, edx
// 004b0bc1  7709                 ja 0x4b0bcc
// 004b0bc3  723b                 jb 0x4b0c00
// 004b0bc5  83e801               sub eax, 1
// 004b0bc8  79eb                 jns 0x4b0bb5
// 004b0bca  eb34                 jmp 0x4b0c00
// 004b0bcc  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004b0bcf  83450c01             add dword ptr [ebp + 0xc], 1
// 004b0bd3  8bc1                 mov eax, ecx
// 004b0bd5  03c9                 add ecx, ecx
// 004b0bd7  894de8               mov dword ptr [ebp - 0x18], ecx
// 004b0bda  c1e81f               shr eax, 0x1f
// 004b0bdd  8bcf                 mov ecx, edi
// 004b0bdf  03ff                 add edi, edi
// 004b0be1  0bf8                 or edi, eax
// 004b0be3  8bc6                 mov eax, esi
// 004b0be5  c1e81f               shr eax, 0x1f
// 004b0be8  03db                 add ebx, ebx
// 004b0bea  c1e91f               shr ecx, 0x1f
// 004b0bed  03f6                 add esi, esi
// 004b0bef  0bd8                 or ebx, eax
// 004b0bf1  0bf1                 or esi, ecx
// 004b0bf3  85db                 test ebx, ebx
// 004b0bf5  897dec               mov dword ptr [ebp - 0x14], edi
// 004b0bf8  8975f0               mov dword ptr [ebp - 0x10], esi
// 004b0bfb  895df4               mov dword ptr [ebp - 0xc], ebx
// 004b0bfe  79b0                 jns 0x4b0bb0
// 004b0c00  b803000000           mov eax, 3
// 004b0c05  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004b0c08  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004b0c0b  8b5485e8             mov edx, dword ptr [ebp + eax*4 - 0x18]
// 004b0c0f  3bd1                 cmp edx, ecx
// 004b0c11  770d                 ja 0x4b0c20
// 004b0c13  0f8280000000         jb 0x4b0c99
// 004b0c19  83e801               sub eax, 1
// 004b0c1c  79e7                 jns 0x4b0c05
// 004b0c1e  eb79                 jmp 0x4b0c99
// 004b0c20  8bc3                 mov eax, ebx
// 004b0c22  c1e01f               shl eax, 0x1f
// 004b0c25  8bce                 mov ecx, esi
// 004b0c27  d1ee                 shr esi, 1
// 004b0c29  0bf0                 or esi, eax
// 004b0c2b  c1e11f               shl ecx, 0x1f
// 004b0c2e  8bc7                 mov eax, edi
// 004b0c30  d1ef                 shr edi, 1
// 004b0c32  0bf9                 or edi, ecx
// 004b0c34  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004b0c37  c1e01f               shl eax, 0x1f
// 004b0c3a  d1e9                 shr ecx, 1
// 004b0c3c  d1eb                 shr ebx, 1
// 004b0c3e  0bc8                 or ecx, eax
// 004b0c40  836d0c01             sub dword ptr [ebp + 0xc], 1
// 004b0c44  895df4               mov dword ptr [ebp - 0xc], ebx
// 004b0c47  8975f0               mov dword ptr [ebp - 0x10], esi
// 004b0c4a  897dec               mov dword ptr [ebp - 0x14], edi
// 004b0c4d  894de8               mov dword ptr [ebp - 0x18], ecx
// 004b0c50  ebae                 jmp 0x4b0c00
// 004b0c52  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004b0c55  51                   push ecx
// 004b0c56  8d55e8               lea edx, [ebp - 0x18]
// 004b0c59  52                   push edx
// 004b0c5a  e8f1dcffff           call 0x4ae950
// 004b0c5f  83c408               add esp, 8
// 004b0c62  84c0                 test al, al
// 004b0c64  7433                 je 0x4b0c99
// 004b0c66  8bc3                 mov eax, ebx
// 004b0c68  c1e01f               shl eax, 0x1f
// 004b0c6b  8bce                 mov ecx, esi
// 004b0c6d  d1ee                 shr esi, 1
// 004b0c6f  0bf0                 or esi, eax
// 004b0c71  c1e11f               shl ecx, 0x1f
// 004b0c74  8bc7                 mov eax, edi
// 004b0c76  d1ef                 shr edi, 1
// 004b0c78  0bf9                 or edi, ecx
// 004b0c7a  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004b0c7d  d1eb                 shr ebx, 1
// 004b0c7f  c1e01f               shl eax, 0x1f
// 004b0c82  d1e9                 shr ecx, 1
// 004b0c84  0bc8                 or ecx, eax
// 004b0c86  895df4               mov dword ptr [ebp - 0xc], ebx
// 004b0c89  8975f0               mov dword ptr [ebp - 0x10], esi
// 004b0c8c  897dec               mov dword ptr [ebp - 0x14], edi
// 004b0c8f  894de8               mov dword ptr [ebp - 0x18], ecx
// 004b0c92  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 004b0c99  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 004b0c9d  c7450800000000       mov dword ptr [ebp + 8], 0
// 004b0ca4  0f84da000000         je 0x4b0d84
// 004b0caa  8d9b00000000         lea ebx, [ebx]
// 004b0cb0  b801000000           mov eax, 1
// 004b0cb5  29450c               sub dword ptr [ebp + 0xc], eax
// 004b0cb8  014508               add dword ptr [ebp + 8], eax
// 004b0cbb  b803000000           mov eax, 3
// 004b0cc0  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004b0cc3  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004b0cc6  8b5485e8             mov edx, dword ptr [ebp + eax*4 - 0x18]
// 004b0cca  3bd1                 cmp edx, ecx
// 004b0ccc  0f877c000000         ja 0x4b0d4e
// 004b0cd2  7205                 jb 0x4b0cd9
// 004b0cd4  83e801               sub eax, 1
// 004b0cd7  79e7                 jns 0x4b0cc0
// 004b0cd9  8d45e8               lea eax, [ebp - 0x18]
// 004b0cdc  8945f8               mov dword ptr [ebp - 8], eax
// 004b0cdf  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004b0ce6  8b75f8               mov esi, dword ptr [ebp - 8]
// 004b0ce9  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 004b0cec  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004b0cef  8b06                 mov eax, dword ptr [esi]
// 004b0cf1  33d2                 xor edx, edx
// 004b0cf3  2907                 sub dword ptr [edi], eax
// 004b0cf5  8b4604               mov eax, dword ptr [esi + 4]
// 004b0cf8  194704               sbb dword ptr [edi + 4], eax
// 004b0cfb  8b4608               mov eax, dword ptr [esi + 8]
// 004b0cfe  194708               sbb dword ptr [edi + 8], eax
// 004b0d01  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b0d04  19470c               sbb dword ptr [edi + 0xc], eax
// 004b0d07  e322                 jecxz 0x4b0d2b
// 004b0d09  42                   inc edx
// 004b0d0a  42                   inc edx
// 004b0d0b  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b0d0e  1904d7               sbb dword ptr [edi + edx*8], eax
// 004b0d11  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b0d15  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004b0d19  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b0d1d  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004b0d21  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b0d25  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004b0d29  e2de                 loop 0x4b0d09
// 004b0d2b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004b0d2e  8b7510               mov esi, dword ptr [ebp + 0x10]
// 004b0d31  51                   push ecx
// 004b0d32  56                   push esi
// 004b0d33  e8d8e1ffff           call 0x4aef10
// 004b0d38  8b5df4               mov ebx, dword ptr [ebp - 0xc]
// 004b0d3b  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004b0d3e  83c408               add esp, 8
// 004b0d41  830e01               or dword ptr [esi], 1
// 004b0d44  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004b0d47  c7450800000000       mov dword ptr [ebp + 8], 0
// 004b0d4e  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 004b0d51  8bc3                 mov eax, ebx
// 004b0d53  c1e01f               shl eax, 0x1f
// 004b0d56  8bce                 mov ecx, esi
// 004b0d58  d1ee                 shr esi, 1
// 004b0d5a  0bf0                 or esi, eax
// 004b0d5c  8bc7                 mov eax, edi
// 004b0d5e  c1e11f               shl ecx, 0x1f
// 004b0d61  d1ef                 shr edi, 1
// 004b0d63  c1e01f               shl eax, 0x1f
// 004b0d66  d1ea                 shr edx, 1
// 004b0d68  d1eb                 shr ebx, 1
// 004b0d6a  0bf9                 or edi, ecx
// 004b0d6c  0bd0                 or edx, eax
// 004b0d6e  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 004b0d72  895df4               mov dword ptr [ebp - 0xc], ebx
// 004b0d75  8975f0               mov dword ptr [ebp - 0x10], esi
// 004b0d78  897dec               mov dword ptr [ebp - 0x14], edi
// 004b0d7b  8955e8               mov dword ptr [ebp - 0x18], edx
// 004b0d7e  0f852cffffff         jne 0x4b0cb0
// 004b0d84  8b4508               mov eax, dword ptr [ebp + 8]
// 004b0d87  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004b0d8a  50                   push eax
// 004b0d8b  51                   push ecx
// 004b0d8c  e87fe1ffff           call 0x4aef10
// 004b0d91  83c408               add esp, 8
// 004b0d94  5f                   pop edi
// 004b0d95  5e                   pop esi
// 004b0d96  5b                   pop ebx
// 004b0d97  8be5                 mov esp, ebp
// 004b0d99  5d                   pop ebp
// 004b0d9a  c3                   ret 

// from server: 22% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp