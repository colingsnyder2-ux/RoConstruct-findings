// from server: 100% by auto
// roc 2009-06 0059a110  unit: seg_00590000  size: 1110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059a110
//
// 0059a110  83ec3c               sub esp, 0x3c
// 0059a113  53                   push ebx
// 0059a114  55                   push ebp
// 0059a115  56                   push esi
// 0059a116  57                   push edi
// 0059a117  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0059a11b  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0059a11e  8b5104               mov edx, dword ptr [ecx + 4]
// 0059a121  8b5838               mov ebx, dword ptr [eax + 0x38]
// 0059a124  8b29                 mov ebp, dword ptr [ecx]
// 0059a126  4d                   dec ebp
// 0059a127  8d542afb             lea edx, [edx + ebp - 5]
// 0059a12b  89542414             mov dword ptr [esp + 0x14], edx
// 0059a12f  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0059a132  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0059a135  8bd1                 mov edx, ecx
// 0059a137  2b542454             sub edx, dword ptr [esp + 0x54]
// 0059a13b  4e                   dec esi
// 0059a13c  03d6                 add edx, esi
// 0059a13e  8d8c31fffeffff       lea ecx, [ecx + esi - 0x101]
// 0059a145  89542438             mov dword ptr [esp + 0x38], edx
// 0059a149  8b5028               mov edx, dword ptr [eax + 0x28]
// 0059a14c  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0059a150  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0059a153  89542428             mov dword ptr [esp + 0x28], edx
// 0059a157  8b5030               mov edx, dword ptr [eax + 0x30]
// 0059a15a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0059a15e  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0059a161  89542444             mov dword ptr [esp + 0x44], edx
// 0059a165  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0059a168  894c2440             mov dword ptr [esp + 0x40], ecx
// 0059a16c  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0059a16f  89542420             mov dword ptr [esp + 0x20], edx
// 0059a173  894c2424             mov dword ptr [esp + 0x24], ecx
// 0059a177  8b4854               mov ecx, dword ptr [eax + 0x54]
// 0059a17a  ba01000000           mov edx, 1
// 0059a17f  d3e2                 shl edx, cl
// 0059a181  8b4858               mov ecx, dword ptr [eax + 0x58]
// 0059a184  89442418             mov dword ptr [esp + 0x18], eax
// 0059a188  8b783c               mov edi, dword ptr [eax + 0x3c]
// 0059a18b  c744245401000000     mov dword ptr [esp + 0x54], 1
// 0059a193  8b442454             mov eax, dword ptr [esp + 0x54]
// 0059a197  d3e0                 shl eax, cl
// 0059a199  4a                   dec edx
// 0059a19a  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059a19e  89542448             mov dword ptr [esp + 0x48], edx
// 0059a1a2  48                   dec eax
// 0059a1a3  89442430             mov dword ptr [esp + 0x30], eax
// 0059a1a7  83ff0f               cmp edi, 0xf
// 0059a1aa  7320                 jae 0x59a1cc
// 0059a1ac  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0059a1b0  45                   inc ebp
// 0059a1b1  8bcf                 mov ecx, edi
// 0059a1b3  d3e0                 shl eax, cl
// 0059a1b5  45                   inc ebp
// 0059a1b6  83c708               add edi, 8
// 0059a1b9  8bcf                 mov ecx, edi
// 0059a1bb  03d8                 add ebx, eax
// 0059a1bd  0fb64500             movzx eax, byte ptr [ebp]
// 0059a1c1  d3e0                 shl eax, cl
// 0059a1c3  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059a1c7  03d8                 add ebx, eax
// 0059a1c9  83c708               add edi, 8
// 0059a1cc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059a1d0  23d3                 and edx, ebx
// 0059a1d2  8b0491               mov eax, dword ptr [ecx + edx*4]
// 0059a1d5  8bd0                 mov edx, eax
// 0059a1d7  c1ea08               shr edx, 8
// 0059a1da  0fb6ca               movzx ecx, dl
// 0059a1dd  0fb6d0               movzx edx, al
// 0059a1e0  d3eb                 shr ebx, cl
// 0059a1e2  2bf9                 sub edi, ecx
// 0059a1e4  85d2                 test edx, edx
// 0059a1e6  7441                 je 0x59a229
// 0059a1e8  f6c210               test dl, 0x10
// 0059a1eb  7547                 jne 0x59a234
// 0059a1ed  f6c240               test dl, 0x40
// 0059a1f0  0f85f4020000         jne 0x59a4ea
// 0059a1f6  b901000000           mov ecx, 1
// 0059a1fb  894c2454             mov dword ptr [esp + 0x54], ecx
// 0059a1ff  8bca                 mov ecx, edx
// 0059a201  8b542454             mov edx, dword ptr [esp + 0x54]
// 0059a205  d3e2                 shl edx, cl
// 0059a207  c1e810               shr eax, 0x10
// 0059a20a  4a                   dec edx
// 0059a20b  23d3                 and edx, ebx
// 0059a20d  03d0                 add edx, eax
// 0059a20f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059a213  8b0490               mov eax, dword ptr [eax + edx*4]
// 0059a216  8bc8                 mov ecx, eax
// 0059a218  c1e908               shr ecx, 8
// 0059a21b  0fb6c9               movzx ecx, cl
// 0059a21e  0fb6d0               movzx edx, al
// 0059a221  d3eb                 shr ebx, cl
// 0059a223  2bf9                 sub edi, ecx
// 0059a225  85d2                 test edx, edx
// 0059a227  75bf                 jne 0x59a1e8
// 0059a229  46                   inc esi
// 0059a22a  c1e810               shr eax, 0x10
// 0059a22d  8806                 mov byte ptr [esi], al
// 0059a22f  e92b020000           jmp 0x59a45f
// 0059a234  c1e810               shr eax, 0x10
// 0059a237  83e20f               and edx, 0xf
// 0059a23a  89442454             mov dword ptr [esp + 0x54], eax
// 0059a23e  742a                 je 0x59a26a
// 0059a240  3bfa                 cmp edi, edx
// 0059a242  7312                 jae 0x59a256
// 0059a244  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0059a248  45                   inc ebp
// 0059a249  8bcf                 mov ecx, edi
// 0059a24b  d3e0                 shl eax, cl
// 0059a24d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059a251  03d8                 add ebx, eax
// 0059a253  83c708               add edi, 8
// 0059a256  8bca                 mov ecx, edx
// 0059a258  b801000000           mov eax, 1
// 0059a25d  d3e0                 shl eax, cl
// 0059a25f  48                   dec eax
// 0059a260  23c3                 and eax, ebx
// 0059a262  01442454             add dword ptr [esp + 0x54], eax
// 0059a266  d3eb                 shr ebx, cl
// 0059a268  2bfa                 sub edi, edx
// 0059a26a  83ff0f               cmp edi, 0xf
// 0059a26d  7320                 jae 0x59a28f
// 0059a26f  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0059a273  45                   inc ebp
// 0059a274  0fb64501             movzx eax, byte ptr [ebp + 1]
// 0059a278  8bcf                 mov ecx, edi
// 0059a27a  45                   inc ebp
// 0059a27b  d3e2                 shl edx, cl
// 0059a27d  83c708               add edi, 8
// 0059a280  8bcf                 mov ecx, edi
// 0059a282  d3e0                 shl eax, cl
// 0059a284  03da                 add ebx, edx
// 0059a286  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059a28a  03d8                 add ebx, eax
// 0059a28c  83c708               add edi, 8
// 0059a28f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059a293  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059a297  23cb                 and ecx, ebx
// 0059a299  8b148a               mov edx, dword ptr [edx + ecx*4]
// 0059a29c  8bc2                 mov eax, edx
// 0059a29e  c1e808               shr eax, 8
// 0059a2a1  0fb6c8               movzx ecx, al
// 0059a2a4  0fb6c2               movzx eax, dl
// 0059a2a7  d3eb                 shr ebx, cl
// 0059a2a9  2bf9                 sub edi, ecx
// 0059a2ab  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059a2af  a810                 test al, 0x10
// 0059a2b1  7539                 jne 0x59a2ec
// 0059a2b3  a840                 test al, 0x40
// 0059a2b5  0f8522020000         jne 0x59a4dd
// 0059a2bb  8bc8                 mov ecx, eax
// 0059a2bd  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 0059a2c2  ba01000000           mov edx, 1
// 0059a2c7  d3e2                 shl edx, cl
// 0059a2c9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059a2cd  4a                   dec edx
// 0059a2ce  23d3                 and edx, ebx
// 0059a2d0  03d0                 add edx, eax
// 0059a2d2  8b1491               mov edx, dword ptr [ecx + edx*4]
// 0059a2d5  8bc2                 mov eax, edx
// 0059a2d7  c1e808               shr eax, 8
// 0059a2da  0fb6c8               movzx ecx, al
// 0059a2dd  0fb6c2               movzx eax, dl
// 0059a2e0  d3eb                 shr ebx, cl
// 0059a2e2  2bf9                 sub edi, ecx
// 0059a2e4  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059a2e8  a810                 test al, 0x10
// 0059a2ea  74c7                 je 0x59a2b3
// 0059a2ec  c1ea10               shr edx, 0x10
// 0059a2ef  83e00f               and eax, 0xf
// 0059a2f2  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059a2f6  3bf8                 cmp edi, eax
// 0059a2f8  7328                 jae 0x59a322
// 0059a2fa  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0059a2fe  45                   inc ebp
// 0059a2ff  8bcf                 mov ecx, edi
// 0059a301  d3e2                 shl edx, cl
// 0059a303  83c708               add edi, 8
// 0059a306  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059a30a  03da                 add ebx, edx
// 0059a30c  3bf8                 cmp edi, eax
// 0059a30e  7312                 jae 0x59a322
// 0059a310  0fb65501             movzx edx, byte ptr [ebp + 1]
// 0059a314  45                   inc ebp
// 0059a315  8bcf                 mov ecx, edi
// 0059a317  d3e2                 shl edx, cl
// 0059a319  896c2410             mov dword ptr [esp + 0x10], ebp
// 0059a31d  03da                 add ebx, edx
// 0059a31f  83c708               add edi, 8
// 0059a322  b901000000           mov ecx, 1
// 0059a327  8bd1                 mov edx, ecx
// 0059a329  8bc8                 mov ecx, eax
// 0059a32b  d3e2                 shl edx, cl
// 0059a32d  2bf8                 sub edi, eax
// 0059a32f  4a                   dec edx
// 0059a330  23d3                 and edx, ebx
// 0059a332  8bca                 mov ecx, edx
// 0059a334  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059a338  03d1                 add edx, ecx
// 0059a33a  8bc8                 mov ecx, eax
// 0059a33c  8bc6                 mov eax, esi
// 0059a33e  2b442438             sub eax, dword ptr [esp + 0x38]
// 0059a342  d3eb                 shr ebx, cl
// 0059a344  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059a348  3bd0                 cmp edx, eax
// 0059a34a  0f862e010000         jbe 0x59a47e
// 0059a350  8bea                 mov ebp, edx
// 0059a352  2be8                 sub ebp, eax
// 0059a354  3b6c243c             cmp ebp, dword ptr [esp + 0x3c]
// 0059a358  0f8764010000         ja 0x59a4c2
// 0059a35e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0059a362  8b442444             mov eax, dword ptr [esp + 0x44]
// 0059a366  49                   dec ecx
// 0059a367  894c2434             mov dword ptr [esp + 0x34], ecx
// 0059a36b  85c0                 test eax, eax
// 0059a36d  7524                 jne 0x59a393
// 0059a36f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059a373  2bc5                 sub eax, ebp
// 0059a375  03c8                 add ecx, eax
// 0059a377  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0059a37b  0f8381000000         jae 0x59a402
// 0059a381  296c2454             sub dword ptr [esp + 0x54], ebp
// 0059a385  8a4101               mov al, byte ptr [ecx + 1]
// 0059a388  41                   inc ecx
// 0059a389  46                   inc esi
// 0059a38a  83ed01               sub ebp, 1
// 0059a38d  8806                 mov byte ptr [esi], al
// 0059a38f  75f4                 jne 0x59a385
// 0059a391  eb6b                 jmp 0x59a3fe
// 0059a393  3bc5                 cmp eax, ebp
// 0059a395  734d                 jae 0x59a3e4
// 0059a397  8bd0                 mov edx, eax
// 0059a399  2bd5                 sub edx, ebp
// 0059a39b  03542428             add edx, dword ptr [esp + 0x28]
// 0059a39f  2be8                 sub ebp, eax
// 0059a3a1  03ca                 add ecx, edx
// 0059a3a3  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0059a3a7  7359                 jae 0x59a402
// 0059a3a9  296c2454             sub dword ptr [esp + 0x54], ebp
// 0059a3ad  8d4900               lea ecx, [ecx]
// 0059a3b0  8a5101               mov dl, byte ptr [ecx + 1]
// 0059a3b3  41                   inc ecx
// 0059a3b4  46                   inc esi
// 0059a3b5  83ed01               sub ebp, 1
// 0059a3b8  8816                 mov byte ptr [esi], dl
// 0059a3ba  75f4                 jne 0x59a3b0
// 0059a3bc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059a3c0  3b442454             cmp eax, dword ptr [esp + 0x54]
// 0059a3c4  733c                 jae 0x59a402
// 0059a3c6  29442454             sub dword ptr [esp + 0x54], eax
// 0059a3ca  8be8                 mov ebp, eax
// 0059a3cc  8d642400             lea esp, [esp]
// 0059a3d0  8a4101               mov al, byte ptr [ecx + 1]
// 0059a3d3  41                   inc ecx
// 0059a3d4  46                   inc esi
// 0059a3d5  83ed01               sub ebp, 1
// 0059a3d8  8806                 mov byte ptr [esi], al
// 0059a3da  75f4                 jne 0x59a3d0
// 0059a3dc  8bce                 mov ecx, esi
// 0059a3de  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0059a3e2  eb1e                 jmp 0x59a402
// 0059a3e4  2bc5                 sub eax, ebp
// 0059a3e6  03c8                 add ecx, eax
// 0059a3e8  3b6c2454             cmp ebp, dword ptr [esp + 0x54]
// 0059a3ec  7314                 jae 0x59a402
// 0059a3ee  296c2454             sub dword ptr [esp + 0x54], ebp
// 0059a3f2  8a4101               mov al, byte ptr [ecx + 1]
// 0059a3f5  41                   inc ecx
// 0059a3f6  46                   inc esi
// 0059a3f7  83ed01               sub ebp, 1
// 0059a3fa  8806                 mov byte ptr [esi], al
// 0059a3fc  75f4                 jne 0x59a3f2
// 0059a3fe  8bce                 mov ecx, esi
// 0059a400  2bca                 sub ecx, edx
// 0059a402  8b442454             mov eax, dword ptr [esp + 0x54]
// 0059a406  83f802               cmp eax, 2
// 0059a409  7636                 jbe 0x59a441
// 0059a40b  8d50fd               lea edx, [eax - 3]
// 0059a40e  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0059a413  f7e2                 mul edx
// 0059a415  8bea                 mov ebp, edx
// 0059a417  d1ed                 shr ebp, 1
// 0059a419  45                   inc ebp
// 0059a41a  8d9b00000000         lea ebx, [ebx]
// 0059a420  0fb64101             movzx eax, byte ptr [ecx + 1]
// 0059a424  836c245403           sub dword ptr [esp + 0x54], 3
// 0059a429  41                   inc ecx
// 0059a42a  46                   inc esi
// 0059a42b  8806                 mov byte ptr [esi], al
// 0059a42d  8a5101               mov dl, byte ptr [ecx + 1]
// 0059a430  41                   inc ecx
// 0059a431  46                   inc esi
// 0059a432  8816                 mov byte ptr [esi], dl
// 0059a434  0fb64101             movzx eax, byte ptr [ecx + 1]
// 0059a438  41                   inc ecx
// 0059a439  46                   inc esi
// 0059a43a  83ed01               sub ebp, 1
// 0059a43d  8806                 mov byte ptr [esi], al
// 0059a43f  75df                 jne 0x59a420
// 0059a441  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 0059a445  85ed                 test ebp, ebp
// 0059a447  7412                 je 0x59a45b
// 0059a449  8a5101               mov dl, byte ptr [ecx + 1]
// 0059a44c  41                   inc ecx
// 0059a44d  46                   inc esi
// 0059a44e  8816                 mov byte ptr [esi], dl
// 0059a450  83fd01               cmp ebp, 1
// 0059a453  7606                 jbe 0x59a45b
// 0059a455  8a4101               mov al, byte ptr [ecx + 1]
// 0059a458  46                   inc esi
// 0059a459  8806                 mov byte ptr [esi], al
// 0059a45b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0059a45f  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059a463  3bea                 cmp ebp, edx
// 0059a465  0f83a9000000         jae 0x59a514
// 0059a46b  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0059a46f  0f839f000000         jae 0x59a514
// 0059a475  8b542448             mov edx, dword ptr [esp + 0x48]
// 0059a479  e929fdffff           jmp 0x59a1a7
// 0059a47e  8bc6                 mov eax, esi
// 0059a480  2bc2                 sub eax, edx
// 0059a482  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0059a486  40                   inc eax
// 0059a487  884e01               mov byte ptr [esi + 1], cl
// 0059a48a  8a5001               mov dl, byte ptr [eax + 1]
// 0059a48d  46                   inc esi
// 0059a48e  40                   inc eax
// 0059a48f  46                   inc esi
// 0059a490  8816                 mov byte ptr [esi], dl
// 0059a492  0fb64801             movzx ecx, byte ptr [eax + 1]
// 0059a496  40                   inc eax
// 0059a497  46                   inc esi
// 0059a498  880e                 mov byte ptr [esi], cl
// 0059a49a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0059a49e  83e903               sub ecx, 3
// 0059a4a1  894c2454             mov dword ptr [esp + 0x54], ecx
// 0059a4a5  83f902               cmp ecx, 2
// 0059a4a8  77d8                 ja 0x59a482
// 0059a4aa  85c9                 test ecx, ecx
// 0059a4ac  74b1                 je 0x59a45f
// 0059a4ae  8a5001               mov dl, byte ptr [eax + 1]
// 0059a4b1  40                   inc eax
// 0059a4b2  46                   inc esi
// 0059a4b3  8816                 mov byte ptr [esi], dl
// 0059a4b5  83f901               cmp ecx, 1
// 0059a4b8  76a5                 jbe 0x59a45f
// 0059a4ba  8a4001               mov al, byte ptr [eax + 1]
// 0059a4bd  46                   inc esi
// 0059a4be  8806                 mov byte ptr [esi], al
// 0059a4c0  eb9d                 jmp 0x59a45f
// 0059a4c2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0059a4c6  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059a4ca  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0059a4ce  c74118781d8d00       mov dword ptr [ecx + 0x18], 0x8d1d78
// 0059a4d5  c7021b000000         mov dword ptr [edx], 0x1b
// 0059a4db  eb33                 jmp 0x59a510
// 0059a4dd  8b442450             mov eax, dword ptr [esp + 0x50]
// 0059a4e1  c74018981d8d00       mov dword ptr [eax + 0x18], 0x8d1d98
// 0059a4e8  eb1c                 jmp 0x59a506
// 0059a4ea  f6c220               test dl, 0x20
// 0059a4ed  740c                 je 0x59a4fb
// 0059a4ef  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059a4f3  c7020b000000         mov dword ptr [edx], 0xb
// 0059a4f9  eb15                 jmp 0x59a510
// 0059a4fb  8b442450             mov eax, dword ptr [esp + 0x50]
// 0059a4ff  c74018b01d8d00       mov dword ptr [eax + 0x18], 0x8d1db0
// 0059a506  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059a50a  c7011b000000         mov dword ptr [ecx], 0x1b
// 0059a510  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059a514  8bc7                 mov eax, edi
// 0059a516  c1e803               shr eax, 3
// 0059a519  2be8                 sub ebp, eax
// 0059a51b  03c0                 add eax, eax
// 0059a51d  03c0                 add eax, eax
// 0059a51f  03c0                 add eax, eax
// 0059a521  2bf8                 sub edi, eax
// 0059a523  8bcf                 mov ecx, edi
// 0059a525  b801000000           mov eax, 1
// 0059a52a  d3e0                 shl eax, cl
// 0059a52c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0059a530  2bd5                 sub edx, ebp
// 0059a532  83c205               add edx, 5
// 0059a535  48                   dec eax
// 0059a536  23d8                 and ebx, eax
// 0059a538  8d4501               lea eax, [ebp + 1]
// 0059a53b  8901                 mov dword ptr [ecx], eax
// 0059a53d  8d4601               lea eax, [esi + 1]
// 0059a540  89410c               mov dword ptr [ecx + 0xc], eax
// 0059a543  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059a547  2bc6                 sub eax, esi
// 0059a549  0501010000           add eax, 0x101
// 0059a54e  894110               mov dword ptr [ecx + 0x10], eax
// 0059a551  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059a555  895104               mov dword ptr [ecx + 4], edx
// 0059a558  89783c               mov dword ptr [eax + 0x3c], edi
// 0059a55b  5f                   pop edi
// 0059a55c  5e                   pop esi
// 0059a55d  5d                   pop ebp
// 0059a55e  895838               mov dword ptr [eax + 0x38], ebx
// 0059a561  5b                   pop ebx
// 0059a562  83c43c               add esp, 0x3c
// 0059a565  c3                   ret 
// library zlib-1.2.3/inffast.c (function _inflate_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inffast.c
