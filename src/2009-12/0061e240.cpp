// roc 2009-12 0061e240  unit: seg_00610000  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061e240
//
// 0061e240  81ec20050000         sub esp, 0x520
// 0061e246  53                   push ebx
// 0061e247  55                   push ebp
// 0061e248  56                   push esi
// 0061e249  8bb42438050000       mov esi, dword ptr [esp + 0x538]
// 0061e250  57                   push edi
// 0061e251  bd32000000           mov ebp, 0x32
// 0061e256  85f6                 test esi, esi
// 0061e258  7c05                 jl 0x61e25f
// 0061e25a  83fe04               cmp esi, 4
// 0061e25d  7c1d                 jl 0x61e27c
// 0061e25f  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 0061e266  8b03                 mov eax, dword ptr [ebx]
// 0061e268  896814               mov dword ptr [eax + 0x14], ebp
// 0061e26b  8b0b                 mov ecx, dword ptr [ebx]
// 0061e26d  897118               mov dword ptr [ecx + 0x18], esi
// 0061e270  8b13                 mov edx, dword ptr [ebx]
// 0061e272  8b02                 mov eax, dword ptr [edx]
// 0061e274  53                   push ebx
// 0061e275  ffd0                 call eax
// 0061e277  83c404               add esp, 4
// 0061e27a  eb07                 jmp 0x61e283
// 0061e27c  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 0061e283  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 0061e28b  740d                 je 0x61e29a
// 0061e28d  8bbcb3a0000000       mov edi, dword ptr [ebx + esi*4 + 0xa0]
// 0061e294  897c2410             mov dword ptr [esp + 0x10], edi
// 0061e298  eb0d                 jmp 0x61e2a7
// 0061e29a  8b8cb3b0000000       mov ecx, dword ptr [ebx + esi*4 + 0xb0]
// 0061e2a1  894c2410             mov dword ptr [esp + 0x10], ecx
// 0061e2a5  8bf9                 mov edi, ecx
// 0061e2a7  85ff                 test edi, edi
// 0061e2a9  7514                 jne 0x61e2bf
// 0061e2ab  8b13                 mov edx, dword ptr [ebx]
// 0061e2ad  896a14               mov dword ptr [edx + 0x14], ebp
// 0061e2b0  8b03                 mov eax, dword ptr [ebx]
// 0061e2b2  897018               mov dword ptr [eax + 0x18], esi
// 0061e2b5  8b0b                 mov ecx, dword ptr [ebx]
// 0061e2b7  8b11                 mov edx, dword ptr [ecx]
// 0061e2b9  53                   push ebx
// 0061e2ba  ffd2                 call edx
// 0061e2bc  83c404               add esp, 4
// 0061e2bf  8bb42440050000       mov esi, dword ptr [esp + 0x540]
// 0061e2c6  833e00               cmp dword ptr [esi], 0
// 0061e2c9  7514                 jne 0x61e2df
// 0061e2cb  8b4304               mov eax, dword ptr [ebx + 4]
// 0061e2ce  8b08                 mov ecx, dword ptr [eax]
// 0061e2d0  6890050000           push 0x590
// 0061e2d5  6a01                 push 1
// 0061e2d7  53                   push ebx
// 0061e2d8  ffd1                 call ecx
// 0061e2da  83c40c               add esp, 0xc
// 0061e2dd  8906                 mov dword ptr [esi], eax
// 0061e2df  8b16                 mov edx, dword ptr [esi]
// 0061e2e1  89ba8c000000         mov dword ptr [edx + 0x8c], edi
// 0061e2e7  89542414             mov dword ptr [esp + 0x14], edx
// 0061e2eb  33ff                 xor edi, edi
// 0061e2ed  bd01000000           mov ebp, 1
// 0061e2f2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061e2f6  0fb63428             movzx esi, byte ptr [eax + ebp]
// 0061e2fa  85f6                 test esi, esi
// 0061e2fc  7c0b                 jl 0x61e309
// 0061e2fe  8d0c3e               lea ecx, [esi + edi]
// 0061e301  81f900010000         cmp ecx, 0x100
// 0061e307  7e17                 jle 0x61e320
// 0061e309  8b13                 mov edx, dword ptr [ebx]
// 0061e30b  c7421408000000       mov dword ptr [edx + 0x14], 8
// 0061e312  8b03                 mov eax, dword ptr [ebx]
// 0061e314  8b08                 mov ecx, dword ptr [eax]
// 0061e316  53                   push ebx
// 0061e317  ffd1                 call ecx
// 0061e319  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061e31d  83c404               add esp, 4
// 0061e320  85f6                 test esi, esi
// 0061e322  7415                 je 0x61e339
// 0061e324  56                   push esi
// 0061e325  8d443c2c             lea eax, [esp + edi + 0x2c]
// 0061e329  55                   push ebp
// 0061e32a  50                   push eax
// 0061e32b  e874671d00           call 0x7f4aa4
// 0061e330  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061e334  83c40c               add esp, 0xc
// 0061e337  03fe                 add edi, esi
// 0061e339  45                   inc ebp
// 0061e33a  83fd10               cmp ebp, 0x10
// 0061e33d  7eb3                 jle 0x61e2f2
// 0061e33f  c6443c2800           mov byte ptr [esp + edi + 0x28], 0
// 0061e344  8a442428             mov al, byte ptr [esp + 0x28]
// 0061e348  897c2420             mov dword ptr [esp + 0x20], edi
// 0061e34c  33ff                 xor edi, edi
// 0061e34e  33f6                 xor esi, esi
// 0061e350  0fbee8               movsx ebp, al
// 0061e353  84c0                 test al, al
// 0061e355  745b                 je 0x61e3b2
// 0061e357  8d442428             lea eax, [esp + 0x28]
// 0061e35b  eb03                 jmp 0x61e360
// 0061e35d  8d4900               lea ecx, [ecx]
// 0061e360  0fbe00               movsx eax, byte ptr [eax]
// 0061e363  3bc5                 cmp eax, ebp
// 0061e365  751b                 jne 0x61e382
// 0061e367  eb07                 jmp 0x61e370
// 0061e369  8da42400000000       lea esp, [esp]
// 0061e370  0fbe4c3429           movsx ecx, byte ptr [esp + esi + 0x29]
// 0061e375  89bcb42c010000       mov dword ptr [esp + esi*4 + 0x12c], edi
// 0061e37c  46                   inc esi
// 0061e37d  47                   inc edi
// 0061e37e  3bcd                 cmp ecx, ebp
// 0061e380  74ee                 je 0x61e370
// 0061e382  b801000000           mov eax, 1
// 0061e387  8bcd                 mov ecx, ebp
// 0061e389  d3e0                 shl eax, cl
// 0061e38b  3bf8                 cmp edi, eax
// 0061e38d  7c17                 jl 0x61e3a6
// 0061e38f  8b0b                 mov ecx, dword ptr [ebx]
// 0061e391  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 0061e398  8b13                 mov edx, dword ptr [ebx]
// 0061e39a  8b02                 mov eax, dword ptr [edx]
// 0061e39c  53                   push ebx
// 0061e39d  ffd0                 call eax
// 0061e39f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061e3a3  83c404               add esp, 4
// 0061e3a6  8d443428             lea eax, [esp + esi + 0x28]
// 0061e3aa  03ff                 add edi, edi
// 0061e3ac  45                   inc ebp
// 0061e3ad  803800               cmp byte ptr [eax], 0
// 0061e3b0  75ae                 jne 0x61e360
// 0061e3b2  33c9                 xor ecx, ecx
// 0061e3b4  b801000000           mov eax, 1
// 0061e3b9  8da42400000000       lea esp, [esp]
// 0061e3c0  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061e3c4  803c3000             cmp byte ptr [eax + esi], 0
// 0061e3c8  741f                 je 0x61e3e9
// 0061e3ca  8bf9                 mov edi, ecx
// 0061e3cc  2bbc8c2c010000       sub edi, dword ptr [esp + ecx*4 + 0x12c]
// 0061e3d3  897c8248             mov dword ptr [edx + eax*4 + 0x48], edi
// 0061e3d7  0fb63430             movzx esi, byte ptr [eax + esi]
// 0061e3db  03ce                 add ecx, esi
// 0061e3dd  8bb48c28010000       mov esi, dword ptr [esp + ecx*4 + 0x128]
// 0061e3e4  893482               mov dword ptr [edx + eax*4], esi
// 0061e3e7  eb07                 jmp 0x61e3f0
// 0061e3e9  c70482ffffffff       mov dword ptr [edx + eax*4], 0xffffffff
// 0061e3f0  40                   inc eax
// 0061e3f1  83f810               cmp eax, 0x10
// 0061e3f4  7eca                 jle 0x61e3c0
// 0061e3f6  6800040000           push 0x400
// 0061e3fb  c74244ffff0f00       mov dword ptr [edx + 0x44], 0xfffff
// 0061e402  81c290000000         add edx, 0x90
// 0061e408  6a00                 push 0
// 0061e40a  52                   push edx
// 0061e40b  e894661d00           call 0x7f4aa4
// 0061e410  83c40c               add esp, 0xc
// 0061e413  33db                 xor ebx, ebx
// 0061e415  b907000000           mov ecx, 7
// 0061e41a  8d7b01               lea edi, [ebx + 1]
// 0061e41d  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061e421  eb0d                 jmp 0x61e430
// 0061e423  8da42400000000       lea esp, [esp]
// 0061e42a  8d9b00000000         lea ebx, [ebx]
// 0061e430  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061e434  803c3701             cmp byte ptr [edi + esi], 1
// 0061e438  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0061e440  725d                 jb 0x61e49f
// 0061e442  b801000000           mov eax, 1
// 0061e447  d3e0                 shl eax, cl
// 0061e449  8d6c3311             lea ebp, [ebx + esi + 0x11]
// 0061e44d  89442424             mov dword ptr [esp + 0x24], eax
// 0061e451  8b949c2c010000       mov edx, dword ptr [esp + ebx*4 + 0x12c]
// 0061e458  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061e45c  d3e2                 shl edx, cl
// 0061e45e  85c0                 test eax, eax
// 0061e460  7e2a                 jle 0x61e48c
// 0061e462  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061e466  8db40a90040000       lea esi, [edx + ecx + 0x490]
// 0061e46d  8d949190000000       lea edx, [ecx + edx*4 + 0x90]
// 0061e474  893a                 mov dword ptr [edx], edi
// 0061e476  8a4d00               mov cl, byte ptr [ebp]
// 0061e479  880e                 mov byte ptr [esi], cl
// 0061e47b  48                   dec eax
// 0061e47c  83c204               add edx, 4
// 0061e47f  46                   inc esi
// 0061e480  85c0                 test eax, eax
// 0061e482  7ff0                 jg 0x61e474
// 0061e484  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061e488  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061e48c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061e490  0fb60c37             movzx ecx, byte ptr [edi + esi]
// 0061e494  42                   inc edx
// 0061e495  43                   inc ebx
// 0061e496  45                   inc ebp
// 0061e497  3bd1                 cmp edx, ecx
// 0061e499  8954241c             mov dword ptr [esp + 0x1c], edx
// 0061e49d  7eb2                 jle 0x61e451
// 0061e49f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061e4a3  47                   inc edi
// 0061e4a4  83e901               sub ecx, 1
// 0061e4a7  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061e4ab  7983                 jns 0x61e430
// 0061e4ad  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 0061e4b5  7437                 je 0x61e4ee
// 0061e4b7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0061e4bb  33ff                 xor edi, edi
// 0061e4bd  85db                 test ebx, ebx
// 0061e4bf  7e2d                 jle 0x61e4ee
// 0061e4c1  0fb6443e11           movzx eax, byte ptr [esi + edi + 0x11]
// 0061e4c6  85c0                 test eax, eax
// 0061e4c8  7c05                 jl 0x61e4cf
// 0061e4ca  83f80f               cmp eax, 0xf
// 0061e4cd  7e1a                 jle 0x61e4e9
// 0061e4cf  8b842434050000       mov eax, dword ptr [esp + 0x534]
// 0061e4d6  8b10                 mov edx, dword ptr [eax]
// 0061e4d8  c7421408000000       mov dword ptr [edx + 0x14], 8
// 0061e4df  8b08                 mov ecx, dword ptr [eax]
// 0061e4e1  8b11                 mov edx, dword ptr [ecx]
// 0061e4e3  50                   push eax
// 0061e4e4  ffd2                 call edx
// 0061e4e6  83c404               add esp, 4
// 0061e4e9  47                   inc edi
// 0061e4ea  3bfb                 cmp edi, ebx
// 0061e4ec  7cd3                 jl 0x61e4c1
// 0061e4ee  5f                   pop edi
// 0061e4ef  5e                   pop esi
// 0061e4f0  5d                   pop ebp
// 0061e4f1  5b                   pop ebx
// 0061e4f2  81c420050000         add esp, 0x520
// 0061e4f8  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_make_d_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
