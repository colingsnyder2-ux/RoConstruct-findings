// roc 2012-06 0065d870  unit: seg_00650000  size: 1110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065d870
//
// 0065d870  83ec3c               sub esp, 0x3c
// 0065d873  53                   push ebx
// 0065d874  55                   push ebp
// 0065d875  56                   push esi
// 0065d876  57                   push edi
// 0065d877  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0065d87b  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0065d87e  8b5104               mov edx, dword ptr [ecx + 4]
// 0065d881  8b5838               mov ebx, dword ptr [eax + 0x38]
// 0065d884  8b29                 mov ebp, dword ptr [ecx]
// 0065d886  4d                   dec ebp
// 0065d887  8d542afb             lea edx, [edx + ebp - 5]
// 0065d88b  89542414             mov dword ptr [esp + 0x14], edx
// 0065d88f  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0065d892  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0065d895  8bd1                 mov edx, ecx
// 0065d897  2b542454             sub edx, dword ptr [esp + 0x54]
// 0065d89b  4e                   dec esi
// 0065d89c  03d6                 add edx, esi
// 0065d89e  8d8c31fffeffff       lea ecx, [ecx + esi - 0x101]
// 0065d8a5  89542438             mov dword ptr [esp + 0x38], edx
// 0065d8a9  8b5028               mov edx, dword ptr [eax + 0x28]
// 0065d8ac  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0065d8b0  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0065d8b3  89542428             mov dword ptr [esp + 0x28], edx
// 0065d8b7  8b5030               mov edx, dword ptr [eax + 0x30]
// 0065d8ba  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0065d8be  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0065d8c1  89542444             mov dword ptr [esp + 0x44], edx
// 0065d8c5  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0065d8c8  894c2440             mov dword ptr [esp + 0x40], ecx
// 0065d8cc  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0065d8cf  89542420             mov dword ptr [esp + 0x20], edx
// 0065d8d3  894c2424             mov dword ptr [esp + 0x24], ecx
// 0065d8d7  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0065d8da  ba01000000           mov edx, 1
// 0065d8df  d3e2                 shl edx, cl
// 0065d8e1  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0065d8e4  89442418             mov dword ptr [esp + 0x18], eax
// 0065d8e8  8b783c               mov edi, dword ptr [eax + 0x3c]
// 0065d8eb  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0065d8f3  8b442454             mov eax, dword ptr [esp + 0x54]
// 0065d8f7  d3e0                 shl eax, cl
// 0065d8f9  4a                   dec edx
// 0065d8fa  896c2410             mov dword ptr [esp + 0x10], ebp
// 0065d8fe  89542448             mov dword ptr [esp + 0x48], edx
// 0065d902  48                   dec eax
// 0065d903  89442430             mov dword ptr [esp + 0x30], eax
// 0065d907  83ff0f               cmp edi, 0xf
// 0065d90a  7320                 jae 0x65d92c
// 0065d90c  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0065d910  45                   inc ebp
// 0065d911  8bcf                 mov ecx, edi
// 0065d913  d3e0                 shl eax, cl
// 0065d915  45                   inc ebp
// 0065d916  83c708               add edi, 8
// 0065d919  8bcf                 mov ecx, edi
// 0065d91b  03d8                 add ebx, eax
// 0065d91d  0fb64500             movzx eax, byte ptr [ebp]
// 0065d921  d3e0                 shl eax, cl
// 0065d923  896c2410             mov dword ptr [esp + 0x10], ebp
// 0065d927  03d8                 add ebx, eax
// 0065d929  83c708               add edi, 8
// 0065d92c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0065d930  23d3                 and edx, ebx
// 0065d932  8b0491               mov eax, dword ptr [ecx + edx*4]
// 0065d935  8bd0                 mov edx, eax
// 0065d937  c1ea08               shr edx, 8
// 0065d93a  0fb6ca               movzx ecx, dl
// 0065d93d  0fb6d0               movzx edx, al
// 0065d940  d3eb                 shr ebx, cl
// 0065d942  2bf9                 sub edi, ecx
// 0065d944  85d2                 test edx, edx
// 0065d946  7441                 je 0x65d989
// 0065d948  f6c210               test dl, 0x10
// 0065d94b  7547                 jne 0x65d994
// 0065d94d  f6c240               test dl, 0x40
// 0065d950  0f85f4020000         jne 0x65dc4a
// 0065d956  b901000000           mov ecx, 1
// 0065d95b  894c2454             mov dword ptr [esp + 0x54], ecx
// 0065d95f  8bca                 mov ecx, edx
// 0065d961  8b542454             mov edx, dword ptr [esp + 0x54]
// 0065d965  d3e2                 shl edx, cl
// 0065d967  c1e810               shr eax, 0x10
// 0065d96a  4a                   dec edx
// 0065d96b  23d3                 and edx, ebx
// 0065d96d  03d0                 add edx, eax
// 0065d96f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0065d973  8b0490               mov eax, dword ptr [eax + edx*4]
// 0065d976  8bc8                 mov ecx, eax
// 0065d978  c1e908               shr ecx, 8
// 0065d97b  0fb6c9               movzx ecx, cl
// 0065d97e  0fb6d0               movzx edx, al
// 0065d981  d3eb                 shr ebx, cl
// 0065d983  2bf9                 sub edi, ecx
// 0065d985  85d2                 test edx, edx
// 0065d987  75bf                 jne 0x65d948
// 0065d989  46                   inc esi
// 0065d98a  c1e810               shr eax, 0x10
// 0065d98d  8806                 mov byte ptr [esi], al
// 0065d98f  e92b020000           jmp 0x65dbbf
// 0065d994  c1e810               shr eax, 0x10
// 0065d997  83e20f               and edx, 0xf
// 0065d99a  89442454             mov dword ptr [esp + 0x54], eax
// 0065d99e  742a                 je 0x65d9ca
// 0065d9a0  3bfa                 cmp edi, edx
// 0065d9a2  7312                 jae 0x65d9b6
// 0065d9a4  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0065d9a8  45                   inc ebp
// 0065d9a9  8bcf                 mov ecx, edi
// 0065d9ab  d3e0                 shl eax, cl
// 0065d9ad  896c2410             mov dword ptr [esp + 0x10], ebp
// 0065d9b1  03d8                 add ebx, eax
// 0065d9b3  83c708               add edi, 8
// 0065d9b6  8bca                 mov ecx, edx
// 0065d9b8  b801000000           mov eax, 1
// 0065d9bd  d3e0                 shl eax, cl
// 0065d9bf  48                   dec eax
// 0065d9c0  23c3                 and eax, ebx
// 0065d9c2  01442454             add dword ptr [esp + 0x54], eax
// 0065d9c6  d3eb                 shr ebx, cl
// 0065d9c8  2bfa                 sub edi, edx
// 0065d9ca  83ff0f               cmp edi, 0xf
// 0065d9cd  7320                 jae 0x65d9ef
// 0065d9cf  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0065d9d3  45                   inc ebp
// 0065d9d4  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0065d9d8  8bcf                 mov ecx, edi
// 0065d9da  45                   inc ebp
// 0065d9db  d3e2                 shl edx, cl
// 0065d9dd  83c708               add edi, 8
// 0065d9e0  8bcf                 mov ecx, edi
// 0065d9e2  d3e0                 shl eax, cl
// 0065d9e4  03da                 add ebx, edx
// 0065d9e6  896c2410             mov dword ptr [esp + 0x10], ebp
// 0065d9ea  03d8                 add ebx, eax
// 0065d9ec  83c708               add edi, 8
// 0065d9ef  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065d9f3  8b542424             mov edx, dword ptr [esp + 0x24]
// 0065d9f7  23cb                 and ecx, ebx
// 0065d9f9  8b148a               mov edx, dword ptr [edx + ecx*4]
// 0065d9fc  8bc2                 mov eax, edx
// 0065d9fe  c1e808               shr eax, 8
// 0065da01  0fb6c8               movzx ecx, al
// 0065da04  0fb6c2               movzx eax, dl
// 0065da07  d3eb                 shr ebx, cl
// 0065da09  2bf9                 sub edi, ecx
// 0065da0b  8954241c             mov dword ptr [esp + 0x1c], edx
// 0065da0f  a810                 test al, 0x10
// 0065da11  7539                 jne 0x65da4c
// 0065da13  a840                 test al, 0x40
// 0065da15  0f8522020000         jne 0x65dc3d
// 0065da1b  8bc8                 mov ecx, eax
// 0065da1d  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 0065da22  ba01000000           mov edx, 1
// 0065da27  d3e2                 shl edx, cl
// 0065da29  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0065da2d  4a                   dec edx
// 0065da2e  23d3                 and edx, ebx
// 0065da30  03d0                 add edx, eax
// 0065da32  8b1491               mov edx, dword ptr [ecx + edx*4]
// 0065da35  8bc2                 mov eax, edx
// 0065da37  c1e808               shr eax, 8
// 0065da3a  0fb6c8               movzx ecx, al
// 0065da3d  0fb6c2               movzx eax, dl
// 0065da40  d3eb                 shr ebx, cl
// 0065da42  2bf9                 sub edi, ecx
// 0065da44  8954241c             mov dword ptr [esp + 0x1c], edx
// 0065da48  a810                 test al, 0x10
// 0065da4a  74c7                 je 0x65da13
// 0065da4c  c1ea10               shr edx, 0x10
// 0065da4f  83e00f               and eax, 0xf
// 0065da52  8954241c             mov dword ptr [esp + 0x1c], edx
// 0065da56  3bf8                 cmp edi, eax
// 0065da58  7328                 jae 0x65da82
// 0065da5a  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0065da5e  45                   inc ebp
// 0065da5f  8bcf                 mov ecx, edi
// 0065da61  d3e2                 shl edx, cl
// 0065da63  83c708               add edi, 8
// 0065da66  896c2410             mov dword ptr [esp + 0x10], ebp
// 0065da6a  03da                 add ebx, edx
// 0065da6c  3bf8                 cmp edi, eax
// 0065da6e  7312                 jae 0x65da82
// 0065da70  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0065da74  45                   inc ebp
// 0065da75  8bcf                 mov ecx, edi
// 0065da77  d3e2                 shl edx, cl
// 0065da79  896c2410             mov dword ptr [esp + 0x10], ebp
// 0065da7d  03da                 add ebx, edx
// 0065da7f  83c708               add edi, 8
// 0065da82  b901000000           mov ecx, 1
// 0065da87  8bd1                 mov edx, ecx
// 0065da89  8bc8                 mov ecx, eax
// 0065da8b  d3e2                 shl edx, cl
// 0065da8d  2bf8                 sub edi, eax
// 0065da8f  4a                   dec edx
// 0065da90  23d3                 and edx, ebx
// 0065da92  8bca                 mov ecx, edx
// 0065da94  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0065da98  03d1                 add edx, ecx
// 0065da9a  8bc8                 mov ecx, eax
// 0065da9c  8bc6                 mov eax, esi
// 0065da9e  2b442438             sub eax, dword ptr [esp + 0x38]
// 0065daa2  d3eb                 shr ebx, cl
// 0065daa4  8954241c             mov dword ptr [esp + 0x1c], edx
// 0065daa8  3bd0                 cmp edx, eax
// 0065daaa  0f862e010000         jbe 0x65dbde
// 0065dab0  8bea                 mov ebp, edx
// 0065dab2  2be8                 sub ebp, eax
// 0065dab4  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 0065dab8  0f8764010000         ja 0x65dc22
// 0065dabe  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0065dac2  8b442444             mov eax, dword ptr [esp + 0x44]
// 0065dac6  49                   dec ecx
// 0065dac7  894c2434             mov dword ptr [esp + 0x34], ecx
// 0065dacb  85c0                 test eax, eax
// 0065dacd  7524                 jne 0x65daf3
// 0065dacf  8b442428             mov eax, dword ptr [esp + 0x28]
// 0065dad3  2bc5                 sub eax, ebp
// 0065dad5  03c8                 add ecx, eax
// 0065dad7  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0065dadb  0f8381000000         jae 0x65db62
// 0065dae1  296c2454             sub dword ptr [esp + 0x54], ebp
// 0065dae5  8a4101               mov al, byte ptr [ecx + 1]
// 0065dae8  41                   inc ecx
// 0065dae9  46                   inc esi
// 0065daea  83ed01               sub ebp, 1
// 0065daed  8806                 mov byte ptr [esi], al
// 0065daef  75f4                 jne 0x65dae5
// 0065daf1  eb6b                 jmp 0x65db5e
// 0065daf3  3bc5                 cmp eax, ebp
// 0065daf5  734d                 jae 0x65db44
// 0065daf7  8bd0                 mov edx, eax
// 0065daf9  2bd5                 sub edx, ebp
// 0065dafb  03542428             add edx, dword ptr [esp + 0x28]
// 0065daff  2be8                 sub ebp, eax
// 0065db01  03ca                 add ecx, edx
// 0065db03  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0065db07  7359                 jae 0x65db62
// 0065db09  296c2454             sub dword ptr [esp + 0x54], ebp
// 0065db0d  8d4900               lea ecx, [ecx]
// 0065db10  8a5101               mov dl, byte ptr [ecx + 1]
// 0065db13  41                   inc ecx
// 0065db14  46                   inc esi
// 0065db15  83ed01               sub ebp, 1
// 0065db18  8816                 mov byte ptr [esi], dl
// 0065db1a  75f4                 jne 0x65db10
// 0065db1c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065db20  3b442454             cmp eax, dword ptr [esp + 0x54]
// 0065db24  733c                 jae 0x65db62
// 0065db26  29442454             sub dword ptr [esp + 0x54], eax
// 0065db2a  8be8                 mov ebp, eax
// 0065db2c  8d642400             lea esp, [esp]
// 0065db30  8a4101               mov al, byte ptr [ecx + 1]
// 0065db33  41                   inc ecx
// 0065db34  46                   inc esi
// 0065db35  83ed01               sub ebp, 1
// 0065db38  8806                 mov byte ptr [esi], al
// 0065db3a  75f4                 jne 0x65db30
// 0065db3c  8bce                 mov ecx, esi
// 0065db3e  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0065db42  eb1e                 jmp 0x65db62
// 0065db44  2bc5                 sub eax, ebp
// 0065db46  03c8                 add ecx, eax
// 0065db48  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0065db4c  7314                 jae 0x65db62
// 0065db4e  296c2454             sub dword ptr [esp + 0x54], ebp
// 0065db52  8a4101               mov al, byte ptr [ecx + 1]
// 0065db55  41                   inc ecx
// 0065db56  46                   inc esi
// 0065db57  83ed01               sub ebp, 1
// 0065db5a  8806                 mov byte ptr [esi], al
// 0065db5c  75f4                 jne 0x65db52
// 0065db5e  8bce                 mov ecx, esi
// 0065db60  2bca                 sub ecx, edx
// 0065db62  8b442454             mov eax, dword ptr [esp + 0x54]
// 0065db66  83f802               cmp eax, 2
// 0065db69  7636                 jbe 0x65dba1
// 0065db6b  8d50fd               lea edx, [eax - 3]
// 0065db6e  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0065db73  f7e2                 mul edx
// 0065db75  8bea                 mov ebp, edx
// 0065db77  d1ed                 shr ebp, 1
// 0065db79  45                   inc ebp
// 0065db7a  8d9b00000000         lea ebx, [ebx]
// 0065db80  0fb64101             movzx eax, byte ptr [ecx + 1]
// 0065db84  836c245403           sub dword ptr [esp + 0x54], 3
// 0065db89  41                   inc ecx
// 0065db8a  46                   inc esi
// 0065db8b  8806                 mov byte ptr [esi], al
// 0065db8d  8a5101               mov dl, byte ptr [ecx + 1]
// 0065db90  41                   inc ecx
// 0065db91  46                   inc esi
// 0065db92  8816                 mov byte ptr [esi], dl
// 0065db94  0fb64101             movzx eax, byte ptr [ecx + 1]
// 0065db98  41                   inc ecx
// 0065db99  46                   inc esi
// 0065db9a  83ed01               sub ebp, 1
// 0065db9d  8806                 mov byte ptr [esi], al
// 0065db9f  75df                 jne 0x65db80
// 0065dba1  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0065dba5  85ed                 test ebp, ebp
// 0065dba7  7412                 je 0x65dbbb
// 0065dba9  8a5101               mov dl, byte ptr [ecx + 1]
// 0065dbac  41                   inc ecx
// 0065dbad  46                   inc esi
// 0065dbae  8816                 mov byte ptr [esi], dl
// 0065dbb0  83fd01               cmp ebp, 1
// 0065dbb3  7606                 jbe 0x65dbbb
// 0065dbb5  8a4101               mov al, byte ptr [ecx + 1]
// 0065dbb8  46                   inc esi
// 0065dbb9  8806                 mov byte ptr [esi], al
// 0065dbbb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0065dbbf  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065dbc3  3bea                 cmp ebp, edx
// 0065dbc5  0f83a9000000         jae 0x65dc74
// 0065dbcb  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0065dbcf  0f839f000000         jae 0x65dc74
// 0065dbd5  8b542448             mov edx, dword ptr [esp + 0x48]
// 0065dbd9  e929fdffff           jmp 0x65d907
// 0065dbde  8bc6                 mov eax, esi
// 0065dbe0  2bc2                 sub eax, edx
// 0065dbe2  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0065dbe6  40                   inc eax
// 0065dbe7  884e01               mov byte ptr [esi + 1], cl
// 0065dbea  8a5001               mov dl, byte ptr [eax + 1]
// 0065dbed  46                   inc esi
// 0065dbee  40                   inc eax
// 0065dbef  46                   inc esi
// 0065dbf0  8816                 mov byte ptr [esi], dl
// 0065dbf2  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0065dbf6  40                   inc eax
// 0065dbf7  46                   inc esi
// 0065dbf8  880e                 mov byte ptr [esi], cl
// 0065dbfa  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0065dbfe  83e903               sub ecx, 3
// 0065dc01  894c2454             mov dword ptr [esp + 0x54], ecx
// 0065dc05  83f902               cmp ecx, 2
// 0065dc08  77d8                 ja 0x65dbe2
// 0065dc0a  85c9                 test ecx, ecx
// 0065dc0c  74b1                 je 0x65dbbf
// 0065dc0e  8a5001               mov dl, byte ptr [eax + 1]
// 0065dc11  40                   inc eax
// 0065dc12  46                   inc esi
// 0065dc13  8816                 mov byte ptr [esi], dl
// 0065dc15  83f901               cmp ecx, 1
// 0065dc18  76a5                 jbe 0x65dbbf
// 0065dc1a  8a4001               mov al, byte ptr [eax + 1]
// 0065dc1d  46                   inc esi
// 0065dc1e  8806                 mov byte ptr [esi], al
// 0065dc20  eb9d                 jmp 0x65dbbf
// 0065dc22  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0065dc26  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065dc2a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0065dc2e  c74118e894b800       mov dword ptr [ecx + 0x18], 0xb894e8
// 0065dc35  c7021b000000         mov dword ptr [edx], 0x1b
// 0065dc3b  eb33                 jmp 0x65dc70
// 0065dc3d  8b442450             mov eax, dword ptr [esp + 0x50]
// 0065dc41  c740180895b800       mov dword ptr [eax + 0x18], 0xb89508
// 0065dc48  eb1c                 jmp 0x65dc66
// 0065dc4a  f6c220               test dl, 0x20
// 0065dc4d  740c                 je 0x65dc5b
// 0065dc4f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065dc53  c7020b000000         mov dword ptr [edx], 0xb
// 0065dc59  eb15                 jmp 0x65dc70
// 0065dc5b  8b442450             mov eax, dword ptr [esp + 0x50]
// 0065dc5f  c740182095b800       mov dword ptr [eax + 0x18], 0xb89520
// 0065dc66  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0065dc6a  c7011b000000         mov dword ptr [ecx], 0x1b
// 0065dc70  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065dc74  8bc7                 mov eax, edi
// 0065dc76  c1e803               shr eax, 3
// 0065dc79  2be8                 sub ebp, eax
// 0065dc7b  03c0                 add eax, eax
// 0065dc7d  03c0                 add eax, eax
// 0065dc7f  03c0                 add eax, eax
// 0065dc81  2bf8                 sub edi, eax
// 0065dc83  8bcf                 mov ecx, edi
// 0065dc85  b801000000           mov eax, 1
// 0065dc8a  d3e0                 shl eax, cl
// 0065dc8c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0065dc90  2bd5                 sub edx, ebp
// 0065dc92  83c205               add edx, 5
// 0065dc95  48                   dec eax
// 0065dc96  23d8                 and ebx, eax
// 0065dc98  8d4501               lea eax, [ebp + 1]
// 0065dc9b  8901                 mov dword ptr [ecx], eax
// 0065dc9d  8d4601               lea eax, [esi + 1]
// 0065dca0  89410c               mov dword ptr [ecx + 0xc], eax
// 0065dca3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065dca7  2bc6                 sub eax, esi
// 0065dca9  0501010000           add eax, 0x101
// 0065dcae  894110               mov dword ptr [ecx + 0x10], eax
// 0065dcb1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0065dcb5  895104               mov dword ptr [ecx + 4], edx
// 0065dcb8  89783c               mov dword ptr [eax + 0x3c], edi
// 0065dcbb  5f                   pop edi
// 0065dcbc  5e                   pop esi
// 0065dcbd  5d                   pop ebp
// 0065dcbe  895838               mov dword ptr [eax + 0x38], ebx
// 0065dcc1  5b                   pop ebx
// 0065dcc2  83c43c               add esp, 0x3c
// 0065dcc5  c3                   ret 
// library zlib-1.2.3/inffast.c (function _inflate_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inffast.c
