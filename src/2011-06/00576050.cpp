// from server: 100% by auto
// roc 2011-06 00576050  unit: seg_00570000  size: 697 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00576050
//
// 00576050  81ec20050000         sub esp, 0x520
// 00576056  53                   push ebx
// 00576057  55                   push ebp
// 00576058  56                   push esi
// 00576059  8bb42438050000       mov esi, dword ptr [esp + 0x538]
// 00576060  57                   push edi
// 00576061  bd32000000           mov ebp, 0x32
// 00576066  85f6                 test esi, esi
// 00576068  7c05                 jl 0x57606f
// 0057606a  83fe04               cmp esi, 4
// 0057606d  7c1d                 jl 0x57608c
// 0057606f  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 00576076  8b03                 mov eax, dword ptr [ebx]
// 00576078  896814               mov dword ptr [eax + 0x14], ebp
// 0057607b  8b0b                 mov ecx, dword ptr [ebx]
// 0057607d  897118               mov dword ptr [ecx + 0x18], esi
// 00576080  8b13                 mov edx, dword ptr [ebx]
// 00576082  8b02                 mov eax, dword ptr [edx]
// 00576084  53                   push ebx
// 00576085  ffd0                 call eax
// 00576087  83c404               add esp, 4
// 0057608a  eb07                 jmp 0x576093
// 0057608c  8b9c2434050000       mov ebx, dword ptr [esp + 0x534]
// 00576093  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 0057609b  740d                 je 0x5760aa
// 0057609d  8bbcb3a0000000       mov edi, dword ptr [ebx + esi*4 + 0xa0]
// 005760a4  897c2410             mov dword ptr [esp + 0x10], edi
// 005760a8  eb0d                 jmp 0x5760b7
// 005760aa  8b8cb3b0000000       mov ecx, dword ptr [ebx + esi*4 + 0xb0]
// 005760b1  894c2410             mov dword ptr [esp + 0x10], ecx
// 005760b5  8bf9                 mov edi, ecx
// 005760b7  85ff                 test edi, edi
// 005760b9  7514                 jne 0x5760cf
// 005760bb  8b13                 mov edx, dword ptr [ebx]
// 005760bd  896a14               mov dword ptr [edx + 0x14], ebp
// 005760c0  8b03                 mov eax, dword ptr [ebx]
// 005760c2  897018               mov dword ptr [eax + 0x18], esi
// 005760c5  8b0b                 mov ecx, dword ptr [ebx]
// 005760c7  8b11                 mov edx, dword ptr [ecx]
// 005760c9  53                   push ebx
// 005760ca  ffd2                 call edx
// 005760cc  83c404               add esp, 4
// 005760cf  8bb42440050000       mov esi, dword ptr [esp + 0x540]
// 005760d6  833e00               cmp dword ptr [esi], 0
// 005760d9  7514                 jne 0x5760ef
// 005760db  8b4304               mov eax, dword ptr [ebx + 4]
// 005760de  8b08                 mov ecx, dword ptr [eax]
// 005760e0  6890050000           push 0x590
// 005760e5  6a01                 push 1
// 005760e7  53                   push ebx
// 005760e8  ffd1                 call ecx
// 005760ea  83c40c               add esp, 0xc
// 005760ed  8906                 mov dword ptr [esi], eax
// 005760ef  8b16                 mov edx, dword ptr [esi]
// 005760f1  89ba8c000000         mov dword ptr [edx + 0x8c], edi
// 005760f7  89542414             mov dword ptr [esp + 0x14], edx
// 005760fb  33ff                 xor edi, edi
// 005760fd  bd01000000           mov ebp, 1
// 00576102  8b442410             mov eax, dword ptr [esp + 0x10]
// 00576106  0fb63428             movzx esi, byte ptr [eax + ebp]
// 0057610a  85f6                 test esi, esi
// 0057610c  7c0b                 jl 0x576119
// 0057610e  8d0c3e               lea ecx, [esi + edi]
// 00576111  81f900010000         cmp ecx, 0x100
// 00576117  7e17                 jle 0x576130
// 00576119  8b13                 mov edx, dword ptr [ebx]
// 0057611b  c7421408000000       mov dword ptr [edx + 0x14], 8
// 00576122  8b03                 mov eax, dword ptr [ebx]
// 00576124  8b08                 mov ecx, dword ptr [eax]
// 00576126  53                   push ebx
// 00576127  ffd1                 call ecx
// 00576129  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057612d  83c404               add esp, 4
// 00576130  85f6                 test esi, esi
// 00576132  7415                 je 0x576149
// 00576134  56                   push esi
// 00576135  8d443c2c             lea eax, [esp + edi + 0x2c]
// 00576139  55                   push ebp
// 0057613a  50                   push eax
// 0057613b  e8a4512900           call 0x80b2e4
// 00576140  8b542420             mov edx, dword ptr [esp + 0x20]
// 00576144  83c40c               add esp, 0xc
// 00576147  03fe                 add edi, esi
// 00576149  45                   inc ebp
// 0057614a  83fd10               cmp ebp, 0x10
// 0057614d  7eb3                 jle 0x576102
// 0057614f  c6443c2800           mov byte ptr [esp + edi + 0x28], 0
// 00576154  8a442428             mov al, byte ptr [esp + 0x28]
// 00576158  897c2420             mov dword ptr [esp + 0x20], edi
// 0057615c  33ff                 xor edi, edi
// 0057615e  33f6                 xor esi, esi
// 00576160  0fbee8               movsx ebp, al
// 00576163  84c0                 test al, al
// 00576165  745b                 je 0x5761c2
// 00576167  8d442428             lea eax, [esp + 0x28]
// 0057616b  eb03                 jmp 0x576170
// 0057616d  8d4900               lea ecx, [ecx]
// 00576170  0fbe00               movsx eax, byte ptr [eax]
// 00576173  3bc5                 cmp eax, ebp
// 00576175  751b                 jne 0x576192
// 00576177  eb07                 jmp 0x576180
// 00576179  8da42400000000       lea esp, [esp]
// 00576180  0fbe4c3429           movsx ecx, byte ptr [esp + esi + 0x29]
// 00576185  89bcb42c010000       mov dword ptr [esp + esi*4 + 0x12c], edi
// 0057618c  46                   inc esi
// 0057618d  47                   inc edi
// 0057618e  3bcd                 cmp ecx, ebp
// 00576190  74ee                 je 0x576180
// 00576192  b801000000           mov eax, 1
// 00576197  8bcd                 mov ecx, ebp
// 00576199  d3e0                 shl eax, cl
// 0057619b  3bf8                 cmp edi, eax
// 0057619d  7c17                 jl 0x5761b6
// 0057619f  8b0b                 mov ecx, dword ptr [ebx]
// 005761a1  c7411408000000       mov dword ptr [ecx + 0x14], 8
// 005761a8  8b13                 mov edx, dword ptr [ebx]
// 005761aa  8b02                 mov eax, dword ptr [edx]
// 005761ac  53                   push ebx
// 005761ad  ffd0                 call eax
// 005761af  8b542418             mov edx, dword ptr [esp + 0x18]
// 005761b3  83c404               add esp, 4
// 005761b6  8d443428             lea eax, [esp + esi + 0x28]
// 005761ba  03ff                 add edi, edi
// 005761bc  45                   inc ebp
// 005761bd  803800               cmp byte ptr [eax], 0
// 005761c0  75ae                 jne 0x576170
// 005761c2  33c9                 xor ecx, ecx
// 005761c4  b801000000           mov eax, 1
// 005761c9  8da42400000000       lea esp, [esp]
// 005761d0  8b742410             mov esi, dword ptr [esp + 0x10]
// 005761d4  803c3000             cmp byte ptr [eax + esi], 0
// 005761d8  741f                 je 0x5761f9
// 005761da  8bf9                 mov edi, ecx
// 005761dc  2bbc8c2c010000       sub edi, dword ptr [esp + ecx*4 + 0x12c]
// 005761e3  897c8248             mov dword ptr [edx + eax*4 + 0x48], edi
// 005761e7  0fb63430             movzx esi, byte ptr [eax + esi]
// 005761eb  03ce                 add ecx, esi
// 005761ed  8bb48c28010000       mov esi, dword ptr [esp + ecx*4 + 0x128]
// 005761f4  893482               mov dword ptr [edx + eax*4], esi
// 005761f7  eb07                 jmp 0x576200
// 005761f9  c70482ffffffff       mov dword ptr [edx + eax*4], 0xffffffff
// 00576200  40                   inc eax
// 00576201  83f810               cmp eax, 0x10
// 00576204  7eca                 jle 0x5761d0
// 00576206  6800040000           push 0x400
// 0057620b  c74244ffff0f00       mov dword ptr [edx + 0x44], 0xfffff
// 00576212  81c290000000         add edx, 0x90
// 00576218  6a00                 push 0
// 0057621a  52                   push edx
// 0057621b  e8c4502900           call 0x80b2e4
// 00576220  83c40c               add esp, 0xc
// 00576223  33db                 xor ebx, ebx
// 00576225  b907000000           mov ecx, 7
// 0057622a  8d7b01               lea edi, [ebx + 1]
// 0057622d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00576231  eb0d                 jmp 0x576240
// 00576233  8da42400000000       lea esp, [esp]
// 0057623a  8d9b00000000         lea ebx, [ebx]
// 00576240  8b742410             mov esi, dword ptr [esp + 0x10]
// 00576244  803c3701             cmp byte ptr [edi + esi], 1
// 00576248  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00576250  725d                 jb 0x5762af
// 00576252  b801000000           mov eax, 1
// 00576257  d3e0                 shl eax, cl
// 00576259  8d6c3311             lea ebp, [ebx + esi + 0x11]
// 0057625d  89442424             mov dword ptr [esp + 0x24], eax
// 00576261  8b949c2c010000       mov edx, dword ptr [esp + ebx*4 + 0x12c]
// 00576268  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057626c  d3e2                 shl edx, cl
// 0057626e  85c0                 test eax, eax
// 00576270  7e2a                 jle 0x57629c
// 00576272  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00576276  8db40a90040000       lea esi, [edx + ecx + 0x490]
// 0057627d  8d949190000000       lea edx, [ecx + edx*4 + 0x90]
// 00576284  893a                 mov dword ptr [edx], edi
// 00576286  8a4d00               mov cl, byte ptr [ebp]
// 00576289  880e                 mov byte ptr [esi], cl
// 0057628b  48                   dec eax
// 0057628c  83c204               add edx, 4
// 0057628f  46                   inc esi
// 00576290  85c0                 test eax, eax
// 00576292  7ff0                 jg 0x576284
// 00576294  8b742410             mov esi, dword ptr [esp + 0x10]
// 00576298  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057629c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005762a0  0fb60c37             movzx ecx, byte ptr [edi + esi]
// 005762a4  42                   inc edx
// 005762a5  43                   inc ebx
// 005762a6  45                   inc ebp
// 005762a7  3bd1                 cmp edx, ecx
// 005762a9  8954241c             mov dword ptr [esp + 0x1c], edx
// 005762ad  7eb2                 jle 0x576261
// 005762af  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005762b3  47                   inc edi
// 005762b4  83e901               sub ecx, 1
// 005762b7  894c2418             mov dword ptr [esp + 0x18], ecx
// 005762bb  7983                 jns 0x576240
// 005762bd  80bc243805000000     cmp byte ptr [esp + 0x538], 0
// 005762c5  7437                 je 0x5762fe
// 005762c7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 005762cb  33ff                 xor edi, edi
// 005762cd  85db                 test ebx, ebx
// 005762cf  7e2d                 jle 0x5762fe
// 005762d1  0fb6443e11           movzx eax, byte ptr [esi + edi + 0x11]
// 005762d6  85c0                 test eax, eax
// 005762d8  7c05                 jl 0x5762df
// 005762da  83f80f               cmp eax, 0xf
// 005762dd  7e1a                 jle 0x5762f9
// 005762df  8b842434050000       mov eax, dword ptr [esp + 0x534]
// 005762e6  8b10                 mov edx, dword ptr [eax]
// 005762e8  c7421408000000       mov dword ptr [edx + 0x14], 8
// 005762ef  8b08                 mov ecx, dword ptr [eax]
// 005762f1  8b11                 mov edx, dword ptr [ecx]
// 005762f3  50                   push eax
// 005762f4  ffd2                 call edx
// 005762f6  83c404               add esp, 4
// 005762f9  47                   inc edi
// 005762fa  3bfb                 cmp edi, ebx
// 005762fc  7cd3                 jl 0x5762d1
// 005762fe  5f                   pop edi
// 005762ff  5e                   pop esi
// 00576300  5d                   pop ebp
// 00576301  5b                   pop ebx
// 00576302  81c420050000         add esp, 0x520
// 00576308  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_make_d_derived_tbl)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
