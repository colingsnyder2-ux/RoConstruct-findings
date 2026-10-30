// roc 2007-03 00506c30  unit: seg_00500000  size: 810 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00506c30
//
// 00506c30  81ec2c010000         sub esp, 0x12c
// 00506c36  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00506c3b  33c4                 xor eax, esp
// 00506c3d  89842428010000       mov dword ptr [esp + 0x128], eax
// 00506c44  53                   push ebx
// 00506c45  55                   push ebp
// 00506c46  8bac2438010000       mov ebp, dword ptr [esp + 0x138]
// 00506c4d  56                   push esi
// 00506c4e  57                   push edi
// 00506c4f  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 00506c52  8b7704               mov esi, dword ptr [edi + 4]
// 00506c55  85f6                 test esi, esi
// 00506c57  8b1f                 mov ebx, dword ptr [edi]
// 00506c59  897c241c             mov dword ptr [esp + 0x1c], edi
// 00506c5d  751b                 jne 0x506c7a
// 00506c5f  8b470c               mov eax, dword ptr [edi + 0xc]
// 00506c62  55                   push ebp
// 00506c63  ffd0                 call eax
// 00506c65  83c404               add esp, 4
// 00506c68  84c0                 test al, al
// 00506c6a  7507                 jne 0x506c73
// 00506c6c  32c0                 xor al, al
// 00506c6e  e9ce020000           jmp 0x506f41
// 00506c73  8b4f04               mov ecx, dword ptr [edi + 4]
// 00506c76  8b1f                 mov ebx, dword ptr [edi]
// 00506c78  8bf1                 mov esi, ecx
// 00506c7a  33c0                 xor eax, eax
// 00506c7c  8a23                 mov ah, byte ptr [ebx]
// 00506c7e  83ee01               sub esi, 1
// 00506c81  83c301               add ebx, 1
// 00506c84  85f6                 test esi, esi
// 00506c86  89442414             mov dword ptr [esp + 0x14], eax
// 00506c8a  7518                 jne 0x506ca4
// 00506c8c  8b570c               mov edx, dword ptr [edi + 0xc]
// 00506c8f  55                   push ebp
// 00506c90  ffd2                 call edx
// 00506c92  83c404               add esp, 4
// 00506c95  84c0                 test al, al
// 00506c97  74d3                 je 0x506c6c
// 00506c99  8b4704               mov eax, dword ptr [edi + 4]
// 00506c9c  8b1f                 mov ebx, dword ptr [edi]
// 00506c9e  8bf0                 mov esi, eax
// 00506ca0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00506ca4  0fb60b               movzx ecx, byte ptr [ebx]
// 00506ca7  03c1                 add eax, ecx
// 00506ca9  83e802               sub eax, 2
// 00506cac  83ee01               sub esi, 1
// 00506caf  83c301               add ebx, 1
// 00506cb2  83f810               cmp eax, 0x10
// 00506cb5  89442414             mov dword ptr [esp + 0x14], eax
// 00506cb9  0f8e62020000         jle 0x506f21
// 00506cbf  90                   nop 
// 00506cc0  85f6                 test esi, esi
// 00506cc2  7518                 jne 0x506cdc
// 00506cc4  8b570c               mov edx, dword ptr [edi + 0xc]
// 00506cc7  55                   push ebp
// 00506cc8  ffd2                 call edx
// 00506cca  83c404               add esp, 4
// 00506ccd  84c0                 test al, al
// 00506ccf  749b                 je 0x506c6c
// 00506cd1  8b4704               mov eax, dword ptr [edi + 4]
// 00506cd4  8b1f                 mov ebx, dword ptr [edi]
// 00506cd6  89442410             mov dword ptr [esp + 0x10], eax
// 00506cda  8bf0                 mov esi, eax
// 00506cdc  0fb603               movzx eax, byte ptr [ebx]
// 00506cdf  8b4d00               mov ecx, dword ptr [ebp]
// 00506ce2  c7411450000000       mov dword ptr [ecx + 0x14], 0x50
// 00506ce9  8b5500               mov edx, dword ptr [ebp]
// 00506cec  894218               mov dword ptr [edx + 0x18], eax
// 00506cef  89442420             mov dword ptr [esp + 0x20], eax
// 00506cf3  8b4500               mov eax, dword ptr [ebp]
// 00506cf6  8b4804               mov ecx, dword ptr [eax + 4]
// 00506cf9  6a01                 push 1
// 00506cfb  55                   push ebp
// 00506cfc  83ee01               sub esi, 1
// 00506cff  83c301               add ebx, 1
// 00506d02  ffd1                 call ecx
// 00506d04  83c408               add esp, 8
// 00506d07  c644242400           mov byte ptr [esp + 0x24], 0
// 00506d0c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00506d14  bf01000000           mov edi, 1
// 00506d19  8da42400000000       lea esp, [esp]
// 00506d20  85f6                 test esi, esi
// 00506d22  751c                 jne 0x506d40
// 00506d24  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00506d28  8b560c               mov edx, dword ptr [esi + 0xc]
// 00506d2b  55                   push ebp
// 00506d2c  ffd2                 call edx
// 00506d2e  83c404               add esp, 4
// 00506d31  84c0                 test al, al
// 00506d33  0f8433ffffff         je 0x506c6c
// 00506d39  8b4604               mov eax, dword ptr [esi + 4]
// 00506d3c  8b1e                 mov ebx, dword ptr [esi]
// 00506d3e  8bf0                 mov esi, eax
// 00506d40  8a0b                 mov cl, byte ptr [ebx]
// 00506d42  0fb6d1               movzx edx, cl
// 00506d45  01542418             add dword ptr [esp + 0x18], edx
// 00506d49  884c3c24             mov byte ptr [esp + edi + 0x24], cl
// 00506d4d  83ee01               sub esi, 1
// 00506d50  83c701               add edi, 1
// 00506d53  83c301               add ebx, 1
// 00506d56  83ff10               cmp edi, 0x10
// 00506d59  89742410             mov dword ptr [esp + 0x10], esi
// 00506d5d  7ec1                 jle 0x506d20
// 00506d5f  8b4500               mov eax, dword ptr [ebp]
// 00506d62  0fb64c2425           movzx ecx, byte ptr [esp + 0x25]
// 00506d67  0fb6542426           movzx edx, byte ptr [esp + 0x26]
// 00506d6c  83c018               add eax, 0x18
// 00506d6f  836c241411           sub dword ptr [esp + 0x14], 0x11
// 00506d74  8908                 mov dword ptr [eax], ecx
// 00506d76  0fb64c2427           movzx ecx, byte ptr [esp + 0x27]
// 00506d7b  895004               mov dword ptr [eax + 4], edx
// 00506d7e  0fb6542428           movzx edx, byte ptr [esp + 0x28]
// 00506d83  894808               mov dword ptr [eax + 8], ecx
// 00506d86  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 00506d8b  89500c               mov dword ptr [eax + 0xc], edx
// 00506d8e  0fb654242a           movzx edx, byte ptr [esp + 0x2a]
// 00506d93  894810               mov dword ptr [eax + 0x10], ecx
// 00506d96  0fb64c242b           movzx ecx, byte ptr [esp + 0x2b]
// 00506d9b  895014               mov dword ptr [eax + 0x14], edx
// 00506d9e  0fb654242c           movzx edx, byte ptr [esp + 0x2c]
// 00506da3  894818               mov dword ptr [eax + 0x18], ecx
// 00506da6  89501c               mov dword ptr [eax + 0x1c], edx
// 00506da9  8b4500               mov eax, dword ptr [ebp]
// 00506dac  bf56000000           mov edi, 0x56
// 00506db1  897814               mov dword ptr [eax + 0x14], edi
// 00506db4  8b4d00               mov ecx, dword ptr [ebp]
// 00506db7  8b5104               mov edx, dword ptr [ecx + 4]
// 00506dba  6a02                 push 2
// 00506dbc  55                   push ebp
// 00506dbd  ffd2                 call edx
// 00506dbf  8b4500               mov eax, dword ptr [ebp]
// 00506dc2  0fb64c2435           movzx ecx, byte ptr [esp + 0x35]
// 00506dc7  0fb6542436           movzx edx, byte ptr [esp + 0x36]
// 00506dcc  83c018               add eax, 0x18
// 00506dcf  8908                 mov dword ptr [eax], ecx
// 00506dd1  0fb64c2437           movzx ecx, byte ptr [esp + 0x37]
// 00506dd6  895004               mov dword ptr [eax + 4], edx
// 00506dd9  0fb6542438           movzx edx, byte ptr [esp + 0x38]
// 00506dde  894808               mov dword ptr [eax + 8], ecx
// 00506de1  0fb64c2439           movzx ecx, byte ptr [esp + 0x39]
// 00506de6  89500c               mov dword ptr [eax + 0xc], edx
// 00506de9  0fb654243a           movzx edx, byte ptr [esp + 0x3a]
// 00506dee  894810               mov dword ptr [eax + 0x10], ecx
// 00506df1  0fb64c243b           movzx ecx, byte ptr [esp + 0x3b]
// 00506df6  895014               mov dword ptr [eax + 0x14], edx
// 00506df9  0fb654243c           movzx edx, byte ptr [esp + 0x3c]
// 00506dfe  894818               mov dword ptr [eax + 0x18], ecx
// 00506e01  89501c               mov dword ptr [eax + 0x1c], edx
// 00506e04  8b4500               mov eax, dword ptr [ebp]
// 00506e07  897814               mov dword ptr [eax + 0x14], edi
// 00506e0a  8b4d00               mov ecx, dword ptr [ebp]
// 00506e0d  8b5104               mov edx, dword ptr [ecx + 4]
// 00506e10  6a02                 push 2
// 00506e12  55                   push ebp
// 00506e13  ffd2                 call edx
// 00506e15  8b442428             mov eax, dword ptr [esp + 0x28]
// 00506e19  83c410               add esp, 0x10
// 00506e1c  3d00010000           cmp eax, 0x100
// 00506e21  7f06                 jg 0x506e29
// 00506e23  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00506e27  7e15                 jle 0x506e3e
// 00506e29  8b4500               mov eax, dword ptr [ebp]
// 00506e2c  c7401408000000       mov dword ptr [eax + 0x14], 8
// 00506e33  8b4d00               mov ecx, dword ptr [ebp]
// 00506e36  8b11                 mov edx, dword ptr [ecx]
// 00506e38  55                   push ebp
// 00506e39  ffd2                 call edx
// 00506e3b  83c404               add esp, 4
// 00506e3e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00506e42  33ff                 xor edi, edi
// 00506e44  85c0                 test eax, eax
// 00506e46  7e3b                 jle 0x506e83
// 00506e48  85f6                 test esi, esi
// 00506e4a  7520                 jne 0x506e6c
// 00506e4c  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00506e50  8b460c               mov eax, dword ptr [esi + 0xc]
// 00506e53  55                   push ebp
// 00506e54  ffd0                 call eax
// 00506e56  83c404               add esp, 4
// 00506e59  84c0                 test al, al
// 00506e5b  0f840bfeffff         je 0x506c6c
// 00506e61  8b4e04               mov ecx, dword ptr [esi + 4]
// 00506e64  8b1e                 mov ebx, dword ptr [esi]
// 00506e66  8b442418             mov eax, dword ptr [esp + 0x18]
// 00506e6a  8bf1                 mov esi, ecx
// 00506e6c  8a13                 mov dl, byte ptr [ebx]
// 00506e6e  88543c38             mov byte ptr [esp + edi + 0x38], dl
// 00506e72  83ee01               sub esi, 1
// 00506e75  83c701               add edi, 1
// 00506e78  83c301               add ebx, 1
// 00506e7b  3bf8                 cmp edi, eax
// 00506e7d  89742410             mov dword ptr [esp + 0x10], esi
// 00506e81  7cc5                 jl 0x506e48
// 00506e83  29442414             sub dword ptr [esp + 0x14], eax
// 00506e87  8b442420             mov eax, dword ptr [esp + 0x20]
// 00506e8b  a810                 test al, 0x10
// 00506e8d  740c                 je 0x506e9b
// 00506e8f  83e810               sub eax, 0x10
// 00506e92  8db485b0000000       lea esi, [ebp + eax*4 + 0xb0]
// 00506e99  eb07                 jmp 0x506ea2
// 00506e9b  8db485a0000000       lea esi, [ebp + eax*4 + 0xa0]
// 00506ea2  85c0                 test eax, eax
// 00506ea4  7c05                 jl 0x506eab
// 00506ea6  83f804               cmp eax, 4
// 00506ea9  7c1b                 jl 0x506ec6
// 00506eab  8b4d00               mov ecx, dword ptr [ebp]
// 00506eae  c741141e000000       mov dword ptr [ecx + 0x14], 0x1e
// 00506eb5  8b5500               mov edx, dword ptr [ebp]
// 00506eb8  894218               mov dword ptr [edx + 0x18], eax
// 00506ebb  8b4500               mov eax, dword ptr [ebp]
// 00506ebe  8b08                 mov ecx, dword ptr [eax]
// 00506ec0  55                   push ebp
// 00506ec1  ffd1                 call ecx
// 00506ec3  83c404               add esp, 4
// 00506ec6  833e00               cmp dword ptr [esi], 0
// 00506ec9  750b                 jne 0x506ed6
// 00506ecb  55                   push ebp
// 00506ecc  e84fe00000           call 0x514f20
// 00506ed1  83c404               add esp, 4
// 00506ed4  8906                 mov dword ptr [esi], eax
// 00506ed6  8b06                 mov eax, dword ptr [esi]
// 00506ed8  8b542424             mov edx, dword ptr [esp + 0x24]
// 00506edc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00506ee0  8910                 mov dword ptr [eax], edx
// 00506ee2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00506ee6  894804               mov dword ptr [eax + 4], ecx
// 00506ee9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00506eed  895008               mov dword ptr [eax + 8], edx
// 00506ef0  8a542434             mov dl, byte ptr [esp + 0x34]
// 00506ef4  89480c               mov dword ptr [eax + 0xc], ecx
// 00506ef7  885010               mov byte ptr [eax + 0x10], dl
// 00506efa  8b3e                 mov edi, dword ptr [esi]
// 00506efc  83c711               add edi, 0x11
// 00506eff  837c241410           cmp dword ptr [esp + 0x14], 0x10
// 00506f04  b940000000           mov ecx, 0x40
// 00506f09  8d742438             lea esi, [esp + 0x38]
// 00506f0d  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00506f0f  8b742410             mov esi, dword ptr [esp + 0x10]
// 00506f13  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00506f17  0f8fa3fdffff         jg 0x506cc0
// 00506f1d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00506f21  85c0                 test eax, eax
// 00506f23  7415                 je 0x506f3a
// 00506f25  8b4500               mov eax, dword ptr [ebp]
// 00506f28  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 00506f2f  8b4d00               mov ecx, dword ptr [ebp]
// 00506f32  8b11                 mov edx, dword ptr [ecx]
// 00506f34  55                   push ebp
// 00506f35  ffd2                 call edx
// 00506f37  83c404               add esp, 4
// 00506f3a  891f                 mov dword ptr [edi], ebx
// 00506f3c  897704               mov dword ptr [edi + 4], esi
// 00506f3f  b001                 mov al, 1
// 00506f41  8b8c2438010000       mov ecx, dword ptr [esp + 0x138]
// 00506f48  5f                   pop edi
// 00506f49  5e                   pop esi
// 00506f4a  5d                   pop ebp
// 00506f4b  5b                   pop ebx
// 00506f4c  33cc                 xor ecx, esp
// 00506f4e  e8537f1100           call 0x61eea6
// 00506f53  81c42c010000         add esp, 0x12c
// 00506f59  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dht)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: jpeg-6b jdmarker.c
