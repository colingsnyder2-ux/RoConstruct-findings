// roc 2009-12 0061c140  unit: seg_00610000  size: 1110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061c140
//
// 0061c140  83ec3c               sub esp, 0x3c
// 0061c143  53                   push ebx
// 0061c144  55                   push ebp
// 0061c145  56                   push esi
// 0061c146  57                   push edi
// 0061c147  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0061c14b  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0061c14e  8b5104               mov edx, dword ptr [ecx + 4]
// 0061c151  8b5838               mov ebx, dword ptr [eax + 0x38]
// 0061c154  8b29                 mov ebp, dword ptr [ecx]
// 0061c156  4d                   dec ebp
// 0061c157  8d542afb             lea edx, [edx + ebp - 5]
// 0061c15b  89542414             mov dword ptr [esp + 0x14], edx
// 0061c15f  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0061c162  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0061c165  8bd1                 mov edx, ecx
// 0061c167  2b542454             sub edx, dword ptr [esp + 0x54]
// 0061c16b  4e                   dec esi
// 0061c16c  03d6                 add edx, esi
// 0061c16e  8d8c31fffeffff       lea ecx, [ecx + esi - 0x101]
// 0061c175  89542438             mov dword ptr [esp + 0x38], edx
// 0061c179  8b5028               mov edx, dword ptr [eax + 0x28]
// 0061c17c  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0061c180  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0061c183  89542428             mov dword ptr [esp + 0x28], edx
// 0061c187  8b5030               mov edx, dword ptr [eax + 0x30]
// 0061c18a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0061c18e  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0061c191  89542444             mov dword ptr [esp + 0x44], edx
// 0061c195  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0061c198  894c2440             mov dword ptr [esp + 0x40], ecx
// 0061c19c  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0061c19f  89542420             mov dword ptr [esp + 0x20], edx
// 0061c1a3  894c2424             mov dword ptr [esp + 0x24], ecx
// 0061c1a7  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0061c1aa  ba01000000           mov edx, 1
// 0061c1af  d3e2                 shl edx, cl
// 0061c1b1  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0061c1b4  89442418             mov dword ptr [esp + 0x18], eax
// 0061c1b8  8b783c               mov edi, dword ptr [eax + 0x3c]
// 0061c1bb  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0061c1c3  8b442454             mov eax, dword ptr [esp + 0x54]
// 0061c1c7  d3e0                 shl eax, cl
// 0061c1c9  4a                   dec edx
// 0061c1ca  896c2410             mov dword ptr [esp + 0x10], ebp
// 0061c1ce  89542448             mov dword ptr [esp + 0x48], edx
// 0061c1d2  48                   dec eax
// 0061c1d3  89442430             mov dword ptr [esp + 0x30], eax
// 0061c1d7  83ff0f               cmp edi, 0xf
// 0061c1da  7320                 jae 0x61c1fc
// 0061c1dc  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0061c1e0  45                   inc ebp
// 0061c1e1  8bcf                 mov ecx, edi
// 0061c1e3  d3e0                 shl eax, cl
// 0061c1e5  45                   inc ebp
// 0061c1e6  83c708               add edi, 8
// 0061c1e9  8bcf                 mov ecx, edi
// 0061c1eb  03d8                 add ebx, eax
// 0061c1ed  0fb64500             movzx eax, byte ptr [ebp]
// 0061c1f1  d3e0                 shl eax, cl
// 0061c1f3  896c2410             mov dword ptr [esp + 0x10], ebp
// 0061c1f7  03d8                 add ebx, eax
// 0061c1f9  83c708               add edi, 8
// 0061c1fc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061c200  23d3                 and edx, ebx
// 0061c202  8b0491               mov eax, dword ptr [ecx + edx*4]
// 0061c205  8bd0                 mov edx, eax
// 0061c207  c1ea08               shr edx, 8
// 0061c20a  0fb6ca               movzx ecx, dl
// 0061c20d  0fb6d0               movzx edx, al
// 0061c210  d3eb                 shr ebx, cl
// 0061c212  2bf9                 sub edi, ecx
// 0061c214  85d2                 test edx, edx
// 0061c216  7441                 je 0x61c259
// 0061c218  f6c210               test dl, 0x10
// 0061c21b  7547                 jne 0x61c264
// 0061c21d  f6c240               test dl, 0x40
// 0061c220  0f85f4020000         jne 0x61c51a
// 0061c226  b901000000           mov ecx, 1
// 0061c22b  894c2454             mov dword ptr [esp + 0x54], ecx
// 0061c22f  8bca                 mov ecx, edx
// 0061c231  8b542454             mov edx, dword ptr [esp + 0x54]
// 0061c235  d3e2                 shl edx, cl
// 0061c237  c1e810               shr eax, 0x10
// 0061c23a  4a                   dec edx
// 0061c23b  23d3                 and edx, ebx
// 0061c23d  03d0                 add edx, eax
// 0061c23f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061c243  8b0490               mov eax, dword ptr [eax + edx*4]
// 0061c246  8bc8                 mov ecx, eax
// 0061c248  c1e908               shr ecx, 8
// 0061c24b  0fb6c9               movzx ecx, cl
// 0061c24e  0fb6d0               movzx edx, al
// 0061c251  d3eb                 shr ebx, cl
// 0061c253  2bf9                 sub edi, ecx
// 0061c255  85d2                 test edx, edx
// 0061c257  75bf                 jne 0x61c218
// 0061c259  46                   inc esi
// 0061c25a  c1e810               shr eax, 0x10
// 0061c25d  8806                 mov byte ptr [esi], al
// 0061c25f  e92b020000           jmp 0x61c48f
// 0061c264  c1e810               shr eax, 0x10
// 0061c267  83e20f               and edx, 0xf
// 0061c26a  89442454             mov dword ptr [esp + 0x54], eax
// 0061c26e  742a                 je 0x61c29a
// 0061c270  3bfa                 cmp edi, edx
// 0061c272  7312                 jae 0x61c286
// 0061c274  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0061c278  45                   inc ebp
// 0061c279  8bcf                 mov ecx, edi
// 0061c27b  d3e0                 shl eax, cl
// 0061c27d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0061c281  03d8                 add ebx, eax
// 0061c283  83c708               add edi, 8
// 0061c286  8bca                 mov ecx, edx
// 0061c288  b801000000           mov eax, 1
// 0061c28d  d3e0                 shl eax, cl
// 0061c28f  48                   dec eax
// 0061c290  23c3                 and eax, ebx
// 0061c292  01442454             add dword ptr [esp + 0x54], eax
// 0061c296  d3eb                 shr ebx, cl
// 0061c298  2bfa                 sub edi, edx
// 0061c29a  83ff0f               cmp edi, 0xf
// 0061c29d  7320                 jae 0x61c2bf
// 0061c29f  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0061c2a3  45                   inc ebp
// 0061c2a4  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0061c2a8  8bcf                 mov ecx, edi
// 0061c2aa  45                   inc ebp
// 0061c2ab  d3e2                 shl edx, cl
// 0061c2ad  83c708               add edi, 8
// 0061c2b0  8bcf                 mov ecx, edi
// 0061c2b2  d3e0                 shl eax, cl
// 0061c2b4  03da                 add ebx, edx
// 0061c2b6  896c2410             mov dword ptr [esp + 0x10], ebp
// 0061c2ba  03d8                 add ebx, eax
// 0061c2bc  83c708               add edi, 8
// 0061c2bf  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0061c2c3  8b542424             mov edx, dword ptr [esp + 0x24]
// 0061c2c7  23cb                 and ecx, ebx
// 0061c2c9  8b148a               mov edx, dword ptr [edx + ecx*4]
// 0061c2cc  8bc2                 mov eax, edx
// 0061c2ce  c1e808               shr eax, 8
// 0061c2d1  0fb6c8               movzx ecx, al
// 0061c2d4  0fb6c2               movzx eax, dl
// 0061c2d7  d3eb                 shr ebx, cl
// 0061c2d9  2bf9                 sub edi, ecx
// 0061c2db  8954241c             mov dword ptr [esp + 0x1c], edx
// 0061c2df  a810                 test al, 0x10
// 0061c2e1  7539                 jne 0x61c31c
// 0061c2e3  a840                 test al, 0x40
// 0061c2e5  0f8522020000         jne 0x61c50d
// 0061c2eb  8bc8                 mov ecx, eax
// 0061c2ed  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 0061c2f2  ba01000000           mov edx, 1
// 0061c2f7  d3e2                 shl edx, cl
// 0061c2f9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061c2fd  4a                   dec edx
// 0061c2fe  23d3                 and edx, ebx
// 0061c300  03d0                 add edx, eax
// 0061c302  8b1491               mov edx, dword ptr [ecx + edx*4]
// 0061c305  8bc2                 mov eax, edx
// 0061c307  c1e808               shr eax, 8
// 0061c30a  0fb6c8               movzx ecx, al
// 0061c30d  0fb6c2               movzx eax, dl
// 0061c310  d3eb                 shr ebx, cl
// 0061c312  2bf9                 sub edi, ecx
// 0061c314  8954241c             mov dword ptr [esp + 0x1c], edx
// 0061c318  a810                 test al, 0x10
// 0061c31a  74c7                 je 0x61c2e3
// 0061c31c  c1ea10               shr edx, 0x10
// 0061c31f  83e00f               and eax, 0xf
// 0061c322  8954241c             mov dword ptr [esp + 0x1c], edx
// 0061c326  3bf8                 cmp edi, eax
// 0061c328  7328                 jae 0x61c352
// 0061c32a  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0061c32e  45                   inc ebp
// 0061c32f  8bcf                 mov ecx, edi
// 0061c331  d3e2                 shl edx, cl
// 0061c333  83c708               add edi, 8
// 0061c336  896c2410             mov dword ptr [esp + 0x10], ebp
// 0061c33a  03da                 add ebx, edx
// 0061c33c  3bf8                 cmp edi, eax
// 0061c33e  7312                 jae 0x61c352
// 0061c340  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0061c344  45                   inc ebp
// 0061c345  8bcf                 mov ecx, edi
// 0061c347  d3e2                 shl edx, cl
// 0061c349  896c2410             mov dword ptr [esp + 0x10], ebp
// 0061c34d  03da                 add ebx, edx
// 0061c34f  83c708               add edi, 8
// 0061c352  b901000000           mov ecx, 1
// 0061c357  8bd1                 mov edx, ecx
// 0061c359  8bc8                 mov ecx, eax
// 0061c35b  d3e2                 shl edx, cl
// 0061c35d  2bf8                 sub edi, eax
// 0061c35f  4a                   dec edx
// 0061c360  23d3                 and edx, ebx
// 0061c362  8bca                 mov ecx, edx
// 0061c364  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061c368  03d1                 add edx, ecx
// 0061c36a  8bc8                 mov ecx, eax
// 0061c36c  8bc6                 mov eax, esi
// 0061c36e  2b442438             sub eax, dword ptr [esp + 0x38]
// 0061c372  d3eb                 shr ebx, cl
// 0061c374  8954241c             mov dword ptr [esp + 0x1c], edx
// 0061c378  3bd0                 cmp edx, eax
// 0061c37a  0f862e010000         jbe 0x61c4ae
// 0061c380  8bea                 mov ebp, edx
// 0061c382  2be8                 sub ebp, eax
// 0061c384  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 0061c388  0f8764010000         ja 0x61c4f2
// 0061c38e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0061c392  8b442444             mov eax, dword ptr [esp + 0x44]
// 0061c396  49                   dec ecx
// 0061c397  894c2434             mov dword ptr [esp + 0x34], ecx
// 0061c39b  85c0                 test eax, eax
// 0061c39d  7524                 jne 0x61c3c3
// 0061c39f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061c3a3  2bc5                 sub eax, ebp
// 0061c3a5  03c8                 add ecx, eax
// 0061c3a7  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0061c3ab  0f8381000000         jae 0x61c432
// 0061c3b1  296c2454             sub dword ptr [esp + 0x54], ebp
// 0061c3b5  8a4101               mov al, byte ptr [ecx + 1]
// 0061c3b8  41                   inc ecx
// 0061c3b9  46                   inc esi
// 0061c3ba  83ed01               sub ebp, 1
// 0061c3bd  8806                 mov byte ptr [esi], al
// 0061c3bf  75f4                 jne 0x61c3b5
// 0061c3c1  eb6b                 jmp 0x61c42e
// 0061c3c3  3bc5                 cmp eax, ebp
// 0061c3c5  734d                 jae 0x61c414
// 0061c3c7  8bd0                 mov edx, eax
// 0061c3c9  2bd5                 sub edx, ebp
// 0061c3cb  03542428             add edx, dword ptr [esp + 0x28]
// 0061c3cf  2be8                 sub ebp, eax
// 0061c3d1  03ca                 add ecx, edx
// 0061c3d3  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0061c3d7  7359                 jae 0x61c432
// 0061c3d9  296c2454             sub dword ptr [esp + 0x54], ebp
// 0061c3dd  8d4900               lea ecx, [ecx]
// 0061c3e0  8a5101               mov dl, byte ptr [ecx + 1]
// 0061c3e3  41                   inc ecx
// 0061c3e4  46                   inc esi
// 0061c3e5  83ed01               sub ebp, 1
// 0061c3e8  8816                 mov byte ptr [esi], dl
// 0061c3ea  75f4                 jne 0x61c3e0
// 0061c3ec  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061c3f0  3b442454             cmp eax, dword ptr [esp + 0x54]
// 0061c3f4  733c                 jae 0x61c432
// 0061c3f6  29442454             sub dword ptr [esp + 0x54], eax
// 0061c3fa  8be8                 mov ebp, eax
// 0061c3fc  8d642400             lea esp, [esp]
// 0061c400  8a4101               mov al, byte ptr [ecx + 1]
// 0061c403  41                   inc ecx
// 0061c404  46                   inc esi
// 0061c405  83ed01               sub ebp, 1
// 0061c408  8806                 mov byte ptr [esi], al
// 0061c40a  75f4                 jne 0x61c400
// 0061c40c  8bce                 mov ecx, esi
// 0061c40e  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0061c412  eb1e                 jmp 0x61c432
// 0061c414  2bc5                 sub eax, ebp
// 0061c416  03c8                 add ecx, eax
// 0061c418  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0061c41c  7314                 jae 0x61c432
// 0061c41e  296c2454             sub dword ptr [esp + 0x54], ebp
// 0061c422  8a4101               mov al, byte ptr [ecx + 1]
// 0061c425  41                   inc ecx
// 0061c426  46                   inc esi
// 0061c427  83ed01               sub ebp, 1
// 0061c42a  8806                 mov byte ptr [esi], al
// 0061c42c  75f4                 jne 0x61c422
// 0061c42e  8bce                 mov ecx, esi
// 0061c430  2bca                 sub ecx, edx
// 0061c432  8b442454             mov eax, dword ptr [esp + 0x54]
// 0061c436  83f802               cmp eax, 2
// 0061c439  7636                 jbe 0x61c471
// 0061c43b  8d50fd               lea edx, [eax - 3]
// 0061c43e  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0061c443  f7e2                 mul edx
// 0061c445  8bea                 mov ebp, edx
// 0061c447  d1ed                 shr ebp, 1
// 0061c449  45                   inc ebp
// 0061c44a  8d9b00000000         lea ebx, [ebx]
// 0061c450  0fb64101             movzx eax, byte ptr [ecx + 1]
// 0061c454  836c245403           sub dword ptr [esp + 0x54], 3
// 0061c459  41                   inc ecx
// 0061c45a  46                   inc esi
// 0061c45b  8806                 mov byte ptr [esi], al
// 0061c45d  8a5101               mov dl, byte ptr [ecx + 1]
// 0061c460  41                   inc ecx
// 0061c461  46                   inc esi
// 0061c462  8816                 mov byte ptr [esi], dl
// 0061c464  0fb64101             movzx eax, byte ptr [ecx + 1]
// 0061c468  41                   inc ecx
// 0061c469  46                   inc esi
// 0061c46a  83ed01               sub ebp, 1
// 0061c46d  8806                 mov byte ptr [esi], al
// 0061c46f  75df                 jne 0x61c450
// 0061c471  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0061c475  85ed                 test ebp, ebp
// 0061c477  7412                 je 0x61c48b
// 0061c479  8a5101               mov dl, byte ptr [ecx + 1]
// 0061c47c  41                   inc ecx
// 0061c47d  46                   inc esi
// 0061c47e  8816                 mov byte ptr [esi], dl
// 0061c480  83fd01               cmp ebp, 1
// 0061c483  7606                 jbe 0x61c48b
// 0061c485  8a4101               mov al, byte ptr [ecx + 1]
// 0061c488  46                   inc esi
// 0061c489  8806                 mov byte ptr [esi], al
// 0061c48b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0061c48f  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061c493  3bea                 cmp ebp, edx
// 0061c495  0f83a9000000         jae 0x61c544
// 0061c49b  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0061c49f  0f839f000000         jae 0x61c544
// 0061c4a5  8b542448             mov edx, dword ptr [esp + 0x48]
// 0061c4a9  e929fdffff           jmp 0x61c1d7
// 0061c4ae  8bc6                 mov eax, esi
// 0061c4b0  2bc2                 sub eax, edx
// 0061c4b2  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0061c4b6  40                   inc eax
// 0061c4b7  884e01               mov byte ptr [esi + 1], cl
// 0061c4ba  8a5001               mov dl, byte ptr [eax + 1]
// 0061c4bd  46                   inc esi
// 0061c4be  40                   inc eax
// 0061c4bf  46                   inc esi
// 0061c4c0  8816                 mov byte ptr [esi], dl
// 0061c4c2  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0061c4c6  40                   inc eax
// 0061c4c7  46                   inc esi
// 0061c4c8  880e                 mov byte ptr [esi], cl
// 0061c4ca  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0061c4ce  83e903               sub ecx, 3
// 0061c4d1  894c2454             mov dword ptr [esp + 0x54], ecx
// 0061c4d5  83f902               cmp ecx, 2
// 0061c4d8  77d8                 ja 0x61c4b2
// 0061c4da  85c9                 test ecx, ecx
// 0061c4dc  74b1                 je 0x61c48f
// 0061c4de  8a5001               mov dl, byte ptr [eax + 1]
// 0061c4e1  40                   inc eax
// 0061c4e2  46                   inc esi
// 0061c4e3  8816                 mov byte ptr [esi], dl
// 0061c4e5  83f901               cmp ecx, 1
// 0061c4e8  76a5                 jbe 0x61c48f
// 0061c4ea  8a4001               mov al, byte ptr [eax + 1]
// 0061c4ed  46                   inc esi
// 0061c4ee  8806                 mov byte ptr [esi], al
// 0061c4f0  eb9d                 jmp 0x61c48f
// 0061c4f2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0061c4f6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061c4fa  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0061c4fe  c74118088c9c00       mov dword ptr [ecx + 0x18], 0x9c8c08
// 0061c505  c7021b000000         mov dword ptr [edx], 0x1b
// 0061c50b  eb33                 jmp 0x61c540
// 0061c50d  8b442450             mov eax, dword ptr [esp + 0x50]
// 0061c511  c74018288c9c00       mov dword ptr [eax + 0x18], 0x9c8c28
// 0061c518  eb1c                 jmp 0x61c536
// 0061c51a  f6c220               test dl, 0x20
// 0061c51d  740c                 je 0x61c52b
// 0061c51f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061c523  c7020b000000         mov dword ptr [edx], 0xb
// 0061c529  eb15                 jmp 0x61c540
// 0061c52b  8b442450             mov eax, dword ptr [esp + 0x50]
// 0061c52f  c74018408c9c00       mov dword ptr [eax + 0x18], 0x9c8c40
// 0061c536  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061c53a  c7011b000000         mov dword ptr [ecx], 0x1b
// 0061c540  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061c544  8bc7                 mov eax, edi
// 0061c546  c1e803               shr eax, 3
// 0061c549  2be8                 sub ebp, eax
// 0061c54b  03c0                 add eax, eax
// 0061c54d  03c0                 add eax, eax
// 0061c54f  03c0                 add eax, eax
// 0061c551  2bf8                 sub edi, eax
// 0061c553  8bcf                 mov ecx, edi
// 0061c555  b801000000           mov eax, 1
// 0061c55a  d3e0                 shl eax, cl
// 0061c55c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0061c560  2bd5                 sub edx, ebp
// 0061c562  83c205               add edx, 5
// 0061c565  48                   dec eax
// 0061c566  23d8                 and ebx, eax
// 0061c568  8d4501               lea eax, [ebp + 1]
// 0061c56b  8901                 mov dword ptr [ecx], eax
// 0061c56d  8d4601               lea eax, [esi + 1]
// 0061c570  89410c               mov dword ptr [ecx + 0xc], eax
// 0061c573  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0061c577  2bc6                 sub eax, esi
// 0061c579  0501010000           add eax, 0x101
// 0061c57e  894110               mov dword ptr [ecx + 0x10], eax
// 0061c581  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061c585  895104               mov dword ptr [ecx + 4], edx
// 0061c588  89783c               mov dword ptr [eax + 0x3c], edi
// 0061c58b  5f                   pop edi
// 0061c58c  5e                   pop esi
// 0061c58d  5d                   pop ebp
// 0061c58e  895838               mov dword ptr [eax + 0x38], ebx
// 0061c591  5b                   pop ebx
// 0061c592  83c43c               add esp, 0x3c
// 0061c595  c3                   ret 
// library zlib-1.2.3/inffast.c (function _inflate_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inffast.c
