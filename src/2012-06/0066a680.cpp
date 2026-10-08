// from server: 100% by auto
// roc 2012-06 0066a680  unit: seg_00660000  size: 377 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066a680
//
// 0066a680  83ec08               sub esp, 8
// 0066a683  53                   push ebx
// 0066a684  56                   push esi
// 0066a685  8b742414             mov esi, dword ptr [esp + 0x14]
// 0066a689  8b4604               mov eax, dword ptr [esi + 4]
// 0066a68c  8b08                 mov ecx, dword ptr [eax]
// 0066a68e  6a34                 push 0x34
// 0066a690  6a01                 push 1
// 0066a692  56                   push esi
// 0066a693  c644241701           mov byte ptr [esp + 0x17], 1
// 0066a698  ffd1                 call ecx
// 0066a69a  8bd8                 mov ebx, eax
// 0066a69c  899e54010000         mov dword ptr [esi + 0x154], ebx
// 0066a6a2  83c40c               add esp, 0xc
// 0066a6a5  c70390a75900         mov dword ptr [ebx], 0x59a790
// 0066a6ab  c74304c09e6600       mov dword ptr [ebx + 4], 0x669ec0
// 0066a6b2  c6430800             mov byte ptr [ebx + 8], 0
// 0066a6b6  80beb300000000       cmp byte ptr [esi + 0xb3], 0
// 0066a6bd  895c2414             mov dword ptr [esp + 0x14], ebx
// 0066a6c1  7413                 je 0x66a6d6
// 0066a6c3  8b16                 mov edx, dword ptr [esi]
// 0066a6c5  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 0066a6cc  8b06                 mov eax, dword ptr [esi]
// 0066a6ce  8b08                 mov ecx, dword ptr [eax]
// 0066a6d0  56                   push esi
// 0066a6d1  ffd1                 call ecx
// 0066a6d3  83c404               add esp, 4
// 0066a6d6  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0066a6da  8b4644               mov eax, dword ptr [esi + 0x44]
// 0066a6dd  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0066a6e5  0f8ee2000000         jle 0x66a7cd
// 0066a6eb  55                   push ebp
// 0066a6ec  57                   push edi
// 0066a6ed  8d680c               lea ebp, [eax + 0xc]
// 0066a6f0  8d7b0c               lea edi, [ebx + 0xc]
// 0066a6f3  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0066a6f6  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0066a6fc  3bc8                 cmp ecx, eax
// 0066a6fe  752e                 jne 0x66a72e
// 0066a700  8b5500               mov edx, dword ptr [ebp]
// 0066a703  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 0066a709  7523                 jne 0x66a72e
// 0066a70b  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0066a712  740f                 je 0x66a723
// 0066a714  c70700a56600         mov dword ptr [edi], 0x66a500
// 0066a71a  c6430801             mov byte ptr [ebx + 8], 1
// 0066a71e  e990000000           jmp 0x66a7b3
// 0066a723  c707c0a06600         mov dword ptr [edi], 0x66a0c0
// 0066a729  e985000000           jmp 0x66a7b3
// 0066a72e  8d1409               lea edx, [ecx + ecx]
// 0066a731  3bd0                 cmp edx, eax
// 0066a733  754a                 jne 0x66a77f
// 0066a735  8b5d00               mov ebx, dword ptr [ebp]
// 0066a738  3b9edc000000         cmp ebx, dword ptr [esi + 0xdc]
// 0066a73e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066a742  750d                 jne 0x66a751
// 0066a744  c644241300           mov byte ptr [esp + 0x13], 0
// 0066a749  c70710a16600         mov dword ptr [edi], 0x66a110
// 0066a74f  eb62                 jmp 0x66a7b3
// 0066a751  3bd0                 cmp edx, eax
// 0066a753  752a                 jne 0x66a77f
// 0066a755  8b5500               mov edx, dword ptr [ebp]
// 0066a758  03d2                 add edx, edx
// 0066a75a  3b96dc000000         cmp edx, dword ptr [esi + 0xdc]
// 0066a760  751d                 jne 0x66a77f
// 0066a762  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0066a769  740c                 je 0x66a777
// 0066a76b  c70780a26600         mov dword ptr [edi], 0x66a280
// 0066a771  c6430801             mov byte ptr [ebx + 8], 1
// 0066a775  eb3c                 jmp 0x66a7b3
// 0066a777  c707b0a16600         mov dword ptr [edi], 0x66a1b0
// 0066a77d  eb34                 jmp 0x66a7b3
// 0066a77f  99                   cdq 
// 0066a780  f7f9                 idiv ecx
// 0066a782  85d2                 test edx, edx
// 0066a784  751a                 jne 0x66a7a0
// 0066a786  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0066a78c  99                   cdq 
// 0066a78d  f77d00               idiv dword ptr [ebp]
// 0066a790  85d2                 test edx, edx
// 0066a792  750c                 jne 0x66a7a0
// 0066a794  88542413             mov byte ptr [esp + 0x13], dl
// 0066a798  c707509f6600         mov dword ptr [edi], 0x669f50
// 0066a79e  eb13                 jmp 0x66a7b3
// 0066a7a0  8b06                 mov eax, dword ptr [esi]
// 0066a7a2  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 0066a7a9  8b0e                 mov ecx, dword ptr [esi]
// 0066a7ab  8b11                 mov edx, dword ptr [ecx]
// 0066a7ad  56                   push esi
// 0066a7ae  ffd2                 call edx
// 0066a7b0  83c404               add esp, 4
// 0066a7b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066a7b7  40                   inc eax
// 0066a7b8  83c704               add edi, 4
// 0066a7bb  83c554               add ebp, 0x54
// 0066a7be  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 0066a7c1  89442414             mov dword ptr [esp + 0x14], eax
// 0066a7c5  0f8c28ffffff         jl 0x66a6f3
// 0066a7cb  5f                   pop edi
// 0066a7cc  5d                   pop ebp
// 0066a7cd  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0066a7d4  741d                 je 0x66a7f3
// 0066a7d6  807c240b00           cmp byte ptr [esp + 0xb], 0
// 0066a7db  7516                 jne 0x66a7f3
// 0066a7dd  8b06                 mov eax, dword ptr [esi]
// 0066a7df  c7401463000000       mov dword ptr [eax + 0x14], 0x63
// 0066a7e6  8b0e                 mov ecx, dword ptr [esi]
// 0066a7e8  8b5104               mov edx, dword ptr [ecx + 4]
// 0066a7eb  6a00                 push 0
// 0066a7ed  56                   push esi
// 0066a7ee  ffd2                 call edx
// 0066a7f0  83c408               add esp, 8
// 0066a7f3  5e                   pop esi
// 0066a7f4  5b                   pop ebx
// 0066a7f5  83c408               add esp, 8
// 0066a7f8  c3                   ret 
// library jpeg-6b/jcsample.c (function _jinit_downsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
