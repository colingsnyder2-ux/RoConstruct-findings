// roc 2007-03 00723b90  unit: seg_00720000  size: 1262 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00723b90
//
// 00723b90  81ec8c000000         sub esp, 0x8c
// 00723b96  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00723b9b  33c4                 xor eax, esp
// 00723b9d  89842488000000       mov dword ptr [esp + 0x88], eax
// 00723ba4  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00723bab  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00723bb2  53                   push ebx
// 00723bb3  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 00723bba  55                   push ebp
// 00723bbb  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 00723bc2  56                   push esi
// 00723bc3  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 00723bca  89442418             mov dword ptr [esp + 0x18], eax
// 00723bce  33c0                 xor eax, eax
// 00723bd0  85f6                 test esi, esi
// 00723bd2  896c2450             mov dword ptr [esp + 0x50], ebp
// 00723bd6  895c2438             mov dword ptr [esp + 0x38], ebx
// 00723bda  89542448             mov dword ptr [esp + 0x48], edx
// 00723bde  89442454             mov dword ptr [esp + 0x54], eax
// 00723be2  89442458             mov dword ptr [esp + 0x58], eax
// 00723be6  8944245c             mov dword ptr [esp + 0x5c], eax
// 00723bea  89442460             mov dword ptr [esp + 0x60], eax
// 00723bee  89442464             mov dword ptr [esp + 0x64], eax
// 00723bf2  89442468             mov dword ptr [esp + 0x68], eax
// 00723bf6  8944246c             mov dword ptr [esp + 0x6c], eax
// 00723bfa  89442470             mov dword ptr [esp + 0x70], eax
// 00723bfe  7616                 jbe 0x723c16
// 00723c00  0fb74c4500           movzx ecx, word ptr [ebp + eax*2]
// 00723c05  6683444c5401         add word ptr [esp + ecx*2 + 0x54], 1
// 00723c0b  8d4c4c54             lea ecx, [esp + ecx*2 + 0x54]
// 00723c0f  83c001               add eax, 1
// 00723c12  3bc6                 cmp eax, esi
// 00723c14  72ea                 jb 0x723c00
// 00723c16  8b02                 mov eax, dword ptr [edx]
// 00723c18  89442410             mov dword ptr [esp + 0x10], eax
// 00723c1c  b90f000000           mov ecx, 0xf
// 00723c21  66837c4c5400         cmp word ptr [esp + ecx*2 + 0x54], 0
// 00723c27  7508                 jne 0x723c31
// 00723c29  83e901               sub ecx, 1
// 00723c2c  83f901               cmp ecx, 1
// 00723c2f  73f0                 jae 0x723c21
// 00723c31  3bc1                 cmp eax, ecx
// 00723c33  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00723c37  7606                 jbe 0x723c3f
// 00723c39  894c2410             mov dword ptr [esp + 0x10], ecx
// 00723c3d  8bc1                 mov eax, ecx
// 00723c3f  85c9                 test ecx, ecx
// 00723c41  7541                 jne 0x723c84
// 00723c43  66894c240e           mov word ptr [esp + 0xe], cx
// 00723c48  8b0b                 mov ecx, dword ptr [ebx]
// 00723c4a  c644240c40           mov byte ptr [esp + 0xc], 0x40
// 00723c4f  c644240d01           mov byte ptr [esp + 0xd], 1
// 00723c54  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00723c58  8901                 mov dword ptr [ecx], eax
// 00723c5a  830304               add dword ptr [ebx], 4
// 00723c5d  8b0b                 mov ecx, dword ptr [ebx]
// 00723c5f  5e                   pop esi
// 00723c60  8901                 mov dword ptr [ecx], eax
// 00723c62  830304               add dword ptr [ebx], 4
// 00723c65  5d                   pop ebp
// 00723c66  c70201000000         mov dword ptr [edx], 1
// 00723c6c  33c0                 xor eax, eax
// 00723c6e  5b                   pop ebx
// 00723c6f  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00723c76  33cc                 xor ecx, esp
// 00723c78  e829b2efff           call 0x61eea6
// 00723c7d  81c48c000000         add esp, 0x8c
// 00723c83  c3                   ret 
// 00723c84  be01000000           mov esi, 1
// 00723c89  8da42400000000       lea esp, [esp]
// 00723c90  66837c745400         cmp word ptr [esp + esi*2 + 0x54], 0
// 00723c96  753c                 jne 0x723cd4
// 00723c98  66837c745600         cmp word ptr [esp + esi*2 + 0x56], 0
// 00723c9e  7522                 jne 0x723cc2
// 00723ca0  66837c745800         cmp word ptr [esp + esi*2 + 0x58], 0
// 00723ca6  751f                 jne 0x723cc7
// 00723ca8  66837c745a00         cmp word ptr [esp + esi*2 + 0x5a], 0
// 00723cae  751c                 jne 0x723ccc
// 00723cb0  66837c745c00         cmp word ptr [esp + esi*2 + 0x5c], 0
// 00723cb6  7519                 jne 0x723cd1
// 00723cb8  83c605               add esi, 5
// 00723cbb  83fe0f               cmp esi, 0xf
// 00723cbe  76d0                 jbe 0x723c90
// 00723cc0  eb12                 jmp 0x723cd4
// 00723cc2  83c601               add esi, 1
// 00723cc5  eb0d                 jmp 0x723cd4
// 00723cc7  83c602               add esi, 2
// 00723cca  eb08                 jmp 0x723cd4
// 00723ccc  83c603               add esi, 3
// 00723ccf  eb03                 jmp 0x723cd4
// 00723cd1  83c604               add esi, 4
// 00723cd4  3bc6                 cmp eax, esi
// 00723cd6  7304                 jae 0x723cdc
// 00723cd8  89742410             mov dword ptr [esp + 0x10], esi
// 00723cdc  ba01000000           mov edx, 1
// 00723ce1  8bc2                 mov eax, edx
// 00723ce3  57                   push edi
// 00723ce4  0fb77c4458           movzx edi, word ptr [esp + eax*2 + 0x58]
// 00723ce9  03d2                 add edx, edx
// 00723ceb  2bd7                 sub edx, edi
// 00723ced  781c                 js 0x723d0b
// 00723cef  83c001               add eax, 1
// 00723cf2  83f80f               cmp eax, 0xf
// 00723cf5  76ed                 jbe 0x723ce4
// 00723cf7  85d2                 test edx, edx
// 00723cf9  8bbc24a0000000       mov edi, dword ptr [esp + 0xa0]
// 00723d00  7e11                 jle 0x723d13
// 00723d02  85ff                 test edi, edi
// 00723d04  7405                 je 0x723d0b
// 00723d06  83f901               cmp ecx, 1
// 00723d09  7408                 je 0x723d13
// 00723d0b  83c8ff               or eax, 0xffffffff
// 00723d0e  e952030000           jmp 0x724065
// 00723d13  66c744247a0000       mov word ptr [esp + 0x7a], 0
// 00723d1a  b802000000           mov eax, 2
// 00723d1f  90                   nop 
// 00723d20  668b4c0478           mov cx, word ptr [esp + eax + 0x78]
// 00723d25  66034c0458           add cx, word ptr [esp + eax + 0x58]
// 00723d2a  83c002               add eax, 2
// 00723d2d  83f81e               cmp eax, 0x1e
// 00723d30  66894c0478           mov word ptr [esp + eax + 0x78], cx
// 00723d35  72e9                 jb 0x723d20
// 00723d37  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00723d3b  33c0                 xor eax, eax
// 00723d3d  398424a8000000       cmp dword ptr [esp + 0xa8], eax
// 00723d44  7631                 jbe 0x723d77
// 00723d46  66837c450000         cmp word ptr [ebp + eax*2], 0
// 00723d4c  741d                 je 0x723d6b
// 00723d4e  0fb7544500           movzx edx, word ptr [ebp + eax*2]
// 00723d53  0fb7545478           movzx edx, word ptr [esp + edx*2 + 0x78]
// 00723d58  66890451             mov word ptr [ecx + edx*2], ax
// 00723d5c  0fb7544500           movzx edx, word ptr [ebp + eax*2]
// 00723d61  668344547801         add word ptr [esp + edx*2 + 0x78], 1
// 00723d67  8d545478             lea edx, [esp + edx*2 + 0x78]
// 00723d6b  83c001               add eax, 1
// 00723d6e  3b8424a8000000       cmp eax, dword ptr [esp + 0xa8]
// 00723d75  72cf                 jb 0x723d46
// 00723d77  8bc7                 mov eax, edi
// 00723d79  83e800               sub eax, 0
// 00723d7c  baffffffff           mov edx, 0xffffffff
// 00723d81  7441                 je 0x723dc4
// 00723d83  83e801               sub eax, 1
// 00723d86  7416                 je 0x723d9e
// 00723d88  c744242c18427e00     mov dword ptr [esp + 0x2c], 0x7e4218
// 00723d90  c744243858427e00     mov dword ptr [esp + 0x38], 0x7e4258
// 00723d98  89542430             mov dword ptr [esp + 0x30], edx
// 00723d9c  eb36                 jmp 0x723dd4
// 00723d9e  b898417e00           mov eax, 0x7e4198
// 00723da3  2d02020000           sub eax, 0x202
// 00723da8  8944242c             mov dword ptr [esp + 0x2c], eax
// 00723dac  b8d8417e00           mov eax, 0x7e41d8
// 00723db1  2d02020000           sub eax, 0x202
// 00723db6  89442438             mov dword ptr [esp + 0x38], eax
// 00723dba  c744243000010000     mov dword ptr [esp + 0x30], 0x100
// 00723dc2  eb10                 jmp 0x723dd4
// 00723dc4  894c2438             mov dword ptr [esp + 0x38], ecx
// 00723dc8  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00723dcc  c744243013000000     mov dword ptr [esp + 0x30], 0x13
// 00723dd4  8b03                 mov eax, dword ptr [ebx]
// 00723dd6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00723dda  89442424             mov dword ptr [esp + 0x24], eax
// 00723dde  b801000000           mov eax, 1
// 00723de3  d3e0                 shl eax, cl
// 00723de5  33ed                 xor ebp, ebp
// 00723de7  33db                 xor ebx, ebx
// 00723de9  83ff01               cmp edi, 1
// 00723dec  8d48ff               lea ecx, [eax - 1]
// 00723def  89742418             mov dword ptr [esp + 0x18], esi
// 00723df3  89542434             mov dword ptr [esp + 0x34], edx
// 00723df7  89442444             mov dword ptr [esp + 0x44], eax
// 00723dfb  89442428             mov dword ptr [esp + 0x28], eax
// 00723dff  894c2440             mov dword ptr [esp + 0x40], ecx
// 00723e03  750b                 jne 0x723e10
// 00723e05  3db0050000           cmp eax, 0x5b0
// 00723e0a  0f8350020000         jae 0x724060
// 00723e10  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00723e14  8954241c             mov dword ptr [esp + 0x1c], edx
// 00723e18  eb06                 jmp 0x723e20
// 00723e1a  8d9b00000000         lea ebx, [ebx]
// 00723e20  8a442418             mov al, byte ptr [esp + 0x18]
// 00723e24  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00723e28  8b542430             mov edx, dword ptr [esp + 0x30]
// 00723e2c  2ac3                 sub al, bl
// 00723e2e  88442411             mov byte ptr [esp + 0x11], al
// 00723e32  0fb706               movzx eax, word ptr [esi]
// 00723e35  0fb7c8               movzx ecx, ax
// 00723e38  3bca                 cmp ecx, edx
// 00723e3a  7d0c                 jge 0x723e48
// 00723e3c  c644241000           mov byte ptr [esp + 0x10], 0
// 00723e41  6689442412           mov word ptr [esp + 0x12], ax
// 00723e46  eb2d                 jmp 0x723e75
// 00723e48  7e1f                 jle 0x723e69
// 00723e4a  0fb706               movzx eax, word ptr [esi]
// 00723e4d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00723e51  03c0                 add eax, eax
// 00723e53  8a1408               mov dl, byte ptr [eax + ecx]
// 00723e56  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00723e5a  88542410             mov byte ptr [esp + 0x10], dl
// 00723e5e  668b1408             mov dx, word ptr [eax + ecx]
// 00723e62  6689542412           mov word ptr [esp + 0x12], dx
// 00723e67  eb0c                 jmp 0x723e75
// 00723e69  c644241060           mov byte ptr [esp + 0x10], 0x60
// 00723e6e  66c74424120000       mov word ptr [esp + 0x12], 0
// 00723e75  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00723e79  8b442444             mov eax, dword ptr [esp + 0x44]
// 00723e7d  2bcb                 sub ecx, ebx
// 00723e7f  ba01000000           mov edx, 1
// 00723e84  d3e2                 shl edx, cl
// 00723e86  8bcb                 mov ecx, ebx
// 00723e88  8bfd                 mov edi, ebp
// 00723e8a  d3ef                 shr edi, cl
// 00723e8c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00723e90  89442450             mov dword ptr [esp + 0x50], eax
// 00723e94  8d349500000000       lea esi, [edx*4]
// 00723e9b  03f8                 add edi, eax
// 00723e9d  8d0cb9               lea ecx, [ecx + edi*4]
// 00723ea0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00723ea4  2bc2                 sub eax, edx
// 00723ea6  2bce                 sub ecx, esi
// 00723ea8  85c0                 test eax, eax
// 00723eaa  8939                 mov dword ptr [ecx], edi
// 00723eac  75f6                 jne 0x723ea4
// 00723eae  8b542418             mov edx, dword ptr [esp + 0x18]
// 00723eb2  8d4aff               lea ecx, [edx - 1]
// 00723eb5  b801000000           mov eax, 1
// 00723eba  d3e0                 shl eax, cl
// 00723ebc  85c5                 test ebp, eax
// 00723ebe  7406                 je 0x723ec6
// 00723ec0  d1e8                 shr eax, 1
// 00723ec2  85c5                 test ebp, eax
// 00723ec4  75fa                 jne 0x723ec0
// 00723ec6  85c0                 test eax, eax
// 00723ec8  740b                 je 0x723ed5
// 00723eca  8d48ff               lea ecx, [eax - 1]
// 00723ecd  23cd                 and ecx, ebp
// 00723ecf  03c8                 add ecx, eax
// 00723ed1  8be9                 mov ebp, ecx
// 00723ed3  eb02                 jmp 0x723ed7
// 00723ed5  33ed                 xor ebp, ebp
// 00723ed7  6681445458ffff       add word ptr [esp + edx*2 + 0x58], 0xffff
// 00723ede  0fb7445458           movzx eax, word ptr [esp + edx*2 + 0x58]
// 00723ee3  8344241c02           add dword ptr [esp + 0x1c], 2
// 00723ee8  6685c0               test ax, ax
// 00723eeb  751d                 jne 0x723f0a
// 00723eed  3b542420             cmp edx, dword ptr [esp + 0x20]
// 00723ef1  0f84dc000000         je 0x723fd3
// 00723ef7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00723efb  0fb702               movzx eax, word ptr [edx]
// 00723efe  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00723f02  0fb71441             movzx edx, word ptr [ecx + eax*2]
// 00723f06  89542418             mov dword ptr [esp + 0x18], edx
// 00723f0a  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00723f0e  0f860cffffff         jbe 0x723e20
// 00723f14  8b742440             mov esi, dword ptr [esp + 0x40]
// 00723f18  23f5                 and esi, ebp
// 00723f1a  3b742434             cmp esi, dword ptr [esp + 0x34]
// 00723f1e  89742448             mov dword ptr [esp + 0x48], esi
// 00723f22  0f84f8feffff         je 0x723e20
// 00723f28  85db                 test ebx, ebx
// 00723f2a  7504                 jne 0x723f30
// 00723f2c  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00723f30  8b442424             mov eax, dword ptr [esp + 0x24]
// 00723f34  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00723f38  8d1488               lea edx, [eax + ecx*4]
// 00723f3b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00723f3f  2bcb                 sub ecx, ebx
// 00723f41  89542424             mov dword ptr [esp + 0x24], edx
// 00723f45  b801000000           mov eax, 1
// 00723f4a  8d140b               lea edx, [ebx + ecx]
// 00723f4d  d3e0                 shl eax, cl
// 00723f4f  3b542420             cmp edx, dword ptr [esp + 0x20]
// 00723f53  7329                 jae 0x723f7e
// 00723f55  8d745458             lea esi, [esp + edx*2 + 0x58]
// 00723f59  8da42400000000       lea esp, [esp]
// 00723f60  0fb73e               movzx edi, word ptr [esi]
// 00723f63  2bc7                 sub eax, edi
// 00723f65  85c0                 test eax, eax
// 00723f67  7e11                 jle 0x723f7a
// 00723f69  83c201               add edx, 1
// 00723f6c  83c101               add ecx, 1
// 00723f6f  83c602               add esi, 2
// 00723f72  03c0                 add eax, eax
// 00723f74  3b542420             cmp edx, dword ptr [esp + 0x20]
// 00723f78  72e6                 jb 0x723f60
// 00723f7a  8b742448             mov esi, dword ptr [esp + 0x48]
// 00723f7e  b801000000           mov eax, 1
// 00723f83  d3e0                 shl eax, cl
// 00723f85  01442428             add dword ptr [esp + 0x28], eax
// 00723f89  83bc24a000000001     cmp dword ptr [esp + 0xa0], 1
// 00723f91  89442444             mov dword ptr [esp + 0x44], eax
// 00723f95  750e                 jne 0x723fa5
// 00723f97  817c2428b0050000     cmp dword ptr [esp + 0x28], 0x5b0
// 00723f9f  0f83bb000000         jae 0x724060
// 00723fa5  8bd6                 mov edx, esi
// 00723fa7  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00723fab  8b06                 mov eax, dword ptr [esi]
// 00723fad  880c90               mov byte ptr [eax + edx*4], cl
// 00723fb0  8b0e                 mov ecx, dword ptr [esi]
// 00723fb2  8a442414             mov al, byte ptr [esp + 0x14]
// 00723fb6  88449101             mov byte ptr [ecx + edx*4 + 1], al
// 00723fba  8b06                 mov eax, dword ptr [esi]
// 00723fbc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00723fc0  2bc8                 sub ecx, eax
// 00723fc2  c1f902               sar ecx, 2
// 00723fc5  89542434             mov dword ptr [esp + 0x34], edx
// 00723fc9  66894c9002           mov word ptr [eax + edx*4 + 2], cx
// 00723fce  e94dfeffff           jmp 0x723e20
// 00723fd3  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00723fd7  8ac2                 mov al, dl
// 00723fd9  2ac3                 sub al, bl
// 00723fdb  85ed                 test ebp, ebp
// 00723fdd  c644241040           mov byte ptr [esp + 0x10], 0x40
// 00723fe2  88442411             mov byte ptr [esp + 0x11], al
// 00723fe6  66c74424120000       mov word ptr [esp + 0x12], 0
// 00723fed  7456                 je 0x724045
// 00723fef  8b742424             mov esi, dword ptr [esp + 0x24]
// 00723ff3  85db                 test ebx, ebx
// 00723ff5  741e                 je 0x724015
// 00723ff7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00723ffb  23cd                 and ecx, ebp
// 00723ffd  3b4c2434             cmp ecx, dword ptr [esp + 0x34]
// 00724001  7412                 je 0x724015
// 00724003  8b442414             mov eax, dword ptr [esp + 0x14]
// 00724007  8b37                 mov esi, dword ptr [edi]
// 00724009  33db                 xor ebx, ebx
// 0072400b  89442418             mov dword ptr [esp + 0x18], eax
// 0072400f  88442411             mov byte ptr [esp + 0x11], al
// 00724013  8bd0                 mov edx, eax
// 00724015  8bcb                 mov ecx, ebx
// 00724017  8bc5                 mov eax, ebp
// 00724019  d3e8                 shr eax, cl
// 0072401b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0072401f  890c86               mov dword ptr [esi + eax*4], ecx
// 00724022  8d4aff               lea ecx, [edx - 1]
// 00724025  b801000000           mov eax, 1
// 0072402a  d3e0                 shl eax, cl
// 0072402c  85c5                 test ebp, eax
// 0072402e  7406                 je 0x724036
// 00724030  d1e8                 shr eax, 1
// 00724032  85c5                 test ebp, eax
// 00724034  75fa                 jne 0x724030
// 00724036  85c0                 test eax, eax
// 00724038  740b                 je 0x724045
// 0072403a  8d48ff               lea ecx, [eax - 1]
// 0072403d  23cd                 and ecx, ebp
// 0072403f  03c8                 add ecx, eax
// 00724041  8be9                 mov ebp, ecx
// 00724043  75ae                 jne 0x723ff3
// 00724045  8b542428             mov edx, dword ptr [esp + 0x28]
// 00724049  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0072404d  8d049500000000       lea eax, [edx*4]
// 00724054  0107                 add dword ptr [edi], eax
// 00724056  8b542414             mov edx, dword ptr [esp + 0x14]
// 0072405a  8911                 mov dword ptr [ecx], edx
// 0072405c  33c0                 xor eax, eax
// 0072405e  eb05                 jmp 0x724065
// 00724060  b801000000           mov eax, 1
// 00724065  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0072406c  5f                   pop edi
// 0072406d  5e                   pop esi
// 0072406e  5d                   pop ebp
// 0072406f  5b                   pop ebx
// 00724070  33cc                 xor ecx, esp
// 00724072  e82faeefff           call 0x61eea6
// 00724077  81c48c000000         add esp, 0x8c
// 0072407d  c3                   ret 
// library zlib-1.2.3/inftrees.c (function _inflate_table)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: zlib-1.2.3 inftrees.c
