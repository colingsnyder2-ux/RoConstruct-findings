// roc 2008-06 00528ba0  unit: G3D::Line  size: 2860 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00528ba0
//
// 00528ba0  83ec30               sub esp, 0x30
// 00528ba3  8b442438             mov eax, dword ptr [esp + 0x38]
// 00528ba7  53                   push ebx
// 00528ba8  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00528bac  8a8b25010000         mov cl, byte ptr [ebx + 0x125]
// 00528bb2  0fb693f9010000       movzx edx, byte ptr [ebx + 0x1f9]
// 00528bb9  55                   push ebp
// 00528bba  8b6804               mov ebp, dword ptr [eax + 4]
// 00528bbd  56                   push esi
// 00528bbe  57                   push edi
// 00528bbf  0fb6780b             movzx edi, byte ptr [eax + 0xb]
// 00528bc3  8b83e8000000         mov eax, dword ptr [ebx + 0xe8]
// 00528bc9  83c707               add edi, 7
// 00528bcc  c1ff03               sar edi, 3
// 00528bcf  8944242c             mov dword ptr [esp + 0x2c], eax
// 00528bd3  8b83ec000000         mov eax, dword ptr [ebx + 0xec]
// 00528bd9  884c2413             mov byte ptr [esp + 0x13], cl
// 00528bdd  896c2414             mov dword ptr [esp + 0x14], ebp
// 00528be1  89542448             mov dword ptr [esp + 0x48], edx
// 00528be5  897c2428             mov dword ptr [esp + 0x28], edi
// 00528be9  89442420             mov dword ptr [esp + 0x20], eax
// 00528bed  8944241c             mov dword ptr [esp + 0x1c], eax
// 00528bf1  c7442418ffffff7f     mov dword ptr [esp + 0x18], 0x7fffffff
// 00528bf9  f6c108               test cl, 8
// 00528bfc  0f84bd000000         je 0x528cbf
// 00528c02  80f908               cmp cl, 8
// 00528c05  0f84b4000000         je 0x528cbf
// 00528c0b  33c0                 xor eax, eax
// 00528c0d  33d2                 xor edx, edx
// 00528c0f  85ed                 test ebp, ebp
// 00528c11  7630                 jbe 0x528c43
// 00528c13  eb0b                 jmp 0x528c20
// 00528c15  8da42400000000       lea esp, [esp]
// 00528c1c  8d642400             lea esp, [esp]
// 00528c20  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00528c24  0fb6741101           movzx esi, byte ptr [ecx + edx + 1]
// 00528c29  81fe80000000         cmp esi, 0x80
// 00528c2f  7d04                 jge 0x528c35
// 00528c31  8bce                 mov ecx, esi
// 00528c33  eb07                 jmp 0x528c3c
// 00528c35  b900010000           mov ecx, 0x100
// 00528c3a  2bce                 sub ecx, esi
// 00528c3c  42                   inc edx
// 00528c3d  03c1                 add eax, ecx
// 00528c3f  3bd5                 cmp edx, ebp
// 00528c41  72dd                 jb 0x528c20
// 00528c43  80bbf801000002       cmp byte ptr [ebx + 0x1f8], 2
// 00528c4a  756f                 jne 0x528cbb
// 00528c4c  0fb7f0               movzx esi, ax
// 00528c4f  c1e80a               shr eax, 0xa
// 00528c52  25c0ff3f00           and eax, 0x3fffc0
// 00528c57  33c9                 xor ecx, ecx
// 00528c59  394c2448             cmp dword ptr [esp + 0x48], ecx
// 00528c5d  8bd0                 mov edx, eax
// 00528c5f  7e2f                 jle 0x528c90
// 00528c61  8b83fc010000         mov eax, dword ptr [ebx + 0x1fc]
// 00528c67  803c0800             cmp byte ptr [eax + ecx], 0
// 00528c6b  751c                 jne 0x528c89
// 00528c6d  8b8300020000         mov eax, dword ptr [ebx + 0x200]
// 00528c73  0fb70448             movzx eax, word ptr [eax + ecx*2]
// 00528c77  8be8                 mov ebp, eax
// 00528c79  0fafc2               imul eax, edx
// 00528c7c  0fafee               imul ebp, esi
// 00528c7f  c1ed08               shr ebp, 8
// 00528c82  c1e808               shr eax, 8
// 00528c85  8bf5                 mov esi, ebp
// 00528c87  8bd0                 mov edx, eax
// 00528c89  41                   inc ecx
// 00528c8a  3b4c2448             cmp ecx, dword ptr [esp + 0x48]
// 00528c8e  7cd1                 jl 0x528c61
// 00528c90  8b8b08020000         mov ecx, dword ptr [ebx + 0x208]
// 00528c96  0fb701               movzx eax, word ptr [ecx]
// 00528c99  8bc8                 mov ecx, eax
// 00528c9b  0fafca               imul ecx, edx
// 00528c9e  c1e903               shr ecx, 3
// 00528ca1  81f9c0ff3f00         cmp ecx, 0x3fffc0
// 00528ca7  7607                 jbe 0x528cb0
// 00528ca9  b8ffffff7f           mov eax, 0x7fffffff
// 00528cae  eb0b                 jmp 0x528cbb
// 00528cb0  0fafc6               imul eax, esi
// 00528cb3  c1e803               shr eax, 3
// 00528cb6  c1e10a               shl ecx, 0xa
// 00528cb9  03c1                 add eax, ecx
// 00528cbb  89442418             mov dword ptr [esp + 0x18], eax
// 00528cbf  8a442413             mov al, byte ptr [esp + 0x13]
// 00528cc3  3c10                 cmp al, 0x10
// 00528cc5  0f85dc000000         jne 0x528da7
// 00528ccb  8b742420             mov esi, dword ptr [esp + 0x20]
// 00528ccf  8b83f0000000         mov eax, dword ptr [ebx + 0xf0]
// 00528cd5  46                   inc esi
// 00528cd6  33ed                 xor ebp, ebp
// 00528cd8  40                   inc eax
// 00528cd9  8bce                 mov ecx, esi
// 00528cdb  85ff                 test edi, edi
// 00528cdd  760d                 jbe 0x528cec
// 00528cdf  8bef                 mov ebp, edi
// 00528ce1  8a11                 mov dl, byte ptr [ecx]
// 00528ce3  8810                 mov byte ptr [eax], dl
// 00528ce5  41                   inc ecx
// 00528ce6  40                   inc eax
// 00528ce7  83ef01               sub edi, 1
// 00528cea  75f5                 jne 0x528ce1
// 00528cec  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00528cf0  7314                 jae 0x528d06
// 00528cf2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00528cf6  2bfd                 sub edi, ebp
// 00528cf8  8a11                 mov dl, byte ptr [ecx]
// 00528cfa  2a16                 sub dl, byte ptr [esi]
// 00528cfc  41                   inc ecx
// 00528cfd  8810                 mov byte ptr [eax], dl
// 00528cff  46                   inc esi
// 00528d00  40                   inc eax
// 00528d01  83ef01               sub edi, 1
// 00528d04  75f2                 jne 0x528cf8
// 00528d06  8b83f0000000         mov eax, dword ptr [ebx + 0xf0]
// 00528d0c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00528d10  f644241320           test byte ptr [esp + 0x13], 0x20
// 00528d15  0f841f040000         je 0x52913a
// 00528d1b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00528d1f  33ff                 xor edi, edi
// 00528d21  80bbf801000002       cmp byte ptr [ebx + 0x1f8], 2
// 00528d28  894c2434             mov dword ptr [esp + 0x34], ecx
// 00528d2c  0f8514030000         jne 0x529046
// 00528d32  0fb7f1               movzx esi, cx
// 00528d35  c1e90a               shr ecx, 0xa
// 00528d38  33d2                 xor edx, edx
// 00528d3a  81e1c0ff3f00         and ecx, 0x3fffc0
// 00528d40  39542448             cmp dword ptr [esp + 0x48], edx
// 00528d44  89742438             mov dword ptr [esp + 0x38], esi
// 00528d48  7e33                 jle 0x528d7d
// 00528d4a  8babfc010000         mov ebp, dword ptr [ebx + 0x1fc]
// 00528d50  803c2a02             cmp byte ptr [edx + ebp], 2
// 00528d54  7520                 jne 0x528d76
// 00528d56  8b8304020000         mov eax, dword ptr [ebx + 0x204]
// 00528d5c  0fb70450             movzx eax, word ptr [eax + edx*2]
// 00528d60  8bf0                 mov esi, eax
// 00528d62  0fafc1               imul eax, ecx
// 00528d65  0faf742438           imul esi, dword ptr [esp + 0x38]
// 00528d6a  c1ee08               shr esi, 8
// 00528d6d  c1e808               shr eax, 8
// 00528d70  89742438             mov dword ptr [esp + 0x38], esi
// 00528d74  8bc8                 mov ecx, eax
// 00528d76  42                   inc edx
// 00528d77  3b542448             cmp edx, dword ptr [esp + 0x48]
// 00528d7b  7cd3                 jl 0x528d50
// 00528d7d  8b930c020000         mov edx, dword ptr [ebx + 0x20c]
// 00528d83  0fb75204             movzx edx, word ptr [edx + 4]
// 00528d87  8bc2                 mov eax, edx
// 00528d89  0fafc1               imul eax, ecx
// 00528d8c  c1e803               shr eax, 3
// 00528d8f  3dc0ff3f00           cmp eax, 0x3fffc0
// 00528d94  0f869d020000         jbe 0x529037
// 00528d9a  c7442434ffffff7f     mov dword ptr [esp + 0x34], 0x7fffffff
// 00528da2  e99f020000           jmp 0x529046
// 00528da7  a810                 test al, 0x10
// 00528da9  0f84ac010000         je 0x528f5b
// 00528daf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00528db3  33ff                 xor edi, edi
// 00528db5  80bbf801000002       cmp byte ptr [ebx + 0x1f8], 2
// 00528dbc  894c2434             mov dword ptr [esp + 0x34], ecx
// 00528dc0  757f                 jne 0x528e41
// 00528dc2  0fb7f1               movzx esi, cx
// 00528dc5  c1e90a               shr ecx, 0xa
// 00528dc8  81e1c0ff3f00         and ecx, 0x3fffc0
// 00528dce  33d2                 xor edx, edx
// 00528dd0  397c2448             cmp dword ptr [esp + 0x48], edi
// 00528dd4  7e39                 jle 0x528e0f
// 00528dd6  eb08                 jmp 0x528de0
// 00528dd8  8da42400000000       lea esp, [esp]
// 00528ddf  90                   nop 
// 00528de0  8b83fc010000         mov eax, dword ptr [ebx + 0x1fc]
// 00528de6  803c1001             cmp byte ptr [eax + edx], 1
// 00528dea  751c                 jne 0x528e08
// 00528dec  8b8304020000         mov eax, dword ptr [ebx + 0x204]
// 00528df2  0fb70450             movzx eax, word ptr [eax + edx*2]
// 00528df6  8be8                 mov ebp, eax
// 00528df8  0fafc1               imul eax, ecx
// 00528dfb  0fafee               imul ebp, esi
// 00528dfe  c1ed08               shr ebp, 8
// 00528e01  c1e808               shr eax, 8
// 00528e04  8bf5                 mov esi, ebp
// 00528e06  8bc8                 mov ecx, eax
// 00528e08  42                   inc edx
// 00528e09  3b542448             cmp edx, dword ptr [esp + 0x48]
// 00528e0d  7cd1                 jl 0x528de0
// 00528e0f  8b930c020000         mov edx, dword ptr [ebx + 0x20c]
// 00528e15  0fb75202             movzx edx, word ptr [edx + 2]
// 00528e19  8bc2                 mov eax, edx
// 00528e1b  0fafc1               imul eax, ecx
// 00528e1e  c1e803               shr eax, 3
// 00528e21  3dc0ff3f00           cmp eax, 0x3fffc0
// 00528e26  760a                 jbe 0x528e32
// 00528e28  c7442434ffffff7f     mov dword ptr [esp + 0x34], 0x7fffffff
// 00528e30  eb0f                 jmp 0x528e41
// 00528e32  0fafd6               imul edx, esi
// 00528e35  c1ea03               shr edx, 3
// 00528e38  c1e00a               shl eax, 0xa
// 00528e3b  03d0                 add edx, eax
// 00528e3d  89542434             mov dword ptr [esp + 0x34], edx
// 00528e41  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00528e45  8b8bf0000000         mov ecx, dword ptr [ebx + 0xf0]
// 00528e4b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00528e4f  45                   inc ebp
// 00528e50  41                   inc ecx
// 00528e51  897c2424             mov dword ptr [esp + 0x24], edi
// 00528e55  896c2430             mov dword ptr [esp + 0x30], ebp
// 00528e59  8bd5                 mov edx, ebp
// 00528e5b  85c0                 test eax, eax
// 00528e5d  762d                 jbe 0x528e8c
// 00528e5f  8be8                 mov ebp, eax
// 00528e61  89442424             mov dword ptr [esp + 0x24], eax
// 00528e65  8a02                 mov al, byte ptr [edx]
// 00528e67  0fb6f0               movzx esi, al
// 00528e6a  81fe80000000         cmp esi, 0x80
// 00528e70  8801                 mov byte ptr [ecx], al
// 00528e72  7d04                 jge 0x528e78
// 00528e74  8bc6                 mov eax, esi
// 00528e76  eb07                 jmp 0x528e7f
// 00528e78  b800010000           mov eax, 0x100
// 00528e7d  2bc6                 sub eax, esi
// 00528e7f  03f8                 add edi, eax
// 00528e81  42                   inc edx
// 00528e82  41                   inc ecx
// 00528e83  83ed01               sub ebp, 1
// 00528e86  75dd                 jne 0x528e65
// 00528e88  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00528e8c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00528e90  39442424             cmp dword ptr [esp + 0x24], eax
// 00528e94  7336                 jae 0x528ecc
// 00528e96  8a02                 mov al, byte ptr [edx]
// 00528e98  2a4500               sub al, byte ptr [ebp]
// 00528e9b  8801                 mov byte ptr [ecx], al
// 00528e9d  0fb6c0               movzx eax, al
// 00528ea0  3d80000000           cmp eax, 0x80
// 00528ea5  7d04                 jge 0x528eab
// 00528ea7  8bf0                 mov esi, eax
// 00528ea9  eb07                 jmp 0x528eb2
// 00528eab  be00010000           mov esi, 0x100
// 00528eb0  2bf0                 sub esi, eax
// 00528eb2  03fe                 add edi, esi
// 00528eb4  3b7c2434             cmp edi, dword ptr [esp + 0x34]
// 00528eb8  7712                 ja 0x528ecc
// 00528eba  8b442424             mov eax, dword ptr [esp + 0x24]
// 00528ebe  40                   inc eax
// 00528ebf  42                   inc edx
// 00528ec0  45                   inc ebp
// 00528ec1  41                   inc ecx
// 00528ec2  89442424             mov dword ptr [esp + 0x24], eax
// 00528ec6  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00528eca  72ca                 jb 0x528e96
// 00528ecc  80bbf801000002       cmp byte ptr [ebx + 0x1f8], 2
// 00528ed3  7572                 jne 0x528f47
// 00528ed5  0fb7f7               movzx esi, di
// 00528ed8  c1ef0a               shr edi, 0xa
// 00528edb  81e7c0ff3f00         and edi, 0x3fffc0
// 00528ee1  33c9                 xor ecx, ecx
// 00528ee3  394c2448             cmp dword ptr [esp + 0x48], ecx
// 00528ee7  8bd7                 mov edx, edi
// 00528ee9  7e2f                 jle 0x528f1a
// 00528eeb  8bbbfc010000         mov edi, dword ptr [ebx + 0x1fc]
// 00528ef1  803c0f01             cmp byte ptr [edi + ecx], 1
// 00528ef5  751c                 jne 0x528f13
// 00528ef7  8b8304020000         mov eax, dword ptr [ebx + 0x204]
// 00528efd  0fb70448             movzx eax, word ptr [eax + ecx*2]
// 00528f01  8be8                 mov ebp, eax
// 00528f03  0fafc2               imul eax, edx
// 00528f06  0fafee               imul ebp, esi
// 00528f09  c1ed08               shr ebp, 8
// 00528f0c  c1e808               shr eax, 8
// 00528f0f  8bf5                 mov esi, ebp
// 00528f11  8bd0                 mov edx, eax
// 00528f13  41                   inc ecx
// 00528f14  3b4c2448             cmp ecx, dword ptr [esp + 0x48]
// 00528f18  7cd7                 jl 0x528ef1
// 00528f1a  8b8b0c020000         mov ecx, dword ptr [ebx + 0x20c]
// 00528f20  0fb74902             movzx ecx, word ptr [ecx + 2]
// 00528f24  8bc1                 mov eax, ecx
// 00528f26  0fafc2               imul eax, edx
// 00528f29  c1e803               shr eax, 3
// 00528f2c  3dc0ff3f00           cmp eax, 0x3fffc0
// 00528f31  7607                 jbe 0x528f3a
// 00528f33  bfffffff7f           mov edi, 0x7fffffff
// 00528f38  eb0d                 jmp 0x528f47
// 00528f3a  0fafce               imul ecx, esi
// 00528f3d  c1e903               shr ecx, 3
// 00528f40  c1e00a               shl eax, 0xa
// 00528f43  03c8                 add ecx, eax
// 00528f45  8bf9                 mov edi, ecx
// 00528f47  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 00528f4b  730e                 jae 0x528f5b
// 00528f4d  8b93f0000000         mov edx, dword ptr [ebx + 0xf0]
// 00528f53  897c2418             mov dword ptr [esp + 0x18], edi
// 00528f57  8954241c             mov dword ptr [esp + 0x1c], edx
// 00528f5b  807c241320           cmp byte ptr [esp + 0x13], 0x20
// 00528f60  0f85aafdffff         jne 0x528d10
// 00528f66  8b83f4000000         mov eax, dword ptr [ebx + 0xf4]
// 00528f6c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00528f70  33c9                 xor ecx, ecx
// 00528f72  40                   inc eax
// 00528f73  8d7a01               lea edi, [edx + 1]
// 00528f76  394c2414             cmp dword ptr [esp + 0x14], ecx
// 00528f7a  7618                 jbe 0x528f94
// 00528f7c  8bf7                 mov esi, edi
// 00528f7e  2bf2                 sub esi, edx
// 00528f80  0374242c             add esi, dword ptr [esp + 0x2c]
// 00528f84  8a1439               mov dl, byte ptr [ecx + edi]
// 00528f87  2a16                 sub dl, byte ptr [esi]
// 00528f89  41                   inc ecx
// 00528f8a  8810                 mov byte ptr [eax], dl
// 00528f8c  46                   inc esi
// 00528f8d  40                   inc eax
// 00528f8e  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 00528f92  72f0                 jb 0x528f84
// 00528f94  8b83f4000000         mov eax, dword ptr [ebx + 0xf4]
// 00528f9a  8944241c             mov dword ptr [esp + 0x1c], eax
// 00528f9e  f644241340           test byte ptr [esp + 0x13], 0x40
// 00528fa3  0f840f040000         je 0x5293b8
// 00528fa9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00528fad  33d2                 xor edx, edx
// 00528faf  80bbf801000002       cmp byte ptr [ebx + 0x1f8], 2
// 00528fb6  89542424             mov dword ptr [esp + 0x24], edx
// 00528fba  894c2434             mov dword ptr [esp + 0x34], ecx
// 00528fbe  0f85a7020000         jne 0x52926b
// 00528fc4  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00528fc8  0fb7f1               movzx esi, cx
// 00528fcb  c1e90a               shr ecx, 0xa
// 00528fce  81e1c0ff3f00         and ecx, 0x3fffc0
// 00528fd4  3bfa                 cmp edi, edx
// 00528fd6  7e35                 jle 0x52900d
// 00528fd8  eb06                 jmp 0x528fe0
// 00528fda  8d9b00000000         lea ebx, [ebx]
// 00528fe0  8b83fc010000         mov eax, dword ptr [ebx + 0x1fc]
// 00528fe6  803c0203             cmp byte ptr [edx + eax], 3
// 00528fea  751c                 jne 0x529008
// 00528fec  8b8304020000         mov eax, dword ptr [ebx + 0x204]
// 00528ff2  0fb70450             movzx eax, word ptr [eax + edx*2]
// 00528ff6  8be8                 mov ebp, eax
// 00528ff8  0fafc1               imul eax, ecx
// 00528ffb  0fafee               imul ebp, esi
// 00528ffe  c1ed08               shr ebp, 8
// 00529001  c1e808               shr eax, 8
// 00529004  8bf5                 mov esi, ebp
// 00529006  8bc8                 mov ecx, eax
// 00529008  42                   inc edx
// 00529009  3bd7                 cmp edx, edi
// 0052900b  7cd3                 jl 0x528fe0
// 0052900d  8b930c020000         mov edx, dword ptr [ebx + 0x20c]
// 00529013  0fb75206             movzx edx, word ptr [edx + 6]
// 00529017  8bc2                 mov eax, edx
// 00529019  0fafc1               imul eax, ecx
// 0052901c  c1e803               shr eax, 3
// 0052901f  3dc0ff3f00           cmp eax, 0x3fffc0
// 00529024  0f8632020000         jbe 0x52925c
// 0052902a  c7442434ffffff7f     mov dword ptr [esp + 0x34], 0x7fffffff
// 00529032  e934020000           jmp 0x52926b
// 00529037  0fafd6               imul edx, esi
// 0052903a  c1ea03               shr edx, 3
// 0052903d  c1e00a               shl eax, 0xa
// 00529040  03d0                 add edx, eax
// 00529042  89542434             mov dword ptr [esp + 0x34], edx
// 00529046  8b542420             mov edx, dword ptr [esp + 0x20]
// 0052904a  8b8bf4000000         mov ecx, dword ptr [ebx + 0xf4]
// 00529050  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00529054  42                   inc edx
// 00529055  41                   inc ecx
// 00529056  40                   inc eax
// 00529057  837c241400           cmp dword ptr [esp + 0x14], 0
// 0052905c  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00529064  7640                 jbe 0x5290a6
// 00529066  8be8                 mov ebp, eax
// 00529068  2bea                 sub ebp, edx
// 0052906a  8d9b00000000         lea ebx, [ebx]
// 00529070  8a02                 mov al, byte ptr [edx]
// 00529072  2a042a               sub al, byte ptr [edx + ebp]
// 00529075  41                   inc ecx
// 00529076  8841ff               mov byte ptr [ecx - 1], al
// 00529079  0fb6c0               movzx eax, al
// 0052907c  42                   inc edx
// 0052907d  3d80000000           cmp eax, 0x80
// 00529082  7d04                 jge 0x529088
// 00529084  8bf0                 mov esi, eax
// 00529086  eb07                 jmp 0x52908f
// 00529088  be00010000           mov esi, 0x100
// 0052908d  2bf0                 sub esi, eax
// 0052908f  03fe                 add edi, esi
// 00529091  3b7c2434             cmp edi, dword ptr [esp + 0x34]
// 00529095  770f                 ja 0x5290a6
// 00529097  8b442438             mov eax, dword ptr [esp + 0x38]
// 0052909b  40                   inc eax
// 0052909c  89442438             mov dword ptr [esp + 0x38], eax
// 005290a0  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005290a4  72ca                 jb 0x529070
// 005290a6  80bbf801000002       cmp byte ptr [ebx + 0x1f8], 2
// 005290ad  7577                 jne 0x529126
// 005290af  0fb7f7               movzx esi, di
// 005290b2  c1ef0a               shr edi, 0xa
// 005290b5  81e7c0ff3f00         and edi, 0x3fffc0
// 005290bb  33c9                 xor ecx, ecx
// 005290bd  394c2448             cmp dword ptr [esp + 0x48], ecx
// 005290c1  8bd7                 mov edx, edi
// 005290c3  7e34                 jle 0x5290f9
// 005290c5  8bbbfc010000         mov edi, dword ptr [ebx + 0x1fc]
// 005290cb  eb03                 jmp 0x5290d0
// 005290cd  8d4900               lea ecx, [ecx]
// 005290d0  803c0f02             cmp byte ptr [edi + ecx], 2
// 005290d4  751c                 jne 0x5290f2
// 005290d6  8b8300020000         mov eax, dword ptr [ebx + 0x200]
// 005290dc  0fb70448             movzx eax, word ptr [eax + ecx*2]
// 005290e0  8be8                 mov ebp, eax
// 005290e2  0fafc2               imul eax, edx
// 005290e5  0fafee               imul ebp, esi
// 005290e8  c1ed08               shr ebp, 8
// 005290eb  c1e808               shr eax, 8
// 005290ee  8bf5                 mov esi, ebp
// 005290f0  8bd0                 mov edx, eax
// 005290f2  41                   inc ecx
// 005290f3  3b4c2448             cmp ecx, dword ptr [esp + 0x48]
// 005290f7  7cd7                 jl 0x5290d0
// 005290f9  8b8b08020000         mov ecx, dword ptr [ebx + 0x208]
// 005290ff  0fb74904             movzx ecx, word ptr [ecx + 4]
// 00529103  8bc1                 mov eax, ecx
// 00529105  0fafc2               imul eax, edx
// 00529108  c1e803               shr eax, 3
// 0052910b  3dc0ff3f00           cmp eax, 0x3fffc0
// 00529110  7607                 jbe 0x529119
// 00529112  bfffffff7f           mov edi, 0x7fffffff
// 00529117  eb0d                 jmp 0x529126
// 00529119  0fafce               imul ecx, esi
// 0052911c  c1e903               shr ecx, 3
// 0052911f  c1e00a               shl eax, 0xa
// 00529122  03c8                 add ecx, eax
// 00529124  8bf9                 mov edi, ecx
// 00529126  3b7c2418             cmp edi, dword ptr [esp + 0x18]
// 0052912a  730e                 jae 0x52913a
// 0052912c  8b93f4000000         mov edx, dword ptr [ebx + 0xf4]
// 00529132  897c2418             mov dword ptr [esp + 0x18], edi
// 00529136  8954241c             mov dword ptr [esp + 0x1c], edx
// 0052913a  807c241340           cmp byte ptr [esp + 0x13], 0x40
// 0052913f  0f8559feffff         jne 0x528f9e
// 00529145  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00529149  8b8bf8000000         mov ecx, dword ptr [ebx + 0xf8]
// 0052914f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00529153  8b542428             mov edx, dword ptr [esp + 0x28]
// 00529157  45                   inc ebp
// 00529158  33c0                 xor eax, eax
// 0052915a  41                   inc ecx
// 0052915b  46                   inc esi
// 0052915c  8bfd                 mov edi, ebp
// 0052915e  85d2                 test edx, edx
// 00529160  7626                 jbe 0x529188
// 00529162  89542444             mov dword ptr [esp + 0x44], edx
// 00529166  89542438             mov dword ptr [esp + 0x38], edx
// 0052916a  8d9b00000000         lea ebx, [ebx]
// 00529170  8a06                 mov al, byte ptr [esi]
// 00529172  8a17                 mov dl, byte ptr [edi]
// 00529174  d0e8                 shr al, 1
// 00529176  2ad0                 sub dl, al
// 00529178  8811                 mov byte ptr [ecx], dl
// 0052917a  41                   inc ecx
// 0052917b  46                   inc esi
// 0052917c  47                   inc edi
// 0052917d  836c244401           sub dword ptr [esp + 0x44], 1
// 00529182  75ec                 jne 0x529170
// 00529184  8b442438             mov eax, dword ptr [esp + 0x38]
// 00529188  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0052918c  7331                 jae 0x5291bf
// 0052918e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00529192  2bd0                 sub edx, eax
// 00529194  89542444             mov dword ptr [esp + 0x44], edx
// 00529198  eb06                 jmp 0x5291a0
// 0052919a  8d9b00000000         lea ebx, [ebx]
// 005291a0  0fb65500             movzx edx, byte ptr [ebp]
// 005291a4  0fb606               movzx eax, byte ptr [esi]
// 005291a7  03c2                 add eax, edx
// 005291a9  99                   cdq 
// 005291aa  2bc2                 sub eax, edx
// 005291ac  8a17                 mov dl, byte ptr [edi]
// 005291ae  d1f8                 sar eax, 1
// 005291b0  2ad0                 sub dl, al
// 005291b2  8811                 mov byte ptr [ecx], dl
// 005291b4  41                   inc ecx
// 005291b5  45                   inc ebp
// 005291b6  46                   inc esi
// 005291b7  47                   inc edi
// 005291b8  836c244401           sub dword ptr [esp + 0x44], 1
// 005291bd  75e1                 jne 0x5291a0
// 005291bf  8b83f8000000         mov eax, dword ptr [ebx + 0xf8]
// 005291c5  8944241c             mov dword ptr [esp + 0x1c], eax
// 005291c9  f644241380           test byte ptr [esp + 0x13], 0x80
// 005291ce  0f84a6040000         je 0x52967a
// 005291d4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005291d8  33ed                 xor ebp, ebp
// 005291da  80bbf801000002       cmp byte ptr [ebx + 0x1f8], 2
// 005291e1  896c2424             mov dword ptr [esp + 0x24], ebp
// 005291e5  894c2438             mov dword ptr [esp + 0x38], ecx
// 005291e9  0f85c7020000         jne 0x5294b6
// 005291ef  0fb7f1               movzx esi, cx
// 005291f2  c1e90a               shr ecx, 0xa
// 005291f5  33d2                 xor edx, edx
// 005291f7  81e1c0ff3f00         and ecx, 0x3fffc0
// 005291fd  39542448             cmp dword ptr [esp + 0x48], edx
// 00529201  7e2f                 jle 0x529232
// 00529203  8b83fc010000         mov eax, dword ptr [ebx + 0x1fc]
// 00529209  803c0204             cmp byte ptr [edx + eax], 4
// 0052920d  751c                 jne 0x52922b
// 0052920f  8b8304020000         mov eax, dword ptr [ebx + 0x204]
// 00529215  0fb70450             movzx eax, word ptr [eax + edx*2]
// 00529219  8bf8                 mov edi, eax
// 0052921b  0fafc1               imul eax, ecx
// 0052921e  0faffe               imul edi, esi
// 00529221  c1ef08               shr edi, 8
// 00529224  c1e808               shr eax, 8
// 00529227  8bf7                 mov esi, edi
// 00529229  8bc8                 mov ecx, eax
// 0052922b  42                   inc edx
// 0052922c  3b542448             cmp edx, dword ptr [esp + 0x48]
// 00529230  7cd1                 jl 0x529203
// 00529232  8b930c020000         mov edx, dword ptr [ebx + 0x20c]
// 00529238  0fb75208             movzx edx, word ptr [edx + 8]
// 0052923c  8bc2                 mov eax, edx
// 0052923e  0fafc1               imul eax, ecx
// 00529241  c1e803               shr eax, 3
// 00529244  3dc0ff3f00           cmp eax, 0x3fffc0
// 00529249  0f8658020000         jbe 0x5294a7
// 0052924f  c7442438ffffff7f     mov dword ptr [esp + 0x38], 0x7fffffff
// 00529257  e95a020000           jmp 0x5294b6
// 0052925c  0fafd6               imul edx, esi
// 0052925f  c1ea03               shr edx, 3
// 00529262  c1e00a               shl eax, 0xa
// 00529265  03d0                 add edx, eax
// 00529267  89542434             mov dword ptr [esp + 0x34], edx
// 0052926b  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052926f  8b8bf8000000         mov ecx, dword ptr [ebx + 0xf8]
// 00529275  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00529279  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052927d  45                   inc ebp
// 0052927e  41                   inc ecx
// 0052927f  46                   inc esi
// 00529280  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00529288  8bfd                 mov edi, ebp
// 0052928a  85c0                 test eax, eax
// 0052928c  7635                 jbe 0x5292c3
// 0052928e  89442438             mov dword ptr [esp + 0x38], eax
// 00529292  89442430             mov dword ptr [esp + 0x30], eax
// 00529296  8a16                 mov dl, byte ptr [esi]
// 00529298  8a07                 mov al, byte ptr [edi]
// 0052929a  d0ea                 shr dl, 1
// 0052929c  2ac2                 sub al, dl
// 0052929e  8801                 mov byte ptr [ecx], al
// 005292a0  0fb6c0               movzx eax, al
// 005292a3  41                   inc ecx
// 005292a4  46                   inc esi
// 005292a5  47                   inc edi
// 005292a6  3d80000000           cmp eax, 0x80
// 005292ab  7d04                 jge 0x5292b1
// 005292ad  8bd0                 mov edx, eax
// 005292af  eb07                 jmp 0x5292b8
// 005292b1  ba00010000           mov edx, 0x100
// 005292b6  2bd0                 sub edx, eax
// 005292b8  01542424             add dword ptr [esp + 0x24], edx
// 005292bc  836c243801           sub dword ptr [esp + 0x38], 1
// 005292c1  75d3                 jne 0x529296
// 005292c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005292c7  39442430             cmp dword ptr [esp + 0x30], eax
// 005292cb  7351                 jae 0x52931e
// 005292cd  8d4900               lea ecx, [ecx]
// 005292d0  0fb616               movzx edx, byte ptr [esi]
// 005292d3  0fb64500             movzx eax, byte ptr [ebp]
// 005292d7  03c2                 add eax, edx
// 005292d9  99                   cdq 
// 005292da  2bc2                 sub eax, edx
// 005292dc  8bd0                 mov edx, eax
// 005292de  8a07                 mov al, byte ptr [edi]
// 005292e0  d1fa                 sar edx, 1
// 005292e2  2ac2                 sub al, dl
// 005292e4  8801                 mov byte ptr [ecx], al
// 005292e6  0fb6c0               movzx eax, al
// 005292e9  41                   inc ecx
// 005292ea  45                   inc ebp
// 005292eb  46                   inc esi
// 005292ec  47                   inc edi
// 005292ed  3d80000000           cmp eax, 0x80
// 005292f2  7d04                 jge 0x5292f8
// 005292f4  8bd0                 mov edx, eax
// 005292f6  eb07                 jmp 0x5292ff
// 005292f8  ba00010000           mov edx, 0x100
// 005292fd  2bd0                 sub edx, eax
// 005292ff  8b442424             mov eax, dword ptr [esp + 0x24]
// 00529303  03c2                 add eax, edx
// 00529305  89442424             mov dword ptr [esp + 0x24], eax
// 00529309  3b442434             cmp eax, dword ptr [esp + 0x34]
// 0052930d  770f                 ja 0x52931e
// 0052930f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00529313  40                   inc eax
// 00529314  89442430             mov dword ptr [esp + 0x30], eax
// 00529318  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0052931c  72b2                 jb 0x5292d0
// 0052931e  80bbf801000002       cmp byte ptr [ebx + 0x1f8], 2
// 00529325  7579                 jne 0x5293a0
// 00529327  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052932b  0fb7f2               movzx esi, dx
// 0052932e  c1ea0a               shr edx, 0xa
// 00529331  33c9                 xor ecx, ecx
// 00529333  81e2c0ff3f00         and edx, 0x3fffc0
// 00529339  394c2448             cmp dword ptr [esp + 0x48], ecx
// 0052933d  7e2f                 jle 0x52936e
// 0052933f  8bbbfc010000         mov edi, dword ptr [ebx + 0x1fc]
// 00529345  803c3900             cmp byte ptr [ecx + edi], 0
// 00529349  751c                 jne 0x529367
// 0052934b  8b8300020000         mov eax, dword ptr [ebx + 0x200]
// 00529351  0fb70448             movzx eax, word ptr [eax + ecx*2]
// 00529355  8be8                 mov ebp, eax
// 00529357  0fafc2               imul eax, edx
// 0052935a  0fafee               imul ebp, esi
// 0052935d  c1ed08               shr ebp, 8
// 00529360  c1e808               shr eax, 8
// 00529363  8bf5                 mov esi, ebp
// 00529365  8bd0                 mov edx, eax
// 00529367  41                   inc ecx
// 00529368  3b4c2448             cmp ecx, dword ptr [esp + 0x48]
// 0052936c  7cd7                 jl 0x529345
// 0052936e  8b8b08020000         mov ecx, dword ptr [ebx + 0x208]
// 00529374  0fb74906             movzx ecx, word ptr [ecx + 6]
// 00529378  8bc1                 mov eax, ecx
// 0052937a  0fafc2               imul eax, edx
// 0052937d  c1e803               shr eax, 3
// 00529380  3dc0ff3f00           cmp eax, 0x3fffc0
// 00529385  760a                 jbe 0x529391
// 00529387  c7442424ffffff7f     mov dword ptr [esp + 0x24], 0x7fffffff
// 0052938f  eb0f                 jmp 0x5293a0
// 00529391  0fafce               imul ecx, esi
// 00529394  c1e903               shr ecx, 3
// 00529397  c1e00a               shl eax, 0xa
// 0052939a  03c8                 add ecx, eax
// 0052939c  894c2424             mov dword ptr [esp + 0x24], ecx
// 005293a0  8b442424             mov eax, dword ptr [esp + 0x24]
// 005293a4  3b442418             cmp eax, dword ptr [esp + 0x18]
// 005293a8  730e                 jae 0x5293b8
// 005293aa  8b93f8000000         mov edx, dword ptr [ebx + 0xf8]
// 005293b0  89442418             mov dword ptr [esp + 0x18], eax
// 005293b4  8954241c             mov dword ptr [esp + 0x1c], edx
// 005293b8  807c241380           cmp byte ptr [esp + 0x13], 0x80
// 005293bd  0f8506feffff         jne 0x5291c9
// 005293c3  8b442420             mov eax, dword ptr [esp + 0x20]
// 005293c7  8bbbfc000000         mov edi, dword ptr [ebx + 0xfc]
// 005293cd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005293d1  40                   inc eax
// 005293d2  42                   inc edx
// 005293d3  47                   inc edi
// 005293d4  837c242800           cmp dword ptr [esp + 0x28], 0
// 005293d9  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005293e1  8bc8                 mov ecx, eax
// 005293e3  89442430             mov dword ptr [esp + 0x30], eax
// 005293e7  8bf2                 mov esi, edx
// 005293e9  761b                 jbe 0x529406
// 005293eb  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005293ef  896c2434             mov dword ptr [esp + 0x34], ebp
// 005293f3  8a19                 mov bl, byte ptr [ecx]
// 005293f5  2a1e                 sub bl, byte ptr [esi]
// 005293f7  47                   inc edi
// 005293f8  885fff               mov byte ptr [edi - 1], bl
// 005293fb  46                   inc esi
// 005293fc  41                   inc ecx
// 005293fd  83ed01               sub ebp, 1
// 00529400  75f1                 jne 0x5293f3
// 00529402  894c2430             mov dword ptr [esp + 0x30], ecx
// 00529406  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052940a  8be8                 mov ebp, eax
// 0052940c  395c2434             cmp dword ptr [esp + 0x34], ebx
// 00529410  0f8388000000         jae 0x52949e
// 00529416  8bca                 mov ecx, edx
// 00529418  2bc8                 sub ecx, eax
// 0052941a  2b5c2434             sub ebx, dword ptr [esp + 0x34]
// 0052941e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00529422  895c2434             mov dword ptr [esp + 0x34], ebx
// 00529426  eb0c                 jmp 0x529434
// 00529428  eb06                 jmp 0x529430
// 0052942a  8d9b00000000         lea ebx, [ebx]
// 00529430  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00529434  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 00529438  0fb606               movzx eax, byte ptr [esi]
// 0052943b  0fb64d00             movzx ecx, byte ptr [ebp]
// 0052943f  89442424             mov dword ptr [esp + 0x24], eax
// 00529443  894c2428             mov dword ptr [esp + 0x28], ecx
// 00529447  2bc2                 sub eax, edx
// 00529449  46                   inc esi
// 0052944a  45                   inc ebp
// 0052944b  2bca                 sub ecx, edx
// 0052944d  85c0                 test eax, eax
// 0052944f  7d0a                 jge 0x52945b
// 00529451  8bd8                 mov ebx, eax
// 00529453  f7db                 neg ebx
// 00529455  895c2438             mov dword ptr [esp + 0x38], ebx
// 00529459  eb04                 jmp 0x52945f
// 0052945b  89442438             mov dword ptr [esp + 0x38], eax
// 0052945f  8bd9                 mov ebx, ecx
// 00529461  85c9                 test ecx, ecx
// 00529463  7d02                 jge 0x529467
// 00529465  f7db                 neg ebx
// 00529467  03c1                 add eax, ecx
// 00529469  7902                 jns 0x52946d
// 0052946b  f7d8                 neg eax
// 0052946d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00529471  3bcb                 cmp ecx, ebx
// 00529473  7f0a                 jg 0x52947f
// 00529475  3bc8                 cmp ecx, eax
// 00529477  7f06                 jg 0x52947f
// 00529479  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052947d  eb08                 jmp 0x529487
// 0052947f  3bd8                 cmp ebx, eax
// 00529481  7f04                 jg 0x529487
// 00529483  8b542424             mov edx, dword ptr [esp + 0x24]
// 00529487  8b442430             mov eax, dword ptr [esp + 0x30]
// 0052948b  8a08                 mov cl, byte ptr [eax]
// 0052948d  2aca                 sub cl, dl
// 0052948f  880f                 mov byte ptr [edi], cl
// 00529491  40                   inc eax
// 00529492  47                   inc edi
// 00529493  836c243401           sub dword ptr [esp + 0x34], 1
// 00529498  89442430             mov dword ptr [esp + 0x30], eax
// 0052949c  7592                 jne 0x529430
// 0052949e  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 005294a2  e9c9010000           jmp 0x529670
// 005294a7  0fafd6               imul edx, esi
// 005294aa  c1ea03               shr edx, 3
// 005294ad  c1e00a               shl eax, 0xa
// 005294b0  03d0                 add edx, eax
// 005294b2  89542438             mov dword ptr [esp + 0x38], edx
// 005294b6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005294ba  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005294be  8bb3fc000000         mov esi, dword ptr [ebx + 0xfc]
// 005294c4  8b442428             mov eax, dword ptr [esp + 0x28]
// 005294c8  47                   inc edi
// 005294c9  42                   inc edx
// 005294ca  46                   inc esi
// 005294cb  c744244400000000     mov dword ptr [esp + 0x44], 0
// 005294d3  897c2430             mov dword ptr [esp + 0x30], edi
// 005294d7  897c2434             mov dword ptr [esp + 0x34], edi
// 005294db  8954242c             mov dword ptr [esp + 0x2c], edx
// 005294df  85c0                 test eax, eax
// 005294e1  763d                 jbe 0x529520
// 005294e3  89442434             mov dword ptr [esp + 0x34], eax
// 005294e7  89442444             mov dword ptr [esp + 0x44], eax
// 005294eb  eb03                 jmp 0x5294f0
// 005294ed  8d4900               lea ecx, [ecx]
// 005294f0  8a07                 mov al, byte ptr [edi]
// 005294f2  2a02                 sub al, byte ptr [edx]
// 005294f4  46                   inc esi
// 005294f5  8846ff               mov byte ptr [esi - 1], al
// 005294f8  0fb6c0               movzx eax, al
// 005294fb  42                   inc edx
// 005294fc  47                   inc edi
// 005294fd  3d80000000           cmp eax, 0x80
// 00529502  7d04                 jge 0x529508
// 00529504  8bc8                 mov ecx, eax
// 00529506  eb07                 jmp 0x52950f
// 00529508  b900010000           mov ecx, 0x100
// 0052950d  2bc8                 sub ecx, eax
// 0052950f  03e9                 add ebp, ecx
// 00529511  836c243401           sub dword ptr [esp + 0x34], 1
// 00529516  75d8                 jne 0x5294f0
// 00529518  896c2424             mov dword ptr [esp + 0x24], ebp
// 0052951c  897c2434             mov dword ptr [esp + 0x34], edi
// 00529520  8b442444             mov eax, dword ptr [esp + 0x44]
// 00529524  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00529528  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0052952c  0f83b8000000         jae 0x5295ea
// 00529532  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00529536  2bf9                 sub edi, ecx
// 00529538  897c242c             mov dword ptr [esp + 0x2c], edi
// 0052953c  eb0e                 jmp 0x52954c
// 0052953e  8bff                 mov edi, edi
// 00529540  8b542428             mov edx, dword ptr [esp + 0x28]
// 00529544  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00529548  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0052954c  0fb602               movzx eax, byte ptr [edx]
// 0052954f  42                   inc edx
// 00529550  89542428             mov dword ptr [esp + 0x28], edx
// 00529554  0fb6140f             movzx edx, byte ptr [edi + ecx]
// 00529558  0fb639               movzx edi, byte ptr [ecx]
// 0052955b  41                   inc ecx
// 0052955c  894c2420             mov dword ptr [esp + 0x20], ecx
// 00529560  8944243c             mov dword ptr [esp + 0x3c], eax
// 00529564  8bcf                 mov ecx, edi
// 00529566  2bc2                 sub eax, edx
// 00529568  2bca                 sub ecx, edx
// 0052956a  85c0                 test eax, eax
// 0052956c  7d0a                 jge 0x529578
// 0052956e  8be8                 mov ebp, eax
// 00529570  f7dd                 neg ebp
// 00529572  896c2430             mov dword ptr [esp + 0x30], ebp
// 00529576  eb04                 jmp 0x52957c
// 00529578  89442430             mov dword ptr [esp + 0x30], eax
// 0052957c  8be9                 mov ebp, ecx
// 0052957e  85c9                 test ecx, ecx
// 00529580  7d02                 jge 0x529584
// 00529582  f7dd                 neg ebp
// 00529584  03c1                 add eax, ecx
// 00529586  7902                 jns 0x52958a
// 00529588  f7d8                 neg eax
// 0052958a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052958e  3bcd                 cmp ecx, ebp
// 00529590  7f08                 jg 0x52959a
// 00529592  3bc8                 cmp ecx, eax
// 00529594  7f04                 jg 0x52959a
// 00529596  8bd7                 mov edx, edi
// 00529598  eb08                 jmp 0x5295a2
// 0052959a  3be8                 cmp ebp, eax
// 0052959c  7f04                 jg 0x5295a2
// 0052959e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 005295a2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005295a6  8a01                 mov al, byte ptr [ecx]
// 005295a8  2ac2                 sub al, dl
// 005295aa  8806                 mov byte ptr [esi], al
// 005295ac  0fb6c0               movzx eax, al
// 005295af  41                   inc ecx
// 005295b0  46                   inc esi
// 005295b1  3d80000000           cmp eax, 0x80
// 005295b6  894c2434             mov dword ptr [esp + 0x34], ecx
// 005295ba  7d04                 jge 0x5295c0
// 005295bc  8bc8                 mov ecx, eax
// 005295be  eb07                 jmp 0x5295c7
// 005295c0  b900010000           mov ecx, 0x100
// 005295c5  2bc8                 sub ecx, eax
// 005295c7  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005295cb  03e9                 add ebp, ecx
// 005295cd  896c2424             mov dword ptr [esp + 0x24], ebp
// 005295d1  3b6c2438             cmp ebp, dword ptr [esp + 0x38]
// 005295d5  7713                 ja 0x5295ea
// 005295d7  8b442444             mov eax, dword ptr [esp + 0x44]
// 005295db  40                   inc eax
// 005295dc  89442444             mov dword ptr [esp + 0x44], eax
// 005295e0  3b442414             cmp eax, dword ptr [esp + 0x14]
// 005295e4  0f8256ffffff         jb 0x529540
// 005295ea  80bbf801000002       cmp byte ptr [ebx + 0x1f8], 2
// 005295f1  7577                 jne 0x52966a
// 005295f3  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 005295f7  0fb7f5               movzx esi, bp
// 005295fa  c1ed0a               shr ebp, 0xa
// 005295fd  81e5c0ff3f00         and ebp, 0x3fffc0
// 00529603  33c9                 xor ecx, ecx
// 00529605  8bd5                 mov edx, ebp
// 00529607  85ff                 test edi, edi
// 00529609  7e32                 jle 0x52963d
// 0052960b  eb03                 jmp 0x529610
// 0052960d  8d4900               lea ecx, [ecx]
// 00529610  8b83fc010000         mov eax, dword ptr [ebx + 0x1fc]
// 00529616  803c0104             cmp byte ptr [ecx + eax], 4
// 0052961a  751c                 jne 0x529638
// 0052961c  8b8300020000         mov eax, dword ptr [ebx + 0x200]
// 00529622  0fb70448             movzx eax, word ptr [eax + ecx*2]
// 00529626  8be8                 mov ebp, eax
// 00529628  0fafc2               imul eax, edx
// 0052962b  0fafee               imul ebp, esi
// 0052962e  c1ed08               shr ebp, 8
// 00529631  c1e808               shr eax, 8
// 00529634  8bf5                 mov esi, ebp
// 00529636  8bd0                 mov edx, eax
// 00529638  41                   inc ecx
// 00529639  3bcf                 cmp ecx, edi
// 0052963b  7cd3                 jl 0x529610
// 0052963d  8b8b08020000         mov ecx, dword ptr [ebx + 0x208]
// 00529643  0fb74908             movzx ecx, word ptr [ecx + 8]
// 00529647  8bc1                 mov eax, ecx
// 00529649  0fafc2               imul eax, edx
// 0052964c  c1e803               shr eax, 3
// 0052964f  3dc0ff3f00           cmp eax, 0x3fffc0
// 00529654  7607                 jbe 0x52965d
// 00529656  bdffffff7f           mov ebp, 0x7fffffff
// 0052965b  eb0d                 jmp 0x52966a
// 0052965d  0fafce               imul ecx, esi
// 00529660  c1e903               shr ecx, 3
// 00529663  c1e00a               shl eax, 0xa
// 00529666  03c8                 add ecx, eax
// 00529668  8be9                 mov ebp, ecx
// 0052966a  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0052966e  730a                 jae 0x52967a
// 00529670  8b93fc000000         mov edx, dword ptr [ebx + 0xfc]
// 00529676  8954241c             mov dword ptr [esp + 0x1c], edx
// 0052967a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052967e  50                   push eax
// 0052967f  53                   push ebx
// 00529680  e84bf4ffff           call 0x528ad0
// 00529685  83c408               add esp, 8
// 00529688  80bbf901000000       cmp byte ptr [ebx + 0x1f9], 0
// 0052968f  7633                 jbe 0x5296c4
// 00529691  b801000000           mov eax, 1
// 00529696  39442448             cmp dword ptr [esp + 0x48], eax
// 0052969a  7e19                 jle 0x5296b5
// 0052969c  8d642400             lea esp, [esp]
// 005296a0  8b8bfc010000         mov ecx, dword ptr [ebx + 0x1fc]
// 005296a6  8a5401ff             mov dl, byte ptr [ecx + eax - 1]
// 005296aa  03c8                 add ecx, eax
// 005296ac  40                   inc eax
// 005296ad  3b442448             cmp eax, dword ptr [esp + 0x48]
// 005296b1  8811                 mov byte ptr [ecx], dl
// 005296b3  7ceb                 jl 0x5296a0
// 005296b5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005296b9  8b8bfc010000         mov ecx, dword ptr [ebx + 0x1fc]
// 005296bf  8a12                 mov dl, byte ptr [edx]
// 005296c1  881408               mov byte ptr [eax + ecx], dl
// 005296c4  5f                   pop edi
// 005296c5  5e                   pop esi
// 005296c6  5d                   pop ebp
// 005296c7  5b                   pop ebx
// 005296c8  83c430               add esp, 0x30
// 005296cb  c3                   ret 
// library libpng-1.2.6/pngwutil.c (function _png_write_find_filter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwutil.c
