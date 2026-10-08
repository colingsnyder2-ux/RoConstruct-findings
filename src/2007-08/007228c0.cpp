// from server: 100% by auto
// roc 2007-08 007228c0  unit: CXTIconHandle  size: 1262 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007228c0
//
// 007228c0  81ec8c000000         sub esp, 0x8c
// 007228c6  a188518b00           mov eax, dword ptr [0x8b5188]
// 007228cb  33c4                 xor eax, esp
// 007228cd  89842488000000       mov dword ptr [esp + 0x88], eax
// 007228d4  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 007228db  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 007228e2  53                   push ebx
// 007228e3  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 007228ea  55                   push ebp
// 007228eb  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 007228f2  56                   push esi
// 007228f3  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 007228fa  89442418             mov dword ptr [esp + 0x18], eax
// 007228fe  33c0                 xor eax, eax
// 00722900  85f6                 test esi, esi
// 00722902  896c2450             mov dword ptr [esp + 0x50], ebp
// 00722906  895c2438             mov dword ptr [esp + 0x38], ebx
// 0072290a  89542448             mov dword ptr [esp + 0x48], edx
// 0072290e  89442454             mov dword ptr [esp + 0x54], eax
// 00722912  89442458             mov dword ptr [esp + 0x58], eax
// 00722916  8944245c             mov dword ptr [esp + 0x5c], eax
// 0072291a  89442460             mov dword ptr [esp + 0x60], eax
// 0072291e  89442464             mov dword ptr [esp + 0x64], eax
// 00722922  89442468             mov dword ptr [esp + 0x68], eax
// 00722926  8944246c             mov dword ptr [esp + 0x6c], eax
// 0072292a  89442470             mov dword ptr [esp + 0x70], eax
// 0072292e  7616                 jbe 0x722946
// 00722930  0fb74c4500           movzx ecx, word ptr [ebp + eax*2]
// 00722935  6683444c5401         add word ptr [esp + ecx*2 + 0x54], 1
// 0072293b  8d4c4c54             lea ecx, [esp + ecx*2 + 0x54]
// 0072293f  83c001               add eax, 1
// 00722942  3bc6                 cmp eax, esi
// 00722944  72ea                 jb 0x722930
// 00722946  8b02                 mov eax, dword ptr [edx]
// 00722948  89442410             mov dword ptr [esp + 0x10], eax
// 0072294c  b90f000000           mov ecx, 0xf
// 00722951  66837c4c5400         cmp word ptr [esp + ecx*2 + 0x54], 0
// 00722957  7508                 jne 0x722961
// 00722959  83e901               sub ecx, 1
// 0072295c  83f901               cmp ecx, 1
// 0072295f  73f0                 jae 0x722951
// 00722961  3bc1                 cmp eax, ecx
// 00722963  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00722967  7606                 jbe 0x72296f
// 00722969  894c2410             mov dword ptr [esp + 0x10], ecx
// 0072296d  8bc1                 mov eax, ecx
// 0072296f  85c9                 test ecx, ecx
// 00722971  7541                 jne 0x7229b4
// 00722973  66894c240e           mov word ptr [esp + 0xe], cx
// 00722978  8b0b                 mov ecx, dword ptr [ebx]
// 0072297a  c644240c40           mov byte ptr [esp + 0xc], 0x40
// 0072297f  c644240d01           mov byte ptr [esp + 0xd], 1
// 00722984  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00722988  8901                 mov dword ptr [ecx], eax
// 0072298a  830304               add dword ptr [ebx], 4
// 0072298d  8b0b                 mov ecx, dword ptr [ebx]
// 0072298f  5e                   pop esi
// 00722990  8901                 mov dword ptr [ecx], eax
// 00722992  830304               add dword ptr [ebx], 4
// 00722995  5d                   pop ebp
// 00722996  c70201000000         mov dword ptr [edx], 1
// 0072299c  33c0                 xor eax, eax
// 0072299e  5b                   pop ebx
// 0072299f  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007229a6  33cc                 xor ecx, esp
// 007229a8  e871e0f0ff           call 0x630a1e
// 007229ad  81c48c000000         add esp, 0x8c
// 007229b3  c3                   ret 
// 007229b4  be01000000           mov esi, 1
// 007229b9  8da42400000000       lea esp, [esp]
// 007229c0  66837c745400         cmp word ptr [esp + esi*2 + 0x54], 0
// 007229c6  753c                 jne 0x722a04
// 007229c8  66837c745600         cmp word ptr [esp + esi*2 + 0x56], 0
// 007229ce  7522                 jne 0x7229f2
// 007229d0  66837c745800         cmp word ptr [esp + esi*2 + 0x58], 0
// 007229d6  751f                 jne 0x7229f7
// 007229d8  66837c745a00         cmp word ptr [esp + esi*2 + 0x5a], 0
// 007229de  751c                 jne 0x7229fc
// 007229e0  66837c745c00         cmp word ptr [esp + esi*2 + 0x5c], 0
// 007229e6  7519                 jne 0x722a01
// 007229e8  83c605               add esi, 5
// 007229eb  83fe0f               cmp esi, 0xf
// 007229ee  76d0                 jbe 0x7229c0
// 007229f0  eb12                 jmp 0x722a04
// 007229f2  83c601               add esi, 1
// 007229f5  eb0d                 jmp 0x722a04
// 007229f7  83c602               add esi, 2
// 007229fa  eb08                 jmp 0x722a04
// 007229fc  83c603               add esi, 3
// 007229ff  eb03                 jmp 0x722a04
// 00722a01  83c604               add esi, 4
// 00722a04  3bc6                 cmp eax, esi
// 00722a06  7304                 jae 0x722a0c
// 00722a08  89742410             mov dword ptr [esp + 0x10], esi
// 00722a0c  ba01000000           mov edx, 1
// 00722a11  8bc2                 mov eax, edx
// 00722a13  57                   push edi
// 00722a14  0fb77c4458           movzx edi, word ptr [esp + eax*2 + 0x58]
// 00722a19  03d2                 add edx, edx
// 00722a1b  2bd7                 sub edx, edi
// 00722a1d  781c                 js 0x722a3b
// 00722a1f  83c001               add eax, 1
// 00722a22  83f80f               cmp eax, 0xf
// 00722a25  76ed                 jbe 0x722a14
// 00722a27  85d2                 test edx, edx
// 00722a29  8bbc24a0000000       mov edi, dword ptr [esp + 0xa0]
// 00722a30  7e11                 jle 0x722a43
// 00722a32  85ff                 test edi, edi
// 00722a34  7405                 je 0x722a3b
// 00722a36  83f901               cmp ecx, 1
// 00722a39  7408                 je 0x722a43
// 00722a3b  83c8ff               or eax, 0xffffffff
// 00722a3e  e952030000           jmp 0x722d95
// 00722a43  66c744247a0000       mov word ptr [esp + 0x7a], 0
// 00722a4a  b802000000           mov eax, 2
// 00722a4f  90                   nop 
// 00722a50  668b4c0478           mov cx, word ptr [esp + eax + 0x78]
// 00722a55  66034c0458           add cx, word ptr [esp + eax + 0x58]
// 00722a5a  83c002               add eax, 2
// 00722a5d  83f81e               cmp eax, 0x1e
// 00722a60  66894c0478           mov word ptr [esp + eax + 0x78], cx
// 00722a65  72e9                 jb 0x722a50
// 00722a67  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00722a6b  33c0                 xor eax, eax
// 00722a6d  398424a8000000       cmp dword ptr [esp + 0xa8], eax
// 00722a74  7631                 jbe 0x722aa7
// 00722a76  66837c450000         cmp word ptr [ebp + eax*2], 0
// 00722a7c  741d                 je 0x722a9b
// 00722a7e  0fb7544500           movzx edx, word ptr [ebp + eax*2]
// 00722a83  0fb7545478           movzx edx, word ptr [esp + edx*2 + 0x78]
// 00722a88  66890451             mov word ptr [ecx + edx*2], ax
// 00722a8c  0fb7544500           movzx edx, word ptr [ebp + eax*2]
// 00722a91  668344547801         add word ptr [esp + edx*2 + 0x78], 1
// 00722a97  8d545478             lea edx, [esp + edx*2 + 0x78]
// 00722a9b  83c001               add eax, 1
// 00722a9e  3b8424a8000000       cmp eax, dword ptr [esp + 0xa8]
// 00722aa5  72cf                 jb 0x722a76
// 00722aa7  8bc7                 mov eax, edi
// 00722aa9  83e800               sub eax, 0
// 00722aac  baffffffff           mov edx, 0xffffffff
// 00722ab1  7441                 je 0x722af4
// 00722ab3  83e801               sub eax, 1
// 00722ab6  7416                 je 0x722ace
// 00722ab8  c744242cf8257e00     mov dword ptr [esp + 0x2c], 0x7e25f8
// 00722ac0  c744243838267e00     mov dword ptr [esp + 0x38], 0x7e2638
// 00722ac8  89542430             mov dword ptr [esp + 0x30], edx
// 00722acc  eb36                 jmp 0x722b04
// 00722ace  b878257e00           mov eax, 0x7e2578
// 00722ad3  2d02020000           sub eax, 0x202
// 00722ad8  8944242c             mov dword ptr [esp + 0x2c], eax
// 00722adc  b8b8257e00           mov eax, 0x7e25b8
// 00722ae1  2d02020000           sub eax, 0x202
// 00722ae6  89442438             mov dword ptr [esp + 0x38], eax
// 00722aea  c744243000010000     mov dword ptr [esp + 0x30], 0x100
// 00722af2  eb10                 jmp 0x722b04
// 00722af4  894c2438             mov dword ptr [esp + 0x38], ecx
// 00722af8  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00722afc  c744243013000000     mov dword ptr [esp + 0x30], 0x13
// 00722b04  8b03                 mov eax, dword ptr [ebx]
// 00722b06  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00722b0a  89442424             mov dword ptr [esp + 0x24], eax
// 00722b0e  b801000000           mov eax, 1
// 00722b13  d3e0                 shl eax, cl
// 00722b15  33ed                 xor ebp, ebp
// 00722b17  33db                 xor ebx, ebx
// 00722b19  83ff01               cmp edi, 1
// 00722b1c  8d48ff               lea ecx, [eax - 1]
// 00722b1f  89742418             mov dword ptr [esp + 0x18], esi
// 00722b23  89542434             mov dword ptr [esp + 0x34], edx
// 00722b27  89442444             mov dword ptr [esp + 0x44], eax
// 00722b2b  89442428             mov dword ptr [esp + 0x28], eax
// 00722b2f  894c2440             mov dword ptr [esp + 0x40], ecx
// 00722b33  750b                 jne 0x722b40
// 00722b35  3db0050000           cmp eax, 0x5b0
// 00722b3a  0f8350020000         jae 0x722d90
// 00722b40  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00722b44  8954241c             mov dword ptr [esp + 0x1c], edx
// 00722b48  eb06                 jmp 0x722b50
// 00722b4a  8d9b00000000         lea ebx, [ebx]
// 00722b50  8a442418             mov al, byte ptr [esp + 0x18]
// 00722b54  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00722b58  8b542430             mov edx, dword ptr [esp + 0x30]
// 00722b5c  2ac3                 sub al, bl
// 00722b5e  88442411             mov byte ptr [esp + 0x11], al
// 00722b62  0fb706               movzx eax, word ptr [esi]
// 00722b65  0fb7c8               movzx ecx, ax
// 00722b68  3bca                 cmp ecx, edx
// 00722b6a  7d0c                 jge 0x722b78
// 00722b6c  c644241000           mov byte ptr [esp + 0x10], 0
// 00722b71  6689442412           mov word ptr [esp + 0x12], ax
// 00722b76  eb2d                 jmp 0x722ba5
// 00722b78  7e1f                 jle 0x722b99
// 00722b7a  0fb706               movzx eax, word ptr [esi]
// 00722b7d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00722b81  03c0                 add eax, eax
// 00722b83  8a1408               mov dl, byte ptr [eax + ecx]
// 00722b86  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00722b8a  88542410             mov byte ptr [esp + 0x10], dl
// 00722b8e  668b1408             mov dx, word ptr [eax + ecx]
// 00722b92  6689542412           mov word ptr [esp + 0x12], dx
// 00722b97  eb0c                 jmp 0x722ba5
// 00722b99  c644241060           mov byte ptr [esp + 0x10], 0x60
// 00722b9e  66c74424120000       mov word ptr [esp + 0x12], 0
// 00722ba5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00722ba9  8b442444             mov eax, dword ptr [esp + 0x44]
// 00722bad  2bcb                 sub ecx, ebx
// 00722baf  ba01000000           mov edx, 1
// 00722bb4  d3e2                 shl edx, cl
// 00722bb6  8bcb                 mov ecx, ebx
// 00722bb8  8bfd                 mov edi, ebp
// 00722bba  d3ef                 shr edi, cl
// 00722bbc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00722bc0  89442450             mov dword ptr [esp + 0x50], eax
// 00722bc4  8d349500000000       lea esi, [edx*4]
// 00722bcb  03f8                 add edi, eax
// 00722bcd  8d0cb9               lea ecx, [ecx + edi*4]
// 00722bd0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00722bd4  2bc2                 sub eax, edx
// 00722bd6  2bce                 sub ecx, esi
// 00722bd8  85c0                 test eax, eax
// 00722bda  8939                 mov dword ptr [ecx], edi
// 00722bdc  75f6                 jne 0x722bd4
// 00722bde  8b542418             mov edx, dword ptr [esp + 0x18]
// 00722be2  8d4aff               lea ecx, [edx - 1]
// 00722be5  b801000000           mov eax, 1
// 00722bea  d3e0                 shl eax, cl
// 00722bec  85c5                 test ebp, eax
// 00722bee  7406                 je 0x722bf6
// 00722bf0  d1e8                 shr eax, 1
// 00722bf2  85c5                 test ebp, eax
// 00722bf4  75fa                 jne 0x722bf0
// 00722bf6  85c0                 test eax, eax
// 00722bf8  740b                 je 0x722c05
// 00722bfa  8d48ff               lea ecx, [eax - 1]
// 00722bfd  23cd                 and ecx, ebp
// 00722bff  03c8                 add ecx, eax
// 00722c01  8be9                 mov ebp, ecx
// 00722c03  eb02                 jmp 0x722c07
// 00722c05  33ed                 xor ebp, ebp
// 00722c07  6681445458ffff       add word ptr [esp + edx*2 + 0x58], 0xffff
// 00722c0e  0fb7445458           movzx eax, word ptr [esp + edx*2 + 0x58]
// 00722c13  8344241c02           add dword ptr [esp + 0x1c], 2
// 00722c18  6685c0               test ax, ax
// 00722c1b  751d                 jne 0x722c3a
// 00722c1d  3b542420             cmp edx, dword ptr [esp + 0x20]
// 00722c21  0f84dc000000         je 0x722d03
// 00722c27  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00722c2b  0fb702               movzx eax, word ptr [edx]
// 00722c2e  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00722c32  0fb71441             movzx edx, word ptr [ecx + eax*2]
// 00722c36  89542418             mov dword ptr [esp + 0x18], edx
// 00722c3a  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00722c3e  0f860cffffff         jbe 0x722b50
// 00722c44  8b742440             mov esi, dword ptr [esp + 0x40]
// 00722c48  23f5                 and esi, ebp
// 00722c4a  3b742434             cmp esi, dword ptr [esp + 0x34]
// 00722c4e  89742448             mov dword ptr [esp + 0x48], esi
// 00722c52  0f84f8feffff         je 0x722b50
// 00722c58  85db                 test ebx, ebx
// 00722c5a  7504                 jne 0x722c60
// 00722c5c  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00722c60  8b442424             mov eax, dword ptr [esp + 0x24]
// 00722c64  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00722c68  8d1488               lea edx, [eax + ecx*4]
// 00722c6b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00722c6f  2bcb                 sub ecx, ebx
// 00722c71  89542424             mov dword ptr [esp + 0x24], edx
// 00722c75  b801000000           mov eax, 1
// 00722c7a  8d140b               lea edx, [ebx + ecx]
// 00722c7d  d3e0                 shl eax, cl
// 00722c7f  3b542420             cmp edx, dword ptr [esp + 0x20]
// 00722c83  7329                 jae 0x722cae
// 00722c85  8d745458             lea esi, [esp + edx*2 + 0x58]
// 00722c89  8da42400000000       lea esp, [esp]
// 00722c90  0fb73e               movzx edi, word ptr [esi]
// 00722c93  2bc7                 sub eax, edi
// 00722c95  85c0                 test eax, eax
// 00722c97  7e11                 jle 0x722caa
// 00722c99  83c201               add edx, 1
// 00722c9c  83c101               add ecx, 1
// 00722c9f  83c602               add esi, 2
// 00722ca2  03c0                 add eax, eax
// 00722ca4  3b542420             cmp edx, dword ptr [esp + 0x20]
// 00722ca8  72e6                 jb 0x722c90
// 00722caa  8b742448             mov esi, dword ptr [esp + 0x48]
// 00722cae  b801000000           mov eax, 1
// 00722cb3  d3e0                 shl eax, cl
// 00722cb5  01442428             add dword ptr [esp + 0x28], eax
// 00722cb9  83bc24a000000001     cmp dword ptr [esp + 0xa0], 1
// 00722cc1  89442444             mov dword ptr [esp + 0x44], eax
// 00722cc5  750e                 jne 0x722cd5
// 00722cc7  817c2428b0050000     cmp dword ptr [esp + 0x28], 0x5b0
// 00722ccf  0f83bb000000         jae 0x722d90
// 00722cd5  8bd6                 mov edx, esi
// 00722cd7  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00722cdb  8b06                 mov eax, dword ptr [esi]
// 00722cdd  880c90               mov byte ptr [eax + edx*4], cl
// 00722ce0  8b0e                 mov ecx, dword ptr [esi]
// 00722ce2  8a442414             mov al, byte ptr [esp + 0x14]
// 00722ce6  88449101             mov byte ptr [ecx + edx*4 + 1], al
// 00722cea  8b06                 mov eax, dword ptr [esi]
// 00722cec  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00722cf0  2bc8                 sub ecx, eax
// 00722cf2  c1f902               sar ecx, 2
// 00722cf5  89542434             mov dword ptr [esp + 0x34], edx
// 00722cf9  66894c9002           mov word ptr [eax + edx*4 + 2], cx
// 00722cfe  e94dfeffff           jmp 0x722b50
// 00722d03  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00722d07  8ac2                 mov al, dl
// 00722d09  2ac3                 sub al, bl
// 00722d0b  85ed                 test ebp, ebp
// 00722d0d  c644241040           mov byte ptr [esp + 0x10], 0x40
// 00722d12  88442411             mov byte ptr [esp + 0x11], al
// 00722d16  66c74424120000       mov word ptr [esp + 0x12], 0
// 00722d1d  7456                 je 0x722d75
// 00722d1f  8b742424             mov esi, dword ptr [esp + 0x24]
// 00722d23  85db                 test ebx, ebx
// 00722d25  741e                 je 0x722d45
// 00722d27  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00722d2b  23cd                 and ecx, ebp
// 00722d2d  3b4c2434             cmp ecx, dword ptr [esp + 0x34]
// 00722d31  7412                 je 0x722d45
// 00722d33  8b442414             mov eax, dword ptr [esp + 0x14]
// 00722d37  8b37                 mov esi, dword ptr [edi]
// 00722d39  33db                 xor ebx, ebx
// 00722d3b  89442418             mov dword ptr [esp + 0x18], eax
// 00722d3f  88442411             mov byte ptr [esp + 0x11], al
// 00722d43  8bd0                 mov edx, eax
// 00722d45  8bcb                 mov ecx, ebx
// 00722d47  8bc5                 mov eax, ebp
// 00722d49  d3e8                 shr eax, cl
// 00722d4b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00722d4f  890c86               mov dword ptr [esi + eax*4], ecx
// 00722d52  8d4aff               lea ecx, [edx - 1]
// 00722d55  b801000000           mov eax, 1
// 00722d5a  d3e0                 shl eax, cl
// 00722d5c  85c5                 test ebp, eax
// 00722d5e  7406                 je 0x722d66
// 00722d60  d1e8                 shr eax, 1
// 00722d62  85c5                 test ebp, eax
// 00722d64  75fa                 jne 0x722d60
// 00722d66  85c0                 test eax, eax
// 00722d68  740b                 je 0x722d75
// 00722d6a  8d48ff               lea ecx, [eax - 1]
// 00722d6d  23cd                 and ecx, ebp
// 00722d6f  03c8                 add ecx, eax
// 00722d71  8be9                 mov ebp, ecx
// 00722d73  75ae                 jne 0x722d23
// 00722d75  8b542428             mov edx, dword ptr [esp + 0x28]
// 00722d79  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00722d7d  8d049500000000       lea eax, [edx*4]
// 00722d84  0107                 add dword ptr [edi], eax
// 00722d86  8b542414             mov edx, dword ptr [esp + 0x14]
// 00722d8a  8911                 mov dword ptr [ecx], edx
// 00722d8c  33c0                 xor eax, eax
// 00722d8e  eb05                 jmp 0x722d95
// 00722d90  b801000000           mov eax, 1
// 00722d95  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00722d9c  5f                   pop edi
// 00722d9d  5e                   pop esi
// 00722d9e  5d                   pop ebp
// 00722d9f  5b                   pop ebx
// 00722da0  33cc                 xor ecx, esp
// 00722da2  e877dcf0ff           call 0x630a1e
// 00722da7  81c48c000000         add esp, 0x8c
// 00722dad  c3                   ret 
// library zlib-1.2.3/inftrees.c (function _inflate_table)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: zlib-1.2.3 inftrees.c
