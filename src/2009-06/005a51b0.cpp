// from server: 100% by auto
// roc 2009-06 005a51b0  unit: seg_005a0000  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a51b0
//
// 005a51b0  83ec08               sub esp, 8
// 005a51b3  53                   push ebx
// 005a51b4  56                   push esi
// 005a51b5  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a51b9  8b4604               mov eax, dword ptr [esi + 4]
// 005a51bc  8b08                 mov ecx, dword ptr [eax]
// 005a51be  6a34                 push 0x34
// 005a51c0  6a01                 push 1
// 005a51c2  56                   push esi
// 005a51c3  c644241701           mov byte ptr [esp + 0x17], 1
// 005a51c8  ffd1                 call ecx
// 005a51ca  8bd8                 mov ebx, eax
// 005a51cc  899e54010000         mov dword ptr [esi + 0x154], ebx
// 005a51d2  83c40c               add esp, 0xc
// 005a51d5  c703e0496700         mov dword ptr [ebx], 0x6749e0
// 005a51db  c74304f0495a00       mov dword ptr [ebx + 4], 0x5a49f0
// 005a51e2  c6430800             mov byte ptr [ebx + 8], 0
// 005a51e6  80beb300000000       cmp byte ptr [esi + 0xb3], 0
// 005a51ed  895c2414             mov dword ptr [esp + 0x14], ebx
// 005a51f1  7413                 je 0x5a5206
// 005a51f3  8b16                 mov edx, dword ptr [esi]
// 005a51f5  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 005a51fc  8b06                 mov eax, dword ptr [esi]
// 005a51fe  8b08                 mov ecx, dword ptr [eax]
// 005a5200  56                   push esi
// 005a5201  ffd1                 call ecx
// 005a5203  83c404               add esp, 4
// 005a5206  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 005a520a  8b4644               mov eax, dword ptr [esi + 0x44]
// 005a520d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a5215  0f8ee2000000         jle 0x5a52fd
// 005a521b  55                   push ebp
// 005a521c  57                   push edi
// 005a521d  8d680c               lea ebp, [eax + 0xc]
// 005a5220  8d7b0c               lea edi, [ebx + 0xc]
// 005a5223  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005a5226  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 005a522c  3bc8                 cmp ecx, eax
// 005a522e  752e                 jne 0x5a525e
// 005a5230  8b5500               mov edx, dword ptr [ebp]
// 005a5233  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 005a5239  7523                 jne 0x5a525e
// 005a523b  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 005a5242  740f                 je 0x5a5253
// 005a5244  c70730505a00         mov dword ptr [edi], 0x5a5030
// 005a524a  c6430801             mov byte ptr [ebx + 8], 1
// 005a524e  e990000000           jmp 0x5a52e3
// 005a5253  c707f04b5a00         mov dword ptr [edi], 0x5a4bf0
// 005a5259  e985000000           jmp 0x5a52e3
// 005a525e  8d1409               lea edx, [ecx + ecx]
// 005a5261  3bd0                 cmp edx, eax
// 005a5263  754a                 jne 0x5a52af
// 005a5265  8b5d00               mov ebx, dword ptr [ebp]
// 005a5268  3b9edc000000         cmp ebx, dword ptr [esi + 0xdc]
// 005a526e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a5272  750d                 jne 0x5a5281
// 005a5274  c644241300           mov byte ptr [esp + 0x13], 0
// 005a5279  c707404c5a00         mov dword ptr [edi], 0x5a4c40
// 005a527f  eb62                 jmp 0x5a52e3
// 005a5281  3bd0                 cmp edx, eax
// 005a5283  752a                 jne 0x5a52af
// 005a5285  8b5500               mov edx, dword ptr [ebp]
// 005a5288  03d2                 add edx, edx
// 005a528a  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 005a5290  751d                 jne 0x5a52af
// 005a5292  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 005a5299  740c                 je 0x5a52a7
// 005a529b  c707b04d5a00         mov dword ptr [edi], 0x5a4db0
// 005a52a1  c6430801             mov byte ptr [ebx + 8], 1
// 005a52a5  eb3c                 jmp 0x5a52e3
// 005a52a7  c707e04c5a00         mov dword ptr [edi], 0x5a4ce0
// 005a52ad  eb34                 jmp 0x5a52e3
// 005a52af  99                   cdq 
// 005a52b0  f7f9                 idiv ecx
// 005a52b2  85d2                 test edx, edx
// 005a52b4  751a                 jne 0x5a52d0
// 005a52b6  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005a52bc  99                   cdq 
// 005a52bd  f77d00               idiv dword ptr [ebp]
// 005a52c0  85d2                 test edx, edx
// 005a52c2  750c                 jne 0x5a52d0
// 005a52c4  88542413             mov byte ptr [esp + 0x13], dl
// 005a52c8  c707804a5a00         mov dword ptr [edi], 0x5a4a80
// 005a52ce  eb13                 jmp 0x5a52e3
// 005a52d0  8b06                 mov eax, dword ptr [esi]
// 005a52d2  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 005a52d9  8b0e                 mov ecx, dword ptr [esi]
// 005a52db  8b11                 mov edx, dword ptr [ecx]
// 005a52dd  56                   push esi
// 005a52de  ffd2                 call edx
// 005a52e0  83c404               add esp, 4
// 005a52e3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a52e7  40                   inc eax
// 005a52e8  83c704               add edi, 4
// 005a52eb  83c554               add ebp, 0x54
// 005a52ee  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 005a52f1  89442414             mov dword ptr [esp + 0x14], eax
// 005a52f5  0f8c28ffffff         jl 0x5a5223
// 005a52fb  5f                   pop edi
// 005a52fc  5d                   pop ebp
// 005a52fd  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 005a5304  741d                 je 0x5a5323
// 005a5306  807c240b00           cmp byte ptr [esp + 0xb], 0
// 005a530b  7516                 jne 0x5a5323
// 005a530d  8b06                 mov eax, dword ptr [esi]
// 005a530f  c7401463000000       mov dword ptr [eax + 0x14], 0x63
// 005a5316  8b0e                 mov ecx, dword ptr [esi]
// 005a5318  8b5104               mov edx, dword ptr [ecx + 4]
// 005a531b  6a00                 push 0
// 005a531d  56                   push esi
// 005a531e  ffd2                 call edx
// 005a5320  83c408               add esp, 8
// 005a5323  5e                   pop esi
// 005a5324  5b                   pop ebx
// 005a5325  83c408               add esp, 8
// 005a5328  c3                   ret 
// library jpeg-6b/jcsample.c (function _jinit_downsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
