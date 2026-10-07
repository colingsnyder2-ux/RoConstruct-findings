// roc 2009-06 0059c210  unit: seg_00590000  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059c210
//
// 0059c210  81ec20050000         sub esp, 0x520
// 0059c216  53                   push ebx
// 0059c217  55                   push ebp
// 0059c218  56                   push esi
// 0059c219  8bb42438050000       mov esi, dword ptr [esp + 0x538]
// 0059c220  57                   push edi
// 0059c221  bd32000000           mov ebp, 0x32
// 0059c226  85f6                 test esi, esi
// 0059c228  7c05                 jl 0x59c22f
// 0059c22a  83fe04               cmp esi, 4
// 0059c22d  7c1d                 jl 0x59c24c
// 0059c22f  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 0059c236  8b03                 mov eax, dword ptr [ebx]
// 0059c238  896814               mov dword ptr [eax + 0x14], ebp
// 0059c23b  8b0b                 mov ecx, dword ptr [ebx]
// 0059c23d  897118               mov dword ptr [ecx + 0x18], esi
// 0059c240  8b13                 mov edx, dword ptr [ebx]
// 0059c242  8b02                 mov eax, dword ptr [edx]
// 0059c244  53                   push ebx
// 0059c245  ffd0                 call eax
// 0059c247  83c404               add esp, 4
// 0059c24a  eb07                 jmp 0x59c253
// 0059c24c  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 0059c253  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 0059c25b  740d                 je 0x59c26a
// 0059c25d  8bbcb3a0000000       mov edi, dword ptr [ebx + esi*4 + 0xa0]
// 0059c264  897c2410             mov dword ptr [esp + 0x10], edi
// 0059c268  eb0d                 jmp 0x59c277
// 0059c26a  8b8cb3b0000000       mov ecx, dword ptr [ebx + esi*4 + 0xb0]
// 0059c271  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059c275  8bf9                 mov edi, ecx
// 0059c277  85ff                 test edi, edi
// 0059c279  7514                 jne 0x59c28f
// 0059c27b  8b13                 mov edx, dword ptr [ebx]
// 0059c27d  896a14               mov dword ptr [edx + 0x14], ebp
// 0059c280  8b03                 mov eax, dword ptr [ebx]
// 0059c282  897018               mov dword ptr [eax + 0x18], esi
// 0059c285  8b0b                 mov ecx, dword ptr [ebx]
// 0059c287  8b11                 mov edx, dword ptr [ecx]
// 0059c289  53                   push ebx
// 0059c28a  ffd2                 call edx
// 0059c28c  83c404               add esp, 4
// 0059c28f  8bb42440050000       mov esi, dword ptr [esp + 0x540]
// 0059c296  833e00               cmp dword ptr [esi], 0
// 0059c299  7514                 jne 0x59c2af
// 0059c29b  8b4304               mov eax, dword ptr [ebx + 4]
// 0059c29e  8b08                 mov ecx, dword ptr [eax]
// 0059c2a0  6890050000           push 0x590
// 0059c2a5  6a01                 push 1
// 0059c2a7  53                   push ebx
// 0059c2a8  ffd1                 call ecx
// 0059c2aa  83c40c               add esp, 0xc
// 0059c2ad  8906                 mov dword ptr [esi], eax
// 0059c2af  8b16                 mov edx, dword ptr [esi]
// 0059c2b1  89ba8c000000         mov dword ptr [edx + 0x8c], edi
// 0059c2b7  89542414             mov dword ptr [esp + 0x14], edx
// 0059c2bb  33ff                 xor edi, edi
// 0059c2bd  bd01000000           mov ebp, 1
// 0059c2c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059c2c6  0fb63428             movzx esi, byte ptr [eax + ebp]
// 0059c2ca  85f6                 test esi, esi
// 0059c2cc  7c0b                 jl 0x59c2d9
// 0059c2ce  8d0c3e               lea ecx, [esi + edi]
// 0059c2d1  81f900010000         cmp ecx, 0x100
// 0059c2d7  7e17                 jle 0x59c2f0
// 0059c2d9  8b13                 mov edx, dword ptr [ebx]
// 0059c2db  c7421408000000       mov dword ptr [edx + 0x14], 8
// 0059c2e2  8b03                 mov eax, dword ptr [ebx]
// 0059c2e4  8b08                 mov ecx, dword ptr [eax]
// 0059c2e6  53                   push ebx
// 0059c2e7  ffd1                 call ecx
// 0059c2e9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059c2ed  83c404               add esp, 4
// 0059c2f0  85f6                 test esi, esi
// 0059c2f2  7415                 je 0x59c309
// 0059c2f4  56                   push esi
// 0059c2f5  8d443c2c             lea eax, [esp + edi + 0x2c]
// 0059c2f9  55                   push ebp
// 0059c2fa  50                   push eax
// 0059c2fb  e874d91700           call 0x719c74
// 0059c300  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059c304  83c40c               add esp, 0xc
// 0059c307  03fe                 add edi, esi
// 0059c309  45                   inc ebp
// 0059c30a  83fd10               cmp ebp, 0x10
// 0059c30d  7eb3                 jle 0x59c2c2
// 0059c30f  c6443c2800           mov byte ptr [esp + edi + 0x28], 0
// 0059c314  8a442428             mov al, byte ptr [esp + 0x28]
// 0059c318  897c2420             mov dword ptr [esp + 0x20], edi
// 0059c31c  33ff                 xor edi, edi
// 0059c31e  33f6                 xor esi, esi
// 0059c320  0fbee8               movsx ebp, al
// 0059c323  84c0                 test al, al
// 0059c325  745b                 je 0x59c382
// 0059c327  8d442428             lea eax, [esp + 0x28]
// 0059c32b  eb03                 jmp 0x59c330
// 0059c32d  8d4900               lea ecx, [ecx]
// 0059c330  0fbe00               movsx eax, byte ptr [eax]
// 0059c333  3bc5                 cmp eax, ebp
// 0059c335  751b                 jne 0x59c352
// 0059c337  eb07                 jmp 0x59c340
// 0059c339  8da42400000000       lea esp, [esp]
// 0059c340  0fbe4c3429           movsx ecx, byte ptr [esp + esi + 0x29]
// 0059c345  89bcb42c010000       mov dword ptr [esp + esi*4 + 0x12c], edi
// 0059c34c  46                   inc esi
// 0059c34d  47                   inc edi
// 0059c34e  3bcd                 cmp ecx, ebp
// 0059c350  74ee                 je 0x59c340
// 0059c352  b801000000           mov eax, 1
// 0059c357  8bcd                 mov ecx, ebp
// 0059c359  d3e0                 shl eax, cl
// 0059c35b  3bf8                 cmp edi, eax
// 0059c35d  7c17                 jl 0x59c376
// 0059c35f  8b0b                 mov ecx, dword ptr [ebx]
// 0059c361  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 0059c368  8b13                 mov edx, dword ptr [ebx]
// 0059c36a  8b02                 mov eax, dword ptr [edx]
// 0059c36c  53                   push ebx
// 0059c36d  ffd0                 call eax
// 0059c36f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059c373  83c404               add esp, 4
// 0059c376  8d443428             lea eax, [esp + esi + 0x28]
// 0059c37a  03ff                 add edi, edi
// 0059c37c  45                   inc ebp
// 0059c37d  803800               cmp byte ptr [eax], 0
// 0059c380  75ae                 jne 0x59c330
// 0059c382  33c9                 xor ecx, ecx
// 0059c384  b801000000           mov eax, 1
// 0059c389  8da42400000000       lea esp, [esp]
// 0059c390  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059c394  803c3000             cmp byte ptr [eax + esi], 0
// 0059c398  741f                 je 0x59c3b9
// 0059c39a  8bf9                 mov edi, ecx
// 0059c39c  2bbc8c2c010000       sub edi, dword ptr [esp + ecx*4 + 0x12c]
// 0059c3a3  897c8248             mov dword ptr [edx + eax*4 + 0x48], edi
// 0059c3a7  0fb63430             movzx esi, byte ptr [eax + esi]
// 0059c3ab  03ce                 add ecx, esi
// 0059c3ad  8bb48c28010000       mov esi, dword ptr [esp + ecx*4 + 0x128]
// 0059c3b4  893482               mov dword ptr [edx + eax*4], esi
// 0059c3b7  eb07                 jmp 0x59c3c0
// 0059c3b9  c70482ffffffff       mov dword ptr [edx + eax*4], 0xffffffff
// 0059c3c0  40                   inc eax
// 0059c3c1  83f810               cmp eax, 0x10
// 0059c3c4  7eca                 jle 0x59c390
// 0059c3c6  6800040000           push 0x400
// 0059c3cb  c74244ffff0f00       mov dword ptr [edx + 0x44], 0xfffff
// 0059c3d2  81c290000000         add edx, 0x90
// 0059c3d8  6a00                 push 0
// 0059c3da  52                   push edx
// 0059c3db  e894d81700           call 0x719c74
// 0059c3e0  83c40c               add esp, 0xc
// 0059c3e3  33db                 xor ebx, ebx
// 0059c3e5  b907000000           mov ecx, 7
// 0059c3ea  8d7b01               lea edi, [ebx + 1]
// 0059c3ed  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059c3f1  eb0d                 jmp 0x59c400
// 0059c3f3  8da42400000000       lea esp, [esp]
// 0059c3fa  8d9b00000000         lea ebx, [ebx]
// 0059c400  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059c404  803c3701             cmp byte ptr [edi + esi], 1
// 0059c408  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0059c410  725d                 jb 0x59c46f
// 0059c412  b801000000           mov eax, 1
// 0059c417  d3e0                 shl eax, cl
// 0059c419  8d6c3311             lea ebp, [ebx + esi + 0x11]
// 0059c41d  89442424             mov dword ptr [esp + 0x24], eax
// 0059c421  8b949c2c010000       mov edx, dword ptr [esp + ebx*4 + 0x12c]
// 0059c428  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059c42c  d3e2                 shl edx, cl
// 0059c42e  85c0                 test eax, eax
// 0059c430  7e2a                 jle 0x59c45c
// 0059c432  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059c436  8db40a90040000       lea esi, [edx + ecx + 0x490]
// 0059c43d  8d949190000000       lea edx, [ecx + edx*4 + 0x90]
// 0059c444  893a                 mov dword ptr [edx], edi
// 0059c446  8a4d00               mov cl, byte ptr [ebp]
// 0059c449  880e                 mov byte ptr [esi], cl
// 0059c44b  48                   dec eax
// 0059c44c  83c204               add edx, 4
// 0059c44f  46                   inc esi
// 0059c450  85c0                 test eax, eax
// 0059c452  7ff0                 jg 0x59c444
// 0059c454  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059c458  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059c45c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059c460  0fb60c37             movzx ecx, byte ptr [edi + esi]
// 0059c464  42                   inc edx
// 0059c465  43                   inc ebx
// 0059c466  45                   inc ebp
// 0059c467  3bd1                 cmp edx, ecx
// 0059c469  8954241c             mov dword ptr [esp + 0x1c], edx
// 0059c46d  7eb2                 jle 0x59c421
// 0059c46f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059c473  47                   inc edi
// 0059c474  83e901               sub ecx, 1
// 0059c477  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059c47b  7983                 jns 0x59c400
// 0059c47d  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 0059c485  7437                 je 0x59c4be
// 0059c487  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0059c48b  33ff                 xor edi, edi
// 0059c48d  85db                 test ebx, ebx
// 0059c48f  7e2d                 jle 0x59c4be
// 0059c491  0fb6443e11           movzx eax, byte ptr [esi + edi + 0x11]
// 0059c496  85c0                 test eax, eax
// 0059c498  7c05                 jl 0x59c49f
// 0059c49a  83f80f               cmp eax, 0xf
// 0059c49d  7e1a                 jle 0x59c4b9
// 0059c49f  8b842434050000       mov eax, dword ptr [esp + 0x534]
// 0059c4a6  8b10                 mov edx, dword ptr [eax]
// 0059c4a8  c7421408000000       mov dword ptr [edx + 0x14], 8
// 0059c4af  8b08                 mov ecx, dword ptr [eax]
// 0059c4b1  8b11                 mov edx, dword ptr [ecx]
// 0059c4b3  50                   push eax
// 0059c4b4  ffd2                 call edx
// 0059c4b6  83c404               add esp, 4
// 0059c4b9  47                   inc edi
// 0059c4ba  3bfb                 cmp edi, ebx
// 0059c4bc  7cd3                 jl 0x59c491
// 0059c4be  5f                   pop edi
// 0059c4bf  5e                   pop esi
// 0059c4c0  5d                   pop ebp
// 0059c4c1  5b                   pop ebx
// 0059c4c2  81c420050000         add esp, 0x520
// 0059c4c8  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_make_d_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
